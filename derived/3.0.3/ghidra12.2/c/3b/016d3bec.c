
void FUN_016d3bec(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  byte bVar8;
  char local_50 [4];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar3 = DAT_053f9928;
  if (DAT_053f9928 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x18))();
  uVar1 = FUN_006bd550(param_1[1],0);
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  lVar3 = FUN_0079e4d0(lVar3,&local_48);
  if (lVar3 == 0) {
    return;
  }
  local_50[0] = '\0';
  local_4c = 0xffffffff;
  uVar4 = FUN_016d0eb0(local_50,param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (local_50[0] == '\0') {
    return;
  }
  lVar3 = FUN_016c6a84(local_50);
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + 0x28);
    if (lVar7 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        lVar7 = *(long *)(lVar3 + 0x28);
        uVar4 = uVar4 & 0xffffffff;
        if (lVar7 == 0) goto LAB_016d3cdc;
      }
      plVar6 = *(long **)(lVar7 + 0x20);
      if (plVar6 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar3 + 8);
        uStack_40 = *(undefined8 *)(lVar3 + 0x10);
        local_38 = 0x158c;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
      }
    }
LAB_016d3cdc:
    bVar8 = 4;
    if ((param_2 & 1) == 0) {
      bVar8 = 0;
    }
    *(byte *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8)) =
         *(byte *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8)) & 0xfb | bVar8;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  iVar2 = FUN_016d2640(param_1,0);
  if (iVar2 == -1) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + (long)iVar2 * 0xcb0;
    lVar7 = lVar3 + 0x211c90;
    lVar3 = *(long *)(lVar3 + 0x211cf0);
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + (long)iVar2 * 0xcb0;
    lVar7 = lVar3 + 0x211c20;
    lVar3 = *(long *)(lVar3 + 0x211c80);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      lVar3 = *(long *)(lVar7 + 0x60);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar3 == 0) goto LAB_016d3e08;
    }
    plVar6 = *(long **)(lVar3 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar7 + 0x40);
      uStack_40 = *(undefined8 *)(lVar7 + 0x48);
      local_38 = 0x158c;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_016d3e08:
  bVar8 = 4;
  if ((param_2 & 1) == 0) {
    bVar8 = 0;
  }
  *(byte *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40)) =
       *(byte *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40)) & 0xfb | bVar8;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

