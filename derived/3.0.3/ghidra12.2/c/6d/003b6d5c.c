
void FUN_003b6d5c(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  uVar1 = nn::audio::IsVoiceValid((VoiceType *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    return;
  }
  nn::audio::SetVoicePriority((VoiceType *)(param_1 + 0x20),0xff - *(int *)(param_1 + 0xa4));
  return;
}

