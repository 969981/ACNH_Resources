
void FUN_017eaf50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  
  FUN_017eb060();
  puVar2 = PTR_DAT_04bb27c0;
  local_120 = 0;
  local_75 = 0;
  local_f4[0] = 0;
  local_f8 = 0x80;
  local_70 = 7;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_68 = 0;
  local_6c = 0;
  local_11c = 0;
  local_114 = 0;
  local_138 = 0xf00000000;
  uStack_130 = 0x43200000;
  local_128 = 0x3f80000043200000;
  local_108 = puVar1;
  puStack_100 = local_f4;
  uVar3 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_138,0,0);
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  local_120 = 0;
  local_f8 = 0x80;
  local_75 = 0;
  local_f4[0] = 0;
  local_70 = 7;
  local_68 = 0;
  local_6c = 0;
  local_11c = 0;
  local_114 = 0;
  local_128 = 0x3f80000043200000;
  local_138 = 0x4900000000;
  uStack_130 = 0x43200000;
  local_108 = puVar1;
  puStack_100 = local_f4;
  uVar3 = FUN_007402e0(*(undefined8 *)puVar2,&local_138,0,0);
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  return;
}

