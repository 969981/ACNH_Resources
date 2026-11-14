
bool FUN_015182b0(long param_1,float *param_2,int *param_3,float *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  ulong uVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_15c [2];
  float local_154;
  undefined8 *local_150;
  undefined8 *puStack_148;
  int local_140;
  int iStack_13c;
  undefined8 *local_138;
  int local_130;
  int iStack_12c;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined *local_100;
  short local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined4 local_f4;
  long local_f0;
  short local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  byte local_c0;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  
  lVar11 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0xa8) == 0)) || (*(char *)(lVar11 + 0x11c8) != '\0')) {
    fVar18 = -500.0;
  }
  else {
    fVar18 = (float)FUN_0093a950(lVar11 + 0x28,param_2,0);
  }
  local_b4 = *param_3 + 0x20000000U >> 0x1e;
  iVar13 = 2;
  if (local_b4 == 1) {
    iVar13 = 1;
  }
  iVar4 = 1;
  if (local_b4 == 1) {
    iVar4 = 2;
  }
  iVar1 = 1;
  if (local_b4 != 3) {
    iVar1 = iVar13;
  }
  uVar12 = (ulong)((float)local_b4 * 90.0 * 11930465.0);
  local_c8 = 0;
  uVar9 = uVar12 >> 0x18 & 0xff;
  iVar13 = 2;
  if (local_b4 != 3) {
    iVar13 = iVar4;
  }
  fVar16 = (float)((uint)uVar12 & 0xffffff) * 5.9604645e-08;
  fVar20 = (((float)(&DAT_04199798)[uVar9 * 4] + fVar16 * (float)(&DAT_0419979c)[uVar9 * 4]) * 7.5 +
           *param_2) - ((float)iVar1 * 0.5 * 5.0 + -2.5);
  fVar16 = (param_2[2] +
           ((float)(&DAT_041997a0)[uVar9 * 4] + fVar16 * (float)(&DAT_041997a4)[uVar9 * 4]) * 7.5) -
           ((float)iVar13 * 0.5 * 5.0 + -2.5);
  if (DAT_05aed670 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  local_c4 = *(undefined4 *)(puVar14 + 7);
  local_c0 = FUN_017baf44();
  local_c0 = local_c0 & 1;
  puStack_d0 = PTR_DAT_04bb3140 + 0x10;
  local_d8 = 0;
  local_e0 = &DAT_048f9750;
  local_128 = &DAT_048f9750;
  local_120 = (undefined8 *)
              CONCAT44((int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0),
                       (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0));
  psVar8 = (short *)FUN_01a5190c(&puStack_d0,0,&local_128,&local_e0);
  puVar3 = PTR_DAT_04bb43c0;
  local_f8 = *psVar8;
  local_f6 = (undefined1)psVar8[1];
  local_f5 = *(undefined1 *)((long)psVar8 + 3);
  local_f4 = *(undefined4 *)(psVar8 + 2);
  if (local_f8 == -2) {
    bVar10 = false;
  }
  else {
    local_100 = PTR_DAT_04bc0510 + 0x10;
    local_f0 = 0;
    iVar2 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    local_e8 = local_f8;
    local_e6 = local_f6;
    local_e5 = local_f5;
    local_e4 = local_f4;
    uVar5 = FUN_0277d6c4(&local_f8);
    if (*(long *)puVar3 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_e8);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
          lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar11 != 0) {
            local_f0 = lVar11;
          }
        }
      }
    }
    local_118 = 0;
    local_110 = &DAT_048f9750;
    local_108 = 0;
    puVar14 = (undefined8 *)(PTR_DAT_04bbc1a0 + 0x10);
    local_120 = &DAT_048f9750;
    local_128 = puVar14;
    FUN_01afb480(&local_100,&local_128);
    fVar16 = 0.0;
    iVar13 = iVar4 + iVar13;
    local_118._0_4_ = (int)local_118 + (int)local_d8;
    local_118._4_4_ = local_118._4_4_ + local_d8._4_4_;
    local_108._0_4_ = (int)local_108 + (int)local_d8;
    local_108._4_4_ = local_108._4_4_ + local_d8._4_4_;
    bVar10 = false;
    fVar22 = ((float)(int)local_118 * 5.0 + (float)(int)local_108 * 5.0 + 5.0) * 0.5;
    fVar20 = ((float)local_118._4_4_ * 5.0 + (float)local_108._4_4_ * 5.0 + 5.0) * 0.5;
    iVar15 = iVar2;
    do {
      local_138 = &DAT_048f9750;
      puStack_148 = &DAT_048f9750;
      local_15c[0] = (float)iVar15 * 5.0 + 2.5;
      local_154 = (float)iVar4 * 5.0 + 2.5;
      lVar11 = *(long *)PTR_DAT_04bb27c8;
      local_150 = puVar14;
      local_140 = iVar15;
      iStack_13c = iVar4;
      local_130 = iVar15;
      iStack_12c = iVar4;
      if (((lVar11 == 0) || (*(long *)(lVar11 + 0xa8) == 0)) || (*(char *)(lVar11 + 0x11c8) != '\0')
         ) {
        fVar17 = -500.0;
      }
      else {
        fVar17 = (float)FUN_0093a950(lVar11 + 0x28,local_15c,0);
      }
      fVar17 = fVar18 - fVar17;
      fVar19 = -fVar17;
      if (0.0 <= fVar17) {
        fVar19 = fVar17;
      }
      if (fVar19 <= 0.1) {
        uVar9 = FUN_016f02d0(local_15c,param_2,param_3);
        uVar5 = local_b4;
        if (((uVar9 & 1) != 0) && (uVar9 = FUN_0245bbd8(local_15c), (uVar9 & 1) != 0)) {
          uVar6 = FUN_0245be94(local_15c,0);
          FUN_0245be94(local_15c,1);
          local_ac = (int)(long)((float)(int)uVar5 * 90.0 * 11930465.0) + 0x20000000U >> 0x1e;
          switch(local_ac) {
          case 0:
          case 2:
            uVar6 = uVar6 & 10;
            break;
          case 1:
          case 3:
            uVar6 = uVar6 & 5;
            break;
          default:
            goto switchD_015187f4_default;
          }
          if (((uVar6 != 0) && (iVar7 = FUN_01515c00(&local_150,0), iVar7 == 0)) &&
             (uVar9 = FUN_015158d0(&local_150,param_5 & 1), (uVar9 & 1) != 0)) {
            fVar17 = local_15c[0] - fVar22;
            fVar19 = local_154 - fVar20;
            fVar17 = SQRT(fVar19 * fVar19 + fVar17 * fVar17);
            if (bVar10) {
              local_ac = 0;
              fVar19 = *param_4;
              fVar21 = param_4[2];
              local_b0 = FUN_01aee3b4(&local_100);
              if (local_b0 == local_ac) {
                if (1 < local_b4 - 1) goto LAB_01518908;
              }
              else {
                fVar21 = fVar21 - fVar20;
                fVar19 = fVar19 - fVar22;
                if ((SQRT(fVar21 * fVar21 + fVar19 * fVar19) < 5.0) || (fVar16 <= fVar17))
                goto LAB_01518908;
              }
            }
            else {
LAB_01518908:
              *(int *)(param_1 + 0x10) = local_140;
              *(int *)(param_1 + 0x14) = iStack_13c;
              *(int *)(param_1 + 0x20) = local_130;
              *(int *)(param_1 + 0x24) = iStack_12c;
              fVar16 = fVar17;
            }
            bVar10 = true;
          }
        }
      }
switchD_015187f4_default:
      if (iVar15 < iVar1 + iVar2 + -1) {
        iVar15 = iVar15 + 1;
      }
      else {
        iVar4 = iVar4 + 1;
        iVar15 = iVar2;
      }
    } while ((iVar2 != iVar15) || (iVar13 != iVar4));
  }
  return bVar10;
}

