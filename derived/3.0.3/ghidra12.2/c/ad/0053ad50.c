
long FUN_0053ad50(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 uVar11;
  int iVar12;
  
  lVar10 = FUN_00438810(0x120);
  FUN_0053d160();
  *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(lVar10 + 0x24) = 0x10;
  *(undefined4 *)(lVar10 + 0x28) = 1;
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x60) == '\0') {
    uVar11 = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(undefined4 *)(lVar10 + 0x48) = 0;
  }
  else {
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(lVar10 + 0x50) = 1;
    uVar11 = 0x10;
  }
  *(undefined1 *)(lVar10 + 0x4c) = uVar11;
  bVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x168) < 1;
  if (bVar1) {
    iVar12 = 0;
    uVar11 = 0;
    *(undefined8 *)(lVar10 + 0x30) = 0;
  }
  else {
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x160);
    iVar12 = *(int *)(*(long *)(param_1 + 0x18) + 0x168) / 3;
    uVar11 = 6;
  }
  uVar5 = DAT_0413f4d8;
  uVar4 = DAT_0413f4d0;
  uVar3 = DAT_0413f4c8;
  uVar2 = DAT_0413f4c0;
  *(undefined8 *)(lVar10 + 0x98) = DAT_0413f4c8;
  *(undefined8 *)(lVar10 + 0x90) = uVar2;
  *(undefined8 *)(lVar10 + 0xa8) = uVar5;
  *(undefined8 *)(lVar10 + 0xa0) = uVar4;
  *(int *)(lVar10 + 0x38) = iVar12;
  uVar9 = DAT_0413f4f8;
  uVar8 = DAT_0413f4f0;
  uVar7 = DAT_0413f4e8;
  uVar6 = DAT_0413f4e0;
  *(undefined8 *)(lVar10 + 0xb8) = DAT_0413f4e8;
  *(undefined8 *)(lVar10 + 0xb0) = uVar6;
  *(undefined8 *)(lVar10 + 200) = uVar9;
  *(undefined8 *)(lVar10 + 0xc0) = uVar8;
  *(undefined1 *)(lVar10 + 0x3c) = uVar11;
  *(undefined8 *)(lVar10 + 0xd8) = uVar3;
  *(undefined8 *)(lVar10 + 0xd0) = uVar2;
  *(undefined8 *)(lVar10 + 0xe8) = uVar5;
  *(undefined8 *)(lVar10 + 0xe0) = uVar4;
  *(bool *)(lVar10 + 0x3d) = !bVar1;
  *(undefined8 *)(lVar10 + 0xf8) = uVar7;
  *(undefined8 *)(lVar10 + 0xf0) = uVar6;
  *(undefined8 *)(lVar10 + 0x108) = uVar9;
  *(undefined8 *)(lVar10 + 0x100) = uVar8;
  return lVar10;
}

