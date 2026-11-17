
undefined2 FUN_02b943c0(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined2 uVar7;
  long lVar8;
  undefined *local_40;
  undefined2 local_38;
  
  local_40 = PTR_DAT_04bb7648 + 0x10;
  lVar5 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar8 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar8 == 0)) {
    puVar1 = (undefined2 *)(lVar5 + 0x2c);
    if ((*(ushort *)(lVar5 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar5 + 0x2a);
    }
    local_38 = *puVar1;
  }
  else if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
          (puVar3 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar3 == (undefined8 *)0x0)) {
    local_38 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    local_38 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  lVar5 = FUN_03775b80(&local_40);
  if (lVar5 == 0) {
    return 0xffff;
  }
  if ((*(long **)(lVar5 + 0x108) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar5 + 0x108), puVar3 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar3)();
    uVar2 = uVar2 ^ 1;
  }
  lVar8 = *(long *)PTR_DAT_04bb5008;
  if (*(int *)(lVar8 + 0x26708) == param_1) {
    uVar6 = 0;
  }
  else if (*(int *)(lVar8 + 0x2670c) == param_1) {
    uVar6 = 1;
  }
  else if (*(int *)(lVar8 + 0x26710) == param_1) {
    uVar6 = 2;
  }
  else {
    if (*(int *)(lVar8 + 0x26714) != param_1) {
      uVar7 = 0xffff;
      goto joined_r0x02b9459c;
    }
    uVar6 = 3;
  }
  uVar4 = (ulong)uVar6;
  if (3 < uVar6) {
    uVar4 = 0;
  }
  uVar7 = *(undefined2 *)(*(long *)(lVar5 + 0xf0) + *(long *)(lVar5 + 0xe8) + uVar4 * 2 + 0x4238);
joined_r0x02b9459c:
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0x108) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x108) + 8), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return uVar7;
}

