
float FUN_01c28760(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  float fVar4;
  undefined *local_7a0;
  undefined1 auStack_798 [1876];
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  
  local_7a0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_798,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  local_44 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  local_40 = (local_44 ^ local_44 >> 0x1e) * 0x6c078965 + 2;
  local_3c = (local_40 ^ local_40 >> 0x1e) * 0x6c078965 + 3;
  local_38 = (local_3c ^ local_3c >> 0x1e) * 0x6c078965 + 4;
  pvVar2 = (void *)FUN_01a451fc(&local_7a0);
  pvVar2 = memset(pvVar2,0,0x754);
  uVar3 = FUN_01c281f0(pvVar2,&local_7a0,param_2,1);
  uVar1 = FUN_01c281f0(uVar3,&local_7a0,param_2,0);
  if (uVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)(uVar3 & 0xffffffff) / (float)uVar1;
  }
  return fVar4;
}

