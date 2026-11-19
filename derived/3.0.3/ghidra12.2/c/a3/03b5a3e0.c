
undefined8 FUN_03b5a3e0(long param_1)

{
  I3dl2ReverbType *pIVar1;
  bool local_54 [4];
  float local_50;
  float local_4c;
  uint local_48;
  float local_44;
  float local_40;
  uint local_3c;
  float local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  FUN_006bb3f0(0x34,param_1 + 0x78,local_54,5);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  pIVar1 = (I3dl2ReverbType *)(param_1 + 0x20);
  nn::audio::SetI3dl2ReverbEnabled(pIVar1,local_54[0]);
  nn::audio::SetI3dl2ReverbRoomGain(pIVar1,local_50);
  nn::audio::SetI3dl2ReverbRoomHfGain(pIVar1,local_4c);
  nn::audio::SetI3dl2ReverbLateReverbDecayTime(pIVar1,(ulong)local_48 * 1000000);
  nn::audio::SetI3dl2ReverbLateReverbHfDecayRatio(pIVar1,local_44);
  nn::audio::SetI3dl2ReverbReflectionsGain(pIVar1,local_40);
  nn::audio::SetI3dl2ReverbReflectionDelayTime(pIVar1,(ulong)local_3c * 1000000);
  nn::audio::SetI3dl2ReverbReverbGain(pIVar1,local_38);
  nn::audio::SetI3dl2ReverbLateReverbDelayTime(pIVar1,(ulong)local_34 * 1000000);
  nn::audio::SetI3dl2ReverbLateReverbDiffusion(pIVar1,local_30);
  nn::audio::SetI3dl2ReverbLateReverbDensity(pIVar1,local_2c);
  nn::audio::SetI3dl2ReverbHfReference(pIVar1,local_28);
  nn::audio::SetI3dl2ReverbDryGain(pIVar1,local_24);
  return 1;
}

