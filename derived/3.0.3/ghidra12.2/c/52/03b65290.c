
void FUN_03b65290(long param_1,int param_2)

{
  undefined1 uVar1;
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
      uVar1 = 2;
      if (param_2 != 3) {
        uVar1 = param_2 != 1;
      }
      if (*(long *)(param_1 + 0xf0) != param_1 + 0xe8) {
        lVar3 = (long)*(int *)(param_1 + 0xfc);
        lVar4 = *(long *)(param_1 + 0xf0) - lVar3;
        do {
          nn::audio::SetVoicePlayState(lVar4 + 0x80,uVar1);
          lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
        } while (lVar4 != (param_1 + 0xe8) - (long)*(int *)(param_1 + 0xfc));
      }
      *(int *)(param_1 + 0x74) = param_2;
      *(undefined1 *)(param_1 + 0x7d) = 0;
    }
  }
  return;
}

