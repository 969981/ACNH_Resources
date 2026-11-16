
void FUN_0279a7c4(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = (long *)(lVar2 + 0x18338);
  lVar6 = *(long *)(lVar2 + 0x18358);
  if (lVar6 == 0) {
    FUN_02799500(*(long *)(lVar2 + 0x18340) + *plVar1,&DAT_0548e140,param_2,param_3);
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar6 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar2 + 0x18358) == 0) goto LAB_0279a85c;
    plVar4 = *(long **)(*(long *)(lVar2 + 0x18358) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar2 + 0x18340);
    uStack_38 = 0x62ac;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_0279a85c:
  FUN_02799500(*(long *)(lVar2 + 0x18340) + *plVar1,&DAT_0548e140,param_2,param_3);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x18358) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18358) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

