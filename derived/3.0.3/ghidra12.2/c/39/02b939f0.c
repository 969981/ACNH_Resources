
void FUN_02b939f0(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *local_40;
  undefined2 local_38;
  
  local_40 = PTR_DAT_04bb7648 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar7 == 0)) {
    puVar1 = (undefined2 *)(lVar6 + 0x2c);
    if ((*(ushort *)(lVar6 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar6 + 0x2a);
    }
    local_38 = *puVar1;
  }
  else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
          (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar4 == (undefined8 *)0x0)) {
    local_38 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    local_38 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  lVar6 = FUN_03775a30(&local_40);
  if (lVar6 == 0) {
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    param_1[1] = uVar2;
  }
  else {
    if ((*(long **)(lVar6 + 0x1b0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x1b0), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 ^ 1;
    }
    lVar7 = *(long *)(lVar6 + 0x198) + *(long *)(lVar6 + 400);
    uVar2 = *(undefined4 *)(lVar7 + 0x10);
    *param_1 = *(undefined4 *)(lVar7 + 0xc);
    param_1[1] = uVar2;
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x1b0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x1b0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return;
}

