
uint FUN_0265b8e0(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
LAB_0265b98c:
    uVar1 = 0;
    goto LAB_0265b990;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar2 == 0) goto LAB_0265b98c;
    lVar2 = lVar2 + 0x70;
  }
  else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
          (lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar2 == 0)) goto LAB_0265b98c;
  lVar6 = *(long *)(lVar2 + 0xe6bc8);
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
      if (*(long *)(lVar2 + 0xe6bc8) == 0) goto LAB_0265b9e0;
      plVar4 = *(long **)(*(long *)(lVar2 + 0xe6bc8) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar2 + 0xe6ba8);
      local_40 = *(undefined8 *)(lVar2 + 0xe6bb0);
      uStack_38 = 0x1a8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_0265b9e0:
  uVar1 = FUN_028498f8(*(long *)(lVar2 + 0xe6bb0) + *(long *)(lVar2 + 0xe6ba8),param_1,param_2,1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0xe6bc8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0xe6bc8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_0265b990:
  return uVar1 & 1;
}

