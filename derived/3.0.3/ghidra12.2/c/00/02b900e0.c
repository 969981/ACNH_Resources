
/* WARNING: Removing unreachable block (ram,0x02b901d8) */
/* WARNING: Removing unreachable block (ram,0x02b90190) */
/* WARNING: Removing unreachable block (ram,0x02b90148) */
/* WARNING: Removing unreachable block (ram,0x02b90124) */
/* WARNING: Removing unreachable block (ram,0x02b9016c) */
/* WARNING: Removing unreachable block (ram,0x02b901b4) */
/* WARNING: Removing unreachable block (ram,0x02b901fc) */

bool FUN_02b900e0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  int local_4;
  
  bVar1 = false;
  if (param_1 != (int *)0x0) {
    local_4 = 0;
    uVar2 = FUN_02b677c0(&local_4,param_2);
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      iVar3 = 0;
      if ((((DAT_05641c48 == local_4) || (iVar3 = 1, DAT_05641c4c == local_4)) ||
          (iVar3 = 2, DAT_05641c50 == local_4)) ||
         (((iVar3 = 3, DAT_05641c54 == local_4 || (iVar3 = 4, DAT_05641c58 == local_4)) ||
          ((iVar3 = 5, DAT_05641c5c == local_4 || (iVar3 = 6, DAT_05641c60 == local_4)))))) {
        *param_1 = iVar3;
      }
      else {
        iVar3 = *param_1;
      }
      bVar1 = iVar3 != 5;
    }
  }
  return bVar1;
}

