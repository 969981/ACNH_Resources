
uint FUN_02430730(long param_1,uint param_2,uint param_3,float param_4)

{
  undefined *puVar1;
  byte *pbVar2;
  bool bVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 local_148;
  float local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined8 local_124;
  undefined8 local_11c;
  float local_114;
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  float local_10c;
  undefined8 local_108;
  undefined4 local_100;
  float local_f8 [28];
  undefined *local_88;
  undefined8 local_80;
  
  if ((*DAT_055c10d8 == '\0') && (*DAT_055cdb40 == '\0')) {
    pbVar2 = (byte *)(param_1 + 0x1ee8);
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_054f0960);
        puVar15 = &DAT_054f0958;
        if (iVar6 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar15 = &DAT_054f0958;
      }
    }
    else {
      lVar17 = DAT_054f5738;
      if (((ulong)*pbVar2 < 8) &&
         (lVar17 = DAT_054f5738 + (ulong)*pbVar2 * 8, *(int *)(lVar17 + 0xf04) != 0))
      goto LAB_0243077c;
      puVar15 = (undefined8 *)(lVar17 + 0x204);
    }
    local_f8[0] = 6.5861e-44;
    if ((*(uint *)((long)puVar15 + 4) >> 0xf & 1) == 0) {
      local_88 = PTR_DAT_04bb2010 + 0x10;
      local_80 = 0;
      FUN_016e7c24(*(long *)(param_1 + 0x68) + 0x278,&local_88,0);
      local_f8[2] = 0.0;
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      local_f8[3] = 1.0;
      local_f8[4] = 0.0;
      local_f8[5] = 0.0;
      local_f8[6] = -1.0;
      local_f8[7] = 0.0;
      local_f8[8] = 0.0;
      lVar17 = 0;
      local_f8[9] = 0.0;
      local_f8[10] = 0.0;
      bVar12 = 0;
      local_f8[0xb] = 1.0;
      local_f8[0xc] = 0.0;
      local_f8[0xd] = 0.0;
      local_f8[0xe] = -1.0;
      local_f8[0xf] = 0.25;
      local_f8[0x10] = 0.0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      local_f8[0x11] = 0.25;
      local_f8[0x12] = -0.25;
      local_f8[0x13] = 0.0;
      local_f8[0x14] = 0.25;
      local_f8[0x15] = -0.25;
      local_f8[0x16] = 0.0;
      local_f8[0x17] = -0.25;
      local_f8[0x18] = 0.25;
      local_f8[0x19] = 0.0;
      local_f8[0x1a] = -0.25;
      do {
        uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
        local_108._0_4_ = (float)uVar13;
        local_108._4_4_ = (float)((ulong)uVar13 >> 0x20);
        local_108 = CONCAT44(local_108._4_4_ + *(float *)((long)local_f8 + lVar17 + 4),
                             (float)local_108 + *(float *)((long)local_f8 + lVar17));
        local_100 = *(float *)(*(long *)(param_1 + 0x68) + 0x280) +
                    *(float *)((long)local_f8 + lVar17 + 8);
        pfVar9 = (float *)FUN_016e7c24(&local_108,&local_88,0);
        local_110 = *(undefined2 *)pfVar9;
        local_10e = *(undefined1 *)((long)pfVar9 + 2);
        local_10d = *(undefined1 *)((long)pfVar9 + 3);
        fVar20 = *pfVar9;
        fVar18 = pfVar9[1];
        local_10c = fVar18;
        iVar6 = FUN_0277d6c4(&local_110);
        puVar4 = PTR_DAT_04bb43c0;
        bVar5 = iVar6 == 0xea79;
        bVar3 = (bool)(!bVar5 | bVar12);
        if (bVar3) {
          lVar14 = *(long *)PTR_DAT_04bb43c0;
          uVar7 = FUN_0277d6c4(&local_110);
          lVar16 = *(long *)puVar4;
          if (lVar16 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              local_138 = 0;
              local_148 = puVar1;
              local_140 = fVar20;
              local_13c = fVar18;
              uVar7 = FUN_0277d6c4(&local_140);
              if (DAT_053274a0 != 0) {
                lVar14 = *(long *)(lVar16 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                  lVar14 = *(long *)PTR_DAT_04bc0428;
                  uVar7 = FUN_0277d6c4(&local_110);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                  if (uVar7 < *(uint *)(lVar14 + 0x1d8)) {
                    lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8);
                    if (lVar14 != 0) {
                      local_138 = lVar14;
                    }
                  }
                }
              }
              local_11c = (undefined *)0xa12;
              FUN_0277d4ac(&local_11c);
              uVar10 = FUN_0277d7b4(&local_140,&local_11c);
              if (((uVar10 & 1) != 0) && (uVar10 = FUN_0277e024(&local_140), (uVar10 & 1) != 0))
              goto LAB_02430bb4;
            }
          }
        }
        else {
          local_114 = ((float)local_80._4_4_ * 5.0 + (float)(local_80._4_4_ + 1) * 5.0 + 5.0) * 0.5;
          local_11c = (undefined *)
                      CONCAT44(local_11c._4_4_,
                               ((float)(int)(float)local_80 * 5.0 +
                               (float)((int)(float)local_80 + 1) * 5.0 + 5.0) * 0.5);
          uVar19 = FUN_016e026c(0,&local_11c,0,0);
          local_11c = (undefined *)CONCAT44(uVar19,(undefined4)local_11c);
          bVar12 = 1;
          lVar14 = FUN_0251e98c(1);
          pfVar9 = (float *)(**(code **)(*(long *)(lVar14 + 0x2a0) + 0xf0))(lVar14 + 0x2a0);
          local_124 = 0x1000000000000;
          local_126 = 0;
          local_148 = local_11c;
          local_138 = CONCAT44(*(undefined4 *)(param_1 + 0x230),(undefined4)local_138);
          local_13c = *pfVar9 * 0.8;
          bVar11 = *pbVar2;
          local_140 = local_114;
          if (7 < bVar11) {
            bVar11 = 0xff;
          }
          local_138 = CONCAT71(local_138._1_7_,bVar11);
          local_130 = 0xbf8000000000001f;
          local_128 = 0x101;
          uVar10 = FUN_0251fad0(&local_148,0);
          if ((uVar10 & 1) == 0) goto LAB_02430bb4;
          bVar5 = false;
        }
        lVar17 = lVar17 + 0xc;
      } while (lVar17 != 0x6c);
      bVar3 = false;
