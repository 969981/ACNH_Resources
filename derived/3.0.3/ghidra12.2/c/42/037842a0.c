
void FUN_037842a0(undefined2 *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = PTR_DAT_04bb7648 + 0x10;
  local_40 = CONCAT62(local_40._2_6_,*DAT_05ab5ea8);
  lVar2 = FUN_03775a30(&local_48);
  if (lVar2 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar2 + 0x12f8);
  if (lVar5 == 0) {
    *(undefined2 *)(*(long *)(lVar2 + 0x12e0) + *(long *)(lVar2 + 0x12d8)) = *param_1;
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar1 = 1;
    plVar3 = *(long **)(lVar5 + 0x20);
  }
  else {
    uVar1 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar1 = uVar1 ^ 1;
    if (*(long *)(lVar2 + 0x12f8) == 0) goto LAB_03784340;
    plVar3 = *(long **)(*(long *)(lVar2 + 0x12f8) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_48 = *(undefined **)(lVar2 + 0x12d8);
    local_40 = *(undefined8 *)(lVar2 + 0x12e0);
    local_38 = 4;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
LAB_03784340:
  *(undefined2 *)(*(long *)(lVar2 + 0x12e0) + *(long *)(lVar2 + 0x12d8)) = *param_1;
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x12f8) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x12f8) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

