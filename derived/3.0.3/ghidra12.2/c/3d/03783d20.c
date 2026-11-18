
void FUN_03783d20(byte *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined2 uVar5;
  long lVar6;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = &PTR_LAB_04942240;
  if (DAT_05ab5ea8 == 0) {
    return;
  }
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
     (lVar6 = *(long *)(DAT_05ab7608 + 8), lVar6 == 0)) {
    uVar5 = *(undefined2 *)(DAT_05ab5ea8 + 0x2a);
  }
  else if ((*(long **)(lVar6 + 0x60) == (long *)0x0) ||
          (puVar1 = (undefined8 *)**(long **)(lVar6 + 0x60), puVar1 == (undefined8 *)0x0)) {
    uVar5 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
  }
  else {
    uVar2 = (**(code **)*puVar1)();
    uVar5 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
       (puVar1 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 8), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
    }
  }
  local_40 = CONCAT62(local_40._2_6_,uVar5);
  lVar6 = FUN_03775a30(&local_48);
  if (lVar6 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar6 + 0x12c0);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar6 + 0x12c0) == 0) goto LAB_03783e58;
      plVar3 = *(long **)(*(long *)(lVar6 + 0x12c0) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined ***)(lVar6 + 0x12a0);
      local_40 = *(undefined8 *)(lVar6 + 0x12a8);
      local_38 = 4;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_03783e58:
  *(undefined2 *)(*(long *)(lVar6 + 0x12a8) + *(long *)(lVar6 + 0x12a0)) =
       *(undefined2 *)(param_1 + 2);
  if ((*(long *)(lVar6 + 0x12c0) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar6 + 0x12c0) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined ***)(lVar6 + 0x12a0);
    local_40 = *(undefined8 *)(lVar6 + 0x12a8);
    local_38 = 4;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  lVar4 = *(long *)(lVar6 + 0x12a8) + *(long *)(lVar6 + 0x12a0);
  *(byte *)(lVar4 + 3) = *(byte *)(lVar4 + 3) & 0xfe | *param_1;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar6 + 0x12c0) != 0)) &&
     (puVar1 = *(undefined8 **)(*(long *)(lVar6 + 0x12c0) + 0x18), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)();
  }
  return;
}

