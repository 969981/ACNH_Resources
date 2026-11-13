
void FUN_01386940(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
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
    lVar1 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar1 == 0) {
      return;
    }
    lVar1 = lVar1 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar1 == 0) {
      return;
    }
  }
  plVar4 = (long *)(lVar1 + 0xe7660);
  lVar6 = *(long *)(lVar1 + 0xe7680);
  if (lVar6 == 0) {
    FUN_01386c10(*(long *)(lVar1 + 0xe7668) + *plVar4);
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar6 + 0x20);
joined_r0x01386b24:
      if (plVar3 != (long *)0x0) {
        local_48 = *plVar4;
        local_40 = *(undefined8 *)(lVar1 + 0xe7668);
        uStack_38 = 0x6c000;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0xe7680) != 0) {
        plVar3 = *(long **)(*(long *)(lVar1 + 0xe7680) + 0x20);
        goto joined_r0x01386b24;
      }
    }
    FUN_01386c10(*(long *)(lVar1 + 0xe7668) + *plVar4);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xe7680) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0xe7680) + 0x18), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)();
    }
  }
  lVar6 = *(long *)(lVar1 + 0xe76f0);
  if (lVar6 == 0) {
    FUN_01386c10(*(long *)(lVar1 + 0xe76d8) + *(long *)(lVar1 + 0xe76d0));
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
joined_r0x01386b34:
      if (plVar4 != (long *)0x0) {
        local_48 = *(long *)(lVar1 + 0xe76d0);
        local_40 = *(undefined8 *)(lVar1 + 0xe76d8);
        uStack_38 = 0x6c000;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0xe76f0) != 0) {
        plVar4 = *(long **)(*(long *)(lVar1 + 0xe76f0) + 0x20);
        goto joined_r0x01386b34;
      }
    }
    FUN_01386c10(*(long *)(lVar1 + 0xe76d8) + *(long *)(lVar1 + 0xe76d0));
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xe76f0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0xe76f0) + 0x18), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)();
    }
  }
  lVar6 = *(long *)(&LAB_001191e0 + lVar1);
  if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(&LAB_001191e0 + lVar1) == 0) goto LAB_01386b70;
      plVar4 = *(long **)(*(long *)(&LAB_001191e0 + lVar1) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(&LAB_001191c0 + lVar1);
      local_40 = *(undefined8 *)(&LAB_001191c8 + lVar1);
      uStack_38 = 0x145140;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_01386b70:
  lVar6 = *(long *)(&LAB_001191c8 + lVar1) + *(long *)(&LAB_001191c0 + lVar1);
  FUN_027f3f74(lVar6);
  FUN_027f3f74(lVar6 + 0x28a28);
  FUN_027f3f74(lVar6 + 0x51450);
  FUN_027f3f74(lVar6 + 0x79e78);
  FUN_027f3f74(lVar6 + 0xa28a0);
  FUN_027f3f74(lVar6 + 0xcb2c8);
  FUN_027f3f74(lVar6 + 0xf3cf0);
  FUN_027f3f74(lVar6 + 0x11c718);
  if ((((uVar2 & 1) != 0) && (*(long *)(&LAB_001191e0 + lVar1) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(&LAB_001191e0 + lVar1) + 0x18),
     puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

