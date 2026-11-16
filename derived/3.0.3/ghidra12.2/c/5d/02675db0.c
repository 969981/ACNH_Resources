
void FUN_02675db0(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(*(long *)puVar1 + 0x20);
    lVar2 = *(long *)(lVar6 + 0x98);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x19548);
  }
  if (lVar2 == 0) {
    FUN_027fbef0(*(long *)(lVar6 + 0x80) + *(long *)(lVar6 + 0x78),param_2);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar6 + 0x98) == 0) goto LAB_02675e48;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x98) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar6 + 0x78);
    uStack_40 = *(undefined8 *)(lVar6 + 0x80);
    local_38 = 0x17c;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_02675e48:
  FUN_027fbef0(*(long *)(lVar6 + 0x80) + *(long *)(lVar6 + 0x78),param_2);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x98) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x98) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

