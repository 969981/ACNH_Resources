
undefined8 FUN_0265ba20(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = lVar2 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
  }
  if ((*(long **)(lVar2 + 0xe6bc8) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar2 + 0xe6bc8), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 & 0xffffffff;
  }
  uVar1 = FUN_0284da58(*(long *)(lVar2 + 0xe6bb0) + *(long *)(lVar2 + 0xe6ba8),param_1,0);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0xe6bc8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0xe6bc8) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if (6 < uVar1) {
    return 0;
  }
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = lVar2 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (6 < uVar1) {
    return 0;
  }
  switch(uVar1) {
  case 0:
    lVar6 = *(long *)(lVar2 + 0xe6c38);
    if (lVar6 == 0) {
      uVar3 = 0;
    }
    else {
      if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        lVar6 = *(long *)(lVar2 + 0xe6c38);
        uVar3 = uVar3 & 0xffffffff;
        if (lVar6 == 0) goto LAB_0265bd78;
      }
      plVar4 = *(long **)(lVar6 + 0x20);
      if (plVar4 != (long *)0x0) {
        local_48 = *(ulong *)(lVar2 + 0xe6c18);
        local_40 = *(undefined8 *)(lVar2 + 0xe6c20);
        uStack_38 = 0x3c;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      }
    }
