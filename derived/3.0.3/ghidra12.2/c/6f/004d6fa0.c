
void FUN_004d6fa0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_50;
  ulong uStack_48;
  
  if (param_1[1] != 0) {
    uVar1 = FUN_00428440();
    if ((uVar1 & 0x1f) == 4) {
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar1 = param_1[2];
      if ((uVar1 & 1) != 0) {
        FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
        uVar1 = param_1[2];
      }
      goto LAB_004d7000;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar1 = 0;
LAB_004d7000:
  local_50 = -param_2;
  if (-1 < (long)param_2) {
    local_50 = param_2;
  }
  uStack_48 = param_2 >> 0x3f;
  plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar3,uVar4,&local_50);
  if ((uVar1 & 1) != 0) {
    FUN_0043dd50(plVar2);
  }
  return;
}

