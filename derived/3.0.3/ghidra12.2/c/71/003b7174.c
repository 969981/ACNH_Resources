
void FUN_003b7174(long param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  long lVar4;
  TBiquadFilterParameter local_3c [2];
  unkuint10 local_3a;
  
  if (*(ushort *)(param_2 + 0x74) - 1 < 15999) {
    lVar4 = FUN_03b38a74();
    uVar3 = *(undefined2 *)(param_2 + 0x74);
    bVar1 = *(char *)(lVar4 + 0x956) == '\0';
    if (bVar1) {
      lVar4 = FUN_03b38a74();
      uVar2 = *(undefined4 *)(lVar4 + 0x8c0);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0xac);
    }
    local_3a = FUN_003b7b60(uVar3,uVar2,bVar1);
    local_3c[0] = *(TBiquadFilterParameter *)(param_2 + 0x68);
  }
  else {
    local_3c[0] = *(TBiquadFilterParameter *)(param_2 + 0x68);
    local_3a = (unkuint10)0;
  }
  nn::audio::SetVoiceBiquadFilterParameter((VoiceType *)(param_1 + 0x20),1,local_3c);
  return;
}

