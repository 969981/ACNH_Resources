
void FUN_01e373e8(long param_1,undefined1 *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  undefined1 auStack_18 [4];
  float local_14;
  
  if (CONCAT11(*param_2,param_2[1]) ==
      (ushort)(*(ushort *)(param_1 + 8) >> 8 | *(ushort *)(param_1 + 8) << 8)) goto LAB_01e37684;
  *(undefined1 *)(param_1 + 8) = *param_2;
  *(undefined1 *)(param_1 + 9) = param_2[1];
  uVar5 = FUN_020fd7d8(param_2);
  *(undefined1 *)(param_1 + 10) = uVar5;
  local_58 = 0x20;
  local_60 = local_54;
  local_35 = 0;
  local_54[0] = 0;
  local_68 = PTR_DAT_04bb2028 + 0x10;
  FUN_038d1270(&local_68,"-----");
  if ((ulong)*(byte *)(param_1 + 8) < 0x23) {
    FUN_038d1270(&local_68,"%s%02d",
                 *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*(byte *)(param_1 + 8) * 8 + 0xb0),
                 *(undefined1 *)(param_1 + 9));
  }
  *(uint *)(param_1 + 0xc) = *param_3;
  uVar6 = FUN_020fd7d8(param_2);
  *(uint *)(param_1 + 0x10) = uVar6 & 0xff;
  uVar7 = FUN_021f1800(&local_14,auStack_18,&local_68);
  if ((uVar7 & 1) == 0) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    if (7 < *(uint *)(param_1 + 0x10)) {
      uVar7 = 0;
    }
    iVar9 = (&DAT_0538ea2c)[uVar7];
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    if (7 < *(uint *)(param_1 + 0x10)) {
      uVar7 = 0;
    }
    iVar10 = (&DAT_0538ea4c)[uVar7];
  }
  else {
    if (local_14 <= 16.6) {
      if (local_14 <= 8.3) {
        iVar9 = 2;
      }
      else {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = 0;
    }
    if (local_14 <= 16.2) {
      if (local_14 <= 9.4) {
        iVar10 = 2;
      }
      else {
        iVar10 = 1;
      }
    }
    else {
      iVar10 = 0;
    }
    iVar9 = 2 - iVar9;
    iVar10 = 2 - iVar10;
  }
  *(int *)(param_1 + 0x14) = iVar9;
  *(int *)(param_1 + 0x18) = iVar10;
  uVar12 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_68 + 0x18))(&local_68);
  local_14 = (float)FUN_006bd550(local_60,0);
  puVar8 = (uint *)FUN_0079e770(uVar12,&local_14);
  if (puVar8 == (uint *)0x0) goto LAB_01e37684;
  uVar6 = *puVar8;
  local_14 = 0.0;
  if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
    puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
    local_14 = 0.0;
    if (*puVar11 != 0) {
      uVar6 = puVar11[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar6);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc15b0) &&
             (local_14 = (float)(uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc15b0 + 8) + (long)(int)uVar2 * 2),
             (uint)local_14 < 7)) goto LAB_01e3766c;
        }
      }
      local_14 = 0.0;
    }
  }
LAB_01e3766c:
  if (local_14 != 0.0) {
    *(uint *)(param_1 + 0x1c) = (int)local_14 - 1;
  }
LAB_01e37684:
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x20) = 100;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined1 **)(param_1 + 0x24) = &LAB_01010000;
  *(undefined1 **)(param_1 + 0x2c) = &LAB_01010000;
  *(undefined4 *)(param_1 + 0x158) = 0x10;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  local_68 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_68);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined2 *)(param_1 + 0x1e2) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined2 *)(param_1 + 0x1ea) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined2 *)(param_1 + 0x1f2) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x1a4) = local_68._4_4_;
  *(undefined8 *)(param_1 + 0x1d8) = 2;
  *(undefined2 *)(param_1 + 0x1fa) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0x101;
  *(undefined4 *)(param_1 + 0x1ec) = 0x101;
  *(undefined4 *)(param_1 + 500) = 0x101;
  *(undefined4 *)(param_1 + 0x1fc) = 0x101;
  *(undefined4 *)(param_1 + 0x204) = 0x101;
  *(undefined4 *)(param_1 + 0x20c) = 0x101;
  *(undefined4 *)(param_1 + 0x214) = 0x101;
  *(undefined4 *)(param_1 + 0x21c) = 0x101;
  *(undefined4 *)(param_1 + 0x224) = 0x101;
  *(undefined4 *)(param_1 + 0x22c) = 0x101;
  *(undefined4 *)(param_1 + 0x234) = 0x101;
  *(undefined4 *)(param_1 + 0x23c) = 0x101;
  *(undefined4 *)(param_1 + 0x244) = 0x101;
  *(undefined4 *)(param_1 + 0x24c) = 0x101;
  *(undefined4 *)(param_1 + 0x254) = 0x101;
  *(undefined4 *)(param_1 + 0x25c) = 0x101;
  *(undefined4 *)(param_1 + 0x264) = 0x101;
  *(undefined4 *)(param_1 + 0x26c) = 0x101;
  *(undefined4 *)(param_1 + 0x274) = 0x101;
  *(undefined4 *)(param_1 + 0x27c) = 0x101;
  *(undefined4 *)(param_1 + 0x284) = 0x101;
  *(undefined4 *)(param_1 + 0x28c) = 0x101;
  *(undefined4 *)(param_1 + 0x294) = 0x101;
  *(undefined4 *)(param_1 + 0x29c) = 0x101;
  *(undefined4 *)(param_1 + 0x2a4) = 0x101;
  *(undefined4 *)(param_1 + 0x2ac) = 0x101;
  *(undefined4 *)(param_1 + 0x2b4) = 0x101;
  *(undefined1 **)(param_1 + 0x2ba) = &LAB_01010000;
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x202) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined2 *)(param_1 + 0x20a) = 0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x212) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined2 *)(param_1 + 0x21a) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined2 *)(param_1 + 0x222) = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined2 *)(param_1 + 0x22a) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x232) = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined2 *)(param_1 + 0x23a) = 0;
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined2 *)(param_1 + 0x242) = 0;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x24a) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined2 *)(param_1 + 0x25a) = 0;
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x262) = 0;
  *(undefined1 *)(param_1 + 0x268) = 0;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined2 *)(param_1 + 0x272) = 0;
  *(undefined1 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x27a) = 0;
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined2 *)(param_1 + 0x282) = 0;
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined2 *)(param_1 + 0x292) = 0;
  *(undefined1 *)(param_1 + 0x298) = 0;
  *(undefined2 *)(param_1 + 0x29a) = 0;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  *(undefined2 *)(param_1 + 0x2a2) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined2 *)(param_1 + 0x2aa) = 0;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  *(undefined2 *)(param_1 + 0x2b2) = 0;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c4) = 0;
  *(undefined8 *)(param_1 + 0x2cc) = 0;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  uVar3 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
  uVar4 = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
  *(undefined4 *)(param_1 + 0x2f0) = uVar3;
  *(undefined4 *)(param_1 + 0x300) = uVar3;
  *(undefined4 *)(param_1 + 0x2f4) = uVar4;
  *(undefined4 *)(param_1 + 0x304) = uVar4;
  *(undefined4 *)(param_1 + 0x308) = 0;
  uVar6 = *param_3;
  if ((uVar6 < 10) && ((&DAT_053fee41)[(ulong)uVar6 * 0xba0] != '\0')) {
    FUN_021956e0(&DAT_053fe348 + (ulong)uVar6 * 0xba0);
  }
  return;
}

