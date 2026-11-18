
void FUN_033fc4b0(long *param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint local_14;
  
  if (((*param_3 < 8) && (uVar1 = FUN_02582d8c(param_3,1), uVar1 < 8)) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) {
    uVar1 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d8);
    uVar6 = (ulong)uVar1;
    if (-1 < (int)uVar1) {
      lVar5 = (long)*(int *)(*(long *)PTR_DAT_04bc95e0 + 0x184);
      lVar3 = *(long *)(*(long *)PTR_DAT_04bc95e0 + 0x178) - lVar5;
      if (*(int *)(lVar3 + 0x18) != 0xd) {
        do {
          lVar3 = *(long *)(lVar3 + lVar5 + 8) - lVar5;
        } while (*(int *)(lVar3 + 0x18) != 0xd);
      }
      if (*(int *)(lVar3 + 0x2c) == 1) {
        lVar3 = *(long *)PTR_DAT_04bb3960;
        local_14 = uVar1;
        iVar2 = nn::hid::GetNpadJoyAssignment(&local_14);
        if (iVar2 == 1) {
          if (3 < uVar1) {
            uVar6 = 0;
          }
          if (*(int *)(lVar3 + uVar6 * 4 + 0xf5b40) - 3U < 2) {
            if (4 < param_2) {
              param_2 = 0;
            }
            *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
            plVar4 = &DAT_0574d680 + (ulong)param_2 * 4;
            goto LAB_033fc608;
          }
        }
      }
    }
  }
  if (4 < param_2) {
    param_2 = 0;
  }
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  plVar4 = &DAT_0574d670 + (ulong)param_2 * 4;
LAB_033fc608:
  param_1[1] = *plVar4;
  return;
}

