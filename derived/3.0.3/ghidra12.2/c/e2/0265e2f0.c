
void FUN_0265e2f0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
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
  plVar4 = (long *)(lVar1 + 0xe6e10);
  lVar6 = *(long *)(lVar1 + 0xe6e30);
  if ((param_1 & 1) == 0) {
    if (lVar6 == 0) {
      FUN_0284b1d0(*(long *)(lVar1 + 0xe6e18) + *plVar4);
    }
    else {
      if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
        uVar2 = 0;
LAB_0265e474:
        plVar3 = *(long **)(lVar6 + 0x20);
        if (plVar3 != (long *)0x0) {
          local_38 = *plVar4;
          local_30 = *(undefined8 *)(lVar1 + 0xe6e18);
          uStack_28 = 0x38;
          (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
        }
      }
      else {
        uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        lVar6 = *(long *)(lVar1 + 0xe6e30);
        uVar2 = uVar2 & 0xffffffff;
        if (lVar6 != 0) goto LAB_0265e474;
      }
      FUN_0284b1d0(*(long *)(lVar1 + 0xe6e18) + *plVar4);
      if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xe6e30) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0xe6e30) + 0x18), puVar5 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar5)();
      }
    }
    lVar6 = *(long *)(lVar1 + 0xe6ea0);
    if (lVar6 == 0) {
      FUN_0284b4d0(*(long *)(lVar1 + 0xe6e88) + *(long *)(lVar1 + 0xe6e80));
      return;
    }
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
LAB_0265e550:
      plVar4 = *(long **)(lVar6 + 0x20);
      if (plVar4 != (long *)0x0) {
        local_38 = *(long *)(lVar1 + 0xe6e80);
        local_30 = *(undefined8 *)(lVar1 + 0xe6e88);
        uStack_28 = 0x38;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar1 + 0xe6ea0);
      uVar2 = uVar2 & 0xffffffff;
      if (lVar6 != 0) goto LAB_0265e550;
    }
    FUN_0284b4d0(*(long *)(lVar1 + 0xe6e88) + *(long *)(lVar1 + 0xe6e80));
    goto joined_r0x0265e588;
  }
  if (lVar6 == 0) {
    FUN_0284ae54(*(long *)(lVar1 + 0xe6e18) + *plVar4);
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
LAB_0265e3dc:
      plVar3 = *(long **)(lVar6 + 0x20);
      if (plVar3 != (long *)0x0) {
        local_38 = *plVar4;
        local_30 = *(undefined8 *)(lVar1 + 0xe6e18);
        uStack_28 = 0x38;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar1 + 0xe6e30);
      uVar2 = uVar2 & 0xffffffff;
      if (lVar6 != 0) goto LAB_0265e3dc;
    }
    FUN_0284ae54(*(long *)(lVar1 + 0xe6e18) + *plVar4);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xe6e30) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0xe6e30) + 0x18), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)();
    }
  }
  lVar6 = *(long *)(lVar1 + 0xe6ea0);
  if (lVar6 == 0) {
    FUN_0284b0a4(*(long *)(lVar1 + 0xe6e88) + *(long *)(lVar1 + 0xe6e80));
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
LAB_0265e50c:
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_38 = *(long *)(lVar1 + 0xe6e80);
      local_30 = *(undefined8 *)(lVar1 + 0xe6e88);
      uStack_28 = 0x38;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar1 + 0xe6ea0);
    uVar2 = uVar2 & 0xffffffff;
    if (lVar6 != 0) goto LAB_0265e50c;
  }
  FUN_0284b0a4(*(long *)(lVar1 + 0xe6e88) + *(long *)(lVar1 + 0xe6e80));
joined_r0x0265e588:
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xe6ea0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0xe6ea0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

