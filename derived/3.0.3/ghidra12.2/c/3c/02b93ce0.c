
bool FUN_02b93ce0(void)

{
  undefined2 *puVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *local_38;
  undefined2 local_30;
  uint local_24;
  
  local_38 = PTR_DAT_04bb7648 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar7 == 0)) {
    puVar1 = (undefined2 *)(lVar6 + 0x2c);
    if ((*(ushort *)(lVar6 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar6 + 0x2a);
    }
    local_30 = *puVar1;
  }
  else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
          (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar4 == (undefined8 *)0x0)) {
    local_30 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    local_30 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  local_24 = 0;
  lVar6 = FUN_03775b80(&local_38);
  if (lVar6 == 0) {
    bVar2 = true;
  }
  else {
    lVar7 = lVar6 + 0x380 + (ulong)local_24 * 0x658;
    if (1 < local_24) {
      lVar7 = lVar6 + 0x380;
    }
    if ((*(long **)(lVar7 + 0x140) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x140), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 ^ 1;
    }
    local_24 = *(byte *)(*(long *)(lVar7 + 0x128) + *(long *)(lVar7 + 0x120) + 0x20) >> 1 & 7;
    bVar2 = local_24 != 2;
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x140) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x140) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return bVar2;
}

