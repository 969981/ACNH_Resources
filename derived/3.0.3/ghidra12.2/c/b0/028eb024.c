
void FUN_028eb024(undefined8 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined4 local_21c;
  undefined2 local_218;
  undefined2 local_216;
  undefined1 auStack_214 [140];
  undefined1 auStack_188 [140];
  undefined1 auStack_fc [140];
  undefined8 local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  local_38 = param_2;
  FUN_028e7290(param_1,2,&local_38);
  memset(auStack_214,0,0x1a4);
  FUN_0376c3f0(auStack_188,auStack_fc,0,1);
  local_21c = 0;
  FUN_028e7b70(param_1,&local_21c,auStack_188,&local_218);
  local_55 = 0;
  local_34 = 0x23;
  local_32 = 8;
  local_68 = local_5c;
  local_60 = 8;
  local_5c[0] = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  local_70 = puVar1;
  uVar3 = FUN_0376b510(&local_70,local_218);
  if ((uVar3 & 1) != 0) {
    FUN_020fd3a0(&local_34,&local_70);
  }
  local_70 = (undefined *)CONCAT62(CONCAT51(local_70._3_5_,local_32),local_34);
  *param_3 = (char)local_34;
  param_3[1] = (char)((ushort)local_34 >> 8);
  uVar2 = FUN_020fd7d8(&local_70);
  param_3[2] = uVar2;
  local_68 = local_5c;
  local_34 = 0x23;
  local_32 = 8;
  local_60 = 8;
  local_55 = 0;
  local_5c[0] = 0;
  local_70 = puVar1;
  uVar3 = FUN_0376b510(&local_70,local_216);
  if ((uVar3 & 1) != 0) {
    FUN_020fd3a0(&local_34,&local_70);
  }
  local_70 = (undefined *)CONCAT62(CONCAT51(local_70._3_5_,local_32),local_34);
  param_3[3] = (char)local_34;
  param_3[4] = (char)((ushort)local_34 >> 8);
  uVar2 = FUN_020fd7d8(&local_70);
  param_3[5] = uVar2;
  local_21c = 0;
  local_70 = (undefined *)CONCAT44(2,local_38);
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffffff00);
  FUN_028e94c0(param_1,&local_70,auStack_214);
  local_21c = 1;
  local_70 = (undefined *)CONCAT44(2,local_38);
  local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
  FUN_028e94c0(param_1,&local_70,auStack_214);
  FUN_028e95f0(param_1);
  return;
}

