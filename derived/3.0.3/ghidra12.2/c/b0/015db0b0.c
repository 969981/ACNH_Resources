
long FUN_015db0b0(undefined1 *param_1)

{
  AudioOut *pAVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  nn::os::StartThread((ThreadType *)(param_1 + 0x40));
  pAVar1 = (AudioOut *)(param_1 + 0x200);
  nn::audio::GetAudioOutChannelCount(pAVar1);
  nn::audio::GetAudioOutSampleRate(pAVar1);
  nn::audio::GetAudioOutSampleFormat(pAVar1);
  uVar5 = FUN_02a55160();
  lVar3 = 0x488;
  *(undefined4 *)(param_1 + 0x9d8) = uVar5;
  lVar4 = 0x378;
  *(undefined8 *)(param_1 + 0x9dc) = 0;
  do {
    nn::audio::SetAudioOutBufferInfo
              ((AudioOutBuffer *)(param_1 + lVar3),*(void **)(param_1 + lVar4),
               *(ulong *)(param_1 + 0x9a8),0x400);
    nn::audio::AppendAudioOutBuffer(pAVar1,(AudioOutBuffer *)(param_1 + lVar3));
    lVar3 = lVar3 + 0x28;
    lVar4 = lVar4 + 8;
  } while (lVar3 != 0x988);
  iVar2 = nn::audio::StartAudioOut(pAVar1);
  param_1[0x9d5] = 1;
  *(undefined4 *)(param_1 + 0x9d0) = 1;
  param_1[0x12] = 1;
  *param_1 = 1;
  return (ulong)(iVar2 != 0) << 0xc;
}

