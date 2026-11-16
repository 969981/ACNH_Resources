
void FUN_027533a8(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    return;
  }
  lVar2 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_4c,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar6 + 0x2acf0);
  lVar2 = *(long *)(lVar6 + 0x2ad10);
  if (lVar2 == 0) {
    FUN_027534e0(*(long *)(lVar6 + 0x2acf8) + *plVar1,param_2,param_3);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar6 + 0x2ad10) == 0) goto LAB_0275346c;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x2ad10) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar6 + 0x2acf8);
    uStack_38 = 0x200;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_0275346c:
  FUN_027534e0(*(long *)(lVar6 + 0x2acf8) + *plVar1,param_2,param_3);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2ad10) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2ad10) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

