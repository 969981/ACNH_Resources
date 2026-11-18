
void FUN_03642440(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 0x74);
  uVar8 = *(int *)(param_1 + 0x70) + param_2 * 0x400;
  uVar7 = uVar8 - 0x8000;
  if (0x7fff < uVar8) {
    uVar1 = uVar9 & 0x3ff;
    FUN_03642060(param_1,uVar9 + 0x8000 >> 10);
    if (*(char *)(param_1 + 0x6c) == '\0') {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x40) != 0) {
        iVar6 = *(int *)(param_1 + 0x14);
        iVar5 = (int)*(char *)(param_1 + 0x7c + (ulong)*(uint *)(param_1 + 0x3c));
        if (0x1f < iVar6) {
          iVar6 = 0x20;
        }
        iVar3 = iVar6 * (*(char *)(param_1 + 0x7c + (ulong)(*(uint *)(param_1 + 0x3c) + 1 & 0x3f)) -
                        iVar5) * (uint)*(ushort *)(param_1 + 0x38);
        iVar2 = iVar3 + 0xffff;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        uVar4 = (undefined2)
                ((uint)((iVar6 * iVar5 + (iVar2 >> 0x10)) * *(int *)(param_1 + 100)) >> 3);
      }
    }
    else {
      uVar4 = *(undefined2 *)(param_1 + 0x6e);
    }
    uVar8 = *(uint *)(param_1 + 0x78);
    *(undefined2 *)(param_1 + (ulong)uVar8 * 2 + 0xfc) = uVar4;
    *(uint *)(param_1 + 0x78) = uVar8 + 1;
    uVar8 = uVar7;
    uVar9 = uVar1;
    if (0x7fff < uVar7) {
      do {
        FUN_03642060(param_1,0x20);
        if (*(char *)(param_1 + 0x6c) == '\0') {
          uVar4 = 0;
          if (*(int *)(param_1 + 0x40) != 0) {
            iVar6 = *(int *)(param_1 + 0x14);
            iVar5 = (int)*(char *)(param_1 + 0x7c + (ulong)*(uint *)(param_1 + 0x3c));
            if (0x1f < iVar6) {
              iVar6 = 0x20;
            }
            iVar3 = iVar6 * (*(char *)(param_1 + 0x7c +
                                      (ulong)(*(uint *)(param_1 + 0x3c) + 1 & 0x3f)) - iVar5) *
                    (uint)*(ushort *)(param_1 + 0x38);
            iVar2 = iVar3 + 0xffff;
            if (-1 < iVar3) {
              iVar2 = iVar3;
            }
            uVar4 = (undefined2)
                    ((uint)((iVar6 * iVar5 + (iVar2 >> 0x10)) * *(int *)(param_1 + 100)) >> 3);
          }
        }
        else {
          uVar4 = *(undefined2 *)(param_1 + 0x6e);
        }
        uVar1 = *(uint *)(param_1 + 0x78);
        uVar8 = uVar7 - 0x8000;
        *(uint *)(param_1 + 0x78) = uVar1 + 1;
        *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0xfc) = uVar4;
        uVar7 = uVar8;
      } while (uVar8 >> 0xf != 0);
    }
  }
  *(uint *)(param_1 + 0x70) = uVar8;
  *(uint *)(param_1 + 0x74) = uVar9;
  return;
}

