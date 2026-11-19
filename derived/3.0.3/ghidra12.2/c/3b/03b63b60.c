
void FUN_03b63b60(long param_1)

{
  AudioRendererConfig *pAVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x7a) != '\0' && 0 < *(int *)(param_1 + 0xf8)) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar4 = *(long *)(param_1 + 0xf0) - (long)*(int *)(param_1 + 0xfc);
    }
    uVar2 = nn::audio::IsVoiceValid((VoiceType *)(lVar4 + 0x80));
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) != param_1 + 0xe8) {
        lVar3 = (long)*(int *)(param_1 + 0xfc);
        lVar4 = *(long *)(param_1 + 0xf0) - lVar3;
        pAVar1 = (AudioRendererConfig *)(DAT_05aebb88 + 0x98);
        do {
          if (*(long *)(lVar4 + 0x88) != 0) {
            nn::audio::ReleaseSplitter(pAVar1,(SplitterType *)(lVar4 + 0x88));
          }
          uVar2 = nn::audio::IsVoiceValid((VoiceType *)(lVar4 + 0x80));
          if ((uVar2 & 1) != 0) {
            nn::audio::ReleaseVoiceSlot(pAVar1,(VoiceType *)(lVar4 + 0x80));
          }
          lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
        } while (lVar4 != (param_1 + 0xe8) - (long)*(int *)(param_1 + 0xfc));
      }
    }
  }
  return;
}

