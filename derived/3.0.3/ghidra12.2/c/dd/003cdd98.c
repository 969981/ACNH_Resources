
void FUN_003cdd98(long param_1,AudioRendererConfig *param_2)

{
  nn::audio::ReleaseFinalMix(param_2,(FinalMixType *)(param_1 + 0x40));
  FUN_003c4820(param_1);
  return;
}

