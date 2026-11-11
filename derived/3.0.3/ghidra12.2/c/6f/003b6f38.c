
void FUN_003b6f38(long param_1,undefined4 param_2)

{
  VoiceType *pVVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TBiquadFilterParameter local_3c [2];
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  
  pVVar1 = (VoiceType *)(param_1 + 0x20);
  uVar3 = nn::audio::IsVoiceValid(pVVar1);
  if ((((uVar3 & 1) != 0) && (*(int *)(param_1 + 0xa8) != 1)) &&
     ((*(int *)(param_1 + 0xa8) != 2 || (iVar2 = nn::audio::GetVoicePlayState(pVVar1), iVar2 != 0)))
     ) {
    fVar4 = *(float *)(param_1 + 0x2c);
    fVar6 = (float)NEON_fminnm(fVar4,0x43000000);
    fVar5 = -128.0;
    if (-128.0 <= fVar4) {
      fVar5 = fVar6;
    }
    nn::audio::SetVoiceVolume(pVVar1,fVar5);
    fVar4 = *(float *)(param_1 + 0x30);
    fVar5 = 0.0625;
    if (0.0625 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar6 = 16.0;
    if (fVar4 <= 16.0) {
      fVar6 = fVar5;
    }
    nn::audio::SetVoicePitch(pVVar1,fVar6);
    local_3a = *(undefined2 *)(param_1 + 0x96);
    local_38 = *(undefined4 *)(param_1 + 0x98);
    uStack_34 = *(undefined4 *)(param_1 + 0x9c);
    local_3c[0] = *(TBiquadFilterParameter *)(param_1 + 0x95);
    nn::audio::SetVoiceBiquadFilterParameter(pVVar1,0,local_3c);
    FUN_003b7174(param_1,(float *)(param_1 + 0x2c));
    FUN_003b7240(param_1,param_1 + 0x34,param_2);
  }
  return;
}

