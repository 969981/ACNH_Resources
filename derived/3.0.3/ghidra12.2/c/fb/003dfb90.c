
void FUN_003dfb90(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar11 = FUN_003c5b84();
  lVar12 = FUN_003cbb70(uVar11,0x80,1);
  *(undefined4 *)(lVar12 + 8) = 0x15;
  *(long *)(lVar12 + 0x18) = param_1 + 0x238;
  uVar13 = *param_2;
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  uVar3 = param_2[6];
  uVar7 = param_2[7];
  uVar14 = param_2[8];
  uVar8 = *param_3;
  uVar9 = *(undefined4 *)(param_2 + 9);
  uVar15 = *(undefined8 *)(param_3 + 3);
  *(undefined4 *)(lVar12 + 0x78) = param_3[5];
  *(undefined8 *)(lVar12 + 0x20) = uVar13;
  *(undefined8 *)(lVar12 + 0x28) = uVar4;
  *(undefined4 *)(lVar12 + 0x68) = uVar9;
  *(undefined4 *)(lVar12 + 0x6c) = uVar8;
  *(undefined8 *)(lVar12 + 0x70) = uVar15;
  *(undefined8 *)(lVar12 + 0x30) = uVar1;
  *(undefined8 *)(lVar12 + 0x38) = uVar5;
  *(undefined8 *)(lVar12 + 0x40) = uVar2;
  *(undefined8 *)(lVar12 + 0x48) = uVar6;
  *(undefined8 *)(lVar12 + 0x60) = uVar14;
  *(undefined8 *)(lVar12 + 0x50) = uVar3;
  *(undefined8 *)(lVar12 + 0x58) = uVar7;
  FUN_003cc15c(uVar11,lVar12);
  iVar10 = param_3[2];
  if (0 < iVar10) {
    uVar8 = param_3[1];
    uVar13 = FUN_003c5b84();
    lVar12 = FUN_003cbb70(uVar13,0x28,1);
    *(long *)(lVar12 + 0x18) = param_1 + 0x238;
    *(undefined4 *)(lVar12 + 8) = 0x16;
    *(undefined4 *)(lVar12 + 0x20) = uVar8;
    *(int *)(lVar12 + 0x24) = iVar10;
    FUN_003cc15c(uVar13,lVar12);
  }
  *(undefined1 *)(param_1 + 0x232) = 1;
  return;
}

