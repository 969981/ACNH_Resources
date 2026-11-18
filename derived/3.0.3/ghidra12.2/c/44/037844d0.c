
void FUN_037844d0(undefined2 *param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = CONCAT44(local_48._4_4_,param_2);
  if (param_2 == 5) {
    return;
  }
  if (param_2 == 6) {
    return;
  }
  lVar3 = FUN_03776400();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = lVar3 + 0x70 + (ulong)param_3 * 0x658;
  if (2 < param_3) {
    lVar1 = lVar3 + 0x70;
  }
  lVar3 = *(long *)(lVar1 + 0x648);
  if (lVar3 == 0) {
    *(undefined2 *)(*(long *)(lVar1 + 0x630) + *(long *)(lVar1 + 0x628)) = *param_1;
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    lVar3 = *(long *)(lVar1 + 0x648);
    uVar2 = uVar2 ^ 1;
    if (lVar3 == 0) goto LAB_03784598;
  }
  plVar4 = *(long **)(lVar3 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar1 + 0x628);
    uStack_40 = *(undefined8 *)(lVar1 + 0x630);
    local_38 = 4;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_03784598:
  *(undefined2 *)(*(long *)(lVar1 + 0x630) + *(long *)(lVar1 + 0x628)) = *param_1;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar1 + 0x648) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x648) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

