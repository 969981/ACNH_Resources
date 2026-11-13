
long FUN_01367570(void)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *local_30;
  undefined2 local_28;
  
  local_30 = PTR_DAT_04bb7648 + 0x10;
  lVar4 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar5 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar5 == 0)) {
    puVar1 = (undefined2 *)(lVar4 + 0x2c);
    if ((*(ushort *)(lVar4 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar4 + 0x2a);
    }
    local_28 = *puVar1;
  }
  else if ((*(long **)(lVar5 + 0x60) == (long *)0x0) ||
          (puVar2 = (undefined8 *)**(long **)(lVar5 + 0x60), puVar2 == (undefined8 *)0x0)) {
    local_28 = *(undefined2 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40) + 2);
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_28 = *(undefined2 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40) + 2);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x60) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar5 + 0x60) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar5 = FUN_03775a30(&local_30);
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar4 = lVar5 + 0x150;
  }
  return lVar4;
}

