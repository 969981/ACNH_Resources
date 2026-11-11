
long FUN_003b5164(undefined8 param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_78;
  uint uStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_4c;
  
  cVar1 = *(char *)((long)param_2 + 0x1b);
  nn::audio::InitializeAudioRendererParameter((AudioRendererParameter *)&local_78);
  iStack_6c = param_2[4];
  local_70 = param_2[5];
  local_68 = param_2[2];
  local_64 = 1;
  local_78 = *param_2;
  local_60 = param_2[1] + 4;
  local_5c = 0;
  uStack_74 = (uint)(local_78 * 5) / 1000;
  local_58 = *(undefined1 *)((long)param_2 + 0x21);
  if ((char)param_2[6] != '\0') {
    local_5c = 3;
  }
  if (*(char *)((long)param_2 + 0x1b) == '\0') {
    local_60 = 0;
    cVar2 = (char)param_2[7];
  }
  else {
    cVar2 = (char)param_2[7];
  }
  uVar7 = 2;
  if (cVar2 != '\0') {
    local_64 = 2;
    uVar7 = 3;
  }
  if (*(char *)((long)param_2 + 0x1d) != '\0') {
    local_64 = uVar7;
  }
  if (*(char *)((long)param_2 + 0x27) != '\0') {
    local_4c = 0x100000001;
  }
  lVar3 = nn::audio::GetAudioRendererWorkBufferSize((AudioRendererParameter *)&local_78);
  lVar4 = nn::audio::GetAudioRendererConfigWorkBufferSize((AudioRendererParameter *)&local_78);
  lVar5 = FUN_003cdcb0(cVar1 != '\0');
  lVar5 = lVar4 + lVar3 + lVar5;
  if (*(char *)((long)param_2 + 0x1e) != '\0') {
    cVar2 = *(char *)((long)param_2 + 0x1a);
    uVar7 = 4;
    if (*(char *)((long)param_2 + 0x1b) == '\0') {
      uVar7 = 1;
    }
    uVar6 = 6;
    if (*(char *)((long)param_2 + 0x1f) != '\0') {
      uVar6 = 2;
    }
    lVar3 = FUN_003c30ac(uVar7,uVar6,1,uVar6,cVar1 != '\0',1);
    if (cVar2 == '\0') {
      lVar5 = lVar3 + lVar5;
      cVar2 = *(char *)((long)param_2 + 0x19);
    }
    else {
      lVar4 = FUN_003c30ac(1,uVar6,1,uVar6,cVar1 != '\0',1);
      lVar5 = lVar5 + lVar3 + lVar4 + 8;
      cVar2 = *(char *)((long)param_2 + 0x19);
    }
    if (cVar2 != '\0') {
      lVar3 = FUN_003c30ac(3,2,1,uVar6,cVar1 != '\0',1);
      lVar5 = lVar5 + lVar3 + 8;
    }
  }
  return lVar5;
}

