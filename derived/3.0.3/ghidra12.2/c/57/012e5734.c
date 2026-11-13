
uint FUN_012e5734(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar4 = *(uint *)(param_2 + 8);
  puVar7 = (undefined8 *)(param_1 + 0x28);
  plVar5 = (long *)(**(code **)*puVar7)(puVar7);
  uVar1 = (**(code **)(*plVar5 + 0x18))();
  if (uVar4 < uVar1) {
    uVar4 = *(uint *)(param_2 + 0xc);
    plVar5 = (long *)(**(code **)*puVar7)(puVar7);
    uVar1 = (**(code **)(*plVar5 + 0x20))();
    if (uVar4 < uVar1) {
      uVar4 = *(uint *)(param_2 + 8);
      uVar1 = *(uint *)(param_2 + 0xc);
      plVar5 = (long *)(**(code **)*puVar7)(puVar7);
      uVar2 = (**(code **)(*plVar5 + 0x18))();
      uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
      if (uVar2 <= uVar4) {
        uVar4 = 0;
      }
      if (uVar3 <= uVar1) {
        uVar1 = 0;
      }
      if (((long *)plVar5[5] == (long *)0x0) ||
         (puVar7 = *(undefined8 **)plVar5[5], puVar7 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar7)();
        uVar2 = uVar2 ^ 1;
      }
      lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar4,uVar1);
      uVar4 = FUN_0277da10(lVar6 + plVar5[1]);
      uVar4 = uVar4 ^ 1;
      if ((((uVar2 & 1) == 0) && (plVar5[5] != 0)) &&
         (puVar7 = *(undefined8 **)(plVar5[5] + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      goto LAB_012e580c;
    }
  }
  uVar4 = 0;
LAB_012e580c:
  return uVar4 & 1;
}

