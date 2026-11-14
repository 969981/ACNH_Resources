
void FUN_01ddd380(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ushort uVar7;
  byte bVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  byte *pbVar15;
  undefined *local_1a0;
  undefined8 *puStack_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined *local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined8 local_c0;
  undefined6 uStack_b8;
  undefined2 local_b2;
  undefined6 uStack_b0;
  undefined1 auStack_aa [2];
  undefined4 local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  local_11d = 0;
  local_c5 = 0;
  local_190 = 0xb;
  local_160 = 0x40;
  puVar1 = (undefined1 *)((long)&local_c0 + 2);
  puVar5 = auStack_aa;
  if (auStack_aa <= puVar1) {
    puVar5 = puVar1;
  }
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_108 = 0x40;
  puVar3 = PTR_DAT_04bb5128 + 0x10;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b2 = 0;
  uStack_b0 = 0;
  local_1a0 = puVar3;
  puStack_198 = &local_c0;
  local_170 = puVar2;
  puStack_168 = local_15c;
  local_118 = puVar2;
  puStack_110 = local_104;
  memset(&local_c0,0,(ulong)(puVar5 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffffc | 2);
  local_a0 = param_2 + 0x20;
  uVar10 = ~(ulong)&local_c0;
  local_a8[0] = 10;
  memset(&local_c0,0,(ulong)(puVar5 + uVar10) & 0xfffffffffffffffc | 2);
  local_18c = 0;
  local_188 = 0xffffffff;
  uStack_180 = 0xffffffff00000000;
  local_178 = 0xffffffff;
  local_15c[0] = 0;
  local_104[0] = 0;
  local_88 = 0;
  local_70 = 1;
  local_6c = 0;
  local_80 = 0;
  uStack_78 = 0;
  puVar4 = PTR_DAT_04bc0cd8 + 0x10;
  local_90 = 0;
  local_98 = puVar4;
  FUN_02906b00(&local_98,&local_1a0,local_a8);
  puVar9 = (ushort *)(**(code **)(local_1a0 + 0x18))(&local_1a0);
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))((long *)(param_1 + 0x10));
  uVar6 = *(uint *)(param_1 + 0x20);
  if (uVar6 != 0) {
    lVar11 = *(long *)(param_1 + 0x18);
    uVar12 = 0;
    lVar13 = 0x7fffffff;
    do {
      pbVar15 = (byte *)(lVar11 + (ulong)uVar12);
      if (lVar13 == 0) goto LAB_01ddd5a4;
      uVar7 = *puVar9;
      if (uVar7 == 0) goto LAB_01ddd5a4;
      bVar8 = (byte)uVar7;
      if (uVar7 < 0x80) {
        *pbVar15 = bVar8;
        iVar14 = 1;
      }
      else if (uVar7 < 0x800) {
        if (uVar6 <= uVar12 + 1) break;
        *pbVar15 = (byte)(uVar7 >> 6) | 0xc0;
        pbVar15[1] = bVar8 & 0x3f | 0x80;
        iVar14 = 2;
      }
      else {
        if (uVar6 <= uVar12 + 2) break;
        *pbVar15 = (byte)(uVar7 >> 0xc) | 0xe0;
        pbVar15[1] = (byte)(uVar7 >> 6) & 0x3f | 0x80;
        pbVar15[2] = bVar8 & 0x3f | 0x80;
        iVar14 = 3;
      }
      uVar12 = iVar14 + uVar12;
      lVar13 = lVar13 + -1;
      puVar9 = puVar9 + 1;
    } while (uVar12 < uVar6);
    pbVar15 = (byte *)(lVar11 + (ulong)(uVar12 - 1));
LAB_01ddd5a4:
    *pbVar15 = 0;
  }
  local_11d = 0;
  local_190 = 0xb;
  local_160 = 0x40;
  local_108 = 0x40;
  local_c5 = 0;
  puVar5 = auStack_aa;
  if (auStack_aa <= puVar1) {
    puVar5 = puVar1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b2 = 0;
  uStack_b0 = 0;
  local_1a0 = puVar3;
  puStack_198 = &local_c0;
  local_170 = puVar2;
  puStack_168 = local_15c;
  local_118 = puVar2;
  puStack_110 = local_104;
  memset(&local_c0,0,(ulong)(puVar5 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffffc | 2);
  local_a8[0] = 10;
  local_a0 = param_2 + 4;
  memset(&local_c0,0,(ulong)(puVar5 + uVar10) & 0xfffffffffffffffc | 2);
  local_18c = 0;
  local_188 = 0xffffffff;
  uStack_180 = 0xffffffff00000000;
  local_178 = 0xffffffff;
  local_15c[0] = 0;
  local_104[0] = 0;
  local_70 = 1;
  local_6c = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = puVar4;
  FUN_02906b00(&local_98,&local_1a0,local_a8);
  puVar9 = (ushort *)(**(code **)(local_1a0 + 0x18))(&local_1a0);
  (**(code **)(*(long *)(param_1 + 0x68) + 0x18))((long *)(param_1 + 0x68));
  uVar6 = *(uint *)(param_1 + 0x78);
  if (uVar6 != 0) {
    lVar11 = *(long *)(param_1 + 0x70);
    uVar12 = 0;
    lVar13 = 0x7fffffff;
    do {
      pbVar15 = (byte *)(lVar11 + (ulong)uVar12);
      if (lVar13 == 0) goto LAB_01ddd760;
      uVar7 = *puVar9;
      if (uVar7 == 0) goto LAB_01ddd760;
      bVar8 = (byte)uVar7;
      if (uVar7 < 0x80) {
        *pbVar15 = bVar8;
        iVar14 = 1;
      }
      else if (uVar7 < 0x800) {
        if (uVar6 <= uVar12 + 1) break;
        *pbVar15 = (byte)(uVar7 >> 6) | 0xc0;
        pbVar15[1] = bVar8 & 0x3f | 0x80;
        iVar14 = 2;
      }
      else {
        if (uVar6 <= uVar12 + 2) break;
        *pbVar15 = (byte)(uVar7 >> 0xc) | 0xe0;
        pbVar15[1] = (byte)(uVar7 >> 6) & 0x3f | 0x80;
        pbVar15[2] = bVar8 & 0x3f | 0x80;
        iVar14 = 3;
      }
      uVar12 = iVar14 + uVar12;
      lVar13 = lVar13 + -1;
      puVar9 = puVar9 + 1;
    } while (uVar12 < uVar6);
    pbVar15 = (byte *)(lVar11 + (ulong)(uVar12 - 1));
LAB_01ddd760:
    *pbVar15 = 0;
  }
  return;
}

