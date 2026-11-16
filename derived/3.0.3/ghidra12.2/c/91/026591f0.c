
void FUN_026591f0(undefined4 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar2 == 0) {
      return;
    }
    lVar2 = lVar2 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar2 == 0) {
      return;
    }
  }
  plVar1 = (long *)(lVar2 + 0x2051d0);
  lVar6 = *(long *)(FUN_002051f0 + lVar2);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(FUN_002051f0 + lVar2) == 0) goto LAB_026592d4;
      plVar4 = *(long **)(*(long *)(FUN_002051f0 + lVar2) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *plVar1;
      local_40 = *(undefined8 *)(FUN_002051d8 + lVar2);
      uStack_38 = 0x58;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_026592d4:
  *(char *)(*(long *)(FUN_002051d8 + lVar2) + *plVar1 + 0x50) = (char)*param_1;
  if ((*(long *)(FUN_002051f0 + lVar2) != 0) &&
     (plVar4 = *(long **)(*(long *)(FUN_002051f0 + lVar2) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(FUN_002051d8 + lVar2);
    uStack_38 = 0x58;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  *(undefined8 *)(*(long *)(FUN_002051d8 + lVar2) + *plVar1 + 0x38) = *param_2;
  if ((((uVar3 & 1) != 0) && (*(long *)(FUN_002051f0 + lVar2) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(FUN_002051f0 + lVar2) + 0x18), puVar5 != (undefined8 *)0x0
     )) {
    (**(code **)*puVar5)();
  }
  return;
}

