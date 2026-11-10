
void FUN_002c21f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  *(undefined8 *)((long)param_1 + 0x24) = 0xffffc00000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x22) = 0;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_048483b8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = &PTR_FUN_04848438;
  FUN_0021f4e0(param_1 + 9);
  FUN_0021f4e0(param_1 + 0xd);
  FUN_0021f4e0(param_1 + 0x11);
  FUN_0021f4e0(param_1 + 0x15);
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  FUN_0021f4e0(param_1 + 0x1b);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((long)param_1 + 0x10c) = 1;
  *(undefined2 *)(param_1 + 0x22) = 0;
  FUN_0021f4e0(param_1 + 0x23);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((long)param_1 + 0x14c) = 1;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  FUN_0021f4e0(param_1 + 0x2b);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined2 *)((long)param_1 + 0x18c) = 1;
  FUN_00220ebc(param_1 + 0x34);
  FUN_00220ebc(param_1 + 0x3a);
  FUN_00220ebc(param_1 + 0x41);
  FUN_0021f4e0(param_1 + 0x47);
  FUN_0021f4e0(auStack_78);
  local_58 = 0;
  uStack_50 = 0;
  local_4a = 0;
  uStack_48 = 0;
  uStack_44 = 1;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  FUN_0021f54c(param_1 + 0x1b,auStack_78);
  param_1[0x1f] = local_58;
  param_1[0x20] = CONCAT26(local_4a,uStack_50);
  *(ulong *)((long)param_1 + 0x106) = CONCAT26(uStack_44,CONCAT42(uStack_48,local_4a));
  FUN_0021f584(auStack_78);
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x6f8,uVar1);
  if (lVar2 != 0) {
    FUN_002c3b7c(lVar2);
  }
  param_1[0x32] = lVar2;
  FUN_0021f4e0(auStack_78);
  local_58 = 0;
  uStack_50 = 0;
  local_4a = 0;
  uStack_48 = 0;
  uStack_44 = 1;
  *(undefined2 *)(param_1 + 0x22) = 0;
  FUN_0021f54c(param_1 + 0x23,auStack_78);
  param_1[0x27] = local_58;
  param_1[0x28] = CONCAT26(local_4a,uStack_50);
  *(ulong *)((long)param_1 + 0x146) = CONCAT26(uStack_44,CONCAT42(uStack_48,local_4a));
  FUN_0021f584(auStack_78);
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x6f8,uVar1);
  if (lVar2 != 0) {
    FUN_002c3b7c(lVar2);
  }
  param_1[0x33] = lVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x800,uVar1);
  if (lVar2 != 0) {
    FUN_002c59b8(lVar2);
  }
  param_1[0x40] = lVar2;
  return;
}

