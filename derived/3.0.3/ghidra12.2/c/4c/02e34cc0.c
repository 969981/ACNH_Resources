
void FUN_02e34cc0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  byte bVar10;
  long lVar11;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar6 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar6 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar10 = *(byte *)(param_3 + 0xe);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar10;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ad4578;
  param_1[0x42] = 0;
  param_1[0x43] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  memset(param_1 + 0x44,0,0xc00);
  lVar11 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar11 + 0x220) = 0xffffffff;
    *(undefined2 *)((long)param_1 + lVar11 + 0x224) = 0;
    *(undefined8 *)((long)param_1 + lVar11 + 0x228) = 0;
    *(undefined8 *)((long)param_1 + lVar11 + 0x230) = 0;
    iVar7 = FUN_015d3550(0);
    lVar1 = lVar11 + 0x30;
    *(undefined4 *)((long)param_1 + lVar11 + 0x240) = 0xffffffff;
    iVar3 = 0;
    if (iVar7 != -1) {
      iVar3 = iVar7;
    }
    *(undefined1 *)((long)param_1 + lVar11 + 0x244) = 0;
    *(int *)((long)param_1 + lVar11 + 0x238) = iVar3;
    *(undefined4 *)((long)param_1 + lVar11 + 0x248) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    lVar11 = lVar1;
  } while (lVar1 != 0xc00);
  param_1[0x1c5] = -1;
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  *(undefined4 *)(param_1 + 0x1c7) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  param_1[0x1c9] = -1;
  *(undefined4 *)(param_1 + 0x1cb) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xe5c) = 0;
  *(undefined8 *)((long)param_1 + 0xe64) = 0;
  param_1[0x1ce] = -1;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xe84) = 0;
  *(undefined8 *)((long)param_1 + 0xe8c) = 0;
  param_1[0x1d3] = -1;
  *(undefined4 *)(param_1 + 0x1d5) = 0xffffffff;
  param_1[0x1c4] = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)param_1 + 0xeb4) = 0;
  param_1[0x1ca] = -0x100000000;
  param_1[0x1cf] = -0x100000000;
  param_1[0x1d4] = -0x100000000;
  *(undefined8 *)((long)param_1 + 0xeac) = 0;
  puVar2 = PTR_DAT_04bc6260 + 0x10;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0xffffffff;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  *(undefined4 *)(param_1 + 0x1e1) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xf0c) = 0;
  *(undefined8 *)((long)param_1 + 0xf11) = 0;
  param_1[0x1d8] = (long)puVar2;
  param_1[0x1dd] = (long)puVar2;
  uVar8 = nn::os::GetSystemTick();
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0xf1c) = uVar8;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x1e4) = uVar8;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xf24) = uVar8;
  *(uint *)(param_1 + 0x1e5) = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
  puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar8 = *puVar9 ^ *puVar9 << 0xb;
  uVar5 = puVar9[3];
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar4 = uVar8 ^ uVar5;
  uVar8 = uVar8 >> 8 ^ uVar5 >> 0x13 ^ uVar4;
  puVar9[2] = uVar5;
  puVar9[3] = uVar8;
  uVar8 = (uVar8 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0xf1c) = uVar8;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x1e4) = uVar8;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xf24) = uVar8;
  *(uint *)(param_1 + 0x1e5) = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
  return;
}

