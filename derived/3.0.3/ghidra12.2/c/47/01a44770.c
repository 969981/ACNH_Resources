
void FUN_01a44770(long *param_1)

{
  uint uVar1;
  void *__s;
  
  *param_1 = (long)&PTR_LAB_049ff3a8;
  memset(param_1 + 1,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x75c) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xec) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x764) = uVar1;
  *(uint *)(param_1 + 0xed) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(*param_1 + 0x18))(param_1);
  memset(__s,0,0x754);
  return;
}

