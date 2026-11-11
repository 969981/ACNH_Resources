
float FUN_004da8f0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  double local_38;
  
  if (param_1[1] != 0) {
    uVar1 = FUN_00428440();
    if ((uVar1 & 0x1f) == 5) {
      uVar3 = *param_1;
      uVar2 = param_1[1];
      uVar1 = param_1[2];
      if ((uVar1 & 1) != 0) {
        FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
        uVar1 = param_1[2];
      }
      goto LAB_004da948;
    }
  }
  uVar2 = 0;
  uVar3 = 0;
  uVar1 = 0;
LAB_004da948:
  local_38 = 0.0;
  plVar4 = (long *)(uVar1 & 0xfffffffffffffffe);
  (**(code **)(*plVar4 + 0x38))(plVar4,uVar3,uVar2,&local_38);
  fVar5 = (float)local_38;
  if ((uVar1 & 1) != 0) {
    FUN_0043dd50(plVar4);
  }
  return fVar5;
}

