
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233ad14(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = DAT_0558600c;
  if ((*(uint *)(param_2 + 0x15f4) >> 1 & 1) == 0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar1;
  }
  else {
    if ((*(long **)(param_2 + 0x8080) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(param_2 + 0x8080), puVar3 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar3)();
      uVar2 = uVar2 ^ 1;
    }
    puVar4 = (undefined4 *)FUN_028160a8(*(long *)(param_2 + 0x8068) + *(long *)(param_2 + 0x8060));
    uVar1 = puVar4[1];
    *param_1 = *puVar4;
    param_1[1] = uVar1;
    if ((((uVar2 & 1) == 0) && (*(long *)(param_2 + 0x8080) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x8080) + 8), puVar3 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0233ade0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

