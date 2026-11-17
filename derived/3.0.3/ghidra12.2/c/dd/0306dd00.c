
void FUN_0306dd00(long param_1,short *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (*param_2 != *(short *)PTR_DAT_04bb3170 || *(int *)(param_2 + 4) != -1) {
    *(short *)(param_1 + 0x98) = *param_2;
    bVar7 = *(byte *)(param_2 + 1);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x9a) = bVar7;
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 2);
    FUN_0306de38();
    uVar11 = (ulong)*(uint *)(param_1 + 8);
    if (0 < (int)*(uint *)(param_1 + 8)) {
      do {
        uVar12 = uVar11 - 1;
        if ((long)*(int *)(param_1 + 8) < (long)uVar11) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = **(undefined4 **)(*(long *)(param_1 + 0x10) + (uVar12 & 0xffffffff) * 8);
        }
        uVar4 = FUN_0306df80(param_1,uVar5);
        if ((uVar4 & 1) == 0) {
          if ((long)uVar11 <= (long)*(int *)(param_1 + 8)) {
            uVar4 = uVar12 & 0xffffffff;
            puVar8 = *(undefined8 **)(param_1 + 0x18);
            do {
              puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar4 * 8);
              uVar4 = uVar4 + 1;
              *puVar9 = puVar8;
              *(undefined8 **)(param_1 + 0x18) = puVar9;
              puVar8 = puVar9;
            } while (uVar4 < uVar11);
          }
          iVar10 = (int)uVar12;
          if ((-1 < iVar10) && (iVar6 = *(int *)(param_1 + 8), iVar10 < iVar6)) {
            uVar2 = iVar10 + 1;
            uVar3 = iVar6 - uVar2;
            if (uVar3 != 0 && (int)uVar2 <= iVar6) {
              memmove((void *)(*(long *)(param_1 + 0x10) + (uVar12 & 0xffffffff) * 8),
                      (void *)(*(long *)(param_1 + 0x10) + (ulong)uVar2 * 8),
                      -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
              iVar6 = *(int *)(param_1 + 8);
            }
            *(int *)(param_1 + 8) = iVar6 + -1;
          }
        }
        bVar1 = 1 < (long)uVar11;
        uVar11 = uVar12;
      } while (bVar1);
    }
  }
  return;
}

