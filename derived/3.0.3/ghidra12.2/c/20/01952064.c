
void FUN_01952064(undefined8 param_1,uint param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = PTR_DAT_04bb7648 + 0x10;
  local_40 = CONCAT62(local_40._2_6_,*DAT_05ab5ea8);
  lVar3 = FUN_03775a30(&local_48);
  if (0xb < (int)param_2) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  lVar2 = lVar3 + 0x1340 + (ulong)param_2 * 0x38;
  if (0xb < param_2) {
    lVar2 = lVar3 + 0x1340;
  }
  lVar3 = *(long *)(lVar2 + 0x28);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_01952138;
      plVar5 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined **)(lVar2 + 8);
      local_40 = *(undefined8 *)(lVar2 + 0x10);
      local_38 = 8;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_01952138:
  puVar1 = (undefined2 *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
  *puVar1 = *param_3;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 2);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

