
void FUN_01df89e0(byte *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_3c [4];
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_3c[0] = *param_1;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_3c,1);
  if (lVar3 == 0) {
    return;
  }
  iVar2 = nn::time::GetStandardSteadyClockCurrentTimePoint((SteadyClockTimePoint *)&local_58);
  if (iVar2 != 0) {
    return;
  }
  lVar7 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar7 + 0x24888);
  lVar3 = *(long *)(lVar7 + 0x248a8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar7 + 0x24890) + *plVar1;
    *(undefined8 *)(lVar3 + 0x660) = local_58;
    *(undefined8 *)(lVar3 + 0x668) = uStack_50;
    *(undefined8 *)(lVar3 + 0x670) = local_48;
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    lVar3 = *(long *)(lVar7 + 0x248a8);
    uVar4 = uVar4 & 0xffffffff;
    if (lVar3 == 0) goto LAB_01df8ae4;
  }
  plVar5 = *(long **)(lVar3 + 0x20);
  if (plVar5 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar7 + 0x24890);
    uStack_28 = 0x680;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
  }
LAB_01df8ae4:
  lVar3 = *(long *)(lVar7 + 0x24890) + *plVar1;
  *(undefined8 *)(lVar3 + 0x660) = local_58;
  *(undefined8 *)(lVar3 + 0x668) = uStack_50;
  *(undefined8 *)(lVar3 + 0x670) = local_48;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x248a8) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x248a8) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

