
long FUN_03b61214(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (DAT_05aebc00 == '\0') {
    iVar1 = FUN_03b47678(param_1 + 8);
    lVar3 = (long)iVar1;
  }
  else if ((((*(char *)(param_1 + 0x58) == '\0') || (lVar4 = *(long *)(param_1 + 0x128), lVar4 == 0)
            ) || (*(char *)(lVar4 + 0x7a) == '\0')) || (*(int *)(lVar4 + 0xf8) < 1)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar4 + 0xf0) != 0) {
      lVar3 = *(long *)(lVar4 + 0xf0) - (long)*(int *)(lVar4 + 0xfc);
    }
    uVar2 = nn::audio::IsVoiceValid((VoiceType *)(lVar3 + 0x80));
    lVar3 = 0;
    if (((uVar2 & 1) != 0) && (0 < *(int *)(lVar4 + 0xf8))) {
      lVar3 = 0;
      if ((*(long *)(lVar4 + 0xf0) != 0) &&
         (lVar4 = *(long *)(lVar4 + 0xf0) - (long)*(int *)(lVar4 + 0xfc), lVar4 != 0)) {
        lVar3 = *(long *)(lVar4 + 0x1a0);
      }
    }
  }
  return lVar3;
}

