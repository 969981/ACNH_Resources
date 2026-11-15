
void FUN_020ee4d4(char *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar1 = (**(code **)(*(long *)*puVar4 + 0x38))();
    if (lVar1 == 0) {
      return;
    }
    lVar1 = lVar1 + 0x70;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar4[0x26] == (long *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
    if (lVar1 == 0) {
      return;
    }
  }
  lVar5 = *(long *)(lVar1 + 0xe6bc8);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0xe6bc8) == 0) goto LAB_020ee5b4;
      plVar3 = *(long **)(*(long *)(lVar1 + 0xe6bc8) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(long *)(lVar1 + 0xe6ba8);
      local_40 = *(undefined8 *)(lVar1 + 0xe6bb0);
      uStack_38 = 0x1a8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_020ee5b4:
  FUN_0284c8f8(*(long *)(lVar1 + 0xe6bb0) + *(long *)(lVar1 + 0xe6ba8),(int)*param_1,
               param_1[1] != '\0',0);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xe6bc8) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0xe6bc8) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

