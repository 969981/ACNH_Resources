
void FUN_009304e8(long param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined2 local_310;
  undefined4 local_30e;
  undefined1 local_30a;
  undefined1 auStack_308 [16];
  uint local_2f8;
  undefined8 local_2f4;
  undefined8 local_2ec;
  undefined8 local_2e4;
  undefined8 local_2dc;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined1 local_1ca;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined4 local_1c2;
  undefined1 local_1be;
  undefined1 auStack_1bc [16];
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  
  lVar2 = DAT_04da7238;
  if (DAT_04da7238 != 0) {
    lVar4 = FUN_00a8c18c(DAT_04da7238);
    local_310 = 0;
    local_30e = 0x101;
    local_30a = 0;
    memset(auStack_308,0,0x13e);
    local_1ca = 1;
    local_1c8 = 0x34;
    uVar3 = nn::os::GetSystemTick();
    local_2f4 = 0;
    uVar1 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    local_2ec = 0;
    local_2e4 = 0;
    uVar3 = uVar1 ^ uVar1 * 0x800;
    local_2dc = 0;
    local_2d4 = 0;
    local_2cc = 0;
    local_2c4 = 0;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    local_2bc = 0;
    local_2b4 = 0;
    local_2ac = 0;
    local_2a4 = 0;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    local_29c = 0;
    local_1c4 = 0;
    local_1be = 0;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    local_2f8 = (uint)((ulong)(uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1) * 0x7fffffff >> 0x20) |
                0x80000000;
    local_1c2 = 0x101;
    memset(auStack_1bc,0,0x13e);
    local_7c = 0x34;
    local_7e = 1;
    uVar3 = nn::os::GetSystemTick();
    local_78 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    uVar1 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    uVar3 = uVar1 ^ uVar1 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    local_72 = 0xff;
    local_74 = 0xffff;
    local_1ac = (uint)((ulong)(uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1) * 0x7fffffff >> 0x20) |
                0x80000000;
    FUN_00930750(&local_310,lVar2 + 0x65838);
    FUN_00930750(&local_1c4,lVar2 + 0x65984);
    local_70 = 0;
    local_78 = *(undefined4 *)(lVar2 + 0x65ad0);
    local_6c = 4;
    local_74 = *(undefined2 *)(lVar4 + 4);
    local_72 = *(undefined1 *)(lVar4 + 6);
    local_6a = 0;
    local_6b = *param_2;
    if (-1 < *(int *)(param_1 + 0x68)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x68),&local_70,&local_310
                   ,0x2a0,0);
    }
  }
  return;
}

