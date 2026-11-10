
void FUN_00290448(long *param_1,uint param_2)

{
  FUN_00289f24();
  *param_1 = (long)(PTR_DAT_04bcdda8 + 0x10);
  nn::os::InitializeEvent(param_1 + 4,0,(param_2 ^ 0xffffffff) & 1);
  return;
}

