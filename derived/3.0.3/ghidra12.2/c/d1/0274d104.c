
void FUN_0274d104(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = (long *)(lVar2 + 0x18300);
  lVar6 = *(long *)(lVar2 + 0x18320);
  if (lVar6 == 0) {
    FUN_0274d230(*(long *)(lVar2 + 0x18308) + *plVar1,param_2,param_3,param_1);
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar6 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar2 + 0x18320) == 0) goto LAB_0274d1a0;
    plVar4 = *(long **)(*(long *)(lVar2 + 0x18320) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar2 + 0x18308);
    uStack_48 = 0x1000;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  }
LAB_0274d1a0:
  FUN_0274d230(*(long *)(lVar2 + 0x18308) + *plVar1,param_2,param_3,param_1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x18320) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18320) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

