
void FUN_016ca410(undefined1 param_1,byte *param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_38;
  byte local_37;
  undefined2 local_36;
  undefined2 local_34;
  
  lVar4 = FUN_016c91a4();
  if (lVar4 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar4 + 0x28);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_016ca4b0;
      plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar4 + 8);
      uStack_60 = *(undefined8 *)(lVar4 + 0x10);
      local_58 = 0x1638;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
    }
  }
LAB_016ca4b0:
  uVar3 = FUN_027789e0(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_2);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  lVar8 = lVar4 + 0x70 + (ulong)uVar3 * 0x428;
  if (0x13 < uVar3) {
    lVar8 = lVar4 + 0x70;
  }
  lVar4 = *(long *)(lVar8 + 0x418);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar8 + 0x418) == 0) goto LAB_016ca564;
      plVar6 = *(long **)(*(long *)(lVar8 + 0x418) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar8 + 0x3f8);
      uStack_60 = *(undefined8 *)(lVar8 + 0x400);
      local_58 = 0x100;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
    }
  }
LAB_016ca564:
  FUN_0273b5a0(*(long *)(lVar8 + 0x400) + *(long *)(lVar8 + 0x3f8),param_3,param_4);
  if ((*(long *)(lVar8 + 0x418) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar8 + 0x418) + 0x20), plVar6 != (long *)0x0)) {
    local_68 = *(undefined8 *)(lVar8 + 0x3f8);
    uStack_60 = *(undefined8 *)(lVar8 + 0x400);
    local_58 = 0x100;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
  }
  uVar2 = FUN_0273b1b0(*(long *)(lVar8 + 0x400) + *(long *)(lVar8 + 0x3f8),param_3);
  local_36 = FUN_020f1a90(*(long *)PTR_DAT_04bb2208 + 0x21e0,param_3);
  local_37 = *param_2;
  uVar1 = (ulong)local_68 >> 0x30;
  if (7 < local_37) {
    local_37 = 0xff;
  }
  local_68 = CONCAT26((ushort)uVar1 & 0xff00,0xff0000000000);
  local_38 = param_1;
  local_34 = uVar2;
  if (-1 < DAT_053d1580) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1580,&local_68,&local_38,6,0);
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x418) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x418) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

