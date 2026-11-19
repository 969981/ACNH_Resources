
void FUN_03b51ca0(void *param_1)

{
  uint uVar1;
  int iVar2;
  void *__dest;
  AudioDeviceName *__s1;
  ulong uVar3;
  AudioDeviceName aAStack_460 [1024];
  
  __s1 = aAStack_460;
  memset(param_1,0,0x30c);
  uVar1 = nn::audio::ListAudioDeviceName(aAStack_460,3);
  if (0 < (int)uVar1) {
    uVar3 = (ulong)uVar1;
    do {
      iVar2 = strcmp((char *)__s1,"AudioTvOutput");
      __dest = param_1;
      if ((((iVar2 == 0) ||
           (iVar2 = strcmp((char *)__s1,"AudioStereoJackOutput"),
           __dest = (void *)((long)param_1 + 0x200), iVar2 == 0)) ||
          (iVar2 = strcmp((char *)__s1,"AudioBuiltInSpeakerOutput"),
          __dest = (void *)((long)param_1 + 0x100), iVar2 == 0)) ||
         (iVar2 = strcmp((char *)__s1,"AudioExternalOutput"),
         __dest = (void *)((long)param_1 + 0x200), iVar2 == 0)) {
        memcpy(__dest,__s1,0x100);
      }
      uVar3 = uVar3 - 1;
      __s1 = __s1 + 0x100;
    } while (uVar3 != 0);
  }
  return;
}

