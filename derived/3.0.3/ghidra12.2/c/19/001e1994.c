
void FUN_001e1994(long param_1,char *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *local_290;
  undefined1 local_288 [4];
  undefined1 auStack_284 [12];
  undefined1 *local_278;
  undefined8 uStack_270;
  char acStack_200 [8];
  char *local_1f8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char acStack_54 [20];
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  nn::socket::InetNtop(2,(void *)(param_1 + 0xc),acStack_200,0x14);
  FUN_0018c0b8(acStack_200,&local_d8,0x80);
  FUN_0018c3a4(acStack_200);
  uVar3 = FUN_00186ea0(acStack_200,&local_d8);
  uVar3 = FUN_00186ea0(uVar3,&DAT_040addd9);
  uVar2 = nn::socket::InetNtohs(*(ushort *)(param_1 + 10));
  snprintf(acStack_54,0x10,"%d",(ulong)(uVar2 & 0xffff));
  local_288[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_278 = local_288;
  uStack_270 = 0x10;
  local_290 = puVar1;
  FUN_0018b070(&local_290,acStack_54,0xffffffffffffffff);
  FUN_0018c0b0(uVar3,&local_290);
  local_290 = puVar1;
  FUN_0018b1a0(&local_290);
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_001e17ec(&local_290,*(int *)(param_1 + 0x88),0);
    nn::socket::InetNtop(2,auStack_284,acStack_54,0x14);
    FUN_0018c0b8(acStack_54,&local_d8,0x10);
    uVar3 = FUN_00186ea0(acStack_200,&DAT_040a90aa);
    uVar3 = FUN_00186ea0(uVar3,&local_d8);
    FUN_00186ea0(uVar3,&DAT_04094801);
    FUN_001e1868(&local_290);
  }
  strcpy(param_2,local_1f8);
  FUN_0018c3d4(acStack_200);
  return;
}

