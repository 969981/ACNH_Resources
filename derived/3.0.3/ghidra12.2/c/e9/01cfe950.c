
void FUN_01cfe950(long param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort *puVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  undefined *local_1b0;
  undefined8 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined8 local_d0;
  undefined6 uStack_c8;
  undefined2 local_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined1 auStack_a6 [6];
  undefined4 local_a0 [2];
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb2bc0;
  local_19c = 0;
  local_1a0 = 0xb;
  local_198 = 0xffffffff;
  uStack_190 = 0xffffffff00000000;
  puStack_178 = local_16c;
  local_188 = 0xffffffff;
  puStack_1a8 = &local_d0;
  local_170 = 0x40;
  local_12d = 0;
  local_16c[0] = 0;
  local_180 = PTR_DAT_04bb2bc0 + 0x10;
  local_118 = 0x40;
  local_d5 = 0;
  local_114[0] = 0;
  puStack_120 = local_114;
  uStack_c0 = 0;
  local_1b0 = PTR_DAT_04bb5128 + 0x10;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c2 = 0;
  puVar1 = &uStack_ba;
  if (&uStack_ba <= (undefined2 *)((long)&local_d0 + 2U)) {
    puVar1 = (undefined2 *)((long)&local_d0 + 2U);
  }
  local_128 = local_180;
  memset(puStack_1a8,0,(long)puVar1 + (-0xe1 - (long)&local_1b0) & 0xfffffffffffffffcU | 2);
  local_b8 = CONCAT44(local_b8._4_4_,2);
  FUN_01c138cc(&local_1b0);
  local_a0[0] = 10;
  local_98 = param_3 + 0x34;
  (**(code **)(local_1b0 + 0x38))(&local_1b0);
  puVar6 = PTR_DAT_04bc0cd8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_68 = 1;
  local_64 = 0;
  local_90 = PTR_DAT_04bc0cd8 + 0x10;
  local_88 = 0;
  FUN_02906b00(&local_90,&local_1b0,local_a0);
  puVar7 = (ushort *)(**(code **)(local_1b0 + 0x18))(&local_1b0);
  uVar8 = 0;
  lVar9 = 0x7fffffff;
  do {
    pbVar11 = (byte *)(param_1 + 9 + (ulong)uVar8);
    if (lVar9 == 0) goto LAB_01cfeb40;
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_01cfeb40;
    bVar4 = (byte)uVar3;
    if (uVar3 < 0x80) {
      *pbVar11 = bVar4;
      iVar10 = 1;
    }
    else if (uVar3 < 0x800) {
      if (0x1d < uVar8) break;
      *pbVar11 = (byte)(uVar3 >> 6) | 0xc0;
      pbVar11[1] = bVar4 & 0x3f | 0x80;
      iVar10 = 2;
    }
    else {
      if (0x1e < uVar8 + 2) break;
      *pbVar11 = (byte)(uVar3 >> 0xc) | 0xe0;
      pbVar11[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      pbVar11[2] = bVar4 & 0x3f | 0x80;
      iVar10 = 3;
    }
    uVar8 = iVar10 + uVar8;
    lVar9 = lVar9 + -1;
    puVar7 = puVar7 + 1;
  } while (uVar8 < 0x1f);
  pbVar11 = (byte *)(param_1 + 9 + (ulong)(uVar8 - 1));
LAB_01cfeb40:
  *pbVar11 = 0;
  local_180 = puVar5 + 0x10;
  puStack_120 = local_114;
  uVar8 = 2;
  if (*(byte *)(param_3 + 0x48) < 4) {
    uVar8 = (uint)*(byte *)(param_3 + 0x48);
  }
  local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar8);
  local_1a0 = 0x15;
  *(undefined1 *)(param_1 + 0x29) = 1;
  local_12d = 0;
  local_170 = 0x40;
  local_118 = 0x40;
  puStack_178 = local_16c;
  local_d5 = 0;
  local_b0 = 0;
  local_1b0 = PTR_DAT_04bc0ce8 + 0x10;
  *(char *)(param_1 + 0x28) = (char)uVar8;
  puVar2 = auStack_a6;
  if (auStack_a6 <= (undefined1 *)((long)&local_d0 + 2U)) {
    puVar2 = (undefined1 *)((long)&local_d0 + 2U);
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_c2 = 0;
  local_a8 = 0;
  uStack_c0 = 0;
  uStack_ba = 0;
  local_b8 = 0;
  puStack_1a8 = &local_d0;
  local_128 = local_180;
  memset(&local_d0,0,(ulong)(puVar2 + (-0xe1 - (long)&local_1b0)) & 0xfffffffffffffff8 | 2);
  local_a0[0] = 0x14;
  local_98 = param_3 + 8;
  memset(&local_d0,0,(ulong)(puVar2 + ~(ulong)&local_d0) & 0xfffffffffffffff8 | 2);
  local_19c = 0;
  local_198 = 0xffffffff;
  uStack_190 = 0xffffffff00000000;
  local_90 = puVar6 + 0x10;
  local_188 = 0xffffffff;
  local_16c[0] = 0;
  local_114[0] = 0;
  local_68 = 1;
  local_64 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_02906b00(&local_90,&local_1b0,local_a0);
  puVar7 = (ushort *)(**(code **)(local_1b0 + 0x18))(&local_1b0);
  uVar8 = 0;
  lVar9 = 0x7fffffff;
  do {
    pbVar11 = (byte *)(param_1 + 0x2a + (ulong)uVar8);
    if (lVar9 == 0) goto LAB_01cfed20;
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_01cfed20;
    bVar4 = (byte)uVar3;
    if (uVar3 < 0x80) {
      *pbVar11 = bVar4;
      iVar10 = 1;
    }
    else if (uVar3 < 0x800) {
      if (0x3b < uVar8) break;
      *pbVar11 = (byte)(uVar3 >> 6) | 0xc0;
      pbVar11[1] = bVar4 & 0x3f | 0x80;
      iVar10 = 2;
    }
    else {
      if (0x3c < uVar8 + 2) break;
      *pbVar11 = (byte)(uVar3 >> 0xc) | 0xe0;
      pbVar11[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      pbVar11[2] = bVar4 & 0x3f | 0x80;
      iVar10 = 3;
    }
    uVar8 = iVar10 + uVar8;
    lVar9 = lVar9 + -1;
    puVar7 = puVar7 + 1;
  } while (uVar8 < 0x3d);
  pbVar11 = (byte *)(param_1 + 0x2a + (ulong)(uVar8 - 1));
LAB_01cfed20:
  *pbVar11 = 0;
  *(undefined4 *)(param_2 + 0xcf4) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_2 + 0xcf8) = *(undefined4 *)(param_3 + 0x4c);
  uVar8 = *(uint *)(param_3 + 100);
  if (1 < uVar8) {
    uVar8 = 0;
  }
  *(char *)(param_2 + 0xcfc) = (char)uVar8;
  *(undefined1 *)(param_2 + 0xd00) = *(undefined1 *)(param_3 + 0x68);
  *(undefined1 *)(param_2 + 0xd01) = *(undefined1 *)(param_3 + 0x69);
  return;
}

