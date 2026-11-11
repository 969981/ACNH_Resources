
void FUN_003b7598(long param_1)

{
  VoiceType *pVVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_1 + 200);
  if (lVar5 == 0) {
    return;
  }
  pVVar1 = (VoiceType *)(param_1 + 0x20);
  lVar2 = nn::audio::GetReleasedWaveBuffer(pVVar1);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar5 + 0x38);
    *(undefined4 *)(lVar5 + 0x34) = 3;
    if (*(long *)(param_1 + 200) == 0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      nn::audio::SetVoicePlayState(pVVar1,1);
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x38);
      goto joined_r0x003b7688;
    }
    *(undefined4 *)(*(long *)(param_1 + 200) + 0x34) = 2;
  }
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x38);
joined_r0x003b7688:
  if (puVar4 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0xb0) == 2) {
      local_50 = puVar4[4];
      uStack_48 = 6;
    }
    else {
      local_50 = 0;
      uStack_48 = 0;
    }
    local_70 = *puVar4;
    uStack_68 = puVar4[1];
    local_60 = (undefined4)puVar4[3];
    local_58 = *(undefined1 *)(puVar4 + 6);
    local_5c = (undefined4)puVar4[2];
    local_57 = 1;
    uVar3 = nn::audio::AppendWaveBuffer(pVVar1,(WaveBuffer *)&local_70);
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x38);
      return;
    }
  }
  return;
}

