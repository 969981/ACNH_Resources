
void FUN_03ebb160(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 == 0xffffffff) {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x21) = 1;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    uVar4 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar4;
    if (uVar4 == 0xffffffff) goto LAB_03ebb210;
    uVar2 = uVar4;
    if (*(uint *)(param_1 + 0x28) <= uVar4) {
      uVar2 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
      uVar4 = *(uint *)(param_1 + 8);
      if (uVar4 == 0xffffffff) goto LAB_03ebb210;
    }
  }
  uVar2 = uVar4;
  if (*(uint *)(param_1 + 0x28) <= uVar4) {
    uVar2 = 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(plVar1,param_2);
    uVar4 = *(uint *)(param_1 + 8);
  }
LAB_03ebb210:
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined1 *)(param_1 + 0x21) = 1;
  if (param_2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= param_2) {
      param_2 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)param_2 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03ebb258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)();
      return;
    }
  }
  return;
}

