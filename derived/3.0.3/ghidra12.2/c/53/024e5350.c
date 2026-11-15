
undefined8 FUN_024e5350(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  short sVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  short local_134 [2];
  undefined1 local_130;
  float local_12c [3];
  undefined8 local_120;
  undefined **local_118;
  undefined *local_110;
  int local_108;
  int local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  byte local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 uStack_db;
  undefined2 local_da;
  undefined2 uStack_d8;
  undefined1 local_d6;
  undefined1 uStack_d5;
  int iStack_d4;
  undefined *local_d0;
  int local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float afStack_b4 [3];
  undefined *local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  
  afStack_b4[1] = 0.0;
  local_bc = 0.0;
  fVar20 = ((float)*(int *)(param_1 + 0x14) * 5.0 + (float)*(int *)(param_1 + 0x24) * 5.0 + 5.0) *
           0.5;
  fVar17 = ((float)*(int *)(param_1 + 0x10) * 5.0 + (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0) *
           0.5;
  afStack_b4[0] =
       ((float)*(int *)(param_2 + 0x10) * 5.0 + (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0) * 0.5;
  afStack_b4[2] =
       ((float)*(int *)(param_2 + 0x14) * 5.0 + (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0) * 0.5;
  local_c0 = (fVar17 + afStack_b4[0]) * 0.5;
  local_b8 = (fVar20 + afStack_b4[2]) * 0.5;
  iVar7 = FUN_006f0400(fVar17 - afStack_b4[0],fVar20 - afStack_b4[2]);
  uVar5 = iVar7 + 0x10000000U >> 0x1d;
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar5);
  fVar17 = 4.0;
  if (7 < uVar5) {
    fVar17 = 0.0;
  }
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar7 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  puVar12 = DAT_055c1b60 + -8;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    puVar15 = DAT_055c1b60;
    puVar11 = puVar12;
    do {
      if (*(int *)(puVar11 + 7) == *(int *)(puVar16 + 7)) break;
      puVar15 = (undefined8 *)puVar15[1];
      puVar11 = puVar15 + -8;
    } while (puVar15 != &DAT_055c1b58);
  }
  local_100 = (undefined *)CONCAT35(local_100._5_3_,0x100000000);
  if (puVar12 != &DAT_055c1b18) {
    sVar14 = 0;
    puVar16 = DAT_055c1b60;
    do {
      if (*(int *)(puVar12 + 7) == param_3) goto LAB_024e5554;
      puVar16 = (undefined8 *)puVar16[1];
      sVar14 = sVar14 + 1;
      puVar12 = puVar16 + -8;
    } while (puVar16 != &DAT_055c1b58);
  }
  sVar14 = -1;
LAB_024e5554:
  local_100._0_4_ = CONCAT22(1,sVar14);
  uVar18 = FUN_016e80f0(afStack_b4,0,&local_100);
  local_e0 = 0;
  local_dc = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar7 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    puVar12 = DAT_055c1b60;
    do {
      if (*(int *)(puVar12 + -1) == *(int *)(puVar16 + 7)) break;
      puVar12 = (undefined8 *)puVar12[1];
    } while (puVar12 != &DAT_055c1b58);
  }
  local_e8 = (undefined *)(CONCAT44(uVar18,(int)local_e8) & 0xffffffffffffff00);
  local_da = SUB82(local_100,0);
  uStack_d8 = (undefined2)((ulong)local_100 >> 0x10);
  local_d6 = local_100._4_1_;
  fVar20 = (float)FUN_016e8440(&local_c0,&local_e8);
  if (1.1920929e-07 <= fVar17) {
    lVar10 = 0;
    do {
      fVar21 = *(float *)((long)&DAT_04176bac + lVar10);
      fVar19 = *(float *)((long)&DAT_04176bb4 + lVar10);
      fVar23 = SQRT(fVar21 * fVar21 + 0.0 + fVar19 * fVar19);
      if (0.0 < fVar23) {
        fVar23 = 1.0 / fVar23;
        fVar21 = fVar21 * fVar23;
        fVar22 = fVar23 * 0.0;
        fVar19 = fVar19 * fVar23;
      }
      else {
        fVar22 = 0.0;
      }
      local_120 = (undefined4 *)CONCAT44(fVar17 * fVar22 + local_bc,fVar17 * fVar21 + local_c0);
      local_118 = (undefined **)CONCAT44(local_118._4_4_,fVar17 * fVar19 + local_b8);
      fVar19 = (float)FUN_016e8440(&local_120,&local_e8);
      lVar10 = lVar10 + 0xc;
      if (fVar19 <= fVar20) {
        fVar19 = fVar20;
      }
      fVar20 = fVar19;
    } while (lVar10 != 0x6c);
  }
  puVar1 = PTR_DAT_04bb2010;
  local_e8 = PTR_DAT_04bbc1a0 + 0x10;
  local_d0 = PTR_DAT_04bb2010 + 0x10;
  local_e0 = SUB84(local_d0,0);
  local_dc = (undefined1)((ulong)local_d0 >> 0x20);
  uStack_db = (undefined1)((ulong)local_d0 >> 0x28);
  local_da = (undefined2)((ulong)local_d0 >> 0x30);
  local_c8 = (int)((float)(int)(local_c0 - fVar17) / 5.0) - (uint)(local_c0 - fVar17 < 0.0);
  local_c4 = (int)((float)(int)(local_b8 - fVar17) / 5.0) - (uint)(local_b8 - fVar17 < 0.0);
  iVar6 = (int)((float)(int)(fVar17 + local_c0) / 5.0) - (uint)(fVar17 + local_c0 < 0.0);
  iVar8 = (int)((float)(int)(fVar17 + local_b8) / 5.0) - (uint)(fVar17 + local_b8 < 0.0);
  iVar7 = local_c8;
  if (iVar6 <= local_c8) {
    iVar7 = iVar6;
  }
  if (local_c8 <= iVar6) {
    local_c8 = iVar6;
  }
  iStack_d4 = local_c4;
  if (iVar8 <= local_c4) {
    iStack_d4 = iVar8;
  }
  if (local_c4 <= iVar8) {
    local_c4 = iVar8;
  }
  uStack_d8 = (undefined2)iVar7;
  local_d6 = (undefined1)((uint)iVar7 >> 0x10);
  uStack_d5 = (undefined1)((uint)iVar7 >> 0x18);
  if (DAT_055c1b60 == &DAT_055c1b58) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = DAT_055c1b60 + -8;
    sVar14 = 0;
    puVar12 = DAT_055c1b60;
    puVar15 = puVar16;
    do {
      puVar11 = DAT_055c1b60;
      if (*(int *)(puVar15 + 7) == param_3) {
        if (sVar14 == 0) goto LAB_024e5848;
        goto LAB_024e5820;
      }
      puVar12 = (undefined8 *)puVar12[1];
      sVar14 = sVar14 + 1;
      puVar15 = puVar12 + -8;
    } while (puVar12 != &DAT_055c1b58);
    sVar14 = -1;
LAB_024e5820:
    do {
      puVar11 = (undefined8 *)puVar11[1];
      sVar14 = sVar14 + -1;
    } while (puVar11 != &DAT_055c1b58 && sVar14 != 0);
    puVar16 = &DAT_055c04a0;
    if (puVar11 + -8 != &DAT_055c1b18) {
      puVar16 = puVar11 + -8;
    }
  }
