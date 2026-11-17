
void FUN_02a06880(long param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar7 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar7) {
    *(undefined8 *)(param_1 + 100) = 0xff7fffff;
    *(undefined4 *)(param_1 + 0x14a8) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x74) = 0x7f7fffff7f7fffff;
    uVar1 = uVar7 & 3;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0x3f8000007f7fffff;
    if (3 < uVar7) {
      uVar7 = uVar7 & 0xfffffffc;
      do {
        uVar7 = uVar7 - 4;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
      } while (uVar7 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x169c) = 0;
  *(undefined4 *)(param_1 + 0x15e4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 0x15e8) = *(undefined2 *)(param_2 + 2);
  uVar11 = *(undefined4 *)(param_2 + 8);
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *param_2;
  *(long *)(param_1 + 0x48) = lVar9;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  if (((lVar9 == 0) && (DAT_05aebb78 != 0)) && (*(long *)(DAT_05aebb78 + 0x28) != 0)) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(DAT_05aebb78 + 0x28) + 0x88);
  }
  lVar9 = *(long *)(param_1 + 0x40);
  if (*(char *)(lVar9 + 0xe8) == '\0') {
    FUN_02a08d44(param_1 + 0x20,lVar9 + 0xf8);
    puVar5 = (undefined4 *)(lVar9 + 0x104);
    puVar6 = (undefined4 *)(lVar9 + 0x114);
    puVar8 = (undefined4 *)(lVar9 + 0x124);
  }
  else {
    FUN_02a08d44(param_1 + 0x20,lVar9 + 0x158);
    puVar5 = (undefined4 *)(lVar9 + 0x164);
    puVar6 = (undefined4 *)(lVar9 + 0x174);
    puVar8 = (undefined4 *)(lVar9 + 0x184);
  }
  *(undefined4 *)(param_1 + 0x30) = *puVar5;
  *(undefined4 *)(param_1 + 0x34) = *puVar6;
  uVar10 = *puVar8;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar11;
  *(undefined1 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar10;
  return;
}

