
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03295148(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined **local_50;
  long lStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0x158);
  if (plVar1 != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x930);
    if (plVar3 == (long *)0x0) {
LAB_03295188:
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x938);
    }
    else {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar1 = *(long **)(param_1 + 0x158);
      uVar2 = 0;
      if (plVar1 != (long *)0x0) goto LAB_03295188;
    }
    *(undefined8 *)(param_1 + 0x930) = uVar2;
  }
  plVar1 = *(long **)(param_1 + 0x188);
  if (plVar1 == (long *)0x0) {
LAB_0329525c:
    plVar1 = *(long **)(param_1 + 0x1b8);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x960);
    if (plVar3 == (long *)0x0) {
LAB_032951dc:
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x968);
    }
    else {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar1 = *(long **)(param_1 + 0x188);
      uVar2 = 0;
      if (plVar1 != (long *)0x0) goto LAB_032951dc;
    }
    *(undefined8 *)(param_1 + 0x960) = uVar2;
    plVar1 = *(long **)(param_1 + 0x90);
    local_50 = &PTR_LAB_04b18390;
    local_40 = &LAB_03298540;
    uStack_38 = 0;
    lStack_48 = param_1;
    if (plVar1 == (long *)0x0) {
LAB_03295234:
      uVar2 = (*(code *)local_50[3])(&local_50,param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      if (&local_50 != (undefined ***)0x0) {
        (*(code *)local_50[1])();
      }
      goto LAB_0329525c;
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    if (&local_50 != (undefined ***)0x0) goto LAB_03295234;
    *(undefined8 *)(param_1 + 0x90) = 0;
    plVar1 = *(long **)(param_1 + 0x1b8);
  }
  if (plVar1 != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x9c0);
    if (plVar3 == (long *)0x0) {
LAB_03295284:
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x9c8);
    }
    else {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar1 = *(long **)(param_1 + 0x1b8);
      uVar2 = 0;
      if (plVar1 != (long *)0x0) goto LAB_03295284;
    }
    *(undefined8 *)(param_1 + 0x9c0) = uVar2;
  }
  plVar1 = *(long **)(param_1 + 0x1e8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x9f0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    plVar1 = *(long **)(param_1 + 0x1e8);
    uVar2 = 0;
    if (plVar1 == (long *)0x0) goto LAB_032952d0;
  }
  uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x9f8);
LAB_032952d0:
  *(undefined8 *)(param_1 + 0x9f0) = uVar2;
  plVar1 = *(long **)(param_1 + 0x90);
  local_50 = &PTR_LAB_04b18390;
  local_40 = &LAB_03298540;
  uStack_38 = 0;
  lStack_48 = param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    if (&local_50 == (undefined ***)0x0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      return;
    }
  }
  uVar2 = (*(code *)local_50[3])(&local_50,param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  if (&local_50 != (undefined ***)0x0) {
    (*(code *)local_50[1])();
  }
  return;
}

