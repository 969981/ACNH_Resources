
void FUN_0036a120(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  char acStack_c8 [136];
  
  nn::util::SNPrintf(acStack_c8,0x88,"%s_%s.bflan",param_1[6],param_3);
  uVar2 = (**(code **)(*(long *)param_1[8] + 0x50))((long *)param_1[8],0x616e696d,acStack_c8);
  FUN_00360020(acStack_c8,uVar2);
  uVar3 = FUN_0036013c(acStack_c8);
  lVar1 = 0x90;
  if ((uVar3 & 0xfffe) == 0) {
    lVar1 = 0x88;
  }
  (**(code **)(*param_1 + lVar1))(param_1,param_2,param_3,acStack_c8,param_4);
  return;
}

