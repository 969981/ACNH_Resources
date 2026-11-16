
void FUN_026b9204(long param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 local_88;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  uVar3 = FUN_021d7d60();
  local_50 = 0xfffe;
  FUN_0277d4ac(&local_50);
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  local_60 = 0xfffe;
  FUN_0277d4ac(&local_60);
  local_68 = *(undefined4 *)(param_1 + 0x125ec);
  local_64 = *(int *)(param_1 + 0x125f0);
  local_70 = *(undefined4 *)(param_1 + 0x12644);
  local_6c = *(int *)(param_1 + 0x12648);
  local_78 = *(undefined4 *)(param_1 + 0x12618);
  local_74 = *(int *)(param_1 + 0x1261c);
  uVar4 = FUN_0269b5c0(param_1,&local_50,&local_58,&local_60,param_2,param_3);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_0277d7b4(&local_50,&local_68);
    puVar1 = PTR_DAT_04bb27d0;
    if ((((uVar4 & 1) == 0) || (local_50._3_1_ != local_68._3_1_)) || (local_50._4_4_ != local_64))
    {
      local_7e = 0x5ff;
      local_48 = 0;
      local_42 = 0;
      local_44 = 0xff00;
      local_88 = local_50;
      local_80 = uVar3;
      if (-1 < DAT_053d08f0) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d08f0,&local_48,&local_88,0xc,0);
      }
      FUN_0268e6d0(param_1,&local_50,0,0,0,0,1,1);
    }
    uVar4 = FUN_0277d7b4(&local_58,&local_70);
    if ((((uVar4 & 1) == 0) || (local_58._3_1_ != local_70._3_1_)) || (local_58._4_4_ != local_6c))
    {
      local_7e = 0x1ff;
      local_48 = 0;
      local_42 = 0;
      local_44 = 0xff00;
      local_88 = local_58;
      local_80 = uVar3;
      if (-1 < DAT_053d08f0) {
        FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d08f0,&local_48,&local_88,0xc,0);
      }
      FUN_026934e8(param_1,&local_58,0,0,0,0,1,1);
    }
    uVar4 = FUN_0277d7b4(&local_60,&local_78);
    if ((((uVar4 & 1) == 0) || (local_60._3_1_ != local_78._3_1_)) || (local_60._4_4_ != local_74))
    {
      local_7e = 0x2ff;
      local_48 = 0;
      local_42 = 0;
      local_44 = 0xff00;
      local_88 = local_60;
      local_80 = uVar3;
      if (-1 < DAT_053d08f0) {
        FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d08f0,&local_48,&local_88,0xc,0);
      }
      FUN_0269296c(param_1,&local_60,0,0,0,0,1,1);
    }
    *(char *)(param_1 + 0x1315b) = (char)*param_2;
    uVar2 = FUN_021d7d60(param_1);
    uVar4 = (ulong)local_88 >> 0x30;
    local_48._0_2_ = CONCAT11((char)*param_2,uVar2);
    local_88 = CONCAT26((ushort)uVar4 & 0xff00,0xff0000000000);
    if (-1 < DAT_053d0e30) {
      FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d0e30,&local_88,&local_48,2,0);
    }
  }
  return;
}

