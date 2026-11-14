
void FUN_01dd32a0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  long local_730;
  undefined1 auStack_728 [1720];
  undefined1 local_70;
  
  uVar7 = (ulong)*(uint *)(param_3 + 0x10);
  if (1 < *(uint *)(param_3 + 0x10)) {
    uVar7 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_3 + uVar7 * 8) + 0x1c);
  if (*(int *)(param_2 + 0xa0) <= iVar2) {
    iVar2 = *(int *)(param_2 + 0xa0);
  }
  iVar6 = *(int *)(param_2 + 0x84);
  *(int *)(param_2 + 0x98) = iVar2;
  uVar3 = *(uint *)(param_1 + 0xd0);
  *(int *)(param_2 + 0x84) = iVar6 + 1;
  if (((-1 < (int)uVar3) && (lVar9 = *(long *)(param_2 + 0x78), lVar9 != 0)) &&
     ((int)uVar3 < *(int *)(param_2 + 0x80))) {
    uVar7 = (ulong)(uVar3 >> 3) & 0x1ffffffc;
    *(uint *)(lVar9 + uVar7) = *(uint *)(lVar9 + uVar7) | 1 << (ulong)(uVar3 & 0x1f);
    iVar6 = *(int *)(param_2 + 0x84) + -1;
  }
  *(int *)(param_2 + 0x84) = iVar6;
  uVar7 = (ulong)*(uint *)(param_3 + 0x10);
  if (1 < *(uint *)(param_3 + 0x10)) {
    uVar7 = 0;
  }
  uVar3 = *(uint *)(*(long *)(param_3 + uVar7 * 8) + 0x18);
  if (0 < (int)uVar3) {
    uVar10 = 0;
    do {
      uVar5 = uVar10 + *(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0xd0);
      if (iVar2 <= (int)uVar5) {
        return;
      }
      uVar7 = (ulong)*(uint *)(param_3 + 0x10);
      if (1 < *(uint *)(param_3 + 0x10)) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(param_3 + uVar7 * 8);
      uVar1 = uVar10;
      if (*puVar8 <= uVar10) {
        uVar1 = 0;
      }
      memcpy(auStack_728,(void *)(*(long *)(puVar8 + 2) + (ulong)uVar1 * 0x6b8),0x6b8);
      local_70 = 1;
      FUN_01d715b0(&local_730,param_2,auStack_728);
      if (local_730 != 0) {
        if (*(char *)(local_730 + 0x6c8) == '\0') {
          bVar4 = *(byte *)(local_730 + 0x1870);
          if ((bVar4 & 1) == 0) {
            *(byte *)(local_730 + 0x1870) = bVar4 | 4;
          }
        }
        if (*(char *)(local_730 + 0xb60) == '\0') {
          bVar4 = *(byte *)(local_730 + 0x1870);
          if ((bVar4 >> 1 & 1) == 0) {
            *(byte *)(local_730 + 0x1870) = bVar4 | 8;
          }
        }
        if (0 < (int)*(uint *)(param_2 + 0x28)) {
          uVar7 = 0;
          do {
            if (*(long *)(*(long *)(param_2 + 0x30) + uVar7 * 8) == local_730) {
              if (-1 < (int)uVar7) {
                if (*(uint *)(param_2 + 0x58) <= uVar5) {
                  uVar5 = 0;
                }
                *(long *)(*(long *)(param_2 + 0x60) + (long)(int)uVar5 * 8) = local_730;
              }
              break;
            }
            uVar7 = uVar7 + 1;
          } while (*(uint *)(param_2 + 0x28) != uVar7);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
  }
  return;
}

