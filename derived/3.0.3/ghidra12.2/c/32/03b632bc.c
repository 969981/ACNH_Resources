
undefined8 FUN_03b632bc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x7a) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0xf8) < 1) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar3 = *(long *)(param_1 + 0xf0) - (long)*(int *)(param_1 + 0xfc);
    }
    uVar1 = nn::audio::IsVoiceValid((VoiceType *)(lVar3 + 0x80));
    uVar2 = 0;
    if (((uVar1 & 1) != 0) && (0 < *(int *)(param_1 + 0xf8))) {
      uVar2 = 0;
      if ((*(long *)(param_1 + 0xf0) != 0) &&
         (lVar3 = *(long *)(param_1 + 0xf0) - (long)*(int *)(param_1 + 0xfc), lVar3 != 0)) {
        uVar2 = *(undefined8 *)(lVar3 + 0x1a0);
      }
    }
  }
  return uVar2;
}

