
ushort FUN_03772b50(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  undefined *local_38;
  undefined2 local_30;
  undefined4 local_24;
  
  local_38 = PTR_DAT_04bb7648 + 0x10;
  lVar5 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar7 == 0)) {
    puVar1 = (undefined2 *)(lVar5 + 0x2c);
    if ((*(ushort *)(lVar5 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar5 + 0x2a);
    }
    local_30 = *puVar1;
  }
  else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
          (puVar3 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar3 == (undefined8 *)0x0)) {
    local_30 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    local_30 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  lVar5 = FUN_03775b80(&local_38);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if ((*(long **)(lVar5 + 0xa00) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar5 + 0xa00), puVar3 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar3)();
      uVar2 = uVar2 ^ 1;
    }
    local_24 = 0;
    uVar6 = *(ushort *)(*(long *)(lVar5 + 0x9e8) + *(long *)(lVar5 + 0x9e0) + 0x153c) & 1;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0xa00) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0xa00) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return uVar6;
}

