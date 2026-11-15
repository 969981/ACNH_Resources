
void FUN_02194700(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x1b30);
  if ((int)*(uint *)(param_1 + 0x1b30) < 1) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    if (0 < (int)*(uint *)(param_1 + 0x10)) {
      do {
        uVar9 = uVar7 - 1;
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (uVar9 & 0xffffffff) * 8) + 100) == 2) {
          if ((long)uVar7 <= (long)*(int *)(param_1 + 0x10)) {
            uVar5 = uVar9 & 0xffffffff;
            do {
              puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x18) + uVar5 * 8);
              uVar5 = uVar5 + 1;
              puVar6[0xf] = &PTR_FUN_0498d548;
              *puVar6 = *(undefined8 *)(param_1 + 0x20);
              *(undefined8 **)(param_1 + 0x20) = puVar6;
            } while (uVar5 < uVar7);
          }
          iVar8 = (int)uVar9;
          if ((-1 < iVar8) && (iVar4 = *(int *)(param_1 + 0x10), iVar8 < iVar4)) {
            uVar2 = iVar8 + 1;
            uVar3 = iVar4 - uVar2;
            if (uVar3 != 0 && (int)uVar2 <= iVar4) {
              memmove((void *)(*(long *)(param_1 + 0x18) + (uVar9 & 0xffffffff) * 8),
                      (void *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 8),
                      -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
              iVar4 = *(int *)(param_1 + 0x10);
            }
            *(int *)(param_1 + 0x10) = iVar4 + -1;
          }
        }
        bVar1 = 1 < (long)uVar7;
        uVar7 = uVar9;
      } while (bVar1);
    }
  }
  else {
    do {
      uVar9 = uVar7 - 1;
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x1b38) + (uVar9 & 0xffffffff) * 8) + 100) == 2) {
        if ((long)uVar7 <= (long)*(int *)(param_1 + 0x1b30)) {
          uVar5 = uVar9 & 0xffffffff;
          do {
            puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x1b38) + uVar5 * 8);
            uVar5 = uVar5 + 1;
            puVar6[0xf] = &PTR_FUN_0498d548;
            *puVar6 = *(undefined8 *)(param_1 + 0x1b40);
            *(undefined8 **)(param_1 + 0x1b40) = puVar6;
          } while (uVar5 < uVar7);
        }
        iVar8 = (int)uVar9;
        if ((-1 < iVar8) && (iVar4 = *(int *)(param_1 + 0x1b30), iVar8 < iVar4)) {
          uVar2 = iVar8 + 1;
          uVar3 = iVar4 - uVar2;
          if (uVar3 != 0 && (int)uVar2 <= iVar4) {
            memmove((void *)(*(long *)(param_1 + 0x1b38) + (uVar9 & 0xffffffff) * 8),
                    (void *)(*(long *)(param_1 + 0x1b38) + (ulong)uVar2 * 8),
                    -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
            iVar4 = *(int *)(param_1 + 0x1b30);
          }
          *(int *)(param_1 + 0x1b30) = iVar4 + -1;
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar9;
    } while (bVar1);
  }
  return;
}

