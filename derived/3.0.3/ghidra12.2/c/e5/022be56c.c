
uint FUN_022be56c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined2 local_110;
  undefined4 local_10e;
  undefined1 local_10a;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined2 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined8 local_e0;
  int local_d8;
  uint3 local_d4;
  undefined1 uStack_d1;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_04bbc1a0;
  puVar1 = PTR_DAT_04bb2010;
  local_58 = 0;
  local_78 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_70 = PTR_DAT_04bb2010 + 0x10;
  local_68 = (undefined *)0x0;
  puStack_60 = puStack_70;
  uVar9 = FUN_022ba528(param_1,&local_78,0,0,0);
  if ((uVar9 & 1) != 0) {
    bVar11 = *(byte *)(param_1 + 0x10);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_f0._0_4_ = CONCAT31(local_f0._1_3_,bVar11);
    local_138 = (undefined *)CONCAT44(local_138._4_4_,(float)local_68._4_4_ * 5.0 + 5.0);
    local_140 = (undefined *)CONCAT44(local_140._4_4_,(float)(int)local_68 * 5.0 + 5.0);
    lVar10 = FUN_0251b3b0(&local_f0,0);
    if ((lVar10 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
      fVar13 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_140,0);
      fVar13 = fVar13 - *(float *)(lVar10 + 4);
      bVar5 = true;
      bVar6 = false;
      if (fVar13 <= 5.0) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar13)) {
          bVar5 = fVar13 < -5.0;
          bVar6 = false;
        }
      }
      if (bVar5 == bVar6) {
        local_88 = 0;
        lVar10 = *(long *)PTR_DAT_04bb2720;
        if (lVar10 == 0) {
          puVar12 = &DAT_055c04a0;
        }
        else {
          puVar12 = &DAT_055c04a0;
          if (*(long *)(lVar10 + 0x330) != 0) {
            puVar12 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar7 = FUN_006bd550(*puVar12,0);
            puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar7 != 0x758f7eaf) {
              puVar12 = &DAT_055c04a0;
            }
          }
        }
        local_84 = *(undefined4 *)(puVar12 + 7);
        local_80 = FUN_017baf44();
        local_80 = local_80 & 1;
        puStack_90 = PTR_DAT_04bb6268 + 0x10;
        local_98 = 0;
        local_a0 = puVar1 + 0x10;
        FUN_01a5033c(&local_a8,&puStack_90,0,&puStack_70,&local_a0);
        lVar10 = *(long *)PTR_DAT_04bbbc68;
        uVar8 = 0;
        if (lVar10 == 0) goto LAB_022be65c;
        if (((((*(long *)(lVar10 + 0xb0) != 0) && (*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0)) &&
             (*(long *)(lVar10 + 0x488) != 0)) &&
            ((*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0 && (*(long *)(lVar10 + 0x2b0) != 0))))
           && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)) {
          uVar8 = FUN_0277d6c4(&local_a8);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            FUN_0124c030(auStack_c0,&local_a8);
            iVar7 = FUN_0123db50(auStack_b8,local_b0);
            if (iVar7 == 0x2d) {
              local_140 = puVar2 + 0x10;
              local_138 = puVar1 + 0x10;
              iVar4 = (int)local_98;
              local_f0 = &local_138;
              local_e8 = SUB84(&local_128,0);
              uStack_e4 = (undefined2)((ulong)&local_128 >> 0x20);
              uStack_e2 = (undefined2)((ulong)&local_128 >> 0x30);
              iVar7 = local_98._4_4_ + 2;
              local_130 = (undefined *)local_98;
              local_120 = (undefined *)CONCAT44(local_98._4_4_ + 1,(int)local_98 + 1);
              local_d8 = (int)local_98;
              _local_d4 = local_98._4_4_;
              local_128 = local_138;
              local_e0 = local_138;
              do {
                uVar9 = FUN_013861b0(&local_e0,0);
                if ((uVar9 & 1) != 0) goto LAB_022be658;
                if (local_d8 < *(int *)(CONCAT26(uStack_e2,CONCAT24(uStack_e4,local_e8)) + 8)) {
                  local_d8 = local_d8 + 1;
                }
                else {
                  _local_d4 = _local_d4 + 1;
                  local_d8 = *(int *)(local_f0 + 1);
                }
              } while (iVar4 != local_d8 || iVar7 != _local_d4);
              local_c8 = 0xfffe;
              FUN_0277d4ac(&local_c8);
              FUN_0124c70c(auStack_c0,&local_c8);
              puVar3 = local_e0;
              if ((short)local_c8 == -2) {
                local_c8 = CONCAT44(uStack_a4,local_a8);
              }
              local_d0 = 0;
              bVar11 = *(byte *)(param_1 + 0x10);
              local_138 = puVar2 + 0x10;
              puVar1 = puVar1 + 0x10;
              local_108 = 0xffffffffffffffff;
              local_f0._4_4_ = (undefined4)local_c8;
              local_e8 = (undefined4)((ulong)local_c8 >> 0x20);
              if (7 < bVar11) {
                bVar11 = 0xff;
              }
              local_e0 = (undefined *)CONCAT17(bVar11,0x16000000000000);
              local_110 = 0xff00;
              local_f4 = 0xff00;
              local_e0._0_6_ = CONCAT24(*(undefined2 *)PTR_DAT_04bb6298,(int)puVar3);
              local_140 = (undefined *)CONCAT62(local_140._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
              local_d8._0_2_ = (ushort)(byte)local_d8;
              local_f0._0_4_ = 0;
              local_d4 = (uint3)(ushort)local_d4;
              uStack_e4 = SUB82(local_68,0);
              uStack_e2 = (undefined2)((ulong)local_68 >> 0x20);
              local_10e = 0;
              local_10a = 0;
              local_100 = 0;
              local_fc = 0x41200000;
              local_128 = local_68;
              local_118 = (undefined4)local_58;
              uStack_114 = local_58._4_4_;
              local_130 = puVar1;
              local_120 = puVar1;
              uVar8 = FUN_022ab010(param_1,&local_140,&local_f0);
              if ((uVar8 & 1) != 0) {
                local_148 = (int)local_68;
                uStack_144 = local_68._4_4_;
                local_150 = puVar1;
                FUN_022ab224(param_1,0x16,&local_c8,&local_150,0);
              }
              goto LAB_022be65c;
            }
          }
        }
      }
    }
  }
LAB_022be658:
  uVar8 = 0;
LAB_022be65c:
  return uVar8 & 1;
}

