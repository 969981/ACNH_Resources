
bool FUN_01cb3600(undefined4 *param_1,int *param_2,long *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  byte *pbVar13;
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
  int *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  iVar2 = param_2[7];
  iVar3 = *param_2;
  lVar10 = *param_3;
  if ((iVar2 != 0 && iVar3 != 0) && lVar10 != 0) {
    local_11d = 0;
    *param_1 = 2;
    puStack_168 = local_15c;
    local_190 = 0xb;
    local_160 = 0x40;
    local_108 = 0x40;
    local_c5 = 0;
    local_170 = PTR_DAT_04bb2bc0 + 0x10;
    param_1[1] = param_2[7];
    puVar6 = PTR_DAT_04bb5128;
    puStack_110 = local_104;
    local_1a0 = PTR_DAT_04bb5128 + 0x10;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b2 = 0;
    uStack_b0 = 0;
    puVar1 = auStack_aa;
    if (auStack_aa <= (undefined1 *)((long)&local_c0 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_c0 + 2U);
    }
    puStack_198 = &local_c0;
    local_118 = local_170;
    memset(&local_c0,0,(ulong)(puVar1 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffffc | 2);
    local_a0 = param_2 + 8;
    local_a8[0] = 10;
    memset(&local_c0,0,(ulong)(puVar1 + ~(ulong)&local_c0) & 0xfffffffffffffffc | 2);
    puVar7 = PTR_DAT_04bc0cd8;
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
    local_98 = PTR_DAT_04bc0cd8 + 0x10;
    local_90 = 0;
    FUN_02906b00(&local_98,&local_1a0,local_a8);
    puVar8 = (ushort *)(**(code **)(local_1a0 + 0x18))(&local_1a0);
    uVar9 = 0;
    lVar11 = 0x7fffffff;
    do {
      pbVar13 = (byte *)((long)param_1 + (ulong)uVar9 + 8);
      if (lVar11 == 0) goto LAB_01cb3820;
      uVar4 = *puVar8;
      if (uVar4 == 0) goto LAB_01cb3820;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) {
        *pbVar13 = bVar5;
        iVar12 = 1;
      }
      else if (uVar4 < 0x800) {
        if (0x1d < uVar9) break;
        *pbVar13 = (byte)(uVar4 >> 6) | 0xc0;
        pbVar13[1] = bVar5 & 0x3f | 0x80;
        iVar12 = 2;
      }
      else {
        if (0x1e < uVar9 + 2) break;
        *pbVar13 = (byte)(uVar4 >> 0xc) | 0xe0;
        pbVar13[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        pbVar13[2] = bVar5 & 0x3f | 0x80;
        iVar12 = 3;
      }
      uVar9 = iVar12 + uVar9;
      lVar11 = lVar11 + -1;
      puVar8 = puVar8 + 1;
    } while (uVar9 < 0x1f);
    pbVar13 = (byte *)((long)param_1 + (ulong)(uVar9 - 1) + 8);
LAB_01cb3820:
    local_170 = PTR_DAT_04bb2bc0;
    *pbVar13 = 0;
    local_160 = 0x40;
    local_108 = 0x40;
    local_1a0 = puVar6 + 0x10;
    local_190 = 0xb;
    local_170 = local_170 + 0x10;
    local_11d = 0;
    local_c5 = 0;
    param_1[10] = *param_2;
    puStack_168 = local_15c;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b2 = 0;
    uStack_b0 = 0;
    puStack_110 = local_104;
    puVar1 = auStack_aa;
    if (auStack_aa <= (undefined1 *)((long)&local_c0 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_c0 + 2U);
    }
    puStack_198 = &local_c0;
    local_118 = local_170;
    memset(&local_c0,0,(ulong)(puVar1 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffffc | 2);
    local_a8[0] = 10;
    local_a0 = param_2 + 1;
    memset(&local_c0,0,(ulong)(puVar1 + ~(ulong)&local_c0) & 0xfffffffffffffffc | 2);
    local_18c = 0;
    local_188 = 0xffffffff;
    uStack_180 = 0xffffffff00000000;
    local_70 = 1;
    local_98 = puVar7 + 0x10;
    local_178 = 0xffffffff;
    local_15c[0] = 0;
    local_104[0] = 0;
    local_6c = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    local_88 = 0;
    FUN_02906b00(&local_98,&local_1a0,local_a8);
    puVar8 = (ushort *)(**(code **)(local_1a0 + 0x18))(&local_1a0);
    uVar9 = 0;
    lVar11 = 0x7fffffff;
    do {
      pbVar13 = (byte *)((long)param_1 + (ulong)uVar9 + 0x2d);
      if (lVar11 == 0) goto LAB_01cb39e0;
      uVar4 = *puVar8;
      if (uVar4 == 0) goto LAB_01cb39e0;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) {
        *pbVar13 = bVar5;
        iVar12 = 1;
      }
      else if (uVar4 < 0x800) {
        if (0x1d < uVar9) break;
        *pbVar13 = (byte)(uVar4 >> 6) | 0xc0;
        pbVar13[1] = bVar5 & 0x3f | 0x80;
        iVar12 = 2;
      }
      else {
        if (0x1e < uVar9 + 2) break;
        *pbVar13 = (byte)(uVar4 >> 0xc) | 0xe0;
        pbVar13[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        pbVar13[2] = bVar5 & 0x3f | 0x80;
        iVar12 = 3;
      }
      uVar9 = iVar12 + uVar9;
      lVar11 = lVar11 + -1;
      puVar8 = puVar8 + 1;
    } while (uVar9 < 0x1f);
    pbVar13 = (byte *)((long)param_1 + (ulong)(uVar9 - 1) + 0x2d);
LAB_01cb39e0:
    *pbVar13 = 0;
    bVar5 = 2;
    if (*(byte *)(param_2 + 6) < 4) {
      bVar5 = *(byte *)(param_2 + 6);
    }
    *(byte *)(param_1 + 0xb) = bVar5;
    *(long *)(param_1 + 0x14) = *param_3;
  }
  return (iVar2 != 0 && iVar3 != 0) && lVar10 != 0;
}

