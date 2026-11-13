
void FUN_012ec534(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
    return;
  }
  uVar3 = FUN_027a991c();
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar3 = FUN_027a9de4(param_1);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar4 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar4 + 0x276fb0);
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      lVar7 = *(long *)(lVar4 + 0x276fb0);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar7 == 0) goto LAB_012ec610;
    }
    plVar5 = *(long **)(lVar7 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar4 + 0x276f90);
      local_40 = *(undefined8 *)(lVar4 + 0x276f98);
      uStack_38 = 0x280;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_012ec610:
  lVar7 = *(long *)(lVar4 + 0x276f90);
  lVar1 = *(long *)(lVar4 + 0x276f98);
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  local_48 = *param_1;
  uVar2 = (ulong)local_40 >> 0x10;
  local_40 = CONCAT62((uint6)uVar2 & 0xffffffffff00,1);
  FUN_027a9730(lVar1 + lVar7,&local_48);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar4 + 0x276fb0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x276fb0) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

