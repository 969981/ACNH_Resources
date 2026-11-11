
void FUN_003b6ec0(long param_1,int param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 0xa8) = param_2;
  if (param_2 == 1) {
    if (*(char *)(param_1 + 0x29) != '\0') {
      lVar1 = FUN_03b38a74();
      nn::audio::ReleaseVoiceSlot
                ((AudioRendererConfig *)(lVar1 + 0x18),(VoiceType *)(param_1 + 0x20));
      *(undefined1 *)(param_1 + 0x29) = 0;
      return;
    }
  }
  else if ((param_2 == 0) && (*(char *)(param_1 + 0x29) == '\0')) {
    FUN_003b6da8(param_1);
    *(undefined1 *)(param_1 + 0x29) = 1;
    return;
  }
  return;
}

