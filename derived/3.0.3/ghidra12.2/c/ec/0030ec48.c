
void FUN_0030ec48(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [6];
  undefined1 auStack_62 [2];
  undefined *local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [4];
  undefined8 local_28;
  
  FUN_00186524(auStack_38);
  local_48 = local_58;
  local_58[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  uStack_40 = 0x10;
  local_60 = puVar1;
  (**(code **)(*param_3 + 0xe8))
            (param_3,auStack_2c,auStack_38,&local_60,auStack_62,auStack_68,auStack_6c);
  FUN_001fb7e0(param_2,0x8006);
  FUN_00197478(param_2,auStack_2c,4);
  local_28 = FUN_001867a4(auStack_38);
  FUN_00197478(param_2,&local_28,8);
  FUN_001f7044(param_2,&local_60);
  FUN_00197478(param_2,auStack_62,2);
  FUN_00197478(param_2,auStack_68,4);
  FUN_00197478(param_2,auStack_6c,4);
  local_60 = puVar1;
  FUN_0018b1a0(&local_60);
  return;
}

