
void FUN_001bba40(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00186460(param_1 + 0x38,1,1);
  puVar1 = PTR_DAT_04bcbce8 + 0x10;
  *(undefined **)(param_1 + 0x38) = puVar1;
  FUN_00186460(param_1 + 0x80,1,1);
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  uVar9 = (uint)DAT_04c58c68;
  if (DAT_04c58c68 != 0) {
    puVar5 = (uint *)FUN_03876070(DAT_04c58c60);
    uVar9 = *puVar5;
  }
  *(uint *)(param_1 + 0xd0) = uVar9;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  lVar10 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar10) < 0x100) {
    lVar11 = *(long *)(param_1 + 0x10);
    lVar6 = FUN_00187df4(0x100);
    puVar2 = (undefined8 *)(lVar6 + (lVar11 - lVar10));
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = puVar2;
    puVar13 = puVar2;
    if (puVar8 != puVar3) {
      do {
        puVar7 = puVar8 + -2;
        uVar4 = puVar8[-1];
        puVar13 = puVar12 + -2;
        *puVar13 = *puVar7;
        puVar12[-1] = uVar4;
        puVar8 = puVar7;
        puVar12 = puVar13;
      } while (puVar7 != puVar3);
      puVar8 = *(undefined8 **)(param_1 + 8);
    }
    *(undefined8 **)(param_1 + 8) = puVar13;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    *(long *)(param_1 + 0x18) = lVar6 + 0x100;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00187e4c();
      return;
    }
  }
  return;
}

