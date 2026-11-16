
void FUN_0266b270(byte *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  bVar7 = *param_1;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_38 = CONCAT71(local_38._1_7_,bVar7);
  lVar3 = FUN_02583354(DAT_055021a0,&local_38,1);
  if (lVar3 == 0) {
    return;
  }
  plVar1 = (long *)(lVar3 + 0x16188);
  lVar6 = *(long *)(lVar3 + 0x161a8);
  if (lVar6 == 0) {
    *(undefined1 *)(*(long *)(lVar3 + 0x16190) + *plVar1) = 0xff;
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar4 = *(long **)(lVar6 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar3 + 0x161a8) == 0) goto LAB_0266b30c;
    plVar4 = *(long **)(*(long *)(lVar3 + 0x161a8) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar3 + 0x16190);
    uStack_28 = 2;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
LAB_0266b30c:
  *(undefined1 *)(*(long *)(lVar3 + 0x16190) + *plVar1) = 0xff;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x161a8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x161a8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

