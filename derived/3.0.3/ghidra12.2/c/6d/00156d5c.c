
void FUN_00156d5c(undefined8 param_1,char *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  memset(auStack_b0,0,0x90);
  local_a8 = 0x6a09e667;
  uStack_a0 = 0xbb67ae85;
  local_98 = 0x3c6ef372;
  uStack_90 = 0xa54ff53a;
  local_88 = 0x510e527f;
  uStack_80 = 0x9b05688c;
  local_78 = 0x1f83d9ab;
  uStack_70 = 0x5be0cd19;
  strlen(param_2);
  uVar1 = FUN_00146664();
  FUN_00156e0c(auStack_b0,param_2,uVar1);
  FUN_00156edc(param_1,auStack_b0);
  return;
}

