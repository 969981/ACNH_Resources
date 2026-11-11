
uint FUN_003cdcbc(long *param_1,AudioRendererConfig *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  FUN_003c5228(auStack_58,param_5,param_6);
  uVar4 = FUN_003c4698(1,param_4);
  uVar4 = FUN_003c5234(auStack_58,uVar4,8);
  uVar5 = FUN_003c4698(1,param_4);
  FUN_003c46b0(param_1,1,param_4,uVar4,uVar5);
  *(undefined4 *)((long)param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 9) = 0;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = nn::audio::AcquireFinalMix(param_2,(FinalMixType *)(param_1 + 8),iVar2 * iVar1);
  return uVar3 & 1;
}

