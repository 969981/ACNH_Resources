
undefined8 FUN_02b945b0(int param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined *local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_58 = PTR_DAT_04bb7648 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar10 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar10 == 0)) {
    puVar1 = (undefined2 *)(lVar6 + 0x2c);
    if ((*(ushort *)(lVar6 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar6 + 0x2a);
    }
    local_50 = *puVar1;
  }
  else if ((*(long **)(lVar10 + 0x60) == (long *)0x0) ||
          (puVar3 = (undefined8 *)**(long **)(lVar10 + 0x60), puVar3 == (undefined8 *)0x0)) {
    local_50 = *(undefined2 *)(*(long *)(lVar10 + 0x48) + *(long *)(lVar10 + 0x40) + 2);
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    local_50 = *(undefined2 *)(*(long *)(lVar10 + 0x48) + *(long *)(lVar10 + 0x40) + 2);
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x60) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar10 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  lVar6 = FUN_03775a30(&local_58);
  if (lVar6 == 0) {
    return 0;
  }
  if ((*(long *)(lVar6 + 0x108) == 0) ||
     (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x108) + 0x10), puVar3 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar3)();
    uVar2 = uVar2 ^ 1;
  }
  lVar10 = *(long *)PTR_DAT_04bb5008;
  if (*(int *)(lVar10 + 0x26708) == param_1) {
    uVar9 = 0;
    uVar8 = 0;
    lVar10 = *(long *)(lVar6 + 0x108);
  }
  else if (*(int *)(lVar10 + 0x2670c) == param_1) {
    uVar9 = 1;
    uVar8 = 1;
    lVar10 = *(long *)(lVar6 + 0x108);
  }
  else if (*(int *)(lVar10 + 0x26710) == param_1) {
    uVar9 = 2;
    uVar8 = 2;
    lVar10 = *(long *)(lVar6 + 0x108);
  }
  else {
    if (*(int *)(lVar10 + 0x26714) != param_1) {
      uVar7 = 0;
      goto joined_r0x02b947dc;
    }
    uVar9 = 3;
    uVar8 = 3;
    lVar10 = *(long *)(lVar6 + 0x108);
  }
  if ((lVar10 != 0) && (plVar5 = *(long **)(lVar10 + 0x20), uVar8 = uVar9, plVar5 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar6 + 0xe8);
    uStack_40 = *(undefined8 *)(lVar6 + 0xf0);
    local_38 = 0x48a8;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  }
  local_48 = CONCAT44(local_48._4_4_,uVar8);
  uVar4 = (ulong)uVar8;
  if (3 < uVar8) {
    uVar4 = 0;
  }
  *(undefined2 *)(*(long *)(lVar6 + 0xf0) + *(long *)(lVar6 + 0xe8) + uVar4 * 2 + 0x4238) = param_2;
  uVar7 = 1;
joined_r0x02b947dc:
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x108) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x108) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return uVar7;
}

