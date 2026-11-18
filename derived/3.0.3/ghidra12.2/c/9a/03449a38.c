
void FUN_03449a38(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  undefined8 *local_68 [6];
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0x10))(param_2,local_68);
  bVar7 = *(byte *)(param_1 + 8);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_38 = CONCAT71(local_38._1_7_,bVar7);
  lVar2 = FUN_02583354(DAT_055021a0,&local_38,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar6 + 0x8428);
  lVar2 = *(long *)(lVar6 + 0x8448);
  if (lVar2 == 0) {
    (*(code *)*local_68[0])(local_68,*(long *)(lVar6 + 0x8430) + *plVar1);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar6 + 0x8448) == 0) goto LAB_03449b10;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x8448) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar6 + 0x8430);
    uStack_28 = 0x3c8;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
LAB_03449b10:
  (*(code *)*local_68[0])(local_68,*(long *)(lVar6 + 0x8430) + *plVar1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x8448) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x8448) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

