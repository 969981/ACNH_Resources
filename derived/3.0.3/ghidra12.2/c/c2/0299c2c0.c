
void FUN_0299c2c0(long param_1,undefined1 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined8 local_23f0;
  undefined1 *puStack_23e8;
  undefined4 local_23e0;
  undefined1 local_23dc [255];
  undefined1 local_22dd;
  byte local_22d4 [124];
  byte local_2258 [2];
  undefined2 local_2256;
  byte local_2254 [6];
  undefined2 auStack_224e [3];
  undefined4 local_2248;
  undefined8 local_2244;
  undefined8 local_223c;
  
  lVar17 = 0xf2;
  lVar20 = 0;
  do {
    lVar17 = lVar17 + -1;
    local_2258[lVar20] = 0;
    (local_2258 + lVar20 + 2)[0] = 0xff;
    (local_2258 + lVar20 + 2)[1] = 0xff;
    pbVar4 = local_2258 + lVar20 + 4;
    pbVar4[0] = 0xf6;
    pbVar4[1] = 0xf6;
    pbVar4[2] = 0xf6;
    pbVar4[3] = 0xf6;
    pbVar4 = local_2258 + lVar20 + 8;
    pbVar4[0] = 0xf6;
    pbVar4[1] = 0xff;
    pbVar4[2] = 0xf6;
    pbVar4[3] = 0xff;
    pbVar4[4] = 0xf6;
    pbVar4[5] = 0xff;
    pbVar4[6] = 0xf6;
    pbVar4[7] = 0xff;
    *(undefined4 *)((long)&local_2248 + lVar20) = 0xfff6fff6;
    *(undefined8 *)((long)&local_2244 + lVar20) = 0xff7fffffff7fffff;
    *(undefined8 *)((long)&local_223c + lVar20) = 0xff7fffffff7fffff;
    lVar20 = lVar20 + 0x24;
  } while (lVar17 != 0);
  local_22d4[0x71] = 0xff;
  local_22d4[0x72] = 0xff;
  local_22d4[0x73] = 0xff;
  local_22d4[0x74] = 0xff;
  local_22d4[0x75] = 0xff;
  local_22d4[0x76] = 0xff;
  local_22d4[0x77] = 0xff;
  local_22d4[0x78] = 0xff;
  puVar21 = (undefined1 *)((ulong)local_22d4 | 1);
  local_22d4[0x69] = 0xff;
  local_22d4[0x6a] = 0xff;
  local_22d4[0x6b] = 0xff;
  local_22d4[0x6c] = 0xff;
  local_22d4[0x6d] = 0xff;
  local_22d4[0x6e] = 0xff;
  local_22d4[0x6f] = 0xff;
  local_22d4[0x70] = 0xff;
  local_22d4[0x61] = 0xff;
  local_22d4[0x62] = 0xff;
  local_22d4[99] = 0xff;
  local_22d4[100] = 0xff;
  local_22d4[0x65] = 0xff;
  local_22d4[0x66] = 0xff;
  local_22d4[0x67] = 0xff;
  local_22d4[0x68] = 0xff;
  local_22d4[0x59] = 0xff;
  local_22d4[0x5a] = 0xff;
  local_22d4[0x5b] = 0xff;
  local_22d4[0x5c] = 0xff;
  local_22d4[0x5d] = 0xff;
  local_22d4[0x5e] = 0xff;
  local_22d4[0x5f] = 0xff;
  local_22d4[0x60] = 0xff;
  local_22d4[0x51] = 0xff;
  local_22d4[0x52] = 0xff;
  local_22d4[0x53] = 0xff;
  local_22d4[0x54] = 0xff;
  local_22d4[0x55] = 0xff;
  local_22d4[0x56] = 0xff;
  local_22d4[0x57] = 0xff;
  local_22d4[0x58] = 0xff;
  local_22d4[0x49] = 0xff;
  local_22d4[0x4a] = 0xff;
  local_22d4[0x4b] = 0xff;
  local_22d4[0x4c] = 0xff;
  local_22d4[0x4d] = 0xff;
  local_22d4[0x4e] = 0xff;
  local_22d4[0x4f] = 0xff;
  local_22d4[0x50] = 0xff;
  local_22d4[0x41] = 0xff;
  local_22d4[0x42] = 0xff;
  local_22d4[0x43] = 0xff;
  local_22d4[0x44] = 0xff;
  local_22d4[0x45] = 0xff;
  local_22d4[0x46] = 0xff;
  local_22d4[0x47] = 0xff;
  local_22d4[0x48] = 0xff;
  local_22d4[0x39] = 0xff;
  local_22d4[0x3a] = 0xff;
  local_22d4[0x3b] = 0xff;
  local_22d4[0x3c] = 0xff;
  local_22d4[0x3d] = 0xff;
  local_22d4[0x3e] = 0xff;
  local_22d4[0x3f] = 0xff;
  local_22d4[0x40] = 0xff;
  local_22d4[0x31] = 0xff;
  local_22d4[0x32] = 0xff;
  local_22d4[0x33] = 0xff;
  local_22d4[0x34] = 0xff;
  local_22d4[0x35] = 0xff;
  local_22d4[0x36] = 0xff;
  local_22d4[0x37] = 0xff;
  local_22d4[0x38] = 0xff;
  local_22d4[0x29] = 0xff;
  local_22d4[0x2a] = 0xff;
  local_22d4[0x2b] = 0xff;
  local_22d4[0x2c] = 0xff;
  local_22d4[0x2d] = 0xff;
  local_22d4[0x2e] = 0xff;
  local_22d4[0x2f] = 0xff;
  local_22d4[0x30] = 0xff;
  local_22d4[0x21] = 0xff;
  local_22d4[0x22] = 0xff;
  local_22d4[0x23] = 0xff;
  local_22d4[0x24] = 0xff;
  local_22d4[0x25] = 0xff;
  local_22d4[0x26] = 0xff;
  local_22d4[0x27] = 0xff;
  local_22d4[0x28] = 0xff;
  local_22d4[0x19] = 0xff;
  local_22d4[0x1a] = 0xff;
  local_22d4[0x1b] = 0xff;
  local_22d4[0x1c] = 0xff;
  local_22d4[0x1d] = 0xff;
  local_22d4[0x1e] = 0xff;
  local_22d4[0x1f] = 0xff;
  local_22d4[0x20] = 0xff;
  local_22d4[0x11] = 0xff;
  local_22d4[0x12] = 0xff;
  local_22d4[0x13] = 0xff;
  local_22d4[0x14] = 0xff;
  local_22d4[0x15] = 0xff;
  local_22d4[0x16] = 0xff;
  local_22d4[0x17] = 0xff;
  local_22d4[0x18] = 0xff;
  local_22d4[9] = 0xff;
  local_22d4[10] = 0xff;
  local_22d4[0xb] = 0xff;
  local_22d4[0xc] = 0xff;
  local_22d4[0xd] = 0xff;
  local_22d4[0xe] = 0xff;
  local_22d4[0xf] = 0xff;
  local_22d4[0x10] = 0xff;
  local_22d4[1] = 0xff;
  local_22d4[2] = 0xff;
  local_22d4[3] = 0xff;
  local_22d4[4] = 0xff;
  local_22d4[5] = 0xff;
  local_22d4[6] = 0xff;
  local_22d4[7] = 0xff;
  local_22d4[8] = 0xff;
  plVar16 = (long *)(*(long *)(param_1 + 0x100) + -8);
  local_22d4[0x79] = 0xff;
  plVar1 = (long *)(param_1 + 0xf0);
  local_22d4[0] = 0;
  if (*(long *)(param_1 + 0x100) != param_1 + 0xf8) {
    local_22d4[0] = 0;
    plVar14 = plVar16;
    do {
      lVar20 = *plVar14;
      uVar15 = (ulong)local_22d4[0];
      lVar17 = uVar15 * 0x24;
      bVar12 = 0xf1 < local_22d4[0];
      local_22d4[0] = local_22d4[0] + 1;
      pbVar4 = local_2258 + lVar17;
      if (bVar12) {
        pbVar4 = local_2258;
      }
      *pbVar4 = (byte)*(undefined4 *)(lVar20 + 4);
      pbVar4 = local_2258 + lVar17 + 2;
      if (bVar12) {
        pbVar4 = (byte *)&local_2256;
      }
      *(short *)pbVar4 = (short)*(undefined4 *)(lVar20 + 0x10);
      pbVar4 = local_2258 + lVar17 + 4;
      if (bVar12) {
        pbVar4 = local_2254;
      }
      *pbVar4 = *(byte *)(lVar20 + 8);
      pbVar4 = local_2258 + lVar17 + 5;
      if (bVar12) {
        pbVar4 = local_2254 + 1;
      }
      *pbVar4 = (byte)*(undefined4 *)(lVar20 + 0x18);
      pbVar4 = local_2258 + lVar17 + 6;
      if (bVar12) {
        pbVar4 = local_2254 + 2;
      }
      *pbVar4 = (byte)*(undefined4 *)(lVar20 + 0x1c);
      pbVar4 = local_2258 + lVar17 + 8;
      if (bVar12) {
        pbVar4 = local_2254 + 4;
      }
      *(short *)pbVar4 = (short)*(undefined4 *)(lVar20 + 0xc);
      puVar3 = auStack_224e + uVar15 * 0x12;
      if (bVar12) {
        puVar3 = auStack_224e;
      }
      *puVar3 = (short)*(undefined4 *)(lVar20 + 0x24);
      puVar3 = auStack_224e + uVar15 * 0x12 + 1;
      if (bVar12) {
        puVar3 = auStack_224e + 1;
      }
      *puVar3 = (short)*(undefined4 *)(lVar20 + 0x28);
      puVar3 = auStack_224e + uVar15 * 0x12 + 2;
      if (bVar12) {
        puVar3 = auStack_224e + 2;
      }
      *puVar3 = (short)*(undefined4 *)(lVar20 + 0x2c);
      pbVar4 = local_2258 + lVar17 + 7;
      if (bVar12) {
        pbVar4 = local_2254 + 3;
      }
      *pbVar4 = (byte)*(undefined4 *)(lVar20 + 0x14);
      puVar5 = (undefined8 *)((long)&local_2244 + lVar17);
      if (bVar12) {
        puVar5 = &local_2244;
      }
      *(undefined4 *)puVar5 = *(undefined4 *)(lVar20 + 0x48);
      puVar6 = (undefined4 *)((long)&local_2244 + lVar17 + 4);
      if (bVar12) {
        puVar6 = (undefined4 *)((long)&local_2244 + 4);
      }
      *puVar6 = *(undefined4 *)(lVar20 + 0x4c);
      puVar5 = (undefined8 *)((long)&local_223c + lVar17);
      if (bVar12) {
        puVar5 = &local_223c;
      }
      *(undefined4 *)puVar5 = *(undefined4 *)(lVar20 + 0x50);
      puVar6 = (undefined4 *)((long)&local_223c + lVar17 + 4);
      if (bVar12) {
        puVar6 = (undefined4 *)((long)&local_223c + 4);
      }
      *puVar6 = *(undefined4 *)(lVar20 + 0x54);
      plVar14 = (long *)(plVar14[2] + -8);
    } while (plVar14 != plVar1);
  }
  uVar8 = *(uint *)(param_1 + 0x70);
  iVar18 = 0;
  uVar9 = *(uint *)(param_1 + 0xb0);
  iVar2 = uVar9 + uVar8;
  lVar17 = *(long *)(param_1 + 0xb8);
  lVar20 = *(long *)(param_1 + 0x78);
  do {
    bVar10 = local_2258[(long)iVar18 * 0x24];
    uVar13 = (uint)bVar10;
    uVar11 = uVar13 - uVar8;
    if ((int)uVar13 < (int)uVar8) {
      if (uVar8 <= uVar13) {
        uVar13 = 0;
      }
      lVar19 = lVar20 + (ulong)uVar13 * 0xf8;
LAB_0299c528:
      *(short *)(local_2258 + (long)iVar18 * 0x24 + 2) = (short)*(undefined4 *)(lVar19 + 0x10);
    }
    else if ((int)(uint)bVar10 < iVar2) {
      if (uVar9 <= uVar11) {
        uVar11 = 0;
      }
      lVar19 = lVar17 + (long)(int)uVar11 * 0xf8;
      goto LAB_0299c528;
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 != 0xf2);
  if (plVar16 == plVar1) {
    uVar15 = 0;
    if (iVar2 < 1) goto LAB_0299c5c8;
  }
  else {
    uVar15 = 0;
    do {
      puVar7 = puVar21 + uVar15;
      if (0x78 < (uint)uVar15) {
        puVar7 = puVar21;
      }
      uVar15 = uVar15 + 1;
      *puVar7 = (char)*(undefined4 *)(*plVar16 + 4);
      plVar16 = (long *)(plVar16[2] + -8);
    } while (plVar16 != plVar1);
    if (iVar2 <= (int)uVar15) goto LAB_0299c5c8;
  }
  puVar7 = puVar21 + (uVar15 & 0xffffffff);
  if (0x78 < (uint)uVar15) {
    puVar7 = puVar21;
  }
  *puVar7 = 0xff;
LAB_0299c5c8:
  local_22dd = 0;
  local_23e0 = 0x100;
  iVar18 = 0;
  local_23dc[0] = 0;
  puStack_23e8 = local_23dc;
  local_23f0 = PTR_DAT_04bb21f8 + 0x10;
  do {
    FUN_038d13f0(&local_23f0," , %d",(long)(char)puVar21[iVar18]);
    iVar18 = iVar18 + 1;
  } while (iVar18 != 0x79);
  uVar15 = (ulong)local_23f0 >> 0x30;
  local_23f0._0_6_ = CONCAT15(*param_2,0x400000000);
  local_23f0 = (undefined *)(CONCAT26((short)uVar15,(undefined6)local_23f0) & 0xff00ffffffffffff);
  if (-1 < *(int *)(param_1 + 0x2488)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x2488),&local_23f0,
                 local_22d4,(uint)local_22d4[0] * 0x24 + 0x7c,0);
  }
  return;
}

