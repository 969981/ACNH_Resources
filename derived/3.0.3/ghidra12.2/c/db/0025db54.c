
void FUN_0025db54(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_00227770();
  *param_1 = (long)(PTR_DAT_04bcd6d0 + 0x10);
  FUN_00227258(param_1 + 0xc);
  FUN_00227258(param_1 + 0x11);
  FUN_00227258(param_1 + 0x16);
  FUN_00227258(param_1 + 0x1b);
  FUN_00227258(param_1 + 0x20);
  FUN_00227258(param_1 + 0x25);
  FUN_00227258(param_1 + 0x2a);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  FUN_00220ebc(param_1 + 0x32);
  param_1[0x38] = param_2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x90,uVar1);
  if (lVar2 != 0) {
    FUN_0025e0f8(lVar2,param_2);
  }
  param_1[0xb] = lVar2;
  FUN_0021fef8(param_1 + 0xd);
  FUN_0021fef8(param_1 + 0x12);
  FUN_0021fef8(param_1 + 0x17);
  FUN_0021fef8(param_1 + 0x1c);
  FUN_0021fef8(param_1 + 0x21);
  FUN_0021fef8(param_1 + 0x26);
  FUN_0021fef8(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = (long)(param_1 + 0xc);
  param_1[0x30] = 7;
  return;
}

