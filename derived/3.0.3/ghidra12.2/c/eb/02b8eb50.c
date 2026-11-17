
/* WARNING: Removing unreachable block (ram,0x02b8ebf8) */
/* WARNING: Removing unreachable block (ram,0x02b8ebb0) */
/* WARNING: Removing unreachable block (ram,0x02b8eb8c) */
/* WARNING: Removing unreachable block (ram,0x02b8ebd4) */
/* WARNING: Removing unreachable block (ram,0x02b8ec1c) */

undefined8 FUN_02b8eb50(uint param_1)

{
  int iVar1;
  
  if (0xf < param_1) {
    param_1 = 0;
  }
  iVar1 = (&DAT_05636e58)[(int)param_1];
  if ((((iVar1 == 0x1e) || (DAT_05641c34 == iVar1)) || (DAT_05641c38 == iVar1)) ||
     (((DAT_05641c3c == iVar1 || (DAT_05641c40 == iVar1)) || (DAT_05641c44 == iVar1)))) {
    return 1;
  }
  return 0;
}

