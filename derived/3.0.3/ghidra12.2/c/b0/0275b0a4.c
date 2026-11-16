
void FUN_0275b0a4(void)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
LAB_0275b110:
    lVar3 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_0275b110;
      lVar3 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  lVar2 = *(long *)(lVar3 + 0x1c24e8);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x1c24e8) == 0) goto LAB_0275b188;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x1c24e8) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar3 + 0x1c24c8);
      local_40 = *(undefined8 *)(lVar3 + 0x1c24d0);
      uStack_38 = 0x928;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_0275b188:
  lVar2 = *(long *)(lVar3 + 0x1c24d0) + *(long *)(lVar3 + 0x1c24c8);
  FUN_01b03ee0(&local_48,0,0);
  uVar1 = FUN_0277d6c4(&local_48);
  *(undefined2 *)(lVar2 + 0x900) = uVar1;
  if (*(char *)(DAT_04cac4e0 + 0x54a) != '\0') {
    *(undefined2 *)(lVar2 + 0x900) = 0x8a5;
  }
  FUN_01b03ee0(&local_48,1,0);
  uVar1 = FUN_0277d6c4(&local_48);
  *(undefined2 *)(lVar2 + 0x902) = uVar1;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x1c24e8) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x1c24e8) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

