/* tlog10 -- test file for mpc_log10.

Copyright (C) 2012 INRIA

This file is part of GNU MPC.

GNU MPC is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

GNU MPC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this program. If not, see http://www.gnu.org/licenses/ .
*/

#include <stdlib.h>
#include "mpc-tests.h"

int
main (void)
{
  DECL_FUNC (CC, f, mpc_log10);

  test_start ();

  data_check (f, "log10.dat");
  tgeneric (f, 2, 512, 7, 128);

  test_end ();

  return 0;
}
