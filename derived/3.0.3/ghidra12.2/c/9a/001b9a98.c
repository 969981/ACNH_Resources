
void FUN_001b9a98(long *param_1)

{
  size_t __n;
  
  FUN_0019d6cc();
  *param_1 = (long)(PTR_DAT_04bcc578 + 0x10);
  FUN_001ba2a8(param_1 + 3);
  FUN_001ba2a8(param_1 + 0x2c);
  __n = param_1[0x2f];
  memcpy(param_1 + 4,param_1 + 0x2d,__n);
  param_1[6] = __n;
  param_1[7] = param_1[0x30];
  param_1[0xb] = param_1[0x34];
  param_1[0xc] = param_1[0x35];
  param_1[8] = param_1[0x31];
  param_1[9] = param_1[0x32];
  param_1[0xd] = param_1[0x36];
  param_1[0xe] = param_1[0x37];
  FUN_001864f4(param_1 + 0xf,param_1 + 0x38);
  param_1[2] = 0;
  param_1[0x22] = param_1[0x4b];
  param_1[0x23] = param_1[0x4c];
  *(char *)(param_1 + 0x24) = (char)param_1[0x4d];
  param_1[0x1e] = param_1[0x47];
  param_1[0x1f] = param_1[0x48];
  param_1[0x20] = param_1[0x49];
  param_1[0x21] = param_1[0x4a];
  param_1[0x1a] = param_1[0x43];
  param_1[0x1b] = param_1[0x44];
  param_1[0x1c] = param_1[0x45];
  param_1[0x1d] = param_1[0x46];
  param_1[0x18] = param_1[0x41];
  param_1[0x19] = param_1[0x42];
  param_1[0x28] = param_1[0x51];
  param_1[0x29] = param_1[0x52];
  param_1[0x2a] = param_1[0x53];
  param_1[0x26] = param_1[0x4f];
  param_1[0x27] = param_1[0x50];
  *(int *)(param_1 + 0x2b) = (int)param_1[0x54];
  FUN_0019d550(PTR_DAT_04bcc280,param_1);
  if (DAT_04be2208 < 2) {
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

