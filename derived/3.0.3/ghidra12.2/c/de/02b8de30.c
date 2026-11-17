
/* WARNING: Removing unreachable block (ram,0x02b8decc) */
/* WARNING: Removing unreachable block (ram,0x02b8de84) */
/* WARNING: Removing unreachable block (ram,0x02b8de60) */
/* WARNING: Removing unreachable block (ram,0x02b8dea8) */
/* WARNING: Removing unreachable block (ram,0x02b8def0) */

void FUN_02b8de30(int param_1,undefined2 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_14;
  
  local_48 = CONCAT44(local_48._4_4_,param_1);
  if ((((DAT_05641c34 != param_1) && (DAT_05641c38 != param_1)) && (DAT_05641c3c != param_1)) &&
     ((DAT_05641c40 != param_1 && (DAT_05641c44 != param_1)))) {
    return;
  }
  local_14 = 5;
  uVar2 = FUN_02b900e0(&local_14,param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (local_14 == 5) {
    return;
  }
  lVar3 = FUN_03776400();
  if (lVar3 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar3 + 0x28);
  if (lVar6 == 0) {
    *(undefined2 *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x4018) = param_2;
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar3 + 0x28);
    uVar1 = uVar1 ^ 1;
    if (lVar6 == 0) goto LAB_02b8dfa0;
  }
  plVar4 = *(long **)(lVar6 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar3 + 8);
    uStack_40 = *(undefined8 *)(lVar3 + 0x10);
    local_38 = 0x408c;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_02b8dfa0:
  *(undefined2 *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x4018) = param_2;
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

