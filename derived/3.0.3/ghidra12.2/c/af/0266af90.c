
void FUN_0266af90(byte *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  byte bVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  bVar6 = *param_1;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_38 = CONCAT71(local_38._1_7_,bVar6);
  lVar1 = FUN_02583354(DAT_055021a0,&local_38,1);
  if (7 < param_2) {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  lVar1 = lVar1 + (ulong)param_2 * 0x2450;
  lVar5 = *(long *)(lVar1 + 0x3f28);
  if (lVar5 == 0) {
    FUN_026e8094(*(long *)(lVar1 + 0x3f10) + *(long *)(lVar1 + 0x3f08));
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar5 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar1 + 0x3f28) == 0) goto LAB_0266b040;
    plVar3 = *(long **)(*(long *)(lVar1 + 0x3f28) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_38 = *(undefined8 *)(lVar1 + 0x3f08);
    local_30 = *(undefined8 *)(lVar1 + 0x3f10);
    uStack_28 = 0x11f8;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
  }
LAB_0266b040:
  FUN_026e8094(*(long *)(lVar1 + 0x3f10) + *(long *)(lVar1 + 0x3f08));
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x3f28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x3f28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

