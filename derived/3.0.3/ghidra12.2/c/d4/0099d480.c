
undefined8 FUN_0099d480(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [31];
  undefined1 local_155;
  undefined8 local_150;
  byte *local_148;
  undefined4 local_140;
  byte local_13c [31];
  undefined1 local_11d;
  undefined1 local_3d;
  int local_38;
  char local_34;
  
  puVar2 = (undefined2 *)(**(code **)(*param_1 + 0xf0))();
  local_155 = 0;
  local_174[0] = 0;
  local_178 = 0x20;
  local_180 = local_174;
  local_140 = 0x100;
  local_148 = local_13c;
  local_3d = 0;
  local_188 = PTR_DAT_04bb3000 + 0x10;
  local_13c[0] = 0;
  local_150 = &PTR_LAB_048fda60;
  (**(code **)(*param_1 + 0x58))(param_1,&local_150);
  (*(code *)local_150[3])(&local_150);
  bVar1 = *local_148;
  if (bVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
    pbVar5 = local_148;
    do {
      pbVar5 = pbVar5 + 1;
      uVar4 = crc32b(uVar4,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar5;
    } while (bVar1 != 0);
    uVar4 = ~uVar4;
  }
  FUN_038d1270(&local_188,&DAT_04074ae0,uVar4);
  (**(code **)(local_188 + 0x18))(&local_188);
  local_150 = (undefined **)((ulong)local_150 & 0xffffff0000000000);
  uVar3 = FUN_03ea9450(param_2,&local_150,local_180);
  if (((uVar3 & 1) != 0) && (local_150._4_1_ != -1)) {
    if (local_150._4_1_ == -0x2f) {
      if (-1 < (int)local_150) goto LAB_0099d680;
    }
    else if (local_150._4_1_ == -0x2d) goto LAB_0099d680;
  }
  puVar2 = (undefined2 *)(**(code **)(*param_1 + 0xf0))(param_1);
  local_11d = 0;
  local_140 = 0x20;
  local_148 = local_13c;
  local_13c[0] = 0;
  local_150 = (undefined **)(PTR_DAT_04bb3008 + 0x10);
  pbVar5 = (byte *)param_1[1];
  bVar1 = *pbVar5;
  if (bVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
    do {
      pbVar5 = pbVar5 + 1;
      uVar4 = crc32b(uVar4,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar5;
    } while (bVar1 != 0);
    uVar4 = ~uVar4;
  }
  FUN_038d1270(&local_150,&DAT_04074ae0,uVar4);
  (**(code **)((long)local_150 + 0x18))(&local_150);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,local_148);
  if (((uVar3 & 1) != 0) && (local_34 != -1)) {
    local_150._0_4_ = local_38;
    if (local_34 == -0x2f) {
      if (-1 < local_38) goto LAB_0099d680;
    }
    else if (local_34 == -0x2d) {
LAB_0099d680:
      *puVar2 = (short)(int)local_150;
      return 1;
    }
  }
  return 0;
}