LAB_02430bb4:
      if ((bVar5) || (bVar3 != false)) {
        *(undefined8 *)(param_1 + 0xee0) = 0;
        *(undefined1 *)(param_1 + 0xee8) = 0;
        local_140 = (float)local_80._4_4_ * 5.0 + 2.5;
        fVar18 = (float)(int)(float)local_80 * 5.0 + 2.5;
        local_148 = (undefined *)(ulong)(uint)fVar18;
        fVar18 = (float)(int)((int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0) & 0xfffffffe) *
                 5.0 + 5.0;
        fVar20 = (float)(int)((int)((float)(int)local_140 / 5.0) - (uint)(local_140 < 0.0) &
                             0xfffffffe) * 5.0 + 5.0;
        uVar19 = FUN_016e026c(0,&local_148,0,0);
        if (bVar3 == false) {
          if ((param_2 & 1) == 0) goto LAB_02430d30;
        }
        else {
          local_124 = 0x1000000000000;
          local_128 = 0x101;
          local_13c = 3.75;
          local_148 = (undefined *)CONCAT44(uVar19,fVar18);
          bVar12 = *pbVar2;
          local_138 = CONCAT44(*(undefined4 *)(param_1 + 0x230),(undefined4)local_138);
          local_126 = 0;
          if (7 < bVar12) {
            bVar12 = 0xff;
          }
          local_138 = CONCAT71(local_138._1_7_,bVar12);
          local_130 = 0xbf80000000000003;
          local_140 = fVar20;
          uVar8 = FUN_0251fad0(&local_148,0);
          uVar7 = 0;
          if (((uVar8 & 1) != 0) && ((param_3 & 1) != 0)) {
            if (param_4 == 0.0) {
              FUN_02373e70(param_1,6,1);
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
              local_108 = CONCAT35(local_108._5_3_,0x100000006);
              local_100 = param_4;
              FUN_02374e74(param_1,&local_108);
            }
          }
          if (((uVar8 | param_2) & 1) != 0) {
            uVar7 = uVar7 | uVar8 ^ 1;
            goto LAB_02430780;
          }
LAB_02430d30:
          fVar18 = fVar18 - *(float *)(*(long *)(param_1 + 0x68) + 0x278);
          fVar20 = fVar20 - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
          lVar17 = DAT_055021a0 + 0x20 + (ulong)*pbVar2 * 0x740;
          if (7 < *pbVar2) {
            lVar17 = DAT_055021a0 + 0x20;
          }
          local_100 = (float)CONCAT31(CONCAT21(local_100._2_2_,bVar3),
                                      bVar3 | 3.5 < SQRT(fVar20 * fVar20 + fVar18 * fVar18));
          local_108 = local_80;
          local_140 = (float)local_80;
          local_13c = (float)local_80._4_4_;
          local_148 = PTR_DAT_04bb2010 + 0x10;
          uVar10 = FUN_022bf264(lVar17 + 0xb0,&local_148);
          if ((uVar10 & 1) == 0) {
            if ((param_3 & 1) != 0) {
              if (param_4 == 0.0) {
                uVar7 = 1;
                FUN_02373e70(param_1,6,1);
              }
              else {
                uVar7 = 1;
                local_148 = (undefined *)CONCAT35(local_148._5_3_,0x100000006);
                local_140 = param_4;
                FUN_02374e74(param_1,&local_148);
              }
              goto LAB_02430780;
            }
            goto LAB_0243077c;
          }
          FUN_02430e74(param_1,&local_108);
        }
        uVar7 = 1;
        goto LAB_02430780;
      }
    }
  }
LAB_0243077c:
  uVar7 = 0;
LAB_02430780:
  return uVar7 & 1;
}