LAB_0265bd78:
    puVar5 = (undefined8 *)(*(long *)(lVar2 + 0xe6c20) + *(ulong *)(lVar2 + 0xe6c18));
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined2 *)((long)puVar5 + 0x1e) = 0x101;
    *(undefined4 *)(puVar5 + 4) = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined1 *)((long)puVar5 + 0x21) = 0;
    *(undefined1 *)((long)puVar5 + 0x2e) = 0;
    local_48 = local_48 & 0xffffffff00000000;
    *(undefined1 **)((long)puVar5 + 0x24) = &LAB_01010000;
    *(undefined1 *)((long)puVar5 + 0x2c) = 0xff;
    *(undefined1 *)((long)puVar5 + 0x2f) = 0;
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    lVar2 = *(long *)(lVar2 + 0xe6c38);
    goto joined_r0x0265bfa8;
  case 2:
    lVar6 = *(long *)(lVar2 + 0xe6d50);
    if (lVar6 == 0) {
      FUN_0284c198(*(long *)(lVar2 + 0xe6d38) + *(long *)(lVar2 + 0xe6d30),0);
      return 1;
    }
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
LAB_0265be1c:
      plVar4 = *(long **)(lVar6 + 0x20);
      if (plVar4 != (long *)0x0) {
        local_48 = *(ulong *)(lVar2 + 0xe6d30);
        local_40 = *(undefined8 *)(lVar2 + 0xe6d38);
        uStack_38 = 0x40;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      }
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0xe6d50);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 != 0) goto LAB_0265be1c;
    }
    FUN_0284c198(*(long *)(lVar2 + 0xe6d38) + *(long *)(lVar2 + 0xe6d30),0);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    lVar2 = *(long *)(lVar2 + 0xe6d50);
    goto joined_r0x0265bfa8;
  case 3:
    lVar6 = *(long *)(lVar2 + 0xe6dc0);
    if (lVar6 == 0) {
      FUN_02850410(*(long *)(lVar2 + 0xe6da8) + *(long *)(lVar2 + 0xe6da0),0);
      return 1;
    }
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
LAB_0265be6c:
      plVar4 = *(long **)(lVar6 + 0x20);
      if (plVar4 != (long *)0x0) {
        local_48 = *(ulong *)(lVar2 + 0xe6da0);
        local_40 = *(undefined8 *)(lVar2 + 0xe6da8);
        uStack_38 = 0x3c;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      }
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0xe6dc0);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 != 0) goto LAB_0265be6c;
    }
    FUN_02850410(*(long *)(lVar2 + 0xe6da8) + *(long *)(lVar2 + 0xe6da0),0);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    lVar2 = *(long *)(lVar2 + 0xe6dc0);
    goto joined_r0x0265bfa8;
  case 4:
    lVar6 = *(long *)(lVar2 + 0xe6e30);
    if (lVar6 == 0) {
      FUN_0285090c(*(long *)(lVar2 + 0xe6e18) + *(long *)(lVar2 + 0xe6e10),0);
      return 1;
    }
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
LAB_0265bebc:
      plVar4 = *(long **)(lVar6 + 0x20);
      if (plVar4 != (long *)0x0) {
        local_48 = *(ulong *)(lVar2 + 0xe6e10);
        local_40 = *(undefined8 *)(lVar2 + 0xe6e18);
        uStack_38 = 0x38;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      }
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0xe6e30);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 != 0) goto LAB_0265bebc;
    }
    FUN_0285090c(*(long *)(lVar2 + 0xe6e18) + *(long *)(lVar2 + 0xe6e10),0);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    lVar2 = *(long *)(lVar2 + 0xe6e30);
    goto joined_r0x0265bfa8;
  case 5:
    lVar6 = *(long *)(lVar2 + 0xe6ea0);
    if (lVar6 == 0) {
      FUN_028510f4(*(long *)(lVar2 + 0xe6e88) + *(long *)(lVar2 + 0xe6e80),0);
      return 1;
    }
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
LAB_0265bf0c:
      plVar4 = *(long **)(lVar6 + 0x20);
      if (plVar4 != (long *)0x0) {
        local_48 = *(ulong *)(lVar2 + 0xe6e80);
        local_40 = *(undefined8 *)(lVar2 + 0xe6e88);
        uStack_38 = 0x38;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      }
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0xe6ea0);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 != 0) goto LAB_0265bf0c;
    }
    FUN_028510f4(*(long *)(lVar2 + 0xe6e88) + *(long *)(lVar2 + 0xe6e80),0);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    lVar2 = *(long *)(lVar2 + 0xe6ea0);
    goto joined_r0x0265bfa8;
  case 6:
    lVar6 = *(long *)(lVar2 + 0xe6f10);
    if (lVar6 == 0) {
      FUN_0284c3b0(*(long *)(lVar2 + 0xe6ef8) + *(long *)(lVar2 + 0xe6ef0),0);
      return 1;
    }
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
LAB_0265bf60:
      plVar4 = *(long **)(lVar6 + 0x20);
      if (plVar4 != (long *)0x0) {
        local_48 = *(ulong *)(lVar2 + 0xe6ef0);
        local_40 = *(undefined8 *)(lVar2 + 0xe6ef8);
        uStack_38 = 0x3c;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      }
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0xe6f10);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar6 != 0) goto LAB_0265bf60;
    }
    FUN_0284c3b0(*(long *)(lVar2 + 0xe6ef8) + *(long *)(lVar2 + 0xe6ef0),0);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    lVar2 = *(long *)(lVar2 + 0xe6f10);
    goto joined_r0x0265bfa8;
  }
  lVar6 = *(long *)(lVar2 + 0xe6ce0);
  if (lVar6 == 0) {
    FUN_0284f760(*(long *)(lVar2 + 0xe6cc8) + *(long *)(lVar2 + 0xe6cc0),0);
    return 1;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
LAB_0265bdcc:
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_48 = *(ulong *)(lVar2 + 0xe6cc0);
      local_40 = *(undefined8 *)(lVar2 + 0xe6cc8);
      uStack_38 = 0x3c;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar2 + 0xe6ce0);
    uVar3 = uVar3 & 0xffffffff;
    if (lVar6 != 0) goto LAB_0265bdcc;
  }
  FUN_0284f760(*(long *)(lVar2 + 0xe6cc8) + *(long *)(lVar2 + 0xe6cc0),0);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  lVar2 = *(long *)(lVar2 + 0xe6ce0);
joined_r0x0265bfa8:
  if ((lVar2 != 0) && (*(undefined8 **)(lVar2 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar2 + 0x18))();
  }
  return 1;
}

