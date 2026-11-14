
void FUN_016ca1d4(undefined1 param_1,byte *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_38;
  byte local_37;
  undefined2 local_36;
  undefined2 local_34;
  
  lVar2 = FUN_016c91a4();
  if (lVar2 == 0) {
    return;
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
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_016ca274;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar2 + 8);
      uStack_60 = *(undefined8 *)(lVar2 + 0x10);
      local_58 = 0x1638;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
    }
  }
LAB_016ca274:
  uVar1 = FUN_027789e0(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8),param_2);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  lVar6 = lVar2 + 0x70 + (ulong)uVar1 * 0x428;
  if (0x13 < uVar1) {
    lVar6 = lVar2 + 0x70;
  }
  lVar2 = *(long *)(lVar6 + 0x418);
  if (lVar2 == 0) {
    FUN_0273b320(*(long *)(lVar6 + 0x400) + *(long *)(lVar6 + 0x3f8),param_3,param_4);
    goto LAB_016ca364;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
joined_r0x016ca408:
    if (plVar4 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar6 + 0x3f8);
      uStack_60 = *(undefined8 *)(lVar6 + 0x400);
      local_58 = 0x100;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
    }
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar6 + 0x418) != 0) {
      plVar4 = *(long **)(*(long *)(lVar6 + 0x418) + 0x20);
      goto joined_r0x016ca408;
    }
  }
  FUN_0273b320(*(long *)(lVar6 + 0x400) + *(long *)(lVar6 + 0x3f8),param_3,param_4);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x418) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x418) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_016ca364:
  local_36 = FUN_020f1a90(*(long *)PTR_DAT_04bb2208 + 0x21e0,param_3);
  local_37 = *param_2;
  local_34 = (undefined2)param_4;
  uVar3 = (ulong)local_68 >> 0x30;
  if (7 < local_37) {
    local_37 = 0xff;
  }
  local_68 = CONCAT26((ushort)uVar3 & 0xff00,0xff0000000000);
  if (-1 < DAT_053d1580) {
    local_38 = param_1;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1580,&local_68,&local_38,6,0);
  }
  return;
}

