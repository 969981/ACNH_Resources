
void FUN_01fd40c0(undefined8 param_1)

{
  uint uVar1;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  int iStack_24;
  
  uVar1 = nn::os::GetSystemTick();
  local_30 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  uStack_2c = (local_30 ^ local_30 >> 0x1e) * 0x6c078965 + 2;
  local_28 = (uStack_2c ^ uStack_2c >> 0x1e) * 0x6c078965 + 3;
  iStack_24 = (local_28 ^ local_28 >> 0x1e) * 0x6c078965 + 4;
  FUN_038aaa70(param_1,&local_30);
  return;
}

