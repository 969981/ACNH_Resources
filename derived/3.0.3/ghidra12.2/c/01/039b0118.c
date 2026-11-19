
int FUN_039b0118(long param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  uint local_138;
  uint local_134;
  uint local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar5 = local_128;
  iVar12 = -1;
  uVar11 = param_2;
  if (*(uint *)(param_1 + 0x48) <= param_2) {
    uVar11 = 0;
  }
  *(int *)(*(long *)(param_1 + 0x50) + (long)(int)uVar11 * 0x30) = param_3;
  if (5 < (ushort)param_3) {
    return -1;
  }
  switch((ushort)param_3) {
  case 0:
    bVar7 = param_2 <= *(uint *)(param_1 + 0x48);
    bVar8 = *(uint *)(param_1 + 0x48) == param_2;
    lVar10 = *(long *)(param_1 + 0x50);
    uVar11 = (uint)*(ushort *)(param_1 + 0x9e);
    break;
  case 1:
    bVar7 = param_2 <= *(uint *)(param_1 + 0x48);
    bVar8 = *(uint *)(param_1 + 0x48) == param_2;
    lVar10 = *(long *)(param_1 + 0x50);
    uVar11 = (uint)*(ushort *)(param_1 + 0xa0);
    break;
  case 2:
    bVar7 = param_2 <= *(uint *)(param_1 + 0x48);
    bVar8 = *(uint *)(param_1 + 0x48) == param_2;
    lVar10 = *(long *)(param_1 + 0x50);
    uVar11 = (uint)*(ushort *)(param_1 + 0xa2);
    break;
  case 3:
    bVar7 = param_2 <= *(uint *)(param_1 + 0x48);
    bVar8 = *(uint *)(param_1 + 0x48) == param_2;
    lVar10 = *(long *)(param_1 + 0x50);
    uVar11 = (uint)*(ushort *)(param_1 + 0xa4);
    break;
  case 4:
    lVar10 = *(long *)(param_1 + 0x50);
    if (*(uint *)(param_1 + 0x48) <= param_2) {
      param_2 = 0;
    }
    uVar11 = 0;
    if (param_3 * 0x10000 != 0) {
      uVar11 = (uint)*(ushort *)(param_1 + 0xa6);
    }
    uVar11 = uVar11 + (param_3 >> 0x10);
    if (*(uint *)(param_1 + 0x90) <= uVar11) {
      uVar11 = 0;
    }
    puVar14 = (uint *)(*(long *)(param_1 + 0x98) + (long)(int)uVar11 * 0x18 + 8);
    if (*puVar14 == 0) goto LAB_039b04b4;
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x98) + (long)(int)uVar11 * 0x18);
    uVar11 = param_4;
    if (*puVar14 <= param_4) {
      uVar11 = 0;
    }
    lVar10 = lVar10 + (long)(int)param_2 * 0x30;
    *(undefined2 *)(lVar10 + 0x18) = *(undefined2 *)(puVar9[2] + (long)(int)uVar11 * 2);
    puVar2 = (undefined8 *)(*(long *)(lVar10 + 8) + (ulong)*(uint *)(param_1 + 0xe0));
    puVar2[2] = 0;
    puVar4 = PTR_FUN_04bd09a0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[3] = 0x3f80000000000000;
    puVar2[4] = puVar4;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *(undefined2 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)((long)puVar2 + 0x74) = 0;
    puVar2[0xf] = 0;
    *puVar2 = &DAT_0484e470;
    puVar2[1] = puVar2 + 2;
    *(undefined8 **)(lVar10 + 0x10) = puVar2;
    lVar13 = *(long *)*puVar9;
    local_e8 = 0;
    local_e0 = 0xffffffffffffffff;
    local_c8 = 0;
    local_c0 = 0xffffffffffffffff;
    local_108 = 0;
    local_100 = 0xffffffffffffffff;
    local_128 = 0;
    local_120 = 0;
    local_d8 = 0;
    local_d0 = 8;
    local_118 = 0;
    local_110 = 8;
    local_f8 = 0;
    local_f0 = 8;
    local_134 = (uint)*(ushort *)(lVar13 + 0x58);
    local_130 = (uint)*(ushort *)(lVar13 + 0x5a);
    local_138 = (uint)*(ushort *)(param_1 + 0xe4);
    local_12c._0_2_ = CONCAT11((*(ushort *)(lVar13 + 4) & 1) == 0,1);
    FUN_003aa384(&local_138);
    FUN_003aa444(puVar2,&local_138,*(undefined8 *)(lVar10 + 8),*(undefined4 *)(param_1 + 0xe0));
    FUN_003aa550(puVar2,lVar13);
    goto LAB_039b0494;
  case 5:
    bVar7 = param_2 <= *(uint *)(param_1 + 0x48);
    bVar8 = *(uint *)(param_1 + 0x48) == param_2;
    lVar10 = *(long *)(param_1 + 0x50);
    uVar11 = (uint)*(ushort *)(param_1 + 0xa8);
  }
  if (!bVar7 || bVar8) {
    param_2 = 0;
  }
  uVar1 = 0;
  if (param_3 * 0x10000 != 0) {
    uVar1 = uVar11;
  }
  uVar1 = uVar1 + (param_3 >> 0x10);
  if (*(uint *)(param_1 + 0x90) <= uVar1) {
    uVar1 = 0;
  }
  puVar14 = (uint *)(*(long *)(param_1 + 0x98) + (long)(int)uVar1 * 0x18 + 8);
  if (*puVar14 == 0) {
LAB_039b04b4:
    *(undefined2 *)(lVar10 + (long)(int)param_2 * 0x30 + 0x18) = 0xffff;
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x98) + (long)(int)uVar1 * 0x18);
    uVar11 = param_4;
    if (*puVar14 <= param_4) {
      uVar11 = 0;
    }
    lVar10 = lVar10 + (long)(int)param_2 * 0x30;
    *(undefined2 *)(lVar10 + 0x18) = *(undefined2 *)(puVar9[2] + (long)(int)uVar11 * 2);
    puVar4 = PTR_FUN_04bd09a0;
    plVar3 = (long *)(*(long *)(lVar10 + 8) + (ulong)*(uint *)(param_1 + 0xe0));
    plVar3[3] = 0x3f80000000000000;
    plVar3[4] = (long)puVar4;
    plVar3[2] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    *(undefined4 *)(plVar3 + 8) = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    puVar4 = PTR_DAT_04bd09c0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[0x13] = 0;
    plVar3[0xf] = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    plVar3[0x12] = 0;
    *plVar3 = (long)(puVar4 + 0x10);
    plVar3[1] = (long)(plVar3 + 2);
    *(long **)(lVar10 + 0x10) = plVar3;
    lVar13 = *(long *)*puVar9;
    local_120 = 0;
    local_118 = 0;
    local_100 = 0;
    local_f8 = 0xffffffffffffffff;
    local_e0 = 0;
    local_d8 = 0xffffffffffffffff;
    local_c0 = 0;
    uStack_b8 = 0xffffffffffffffff;
    local_a0 = 0;
    uStack_98 = 0xffffffffffffffff;
    local_80 = 0;
    uStack_78 = 0xffffffffffffffff;
    local_60 = 0;
    uStack_58 = 0xffffffffffffffff;
    local_110 = 0;
    local_108 = 8;
    local_f0 = 0;
    local_e8 = 8;
    local_d0 = 0;
    local_c8 = 8;
    local_b0 = 0;
    uStack_a8 = 8;
    local_90 = 0;
    uStack_88 = 8;
    local_70 = 0;
    uStack_68 = 8;
    local_130 = (uint)*(ushort *)(lVar13 + 0x68) + (uint)*(ushort *)(lVar13 + 0x66);
    local_128 = CONCAT44(1,(uint)*(ushort *)(lVar13 + 100));
    uVar6 = local_128;
    local_12c = (uint)*(ushort *)(lVar13 + 0x6c);
    local_138 = (uint)*(ushort *)(param_1 + 0xe6);
    local_134 = (uint)*(ushort *)(lVar13 + 0x62);
    local_128._6_2_ = SUB82(uVar5,6);
    local_128._0_6_ = CONCAT15((*(ushort *)(lVar13 + 4) & 1) == 0,(int5)uVar6);
    FUN_003aac60(&local_138);
    FUN_003aad84(plVar3,&local_138,*(undefined8 *)(lVar10 + 8),*(undefined4 *)(param_1 + 0xe0));
    FUN_003aaf10(plVar3,lVar13);
LAB_039b0494:
    *(ushort *)(lVar10 + 0x1a) = *(ushort *)(lVar10 + 0x1a) | 1;
    iVar12 = -1;
    if ((int)param_4 < (int)(*puVar14 - 1)) {
      iVar12 = param_4 + 1;
    }
  }
  return iVar12;
}

