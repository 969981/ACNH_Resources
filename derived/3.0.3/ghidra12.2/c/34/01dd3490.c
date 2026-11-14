
void FUN_01dd3490(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  long local_730;
  undefined1 auStack_728 [1720];
  undefined1 local_70;
  
  uVar8 = (ulong)*(uint *)(param_3 + 0x10);
  if (1 < *(uint *)(param_3 + 0x10)) {
    uVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_3 + uVar8 * 8) + 0x1c);
  iVar7 = *(int *)(param_2 + 0x94);
  iVar6 = *(int *)(param_2 + 0xa0) - *(int *)(param_2 + 0x98);
  if (iVar6 <= iVar2) {
    iVar2 = iVar6;
  }
  *(int *)(param_2 + 0x9c) = iVar2;
  uVar3 = *(uint *)(param_1 + 0xd0);
  *(int *)(param_2 + 0x94) = iVar7 + 1;
  if (((-1 < (int)uVar3) && (lVar10 = *(long *)(param_2 + 0x88), lVar10 != 0)) &&
     ((int)uVar3 < *(int *)(param_2 + 0x90))) {
    uVar8 = (ulong)(uVar3 >> 3) & 0x1ffffffc;
    *(uint *)(lVar10 + uVar8) = *(uint *)(lVar10 + uVar8) | 1 << (ulong)(uVar3 & 0x1f);
    iVar7 = *(int *)(param_2 + 0x94) + -1;
  }
  *(int *)(param_2 + 0x94) = iVar7;
  uVar8 = (ulong)*(uint *)(param_3 + 0x10);
  if (1 < *(uint *)(param_3 + 0x10)) {
    uVar8 = 0;
  }
  uVar3 = *(uint *)(*(long *)(param_3 + uVar8 * 8) + 0x18);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      uVar5 = uVar11 + *(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0xd0);
      if (iVar2 <= (int)uVar5) {
        return;
      }
      uVar8 = (ulong)*(uint *)(param_3 + 0x10);
      if (1 < *(uint *)(param_3 + 0x10)) {
        uVar8 = 0;
      }
      puVar9 = *(uint **)(param_3 + uVar8 * 8);
      uVar1 = uVar11;
      if (*puVar9 <= uVar11) {
        uVar1 = 0;
      }
      memcpy(auStack_728,(void *)(*(long *)(puVar9 + 2) + (ulong)uVar1 * 0x6b8),0x6b8);
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
          uVar8 = 0;
          do {
            if (*(long *)(*(long *)(param_2 + 0x30) + uVar8 * 8) == local_730) {
              if (-1 < (int)uVar8) {
                if (*(uint *)(param_2 + 0x68) <= uVar5) {
                  uVar5 = 0;
                }
                *(long *)(*(long *)(param_2 + 0x70) + (long)(int)uVar5 * 8) = local_730;
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while (*(uint *)(param_2 + 0x28) != uVar8);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar3);
  }
  return;
}

