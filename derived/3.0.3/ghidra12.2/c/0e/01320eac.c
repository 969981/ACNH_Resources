
void FUN_01320eac(undefined2 *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_2 + 0x10);
  uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (((((uVar5 & 1) == 0) || (lVar6 = (**(code **)*plVar8)(plVar8), lVar6 == 0)) ||
      (uVar1 = *(int *)(param_3 + 8) - *(int *)(param_2 + 0x40), *(uint *)(param_2 + 0x30) <= uVar1)
      ) || (uVar2 = *(int *)(param_3 + 0xc) - *(int *)(param_2 + 0x44),
           *(uint *)(param_2 + 0x34) <= uVar2)) {
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
    return;
  }
  plVar8 = (long *)(**(code **)*plVar8)(plVar8);
  uVar3 = (**(code **)(*plVar8 + 0x18))();
  uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8);
  if (uVar3 <= uVar1) {
    uVar1 = 0;
  }
  if (uVar4 <= uVar2) {
    uVar2 = 0;
  }
  if (((long *)plVar8[5] == (long *)0x0) ||
     (puVar7 = *(undefined8 **)plVar8[5], puVar7 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar7)();
    uVar3 = uVar3 ^ 1;
  }
  lVar6 = (**(code **)(*plVar8 + 0x28))(plVar8,uVar1,uVar2);
  *param_1 = *(undefined2 *)(lVar6 + plVar8[1]);
  if ((((uVar3 & 1) == 0) && (plVar8[5] != 0)) &&
     (puVar7 = *(undefined8 **)(plVar8[5] + 8), puVar7 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01321004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar7)();
    return;
  }
  return;
}

