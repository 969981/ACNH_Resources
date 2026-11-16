
void FUN_02880310(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  void *__s;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  long lVar10;
  undefined *local_7b0;
  undefined1 auStack_7a8 [1876];
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  
  local_7b0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7a8,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_54 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_50 = (local_54 ^ local_54 >> 0x1e) * 0x6c078965 + 2;
  local_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 3;
  local_48 = (local_4c ^ local_4c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7b0);
  memset(__s,0,0x754);
  puVar7 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(param_1);
  if (*(long *)puVar7 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      FUN_0277dedc(param_1);
      lVar10 = (**(code **)(local_7b0 + 0x18))(&local_7b0);
      uVar8 = FUN_0277d6c4(param_1);
      if ((uVar8 >> 3 & 0x1fff) < 0x753) {
        lVar6 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar8 & 0x1f);
      }
    }
  }
  lVar10 = *(long *)puVar7;
  puVar1 = param_1 + 4;
  uVar8 = FUN_0277d6c4(puVar1);
  uVar9 = extraout_x1;
  if (*(long *)puVar7 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      FUN_0277dedc(puVar1);
      lVar10 = (**(code **)(local_7b0 + 0x18))(&local_7b0);
      uVar8 = FUN_0277d6c4(puVar1);
      uVar9 = extraout_x1_00;
      if ((uVar8 >> 3 & 0x1fff) < 0x753) {
        lVar6 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar8 & 0x1f);
      }
    }
  }
  puVar7 = PTR_DAT_04bb37e0;
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  *param_1 = uVar5;
  param_1[4] = uVar5;
  param_1[8] = uVar5;
  param_1[0xc] = uVar5;
  param_1[0x10] = uVar5;
  param_1[0x14] = uVar5;
  param_1[0x18] = uVar5;
  param_1[0x1c] = uVar5;
  param_1[0x20] = uVar5;
  param_1[0x24] = uVar5;
  uVar3 = puVar7[2];
  param_1[0x28] = uVar5;
  param_1[0x2c] = uVar5;
  param_1[0x30] = uVar5;
  param_1[0x34] = uVar5;
  *(undefined1 *)(param_1 + 1) = uVar3;
  uVar4 = puVar7[3];
  *(undefined1 *)(param_1 + 5) = uVar3;
  *(undefined1 *)(param_1 + 9) = uVar3;
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)(param_1 + 0x11) = uVar3;
  *(undefined1 *)(param_1 + 0x15) = uVar3;
  *(undefined1 *)(param_1 + 0x19) = uVar3;
  *(undefined1 *)(param_1 + 0x1d) = uVar3;
  *(undefined1 *)(param_1 + 0x21) = uVar3;
  *(undefined1 *)(param_1 + 0x25) = uVar3;
  *(undefined1 *)(param_1 + 0x29) = uVar3;
  *(undefined1 *)(param_1 + 0x2d) = uVar3;
  *(undefined1 *)(param_1 + 0x31) = uVar3;
  *(undefined1 *)(param_1 + 0x35) = uVar3;
  *(undefined1 *)((long)param_1 + 3) = uVar4;
  uVar2 = *(undefined4 *)(puVar7 + 4);
  *(undefined1 *)((long)param_1 + 0xb) = uVar4;
  *(undefined1 *)((long)param_1 + 0x13) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar4;
  *(undefined1 *)((long)param_1 + 0x23) = uVar4;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar4;
  *(undefined1 *)((long)param_1 + 0x33) = uVar4;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar4;
  *(undefined1 *)((long)param_1 + 0x43) = uVar4;
  *(undefined1 *)((long)param_1 + 0x4b) = uVar4;
  *(undefined1 *)((long)param_1 + 0x53) = uVar4;
  *(undefined1 *)((long)param_1 + 0x5b) = uVar4;
  *(undefined1 *)((long)param_1 + 99) = uVar4;
  *(undefined1 *)((long)param_1 + 0x6b) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)(param_1 + 10) = uVar2;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined4 *)(param_1 + 0x32) = uVar2;
  *(undefined4 *)(param_1 + 0x36) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x57) = 0;
  FUN_02880620(param_1,uVar9,&local_7b0);
  return;
}

