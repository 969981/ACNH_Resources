
void FUN_01d7cc6c(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar7 = param_2[1];
  plVar6 = (long *)(param_1 + 0x10);
  *plVar6 = *param_2;
  *(long *)(param_1 + 0x18) = lVar7;
  lVar7 = param_2[2];
  lVar8 = param_2[3];
  lVar1 = param_2[5];
  *(long *)(param_1 + 0x30) = param_2[4];
  *(long *)(param_1 + 0x38) = lVar1;
  *(long *)(param_1 + 0x20) = lVar7;
  *(long *)(param_1 + 0x28) = lVar8;
  lVar7 = param_2[6];
  lVar8 = param_2[7];
  lVar1 = param_2[9];
  *(long *)(param_1 + 0x50) = param_2[8];
  *(long *)(param_1 + 0x58) = lVar1;
  *(long *)(param_1 + 0x40) = lVar7;
  *(long *)(param_1 + 0x48) = lVar8;
  *(long *)(DAT_05355a58 + 0xa0) = *plVar6;
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb21c8 + 0x120);
  if (*plVar6 == 0) {
    *(undefined8 *)(lVar7 + 0x48) = 0;
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(long *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(lVar7 + 8) = *plVar6;
    *(undefined8 *)(lVar7 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar7 + 0x30) = uVar4;
    *(undefined8 *)(lVar7 + 0x18) = uVar2;
    *(undefined8 *)(lVar7 + 0x20) = uVar3;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(lVar7 + 0x50) = uVar4;
    *(undefined8 *)(lVar7 + 0x38) = uVar2;
    *(undefined8 *)(lVar7 + 0x40) = uVar3;
  }
  *(undefined1 *)(lVar7 + 0xa8) = 0;
  lVar7 = DAT_053565a0;
  uVar5 = *(uint *)(DAT_053565a0 + 0x18);
  if (uVar5 != 0xffffffff) {
    lVar8 = *(long *)(DAT_053565a0 + 0x10);
    if (*(uint *)(DAT_053565a0 + 8) <= uVar5) {
      uVar5 = 0;
    }
    plVar9 = (long *)(lVar8 + (long)(int)uVar5 * 0x58 + 0x18);
    if (*plVar9 != *plVar6) {
      *plVar9 = *plVar6;
      *(undefined4 *)(lVar8 + (long)(int)uVar5 * 0x58 + 0x50) = 0x1e;
      *(undefined1 *)(lVar7 + 0xf5) = 1;
    }
  }
  return;
}

