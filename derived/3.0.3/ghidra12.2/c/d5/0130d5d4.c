
/* WARNING: Removing unreachable block (ram,0x0130d648) */
/* WARNING: Removing unreachable block (ram,0x0130d5ec) */
/* WARNING: Removing unreachable block (ram,0x0130d600) */
/* WARNING: Removing unreachable block (ram,0x0130d65c) */

bool FUN_0130d5d4(short *param_1,short *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    if ((char)param_1[2] != (char)param_2[2]) {
      return true;
    }
    if (((param_1[3] == param_2[3]) && (param_1[4] == param_2[4])) &&
       ((char)param_1[5] == (char)param_2[5])) {
      return (char)param_1[6] != (char)param_2[6];
    }
  }
  return true;
}

