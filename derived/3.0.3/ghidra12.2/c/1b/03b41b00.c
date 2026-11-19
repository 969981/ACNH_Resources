
void FUN_03b41b00(long param_1)

{
  char *pcVar1;
  bool bVar2;
  ulong uVar3;
  
  pcVar1 = (char *)(param_1 + 0x90);
  if (pcVar1 == "AudioTvOutput") {
LAB_03b41c50:
    *(long *)(param_1 + 0x48) = param_1 + 0x3c;
    return;
  }
  uVar3 = 0;
  bVar2 = true;
  do {
    if (pcVar1[uVar3] != "AudioTvOutput"[uVar3]) break;
    if (pcVar1[uVar3] == '\0') {
      if (bVar2) goto LAB_03b41c50;
      break;
    }
    bVar2 = uVar3 < 0x80000;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x80001);
  if (pcVar1 != "AudioStereoJackOutput") {
    uVar3 = 0;
    bVar2 = true;
    do {
      if (pcVar1[uVar3] != "AudioStereoJackOutput"[uVar3]) break;
      if (pcVar1[uVar3] == '\0') {
        if (bVar2) goto LAB_03b41c44;
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    if (pcVar1 == "AudioBuiltInSpeakerOutput") {
LAB_03b41bf0:
      *(long *)(param_1 + 0x48) = param_1 + 0x40;
      return;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      if (pcVar1[uVar3] != "AudioBuiltInSpeakerOutput"[uVar3]) break;
      if (pcVar1[uVar3] == '\0') {
        if (bVar2) goto LAB_03b41bf0;
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    if (pcVar1 != "AudioExternalOutput") {
      uVar3 = 0;
      bVar2 = true;
      do {
        if (pcVar1[uVar3] != "AudioExternalOutput"[uVar3]) break;
        if (pcVar1[uVar3] == '\0') {
          if (bVar2) goto LAB_03b41c44;
          break;
        }
        bVar2 = uVar3 < 0x80000;
        uVar3 = uVar3 + 1;
      } while (uVar3 != 0x80001);
      goto LAB_03b41c50;
    }
  }
LAB_03b41c44:
  *(long *)(param_1 + 0x48) = param_1 + 0x44;
  return;
}

