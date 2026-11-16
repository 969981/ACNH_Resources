
void FUN_0279a8e8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x18338);
  lVar5 = *(long *)(param_1 + 0x18358);
  if (lVar5 == 0) {
    FUN_02799500(*(long *)(param_1 + 0x18340) + *plVar1,&DAT_0548e140,param_2,param_3);
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar5 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(param_1 + 0x18358) == 0) goto LAB_0279a960;
    plVar3 = *(long **)(*(long *)(param_1 + 0x18358) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_48 = *plVar1;
    uStack_40 = *(undefined8 *)(param_1 + 0x18340);
    local_38 = 0x62ac;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
LAB_0279a960:
  FUN_02799500(*(long *)(param_1 + 0x18340) + *plVar1,&DAT_0548e140,param_2,param_3);
  if ((((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18358) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x18358) + 0x18), puVar4 != (undefined8 *)0x0))
  {
    (**(code **)*puVar4)();
  }
  return;
}

