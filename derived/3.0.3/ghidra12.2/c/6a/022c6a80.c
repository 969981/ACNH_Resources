
void FUN_022c6a80(long param_1,short param_2,short param_3)

{
  bool bVar1;
  undefined *puVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  undefined1 auStack_178 [8];
  undefined1 local_170 [4];
  uint uStack_16c;
  undefined1 auStack_160 [8];
  undefined *local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  byte local_148;
  undefined *local_140;
  uint local_138;
  uint local_134;
  byte local_130;
  undefined1 local_12f;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  uint local_e0 [2];
  undefined *local_d8;
  undefined *puStack_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined2 local_b0;
  undefined4 local_ae;
  undefined1 local_aa;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined2 local_94;
  undefined4 local_90 [2];
  uint uStack_88;
  short local_84;
  short local_82;
  undefined1 local_80 [6];
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined6 uStack_78;
  undefined1 local_72;
  undefined1 uStack_71;
  undefined4 local_70;
  
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + param_2;
  *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + param_3;
  puVar7 = PTR_DAT_04bb32e0;
  pbVar3 = PTR_DAT_04bb5038 + ((long)(char)*(byte *)(param_1 + 0x17) & 0xffffffff);
  if (7 < *(byte *)(param_1 + 0x17)) {
    pbVar3 = PTR_DAT_04bb32e0;
  }
  uStack_14c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_150 = 1;
  local_148 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb2010;
  local_148 = local_148 & 1;
  local_158 = PTR_DAT_04bb6268 + 0x10;
  local_138 = (uint)*(short *)(param_1 + 0xc);
  local_134 = (uint)*(short *)(param_1 + 0xe);
  local_140 = PTR_DAT_04bb2010 + 0x10;
  FUN_01a5033c(auStack_160,&local_158,0,&local_140,0);
  lVar14 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar14 + 0x488) != 0 && (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar14 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)))))) {
    uVar9 = FUN_0277d6c4(auStack_160);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      FUN_0124c030(auStack_178,auStack_160);
      iVar10 = FUN_0277d6c4();
      if (((iVar10 == 0xeb78) ||
          ((iVar10 = FUN_0277d6c4(local_170), iVar10 == 0xeb77 ||
           (iVar10 = FUN_0277d6c4(local_170), iVar10 == 0xeb76)))) &&
         ((int)DAT_0547b48c <= DAT_0547b490)) {
        puVar2 = PTR_DAT_04bc2e90 + 0x10;
        uVar9 = DAT_0547b48c;
        do {
          local_134 = 0;
          local_130 = *puVar7;
          local_12f = 0;
          local_124 = 0xfffe;
          local_12c = *(undefined4 *)PTR_DAT_04bb37e0;
          uStack_128 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          if (7 < local_130) {
            local_130 = 0xff;
          }
          local_140 = puVar2;
          local_138 = uVar9;
          FUN_0277d4ac(&local_124);
          local_11c = 0xfffe;
          FUN_0277d4ac(&local_11c);
          local_114 = 0;
          local_10c = 0;
          local_104 = 0;
          local_e8 = 0;
          local_e4 = 0;
          uStack_f8 = 0;
          local_f0 = 0x2400000000;
          uVar11 = (uint)*pbVar3;
          if (7 < uVar11) {
            uVar11 = 0xffffffff;
          }
          local_e0[0] = local_138;
          lVar14 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
          if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= local_138) {
            local_138 = 0;
          }
          puVar13 = *(uint **)(lVar14 + (long)(int)local_138 * 0x18 + 0x10);
          local_100 = puVar6 + 0x10;
          if ((0 < (int)*puVar13) && (uVar11 < *(uint *)(lVar14 + (long)(int)local_138 * 0x18 + 8)))
          {
            uVar12 = 0;
            lVar14 = 0x2c;
            do {
              if (((uVar12 < puVar13[(long)(int)uVar11 * 4]) &&
                  (*(long *)(puVar13 + (long)(int)uVar11 * 4 + 2) != 0)) &&
                 (*(int *)(*(long *)(puVar13 + (long)(int)uVar11 * 4 + 2) + lVar14) == 0)) {
                if (-1 < (int)uVar12) {
                  if (uVar9 == 0) {
                    return;
                  }
                  local_134 = 0;
                  local_130 = *puVar7;
                  local_12f = 0;
                  if (7 < local_130) {
                    local_130 = 0xff;
                  }
                  local_12c = *(undefined4 *)PTR_DAT_04bb37e0;
                  uStack_128 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                  local_124 = 0xfffe;
                  local_140 = PTR_DAT_04bc2e90 + 0x10;
                  local_138 = uVar9;
                  FUN_0277d4ac(&local_124);
                  local_11c = 0xfffe;
                  FUN_0277d4ac(&local_11c);
                  local_100 = puVar6 + 0x10;
                  local_114 = 0;
                  local_10c = 0;
                  local_104 = 0;
                  local_e8 = 0;
                  local_e4 = 0;
                  uStack_f8 = 0;
                  local_f0 = 0x2400000000;
                  bVar5 = *pbVar3;
                  local_134 = (uint)bVar5;
                  if (7 < local_134) {
                    local_134 = 0xffffffff;
                  }
                  if (bVar5 < 8) {
                    local_130 = bVar5;
                  }
                  local_12f = 1;
                  iVar10 = FUN_0277d6c4(local_170);
                  if (((iVar10 == 0xeb78) || (iVar10 = FUN_0277d6c4(local_170), iVar10 == 0xeb77))
                     || (iVar10 = FUN_0277d6c4(local_170), iVar10 == 0xeb76)) {
                    uStack_16c = uStack_16c | 0x1000000;
                  }
                  local_84 = (short)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
                  local_82 = (short)((ulong)*(undefined8 *)(param_1 + 8) >> 0x30);
                  local_90[0] = 0;
                  uVar4 = *(undefined8 *)(param_1 + 0x10);
                  local_70 = *(undefined4 *)(param_1 + 0x20);
                  uStack_71 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x38);
                  _uStack_78 = CONCAT16((char)uVar9,(int6)*(undefined8 *)(param_1 + 0x18));
                  puStack_d0 = puVar6 + 0x10;
                  uStack_79 = (undefined1)((ulong)uVar4 >> 0x38);
                  _local_80 = CONCAT16(0x14,SUB86(uVar4,0));
                  uVar8 = _local_80;
                  uStack_88 = uStack_16c;
                  local_ae = 0;
                  local_aa = 0;
                  local_a0 = 0;
                  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
                  local_a8 = 0xffffffffffffffff;
                  local_b0 = 0xff00;
                  local_9c = 0x41200000;
                  local_94 = 0xff00;
                  local_80._4_2_ = SUB82((ulong)uVar4 >> 0x20,0);
                  local_e0[0] = CONCAT22(local_e0[0]._2_2_,local_80._4_2_);
                  iStack_c4 = (int)local_82;
                  iStack_b4 = iStack_c4 + 1;
                  local_c8 = (int)local_84;
                  local_b8 = local_c8 + 1;
                  local_c0 = puStack_d0;
                  _local_80 = uVar8;
                  FUN_022ab010(&local_140,local_e0,local_90);
                  return;
                }
                break;
              }
              uVar12 = uVar12 + 1;
              lVar14 = lVar14 + 0x518;
            } while (*puVar13 != uVar12);
          }
          bVar1 = (int)uVar9 < DAT_0547b490;
          uVar9 = uVar9 + 1;
        } while (bVar1);
      }
    }
  }
  return;
}

