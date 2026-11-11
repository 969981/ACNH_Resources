
void FUN_003ddf90(long *param_1)

{
  AuxType *pAVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  
  if ((char)param_1[6] != '\0') {
    pAVar1 = (AuxType *)(param_1 + 3);
    iVar2 = nn::audio::GetAuxSampleCount(pAVar1);
    iVar3 = *(int *)((long)param_1 + 0x2c) * (int)param_1[5];
    local_48 = 0;
    if (iVar3 != 0) {
      local_48 = iVar2 / iVar3;
    }
    local_44 = nn::audio::GetAuxSampleRate(pAVar1);
    uStack_40 = (undefined4)param_1[5];
    local_3c = *(undefined4 *)((long)param_1 + 0x2c);
    lVar4 = FUN_03b38a74();
    local_34 = *(undefined4 *)(lVar4 + 0xe0);
    iVar3 = nn::audio::ReadAuxSendBuffer(pAVar1,(int *)param_1[9],iVar2);
    local_38 = iVar3;
    (**(code **)(*param_1 + 0x28))(param_1,param_1[9],&local_48);
    nn::audio::WriteAuxReturnBuffer(pAVar1,(int *)param_1[9],iVar3);
  }
  return;
}

