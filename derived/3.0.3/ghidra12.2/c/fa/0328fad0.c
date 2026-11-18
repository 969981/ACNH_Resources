
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0328fad0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_50;
  long lStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  lVar7 = *(long *)(param_1 + 0xb8);
  if (lVar7 != 0) {
    if (*(long **)(lVar7 + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x50) + 8))();
      *(undefined8 *)(lVar7 + 0x50) = 0;
    }
    if (*(long **)(lVar7 + 0x80) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x80) + 8))();
      *(undefined8 *)(lVar7 + 0x80) = 0;
    }
    if (*(long **)(lVar7 + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0xb0) + 8))();
      *(undefined8 *)(lVar7 + 0xb0) = 0;
    }
    if (*(long **)(lVar7 + 0xe0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0xe0) + 8))();
      *(undefined8 *)(lVar7 + 0xe0) = 0;
    }
    if (*(long **)(lVar7 + 0x110) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x110) + 8))();
      *(undefined8 *)(lVar7 + 0x110) = 0;
    }
    if (*(long **)(lVar7 + 0x140) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x140) + 8))();
      *(undefined8 *)(lVar7 + 0x140) = 0;
    }
  }
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    return;
  }
  lVar6 = lVar7;
  do {
    lVar5 = lVar6;
    lVar6 = *(long *)(lVar5 + 0x10);
  } while (lVar6 != 0);
  lVar6 = *(long *)(lVar5 + 0x20);
  *(long *)(param_1 + 0xb8) = lVar6;
  if (lVar6 == 0) {
    return;
  }
  lVar5 = lVar7;
  do {
    lVar5 = *(long *)(lVar5 + 0x10);
  } while (lVar5 != 0);
  do {
    lVar5 = lVar7;
    lVar7 = *(long *)(lVar5 + 0x10);
  } while (lVar7 != 0);
  lVar7 = *(long *)(lVar5 + 0x18);
  if (lVar7 == 0) {
    lVar7 = *(long *)PTR_DAT_04bc8ee8;
    cVar2 = *(char *)(lVar7 + 0x494);
LAB_0328fc28:
    cVar4 = *(char *)(lVar7 + 0x495);
  }
  else {
    cVar2 = *(char *)(lVar7 + 0x171);
    if (cVar2 == '\0') {
      cVar2 = *(char *)(*(long *)PTR_DAT_04bc8ee8 + 0x494);
      cVar4 = *(char *)(lVar7 + 0x172);
    }
    else {
      cVar4 = *(char *)(lVar7 + 0x172);
    }
    if (cVar4 == '\0') {
      lVar7 = *(long *)PTR_DAT_04bc8ee8;
      goto LAB_0328fc28;
    }
  }
  *(char *)(lVar6 + 0x1ca) = cVar2;
  *(char *)(lVar6 + 0x1cb) = cVar4;
  *(undefined8 *)(lVar6 + 0x3c) = 0x500000005;
  plVar3 = *(long **)(lVar6 + 0x50);
  local_50 = &PTR_LAB_04b18050;
  local_40 = &LAB_0328fed0;
  uStack_38 = 0;
  lStack_48 = param_1;
  if ((plVar3 == (long *)0x0) ||
     ((**(code **)(*plVar3 + 8))(plVar3), &local_50 != (undefined ***)0x0)) {
    uVar1 = (*(code *)local_50[3])(&local_50,lVar6 + 0x58);
    *(undefined8 *)(lVar6 + 0x50) = uVar1;
    if (&local_50 != (undefined ***)0x0) {
      (*(code *)local_50[1])();
    }
  }
  else {
    *(undefined8 *)(lVar6 + 0x50) = 0;
  }
  local_40 = &LAB_0328fee0;
  uStack_38 = 0;
  plVar3 = *(long **)(lVar6 + 0xe0);
  local_50 = &PTR_LAB_04b18050;
  lStack_48 = param_1;
  if (plVar3 == (long *)0x0) {
LAB_0328fd10:
    uVar1 = (*(code *)local_50[3])(&local_50,lVar6 + 0xe8);
    *(undefined8 *)(lVar6 + 0xe0) = uVar1;
    if (&local_50 != (undefined ***)0x0) {
      (*(code *)local_50[1])();
    }
  }
  else {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_50 != (undefined ***)0x0) goto LAB_0328fd10;
    *(undefined8 *)(lVar6 + 0xe0) = 0;
  }
  local_50 = &PTR_LAB_04b180d8;
  local_40 = &LAB_0328fef0;
  uStack_38 = 0;
  plVar3 = *(long **)(lVar6 + 0xb0);
  lStack_48 = param_1;
  if (plVar3 == (long *)0x0) {
LAB_0328fd9c:
    uVar1 = (*(code *)local_50[3])(&local_50,lVar6 + 0xb8);
    *(undefined8 *)(lVar6 + 0xb0) = uVar1;
    if (&local_50 != (undefined ***)0x0) {
      (*(code *)local_50[1])();
    }
  }
  else {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_50 != (undefined ***)0x0) goto LAB_0328fd9c;
    *(undefined8 *)(lVar6 + 0xb0) = 0;
  }
  local_40 = &LAB_0328fefc;
  uStack_38 = 0;
  plVar3 = *(long **)(lVar6 + 0x110);
  local_50 = &PTR_LAB_04b180d8;
  lStack_48 = param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_50 == (undefined ***)0x0) {
      *(undefined8 *)(lVar6 + 0x110) = 0;
      goto LAB_0328fe48;
    }
  }
  uVar1 = (*(code *)local_50[3])(&local_50,lVar6 + 0x118);
  *(undefined8 *)(lVar6 + 0x110) = uVar1;
  if (&local_50 != (undefined ***)0x0) {
    (*(code *)local_50[1])();
  }
LAB_0328fe48:
  local_40 = &LAB_0328ff38;
  uStack_38 = 0;
  plVar3 = *(long **)(lVar6 + 0x140);
  local_50 = &PTR_LAB_04b180d8;
  lStack_48 = param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_50 == (undefined ***)0x0) {
      *(undefined8 *)(lVar6 + 0x140) = 0;
      return;
    }
  }
  uVar1 = (*(code *)local_50[3])(&local_50,lVar6 + 0x148);
  *(undefined8 *)(lVar6 + 0x140) = uVar1;
  if (&local_50 != (undefined ***)0x0) {
    (*(code *)local_50[1])();
  }
  return;
}

