
void FUN_02675ed0(byte *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar1 = FUN_02583354(DAT_055021a0,local_14,1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
    lVar1 = *(long *)(lVar5 + 0x98);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x19548);
  }
  if (lVar1 == 0) {
    FUN_027fc240(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_2);
    return;
  }
  if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar1 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar5 + 0x98) == 0) goto LAB_02675f78;
    plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x17c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
LAB_02675f78:
  FUN_027fc240(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_2);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x98) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x98) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

