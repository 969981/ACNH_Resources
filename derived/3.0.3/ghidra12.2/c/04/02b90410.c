
/* WARNING: Removing unreachable block (ram,0x02b904b0) */
/* WARNING: Removing unreachable block (ram,0x02b90468) */
/* WARNING: Removing unreachable block (ram,0x02b90444) */
/* WARNING: Removing unreachable block (ram,0x02b9048c) */
/* WARNING: Removing unreachable block (ram,0x02b904d4) */

undefined8 FUN_02b90410(uint param_1)

{
  int iVar1;
  
  if (0xf < param_1) {
    param_1 = 0;
  }
  iVar1 = (&DAT_05636e58)[(int)param_1];
  if ((((DAT_05641c34 == iVar1) || (DAT_05641c38 == iVar1)) || (DAT_05641c3c == iVar1)) ||
     ((DAT_05641c40 == iVar1 || (DAT_05641c44 == iVar1)))) {
    return 1;
  }
  return 0;
}

