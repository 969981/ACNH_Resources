
void FUN_0375eb14(void)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *local_48;
  undefined2 local_40;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_48 = PTR_DAT_04bb7648 + 0x10;
  lVar5 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar6 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar6 == 0)) {
    puVar1 = (undefined2 *)(lVar5 + 0x2c);
    if ((*(ushort *)(lVar5 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar5 + 0x2a);
    }
    local_40 = *puVar1;
  }
  else if ((*(long **)(lVar6 + 0x60) == (long *)0x0) ||
          (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x60), puVar2 == (undefined8 *)0x0)) {
    local_40 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_40 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar5 = FUN_03775a30(&local_48);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar5 + 0x108);
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
      if (*(long *)(lVar5 + 0x108) == 0) goto LAB_0375ec50;
      plVar4 = *(long **)(*(long *)(lVar5 + 0x108) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_38 = *(ulong *)(lVar5 + 0xe8);
      uStack_30 = *(undefined8 *)(lVar5 + 0xf0);
      local_28 = 0x48a8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
  }
LAB_0375ec50:
  local_38 = local_38 & 0xffffffff00000000;
  *(ushort *)(*(long *)(lVar5 + 0xf0) + *(long *)(lVar5 + 0xe8)) =
       *(ushort *)(*(long *)(lVar5 + 0xf0) + *(long *)(lVar5 + 0xe8)) | 1;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x108) != 0)) &&
     (puVar2 = *(undefined8 **)(*(long *)(lVar5 + 0x108) + 0x18), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)();
  }
  return;
}

