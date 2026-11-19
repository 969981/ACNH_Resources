
void FUN_03bf2370(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar9 = (ulong)*param_1;
  puVar2 = param_1 + 2;
  puVar5 = puVar2 + uVar9 * 2;
  if (1 < *param_1) {
    puVar5 = puVar2;
  }
  if (*(long *)puVar5 != 0) {
    sVar7 = *(short *)(*(long *)(param_1 + -0x14) + 0x46);
    if (0 < sVar7) {
      uVar8 = 0;
      do {
        puVar5 = puVar2 + (ulong)*param_1 * 2;
        if (1 < *param_1) {
          puVar5 = puVar2;
        }
        uVar4 = uVar8;
        if (*(uint *)(*(long *)puVar5 + 0x30) <= uVar8) {
          uVar4 = 0;
        }
        lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0x38) + (ulong)uVar4 * 8);
        if (((lVar10 != 0) && (lVar12 = *(long *)(lVar10 + 0x30), lVar12 != 0)) &&
           (iVar6 = *(int *)(lVar12 + 4), iVar6 <= *(int *)(lVar12 + 8))) {
          lVar12 = (long)iVar6 * 0x28;
          lVar11 = (long)iVar6;
          do {
            lVar3 = *(long *)(*(uint **)(lVar10 + 0x10) + 2) + lVar12;
            lVar12 = lVar12 + 0x28;
            if (**(uint **)(lVar10 + 0x10) <= (uint)lVar11) {
              lVar3 = 0;
            }
            *(undefined1 *)(lVar3 + 0x22) = 0;
            bVar1 = lVar11 < *(int *)(*(long *)(lVar10 + 0x30) + 8);
            lVar11 = lVar11 + 1;
          } while (bVar1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != (int)sVar7);
      uVar9 = (ulong)*param_1;
    }
    if (1 < (uint)uVar9) {
      uVar9 = 0;
    }
    if (*(long *)(*(long *)(puVar2 + uVar9 * 2) + 0x60) != 0) {
      *(undefined1 *)(*(long *)(*(long *)(puVar2 + uVar9 * 2) + 0x60) + 0x18) = 1;
    }
  }
  return;
}

