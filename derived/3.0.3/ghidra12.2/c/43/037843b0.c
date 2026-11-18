
void FUN_037843b0(undefined2 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = PTR_DAT_04bb7648 + 0x10;
  local_40 = CONCAT62(local_40._2_6_,*DAT_05ab5ea8);
  lVar3 = FUN_03775a30(&local_48);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = lVar3 + 0x380 + (ulong)param_2 * 0x658;
  if (1 < param_2) {
    lVar1 = lVar3 + 0x380;
  }
  lVar3 = *(long *)(lVar1 + 0x648);
  if (lVar3 == 0) {
    *(undefined2 *)(*(long *)(lVar1 + 0x630) + *(long *)(lVar1 + 0x628)) = *param_1;
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar4 = *(long **)(lVar3 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar1 + 0x648) == 0) goto LAB_03784468;
    plVar4 = *(long **)(*(long *)(lVar1 + 0x648) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *(undefined **)(lVar1 + 0x628);
    local_40 = *(undefined8 *)(lVar1 + 0x630);
    local_38 = 4;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_03784468:
  *(undefined2 *)(*(long *)(lVar1 + 0x630) + *(long *)(lVar1 + 0x628)) = *param_1;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar1 + 0x648) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x648) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

