
void FUN_02752ae0(byte *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_3c [4];
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_3c[0] = *param_1;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_3c,1);
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
    FUN_02752c00(*(long *)(lVar6 + 0x2acf8) + *plVar1);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar6 + 0x2ad10) == 0) goto LAB_02752b9c;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x2ad10) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar6 + 0x2acf8);
    uStack_28 = 0x200;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
LAB_02752b9c:
  FUN_02752c00(*(long *)(lVar6 + 0x2acf8) + *plVar1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2ad10) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2ad10) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

