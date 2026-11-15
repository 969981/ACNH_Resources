
void FUN_021a1614(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = nn::os::GetSystemTick();
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  uVar6 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  uVar2 = *(int *)(param_1 + 0x7c04) - 1;
  if ((*(int *)(param_1 + 0x7c04) < 1) || ((param_2 & 1) != 0)) {
    uVar3 = uVar3 ^ uVar3 * 0x800;
    uVar6 = uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar3 ^ uVar6;
    uVar2 = (int)((ulong)uVar6 * 7 >> 0x20) + 1;
  }
  else {
    uVar5 = uVar3;
  }
  uVar1 = 1 << (ulong)(uVar2 & 0x1f);
  uVar3 = (uVar1 ^ 0xffffffff) & 0x1ff;
  iVar4 = 0;
  if (uVar3 == 0) goto LAB_021a1740;
  uVar5 = uVar6 ^ uVar5 << 0xb ^ uVar5;
  uVar6 = uVar5 >> 0x1d;
  if (uVar6 != 0) {
    uVar3 = 0x1fe - uVar1 & uVar3;
    iVar4 = 0;
    if (uVar3 == 0) goto LAB_021a1740;
    if (uVar5 >> 0x1e != 0) {
      uVar3 = uVar3 - 1 & uVar3;
      iVar4 = 0;
      if (uVar3 == 0) goto LAB_021a1740;
      if (2 < uVar6) {
        uVar3 = uVar3 - 1 & uVar3;
        iVar4 = 0;
        if (uVar3 == 0) goto LAB_021a1740;
        if ((int)uVar5 < 0) {
          uVar3 = uVar3 - 1 & uVar3;
          iVar4 = 0;
          if (uVar3 == 0) goto LAB_021a1740;
          if (4 < uVar6) {
            uVar3 = uVar3 - 1 & uVar3;
            iVar4 = 0;
            if (uVar3 == 0) goto LAB_021a1740;
            if (2 < uVar5 >> 0x1e) {
              uVar3 = uVar3 - 1 & uVar3;
              iVar4 = 0;
              if (uVar3 == 0) goto LAB_021a1740;
              if ((6 < uVar6) && (uVar3 = uVar3 - 1 & uVar3, uVar3 == 0)) {
                iVar4 = 0;
                goto LAB_021a1740;
              }
            }
          }
        }
      }
    }
  }
  uVar3 = uVar3 - 1 & (uVar3 ^ 0xffffffff);
  uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  iVar4 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + 1;
LAB_021a1740:
  *(uint *)(param_1 + 0x7c00) = uVar2 + 1;
  *(int *)(param_1 + 0x7c04) = iVar4;
  return;
}

