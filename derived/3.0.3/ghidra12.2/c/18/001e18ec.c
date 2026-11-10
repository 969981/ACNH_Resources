
void FUN_001e18ec(long *param_1,long param_2)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char acStack_24 [20];
  
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  nn::socket::InetNtop(2,(void *)(param_2 + 0xc),acStack_24,0x14);
  FUN_0018c0b8(acStack_24,&local_a8,0x80);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(PTR_DAT_04bc0ec8 + 0x10);
  param_1[3] = (long)(param_1 + 1);
  param_1[4] = 0x10;
  FUN_0018b070(param_1,&local_a8,0xffffffffffffffff);
  return;
}

