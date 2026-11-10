
void FUN_00156ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  memset(auStack_c0,0,0x90);
  local_b8 = 0x6a09e667;
  uStack_b0 = 0xbb67ae85;
  local_a8 = 0x3c6ef372;
  uStack_a0 = 0xa54ff53a;
  local_98 = 0x510e527f;
  uStack_90 = 0x9b05688c;
  local_88 = 0x1f83d9ab;
  uStack_80 = 0x5be0cd19;
  FUN_00156e0c(auStack_c0,param_2,param_3);
  FUN_00156edc(param_1,auStack_c0);
  return;
}

