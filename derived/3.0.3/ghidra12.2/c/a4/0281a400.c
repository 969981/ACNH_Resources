
void FUN_0281a400(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  
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
  lVar6 = *(long *)(lVar2 + 0x28);
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
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_0281a4e4;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar2 + 8);
      uStack_60 = *(undefined8 *)(lVar2 + 0x10);
      local_58 = &LAB_005b3c40;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
    }
  }
LAB_0281a4e4:
  iVar1 = *param_1;
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    iVar7 = 0;
    do {
      if ((*(long *)(lVar2 + 0x28) != 0) &&
         (plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
        local_68 = *(undefined8 *)(lVar2 + 8);
        uStack_60 = *(undefined8 *)(lVar2 + 0x10);
        local_58 = &LAB_005b3c40;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
      }
      FUN_0285bd34(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x575cb2,
                   *(undefined4 *)(lVar6 + (long)iVar7 * 0x3c + 0x38));
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

