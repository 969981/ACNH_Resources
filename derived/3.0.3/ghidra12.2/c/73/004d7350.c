
void FUN_004d7350(float param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_2[1] != 0) {
    uVar1 = FUN_00428440();
    if ((uVar1 & 0x1f) == 5) {
      uVar3 = *param_2;
      uVar2 = param_2[1];
      uVar1 = param_2[2];
      if ((uVar1 & 1) != 0) {
        FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
        uVar1 = param_2[2];
      }
      goto LAB_004d73ac;
    }
  }
  uVar2 = 0;
  uVar3 = 0;
  uVar1 = 0;
LAB_004d73ac:
  plVar4 = (long *)(uVar1 & 0xfffffffffffffffe);
  (**(code **)(*plVar4 + 0x30))((double)param_1,plVar4,uVar3,uVar2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0043dd50(plVar4);
  return;
}

