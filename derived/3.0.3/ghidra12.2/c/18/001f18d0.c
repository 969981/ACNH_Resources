
void FUN_001f18d0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  *param_1 = 3;
  param_1[0x16] = 0x101;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 4;
  *(undefined8 *)(param_1 + 10) = 0x10;
  puVar1 = puVar1 + 0x10;
  *(undefined4 **)(param_1 + 0x32) = param_1 + 0x2e;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined **)(param_1 + 0xc) = puVar1;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0xe;
  *(undefined8 *)(param_1 + 0x14) = 0x10;
  *(undefined **)(param_1 + 0x18) = puVar1;
  *(undefined **)(param_1 + 0x22) = puVar1;
  *(undefined **)(param_1 + 0x2c) = puVar1;
  *(undefined **)(param_1 + 0x40) = puVar1;
  *(undefined **)(param_1 + 2) = puVar1;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 **)(param_1 + 0x1e) = param_1 + 0x1a;
  *(undefined8 *)(param_1 + 0x20) = 0x10;
  *(undefined4 **)(param_1 + 0x28) = param_1 + 0x24;
  *(undefined8 *)(param_1 + 0x2a) = 0x10;
  *(undefined4 **)(param_1 + 0x46) = param_1 + 0x42;
  *(undefined8 *)(param_1 + 0x48) = 0x10;
  param_1[0x50] = 1;
  *(undefined8 *)(param_1 + 0x34) = 0x10;
  *(undefined **)(param_1 + 0x36) = puVar1;
  *(undefined4 **)(param_1 + 0x3c) = param_1 + 0x38;
  *(undefined8 *)(param_1 + 0x3e) = 0x10;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  FUN_00186460(param_1 + 0x76,1,1);
  *(undefined **)(param_1 + 0x76) = PTR_DAT_04bcbce8 + 0x10;
  FUN_0018b7a0(param_1 + 2,0x3ff);
  iVar6 = FUN_001f4ea0();
  if (iVar6 == 0) {
    FUN_001f4e80(PTR_LAB_04bcbd00,PTR_LAB_04bcbd08);
    lVar9 = *(long *)(param_1 + 0x60);
    uVar10 = *(long *)(param_1 + 100) - lVar9;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x60);
    uVar10 = *(long *)(param_1 + 100) - lVar9;
  }
  if (uVar10 < 0x554) {
    lVar11 = *(long *)(param_1 + 0x62);
    lVar7 = FUN_00187df4(0x554);
    puVar2 = (undefined1 *)(lVar7 + (lVar11 - lVar9));
    puVar4 = *(undefined1 **)(param_1 + 0x60);
    puVar8 = *(undefined1 **)(param_1 + 0x62);
    if (puVar8 == puVar4) {
      *(undefined1 **)(param_1 + 0x60) = puVar2;
      *(undefined1 **)(param_1 + 0x62) = puVar2;
      *(long *)(param_1 + 100) = lVar7 + 0x554;
    }
    else {
      uVar5 = (int)puVar8 - (int)puVar4;
      puVar3 = puVar8 + ~(ulong)puVar4;
      uVar10 = (ulong)uVar5 & 3;
      puVar12 = puVar2;
      if ((uVar5 & 3) != 0) {
        do {
          puVar8 = puVar8 + -1;
          uVar10 = uVar10 - 1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
        } while (uVar10 != 0);
      }
      if ((undefined1 *)0x2 < puVar3) {
        do {
          puVar12[-1] = puVar8[-1];
          puVar12[-2] = puVar8[-2];
          puVar12[-3] = puVar8[-3];
          puVar8 = puVar8 + -4;
          puVar12 = puVar12 + -4;
          *puVar12 = *puVar8;
        } while (puVar8 != puVar4);
      }
      puVar8 = *(undefined1 **)(param_1 + 0x60);
      *(undefined1 **)(param_1 + 0x60) = puVar12;
      *(undefined1 **)(param_1 + 0x62) = puVar2;
      *(long *)(param_1 + 100) = lVar7 + 0x554;
    }
    if (puVar8 != (undefined1 *)0x0) {
      FUN_00187e4c();
    }
  }
  lVar9 = *(long *)(param_1 + 0x66);
  if ((ulong)(*(long *)(param_1 + 0x6a) - lVar9) < 0xaa8) {
    lVar11 = *(long *)(param_1 + 0x68);
    lVar7 = FUN_00187df4(0xaa8);
    puVar2 = (undefined1 *)(lVar7 + (lVar11 - lVar9));
    puVar4 = *(undefined1 **)(param_1 + 0x66);
    puVar8 = *(undefined1 **)(param_1 + 0x68);
    if (puVar8 == puVar4) {
      *(undefined1 **)(param_1 + 0x66) = puVar2;
      *(undefined1 **)(param_1 + 0x68) = puVar2;
      *(long *)(param_1 + 0x6a) = lVar7 + 0xaa8;
    }
    else {
      uVar5 = (int)puVar8 - (int)puVar4;
      puVar3 = puVar8 + ~(ulong)puVar4;
      uVar10 = (ulong)uVar5 & 3;
      puVar12 = puVar2;
      if ((uVar5 & 3) != 0) {
        do {
          puVar8 = puVar8 + -1;
          uVar10 = uVar10 - 1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
        } while (uVar10 != 0);
      }
      if ((undefined1 *)0x2 < puVar3) {
        do {
          puVar12[-1] = puVar8[-1];
          puVar12[-2] = puVar8[-2];
          puVar12[-3] = puVar8[-3];
          puVar8 = puVar8 + -4;
          puVar12 = puVar12 + -4;
          *puVar12 = *puVar8;
        } while (puVar8 != puVar4);
      }
      puVar8 = *(undefined1 **)(param_1 + 0x66);
      *(undefined1 **)(param_1 + 0x66) = puVar12;
      *(undefined1 **)(param_1 + 0x68) = puVar2;
      *(long *)(param_1 + 0x6a) = lVar7 + 0xaa8;
    }
    if (puVar8 != (undefined1 *)0x0) {
      FUN_00187e4c();
    }
  }
  lVar9 = *(long *)(param_1 + 0x6c);
  if ((ulong)(*(long *)(param_1 + 0x70) - lVar9) < 0xaa8) {
    lVar11 = *(long *)(param_1 + 0x6e);
    lVar7 = FUN_00187df4(0xaa8);
    puVar2 = (undefined1 *)(lVar7 + (lVar11 - lVar9));
    puVar4 = *(undefined1 **)(param_1 + 0x6c);
    puVar8 = *(undefined1 **)(param_1 + 0x6e);
    if (puVar8 == puVar4) {
      *(undefined1 **)(param_1 + 0x6c) = puVar2;
      *(undefined1 **)(param_1 + 0x6e) = puVar2;
      *(long *)(param_1 + 0x70) = lVar7 + 0xaa8;
    }
    else {
      uVar5 = (int)puVar8 - (int)puVar4;
      puVar3 = puVar8 + ~(ulong)puVar4;
      uVar10 = (ulong)uVar5 & 3;
      puVar12 = puVar2;
      if ((uVar5 & 3) != 0) {
        do {
          puVar8 = puVar8 + -1;
          uVar10 = uVar10 - 1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
        } while (uVar10 != 0);
      }
      if ((undefined1 *)0x2 < puVar3) {
        do {
          puVar12[-1] = puVar8[-1];
          puVar12[-2] = puVar8[-2];
          puVar12[-3] = puVar8[-3];
          puVar8 = puVar8 + -4;
          puVar12 = puVar12 + -4;
          *puVar12 = *puVar8;
        } while (puVar8 != puVar4);
      }
      puVar8 = *(undefined1 **)(param_1 + 0x6c);
      *(undefined1 **)(param_1 + 0x6c) = puVar12;
      *(undefined1 **)(param_1 + 0x6e) = puVar2;
      *(long *)(param_1 + 0x70) = lVar7 + 0xaa8;
    }
    if (puVar8 != (undefined1 *)0x0) {
      FUN_00187e4c();
      return;
    }
  }
  return;
}

