
void FUN_003b53a0(long param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_58;
  uint uStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined8 local_2c;
  
  nn::audio::InitializeAudioRendererParameter((AudioRendererParameter *)&local_58);
  iStack_4c = param_2[4];
  local_50 = param_2[5];
  local_48 = param_2[2];
  local_44 = 1;
  local_58 = *param_2;
  local_40 = param_2[1] + 4;
  local_3c = 0;
  uStack_54 = (uint)(local_58 * 5) / 1000;
  local_38 = *(undefined1 *)((long)param_2 + 0x21);
  if ((char)param_2[6] != '\0') {
    local_3c = 3;
  }
  if (*(char *)((long)param_2 + 0x1b) == '\0') {
    local_40 = 0;
    cVar1 = (char)param_2[7];
  }
  else {
    cVar1 = (char)param_2[7];
  }
  uVar2 = 2;
  if (cVar1 != '\0') {
    local_44 = 2;
    uVar2 = 3;
  }
  if (*(char *)((long)param_2 + 0x1d) != '\0') {
    local_44 = uVar2;
  }
  if (*(char *)((long)param_2 + 0x27) != '\0') {
    local_2c = 0x100000001;
  }
  uVar2 = 6;
  if (*(char *)(param_1 + 0x954) != '\0') {
    uVar2 = 2;
  }
  nn::audio::GetRequiredBufferSizeForCircularBufferSink(&local_58,uVar2,param_2[3],2);
  return;
}

