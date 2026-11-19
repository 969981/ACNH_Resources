
undefined8 FUN_03b5a1e0(long param_1)

{
  ReverbType *pRVar1;
  bool local_60 [4];
  undefined4 local_5c;
  float local_58;
  uint local_54;
  undefined4 local_50;
  float local_4c;
  uint local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  pRVar1 = (ReverbType *)(param_1 + 0x20);
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  FUN_006bb3f0(0x30,param_1 + 0x70,local_60,5);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  nn::audio::SetReverbEnabled(pRVar1,local_60[0]);
  nn::audio::SetReverbEarlyMode(pRVar1,local_5c);
  nn::audio::SetReverbEarlyGain(pRVar1,local_58);
  nn::audio::SetReverbPredelayTime(pRVar1,(ulong)local_54 * 1000000);
  nn::audio::SetReverbLateMode(pRVar1,local_50);
  nn::audio::SetReverbLateGain(pRVar1,local_4c);
  nn::audio::SetReverbDecayTime(pRVar1,(ulong)local_48 * 1000000);
  nn::audio::SetReverbHighFrequencyDecayRatio(pRVar1,local_44);
  nn::audio::SetReverbColoration(pRVar1,local_40);
  nn::audio::SetReverbReverbGain(pRVar1,local_3c);
  nn::audio::SetReverbOutGain(pRVar1,local_38);
  nn::audio::SetReverbDryGain(pRVar1,local_34);
  return 1;
}

