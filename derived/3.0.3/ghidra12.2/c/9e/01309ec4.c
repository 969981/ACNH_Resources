
void FUN_01309ec4(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(int *)(param_3 + 8) - *(int *)(param_2 + 0x18);
  uVar2 = *(int *)(param_3 + 0xc) - *(int *)(param_2 + 0x1c);
  plVar5 = (long *)(*(code *)**(undefined8 **)(param_2 + 0x38))();
  uVar3 = (**(code **)(*plVar5 + 0x18))();
  uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if (uVar3 <= uVar1) {
    uVar1 = 0;
  }
  if (uVar4 <= uVar2) {
    uVar2 = 0;
  }
  if (((long *)plVar5[5] == (long *)0x0) ||
     (puVar6 = *(undefined8 **)plVar5[5], puVar6 == (undefined8 *)0x0)) {
    lVar8 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar1,uVar2);
    FUN_0130d468(param_1,lVar8 + plVar5[1]);
    return;
  }
  uVar7 = (**(code **)*puVar6)();
  lVar8 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar1,uVar2);
  FUN_0130d468(param_1,lVar8 + plVar5[1]);
  if ((((uVar7 & 1) == 0) || (plVar5[5] == 0)) ||
     (puVar6 = *(undefined8 **)(plVar5[5] + 8), puVar6 == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01309fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar6)();
  return;
}

