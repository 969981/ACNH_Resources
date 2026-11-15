
undefined8 FUN_01df8890(byte *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  byte local_54 [4];
  long local_50;
  SteadyClockTimePoint aSStack_48 [24];
  
  local_54[0] = *param_1;
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_54,1);
  if (lVar3 == 0) {
LAB_01df89c0:
    uVar7 = 0;
  }
  else {
    lVar6 = lVar3 + 0x194b0;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar6 + 0x248a8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x248a8), puVar4 == (undefined8 *)0x0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      uVar5 = uVar5 & 0xffffffff;
    }
    lVar3 = *(long *)(lVar6 + 0x24888);
    lVar1 = *(long *)(lVar6 + 0x24890);
    iVar2 = nn::time::GetStandardSteadyClockCurrentTimePoint(aSStack_48);
    if ((((iVar2 == 0) &&
         (iVar2 = nn::time::GetElapsedSecondsBetween
                            (&local_50,(SteadyClockTimePoint *)(lVar1 + lVar3 + 0x660),aSStack_48),
         iVar2 == 0)) && (-1 < local_50)) && (local_50 * 1000000000 < 0x2260ff9290000)) {
      if (((uVar5 & 1) == 0) || (*(long *)(lVar6 + 0x248a8) == 0)) goto LAB_01df89c0;
      puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x248a8) + 8);
      uVar7 = 0;
    }
    else {
      if (((uVar5 & 1) == 0) || (*(long *)(lVar6 + 0x248a8) == 0)) {
        return 1;
      }
      puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x248a8) + 8);
      uVar7 = 1;
    }
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
  }
  return uVar7;
}

