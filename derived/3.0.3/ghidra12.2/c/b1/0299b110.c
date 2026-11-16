
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0299b110(long param_1,undefined1 *param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  if ((param_3 != 0) && (param_4 != (undefined8 *)0x0)) {
    plVar5 = param_4 + 1;
    if (*plVar5 != 0) {
      *(undefined8 *)(*plVar5 + 8) = param_4[2];
    }
    if ((long *)param_4[2] != (long *)0x0) {
      *(long *)param_4[2] = *plVar5;
    }
    *plVar5 = 0;
    param_4[2] = 0;
    *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + -1;
    *param_4 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 **)(param_3 + 0x38) = param_4;
  }
  *(undefined2 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x34) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x3c) = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  uVar2 = _UNK_04102208;
  uVar1 = _DAT_04102200;
  param_2[10] = 0xff;
  *(undefined8 *)(param_2 + 0x1c) = 0x42f00000ffffffff;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x60) = uVar2;
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  uVar1 = _DAT_04102880;
  *(undefined8 *)(param_2 + 0x70) = _UNK_04102888;
  *(undefined8 *)(param_2 + 0x68) = uVar1;
  uVar2 = _UNK_041023d8;
  uVar1 = _DAT_041023d0;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 0x80) = uVar2;
  *(undefined8 *)(param_2 + 0x78) = uVar1;
  if (param_5 != (undefined8 *)0x0) {
    plVar5 = param_5 + 1;
    if (*plVar5 != 0) {
      *(undefined8 *)(*plVar5 + 8) = param_5[2];
    }
    if ((long *)param_5[2] != (long *)0x0) {
      *(long *)param_5[2] = *plVar5;
    }
    *plVar5 = 0;
    param_5[2] = 0;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
    *param_5 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 **)(param_1 + 0x110) = param_5;
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  if (*(int *)(param_2 + 4) < *(int *)(param_1 + 0x70)) {
    piVar4 = (int *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0xa8) <= *piVar4) {
      return;
    }
    puVar3 = (undefined8 *)(param_1 + 0x98);
    puVar6 = (undefined8 *)*puVar3;
    plVar5 = (long *)(param_1 + 0x80);
  }
  else {
    piVar4 = (int *)(param_1 + 0xd0);
    if (*(int *)(param_1 + 0xe8) <= *piVar4) {
      return;
    }
    puVar3 = (undefined8 *)(param_1 + 0xd8);
    puVar6 = (undefined8 *)*puVar3;
    plVar5 = (long *)(param_1 + 0xc0);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar3 = *puVar6;
  }
  *puVar6 = param_2;
  puVar6[2] = 0;
  plVar7 = puVar6 + 1;
  *plVar7 = 0;
  lVar8 = *plVar5;
  *plVar5 = (long)plVar7;
  puVar6[2] = plVar5;
  *plVar7 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar7;
  }
  *piVar4 = *piVar4 + 1;
  return;
}

