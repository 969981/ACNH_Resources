
void FUN_0028d4cc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = nn::os::GetSystemTick();
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  param_1[2] = uVar2;
  param_1[3] = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}

