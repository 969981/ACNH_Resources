
void FUN_0122ca88(int param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
LAB_0122caf8:
    lVar4 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar4 = 0;
      if (lVar2 != 0) {
        lVar4 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar5 == (undefined8 *)0x0) goto LAB_0122caf8;
      lVar4 = 0;
      if ((long *)puVar5[0x26] != (long *)0x0) {
        lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      }
    }
  }
  lVar2 = *(long *)(lVar4 + 0x1c24e8);
  if (lVar2 == 0) goto LAB_0122cb78;
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar1 = 1;
    plVar3 = *(long **)(lVar2 + 0x20);
joined_r0x0122cba4:
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar4 + 0x1c24c8);
      local_40 = *(undefined8 *)(lVar4 + 0x1c24d0);
      uStack_38 = 0x928;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
  else {
    uVar1 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar1 = uVar1 ^ 1;
    if (*(long *)(lVar4 + 0x1c24e8) != 0) {
      plVar3 = *(long **)(*(long *)(lVar4 + 0x1c24e8) + 0x20);
      goto joined_r0x0122cba4;
    }
  }
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar4 + 0x1c24e8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1c24e8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_0122cb78:
  *(undefined4 *)((long)&DAT_0514e4c0 + (long)param_1 * 4) = 7;
  return;
}

