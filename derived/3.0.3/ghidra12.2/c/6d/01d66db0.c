
void FUN_01d66db0(long param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  
  if (*param_2 < 8) {
    *(uint *)(param_1 + 0xa8) =
         *(uint *)(param_1 + 0xa8) & (1 << (ulong)(*param_2 & 0x1f) ^ 0xffffffffU);
  }
  uVar9 = *(uint *)(param_1 + 0xc0);
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xbc) + uVar10;
      iVar7 = 0;
      if (*(int *)(param_1 + 0xb8) <= iVar1) {
        iVar7 = *(int *)(param_1 + 0xb8);
      }
      if (*(byte *)(*(long *)(param_1 + 0xb0) + (long)(iVar1 - iVar7) * 0x10 + 8) == *param_2) {
        if ((int)uVar9 <= (int)uVar10) {
          return;
        }
        uVar13 = uVar9 - 1;
        if ((int)uVar9 < 1) {
          return;
        }
        if ((int)uVar10 < 0) {
          return;
        }
        if (uVar10 < uVar13) {
          lVar12 = (long)(int)uVar10;
          lVar11 = (long)(int)(uVar10 + 1);
          do {
            iVar7 = *(int *)(param_1 + 0xb8);
            iVar8 = *(int *)(param_1 + 0xbc);
            iVar1 = 0;
            if (iVar7 <= (int)lVar11 + iVar8) {
              iVar1 = iVar7;
            }
            iVar6 = 0;
            if (iVar7 <= (int)lVar12 + iVar8) {
              iVar6 = iVar7;
            }
            lVar2 = lVar11 + ((long)iVar8 - (long)iVar1);
            lVar3 = lVar12 + ((long)iVar8 - (long)iVar6);
            lVar12 = lVar12 + 1;
            lVar11 = lVar11 + 1;
            puVar4 = (undefined8 *)(*(long *)(param_1 + 0xb0) + lVar2 * 0x10);
            puVar5 = (undefined8 *)(*(long *)(param_1 + 0xb0) + lVar3 * 0x10);
            uVar14 = *puVar4;
            *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
            *puVar5 = uVar14;
            uVar13 = *(int *)(param_1 + 0xc0) - 1;
          } while ((int)lVar12 < (int)uVar13);
        }
        *(uint *)(param_1 + 0xc0) = uVar13;
        return;
      }
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
  }
  return;
}