LAB_024e5848:
  lVar10 = 0;
  do {
    if (*(int *)(PTR_DAT_04bbbf90 + lVar10 * 4 + 8) == *(int *)(puVar16 + 7)) {
LAB_024e589c:
      puVar13 = PTR_DAT_04bbbf90 + lVar10 * 4;
LAB_024e58a4:
      local_100 = PTR_DAT_04bbfe68 + 0x10;
      uStack_f4 = *(undefined4 *)(puVar13 + 8);
      local_f8 = (undefined4)lVar10;
      local_f0 = FUN_017baf44();
      local_110 = puVar1 + 0x10;
      local_f0 = local_f0 & 1;
      iVar7 = local_c4 + 1;
      iVar6 = CONCAT13(uStack_d5,CONCAT12(local_d6,uStack_d8));
      local_104 = iStack_d4;
      local_120 = &local_e0;
      local_118 = &local_d0;
      local_108 = iVar6;
      if (iVar7 != iStack_d4) {
        puVar1 = PTR_DAT_04bc35c0 + 0x10;
        do {
          puVar9 = (undefined2 *)FUN_01a5190c(&local_100,0,&local_110,0);
          uVar4 = *puVar9;
          uVar2 = *(undefined1 *)(puVar9 + 1);
          uVar3 = *(undefined1 *)((long)puVar9 + 3);
          uVar18 = *(undefined4 *)(puVar9 + 2);
          local_a8 = puVar1;
          local_a0 = uVar4;
          local_9e = uVar2;
          local_9d = uVar3;
          local_9c = uVar18;
          iVar8 = FUN_0277d6c4(&local_a0);
          fVar17 = fVar20;
          if (iVar8 - 0xf619U < 7) {
            local_a8 = PTR_DAT_04bc35c0 + 0x10;
            local_a0 = uVar4;
            local_9e = uVar2;
            local_9d = uVar3;
            local_9c = uVar18;
            iVar8 = FUN_0277d6c4(&local_a0);
            if (iVar8 - 0xf619U < 4) {
              local_12c[1] = 0.0;
              local_12c[2] = (float)local_104 * 5.0 + 2.5;
              local_12c[0] = (float)local_108 * 5.0 + 2.5;
              lVar10 = *(long *)PTR_DAT_04bb2720;
              if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
                puVar16 = &DAT_055c04a0;
              }
              else {
                puVar16 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
                iVar8 = FUN_006bd550(*puVar16,0);
                puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar8 != 0x758f7eaf) {
                  puVar16 = &DAT_055c04a0;
                }
              }
              if (DAT_055c1b60 == &DAT_055c1b58) {
                local_134[0] = -1;
              }
              else {
                puVar11 = DAT_055c1b60 + -8;
                puVar12 = DAT_055c1b60;
                puVar15 = puVar11;
                do {
                  if (*(int *)(puVar15 + 7) == *(int *)(puVar16 + 7)) break;
                  puVar12 = (undefined8 *)puVar12[1];
                  puVar15 = puVar12 + -8;
                } while (puVar12 != &DAT_055c1b58);
                if (puVar11 != &DAT_055c1b18) {
                  local_134[0] = 0;
                  puVar16 = DAT_055c1b60;
                  do {
                    if (*(int *)(puVar11 + 7) == param_3) goto LAB_024e5adc;
                    puVar16 = (undefined8 *)puVar16[1];
                    local_134[0] = local_134[0] + 1;
                    puVar11 = puVar16 + -8;
                  } while (puVar16 != &DAT_055c1b58);
                }
                local_134[0] = -1;
              }
LAB_024e5adc:
              local_130 = 1;
              local_134[1] = 1;
              fVar19 = (float)FUN_016e80f0(local_12c,0,local_134);
              fVar17 = fVar19 + 20.6;
              if (fVar19 + 20.6 <= fVar20) {
                fVar17 = fVar20;
              }
            }
          }
          fVar20 = fVar17;
          if (local_108 < *(int *)(local_118 + 1)) {
            local_108 = local_108 + 1;
          }
          else {
            local_108 = local_120[2];
            local_104 = local_104 + 1;
          }
        } while ((iVar6 != local_108) || (iVar7 != local_104));
      }
      fVar17 = (float)FUN_024e5c00(param_1,param_3);
      fVar19 = (float)FUN_024e5c00(param_2,param_3);
      if (fVar17 <= fVar19 + 9.0) {
        if (fVar19 <= fVar17) {
          if (12.0 <= fVar20 - fVar17) {
            return 0;
          }
        }
        else if (14.0 <= fVar20 - fVar17) {
          return 0;
        }
      }
      else if (8.0 <= fVar20 - fVar17) {
        return 0;
      }
      return 1;
    }
    if (0x37 < (uint)lVar10) {
      lVar10 = 0;
      puVar13 = PTR_DAT_04bbbf90;
      goto LAB_024e58a4;
    }
    if (*(int *)(PTR_DAT_04bbbf90 + lVar10 * 4 + 0xc) == *(int *)(puVar16 + 7)) {
      lVar10 = lVar10 + 1;
      goto LAB_024e589c;
    }
    lVar10 = lVar10 + 2;
  } while( true );
}

