
void FUN_0267d190(byte *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  byte local_3c [4];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_3c[0] = *param_1;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  lVar1 = FUN_02583354(DAT_055021a0,local_3c,1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
    lVar1 = *(long *)(lVar5 + 0x178);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x19628);
  }
  if (lVar1 == 0) {
    FUN_026824a0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    return;
  }
  if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar1 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar5 + 0x178) == 0) goto LAB_0267d234;
    plVar3 = *(long **)(*(long *)(lVar5 + 0x178) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_38 = *(undefined8 *)(lVar5 + 0x158);
    uStack_30 = *(undefined8 *)(lVar5 + 0x160);
    local_28 = 0x11944;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
  }
LAB_0267d234:
  FUN_026824a0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x178) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x178) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

