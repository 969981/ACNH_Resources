
void FUN_003b7030(long param_1,undefined4 param_2)

{
  VoiceType *pVVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar5 = (long *)(param_1 + 200);
  puVar4 = (undefined8 *)*plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    pVVar1 = (VoiceType *)(param_1 + 0x20);
    iVar2 = nn::audio::GetVoicePlayState(pVVar1);
    if (iVar2 == 2) {
      nn::audio::SetVoicePlayState(pVVar1,0);
      return;
    }
    if (*(int *)((long)puVar4 + 0x34) == 1) {
      if (*(int *)(param_1 + 0xb0) == 2) {
        local_60 = puVar4[4];
        uStack_58 = 6;
      }
      else {
        local_60 = 0;
        uStack_58 = 0;
      }
      local_80 = *puVar4;
      uStack_78 = puVar4[1];
      local_70 = (undefined4)puVar4[3];
      local_68 = *(undefined1 *)(puVar4 + 6);
      local_67 = 1;
      local_6c = (undefined4)puVar4[2];
      nn::audio::AppendWaveBuffer(pVVar1,(WaveBuffer *)&local_80);
      *(undefined8 **)(param_1 + 0xd8) = puVar4;
      nn::audio::SetVoicePlayState(pVVar1,0);
      FUN_003b7240(param_1,param_1 + 0x34,param_2);
      *(undefined4 *)((long)puVar4 + 0x34) = 2;
      return;
    }
    if (*(int *)((long)puVar4 + 0x34) == 2) {
      for (lVar3 = *plVar5; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x38)) {
        *(undefined4 *)(lVar3 + 0x34) = 3;
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *plVar5 = 0;
    }
  }
  return;
}

