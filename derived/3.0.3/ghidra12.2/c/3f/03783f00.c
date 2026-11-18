
void FUN_03783f00(byte *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = PTR_DAT_04bb7648 + 0x10;
  local_40 = CONCAT62(local_40._2_6_,*DAT_05ab5ea8);
  lVar2 = FUN_03775a30(&local_48);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2 + 0x380 + (ulong)param_2 * 0x658;
  if (1 < param_2) {
    lVar1 = lVar2 + 0x380;
  }
  lVar2 = *(long *)(lVar1 + 0x610);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar1 + 0x610) == 0) goto LAB_03783fd0;
      plVar4 = *(long **)(*(long *)(lVar1 + 0x610) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(undefined **)(lVar1 + 0x5f0);
      local_40 = *(undefined8 *)(lVar1 + 0x5f8);
      local_38 = 4;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_03783fd0:
  *(undefined2 *)(*(long *)(lVar1 + 0x5f8) + *(long *)(lVar1 + 0x5f0)) =
       *(undefined2 *)(param_1 + 2);
  if ((*(long *)(lVar1 + 0x610) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar1 + 0x610) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined **)(lVar1 + 0x5f0);
    local_40 = *(undefined8 *)(lVar1 + 0x5f8);
    local_38 = 4;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar2 = *(long *)(lVar1 + 0x5f8) + *(long *)(lVar1 + 0x5f0);
  *(byte *)(lVar2 + 3) = *(byte *)(lVar2 + 3) & 0xfe | *param_1;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x610) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x610) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

