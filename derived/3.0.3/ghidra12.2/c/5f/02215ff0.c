
ulong FUN_02215ff0(long param_1,long param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_1a8;
  char *pcStack_1a0;
  undefined4 local_198;
  char local_194 [7];
  undefined1 local_18d;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  undefined4 local_70;
  
  local_70 = 0;
  local_f8 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_100 = 0;
  local_188 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  if ((param_4 & 1) == 0) {
    uVar7 = 0;
    uVar13 = 6;
  }
  else {
    uVar7 = FUN_02216a10(&local_f8,&local_188,param_3);
    uVar7 = uVar7 & 0xffffffff;
    uVar13 = 9;
  }
  if ((int)param_5 < 1) {
    uVar7 = 0;
  }
  else {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb3768 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((param_4 & 1) == 0) {
        if (uVar13 <= uVar12) goto LAB_02216450;
        pbVar3 = (byte *)(param_1 + 0x1b) + uVar12 * 3;
        if (5 < uVar12) {
          pbVar3 = (byte *)(param_1 + 0x1b);
        }
        uVar8 = FUN_0221119c();
joined_r0x0221615c:
        if ((uVar8 & 1) != 0) {
          local_198 = 8;
          local_18d = 0;
          local_194[0] = '\0';
          local_1a8 = puVar1;
          pcStack_1a0 = local_194;
          FUN_038d1270(&local_1a8,"-----");
          if ((ulong)*pbVar3 < 0x23) {
            FUN_038d1270(&local_1a8,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar3 * 8 + 0xb0),pbVar3[1]);
          }
          if (0 < *(int *)(param_1 + 0x30)) {
            lVar11 = 0;
            do {
              iVar5 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar11 * 8),
                                   &local_1a8);
              if (iVar5 == 0) {
                if (*(long *)(*(long *)(param_1 + 0x38) + lVar11 * 8) != 0) goto LAB_02216100;
                break;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(param_1 + 0x30));
          }
        }
        if ((uVar12 == 0) && ((param_4 & 1) == 0)) {
          pcStack_1a0 = "NewBuildCount";
          local_1a8 = puVar2;
          iVar5 = FUN_02758850(&local_1a8);
          lVar11 = *(long *)PTR_DAT_04bb27f8;
          uVar10 = 0;
          if (lVar11 == 0) {
LAB_02216274:
            if (uVar10 + iVar5 != 3) goto LAB_022162a0;
            puVar9 = &DAT_0545a3f0;
          }
          else {
            if (*(int *)(lVar11 + 0x18) == 1) {
              local_1a8 = (undefined *)
                          (CONCAT44(local_1a8._4_4_,(uint)*(ushort *)(lVar11 + 0xc0)) &
                          0xffffffff0000000f);
              uVar10 = *(ushort *)(lVar11 + 0xc0) & 0xf;
              if ((int)local_1a8 == 1) goto LAB_02216274;
            }
            local_1a8 = PTR_DAT_04bb2020 + 0x10;
            pcStack_1a0 = "IsOrderedNewNpcHouse";
            iVar6 = FUN_02758850(&local_1a8);
            if (iVar6 == 0) {
              uVar10 = 0;
              goto LAB_02216274;
            }
LAB_022162a0:
            local_1a8 = PTR_DAT_04bb2020 + 0x10;
            pcStack_1a0 = "NewBuildCount";
            iVar5 = FUN_02758850(&local_1a8);
            lVar11 = *(long *)PTR_DAT_04bb27f8;
            uVar10 = 0;
            if (lVar11 == 0) {
LAB_02216320:
              if (uVar10 + iVar5 == 7) {
                puVar9 = &DAT_0545a3f4;
                goto LAB_022163e4;
              }
            }
            else {
              if (*(int *)(lVar11 + 0x18) == 1) {
                local_1a8 = (undefined *)
                            (CONCAT44(local_1a8._4_4_,(uint)*(ushort *)(lVar11 + 0xc0)) &
                            0xffffffff0000000f);
                uVar10 = *(ushort *)(lVar11 + 0xc0) & 0xf;
                if ((int)local_1a8 == 1) goto LAB_02216320;
              }
              local_1a8 = PTR_DAT_04bb2020 + 0x10;
              pcStack_1a0 = "IsOrderedNewNpcHouse";
              iVar6 = FUN_02758850(&local_1a8);
              if (iVar6 == 0) {
                uVar10 = 0;
                goto LAB_02216320;
              }
            }
            local_1a8 = PTR_DAT_04bb2020 + 0x10;
            pcStack_1a0 = "NewBuildCount";
            iVar5 = FUN_02758850(&local_1a8);
            lVar11 = *(long *)PTR_DAT_04bb27f8;
            uVar10 = 0;
            if (lVar11 != 0) {
              if (*(int *)(lVar11 + 0x18) == 1) {
                local_1a8 = (undefined *)
                            (CONCAT44(local_1a8._4_4_,(uint)*(ushort *)(lVar11 + 0xc0)) &
                            0xffffffff0000000f);
                uVar10 = *(ushort *)(lVar11 + 0xc0) & 0xf;
                if ((int)local_1a8 == 1) goto LAB_022163c4;
              }
              local_1a8 = PTR_DAT_04bb2020 + 0x10;
              pcStack_1a0 = "IsOrderedNewNpcHouse";
              iVar6 = FUN_02758850(&local_1a8);
              if (iVar6 != 0) goto LAB_022163f0;
              uVar10 = 0;
            }
LAB_022163c4:
            if (uVar10 + iVar5 != 8) goto LAB_022163f0;
            puVar9 = &DAT_0545a3f8;
          }
LAB_022163e4:
          uVar8 = FUN_02210ae0(param_1,pbVar3,param_3,puVar9,0);
          if ((uVar8 & 1) == 0) goto LAB_022163f0;
        }
        else {
LAB_022163f0:
          if ((uVar7 & 1) == 0) {
            uVar8 = FUN_02216480(pbVar3,param_2,param_3);
          }
          else {
            uVar8 = FUN_022167a0(pbVar3,param_2,&local_f8,&local_188);
          }
          if ((uVar8 & 1) == 0) {
LAB_02216450:
            return uVar12 & 0xffffffff;
          }
        }
        bVar4 = *pbVar3;
        if (bVar4 < 0x23) {
          uVar8 = (ulong)(bVar4 >> 3) & 0x1c;
          *(uint *)(param_2 + uVar8) =
               *(uint *)(param_2 + uVar8) & (1 << (ulong)(bVar4 & 0x1f) ^ 0xffffffffU);
        }
      }
      else if ((1 < uVar12) || ((*(byte *)(param_1 + 0x1e4) >> 1 & 1) == 0)) {
        if (uVar13 <= uVar12) goto LAB_02216450;
        pbVar3 = (byte *)(param_1 + uVar12 * 3);
        uVar8 = FUN_0221119c();
        goto joined_r0x0221615c;
      }
LAB_02216100:
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_5);
    uVar7 = (ulong)param_5;
  }
  return uVar7;
}

