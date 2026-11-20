
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03f01a50(float param_1,ulong param_2,uint param_3,ulong param_4)

{
  uint *puVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  byte bVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ushort *puVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  ushort uVar26;
  int iVar27;
  byte *pbVar28;
  uint uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  ulong local_1a0;
  undefined8 uStack_198;
  long local_188;
  undefined8 local_180;
  ulong local_178;
  long local_170;
  undefined8 local_168;
  float *local_160;
  ulong local_158;
  undefined4 local_150;
  float local_14c;
  float local_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  long local_d0;
  undefined8 uStack_c8;
  ulong *local_c0;
  undefined4 local_b8;
  
  if (((param_3 & 1) == 0) || ((*(byte *)(param_2 + 0x49) >> 6 & 1) != 0)) {
    if (*(long *)(DAT_05b05378 + 8) == 0) {
      lVar25 = 0;
    }
    else {
      lVar25 = *(long *)(*(long *)(DAT_05b05378 + 8) + 8);
    }
    if (*(uint *)(param_2 + 0x20) < 0x5001) {
      lVar7 = nn::os::GetTlsValue(DAT_05ae7898);
      if (lVar7 == 0) {
        uVar6 = nn::os::GetCurrentCoreNumber();
      }
      else {
        uVar6 = (int)lVar7 - 1;
      }
      uVar15 = _DAT_04102200;
      local_178 = CONCAT44(local_178._4_4_,uVar6);
      plVar8 = (long *)(lVar25 + 0x38) + uVar6;
      if (2 < uVar6) {
        plVar8 = (long *)(lVar25 + 0x38);
      }
      lVar25 = *plVar8;
      if (lVar25 != 0) {
        fVar47 = *(float *)(param_2 + 0x74);
        fVar53 = *(float *)(param_2 + 0x84);
        fVar54 = *(float *)(param_2 + 0x94);
        if ((*(long *)(param_2 + 0x50) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x28), lVar7 == 0)) {
          fVar49 = 0.0;
          fVar50 = 0.0;
          fVar51 = 0.0;
          *(undefined8 *)(param_2 + 0x70) = _UNK_04102208;
          *(undefined8 *)(param_2 + 0x68) = uVar15;
          uVar15 = _DAT_04102880;
          *(undefined8 *)(param_2 + 0x80) = _UNK_04102888;
          *(undefined8 *)(param_2 + 0x78) = uVar15;
          uVar15 = _DAT_041023d0;
          *(undefined8 *)(param_2 + 0x90) = _UNK_041023d8;
          *(undefined8 *)(param_2 + 0x88) = uVar15;
        }
        else {
          plVar8 = *(long **)**(undefined8 **)(lVar7 + 0x38);
          (**(code **)(*plVar8 + 0x70))(plVar8,param_2 + 0x68,0);
          fVar51 = *(float *)(param_2 + 0x74);
          fVar50 = *(float *)(param_2 + 0x84);
          fVar49 = *(float *)(param_2 + 0x94);
        }
        fVar30 = 1.0 / param_1;
        fVar45 = fVar30 * (fVar51 - fVar47);
        fVar47 = fVar30 * (fVar50 - fVar53);
        fVar30 = fVar30 * (fVar49 - fVar54);
        *(float *)(param_2 + 0x98) = fVar45;
        *(float *)(param_2 + 0x9c) = fVar47;
        *(float *)(param_2 + 0xa0) = fVar30;
        if (*(long *)(param_2 + 0xc0) != 0) {
          fVar53 = 0.0;
          fVar41 = 0.0;
          fVar54 = 0.0;
          if ((*(byte *)(param_2 + 0x4a) >> 4 & 1) == 0) {
            if (param_4 == 0) {
              fVar53 = 1.0 / DAT_04c4bac0;
              fVar54 = -(fVar45 * fVar53);
              fVar41 = -(fVar47 * fVar53);
              fVar53 = -(fVar30 * fVar53);
            }
            else {
              fVar47 = 1.0 / DAT_04c4bac0;
              fVar54 = -(*(float *)(param_4 + 0x98) * fVar47);
              fVar41 = -(*(float *)(param_4 + 0x9c) * fVar47);
              fVar53 = -(*(float *)(param_4 + 0xa0) * fVar47);
            }
          }
          fVar45 = param_1 * 60.0 * 0.1;
          fVar30 = *(float *)(param_2 + 0xb0);
          fVar46 = fVar54 - fVar30;
          fVar55 = fVar41 - *(float *)(param_2 + 0xb4);
          fVar56 = fVar53 - *(float *)(param_2 + 0xb8);
          fVar47 = SQRT(fVar55 * fVar55 + fVar46 * fVar46 + fVar56 * fVar56);
          if (fVar45 < fVar47) {
            fVar47 = 1.0 / fVar47;
            fVar54 = fVar30 + fVar46 * fVar47 * fVar45;
            fVar41 = *(float *)(param_2 + 0xb4) + fVar55 * fVar47 * fVar45;
            fVar53 = *(float *)(param_2 + 0xb8) + fVar56 * fVar47 * fVar45;
          }
          *(float *)(param_2 + 0xb8) = fVar53;
          uVar6 = *(uint *)(param_2 + 0x10);
          *(float *)(param_2 + 0xb0) = fVar54;
          *(float *)(param_2 + 0xb4) = fVar41;
          local_d8 = *(undefined8 *)(param_2 + 0xa4);
          local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_2 + 0xac));
          if (0 < (int)uVar6) {
            uVar29 = 0;
            local_1a0 = param_2;
            if (param_4 != 0) {
              local_1a0 = param_4;
            }
            do {
              uVar19 = *(uint *)(param_2 + 0x10);
              lVar7 = *(long *)(param_2 + 0x18);
              uVar3 = uVar29;
              if (uVar19 <= uVar29) {
                uVar3 = 0;
              }
              if (((*(long *)(lVar7 + (ulong)uVar3 * 0x48 + 0x28) != 0) &&
                  (uVar48 = *(uint *)(lVar7 + (ulong)uVar3 * 0x48 + 0x30), -1 < (int)uVar48)) &&
                 (uVar3 = *(uint *)(lVar7 + (ulong)uVar3 * 0x48 + 0x18), (uVar3 >> 0x19 & 1) == 0))
              {
                lVar22 = *(long *)(param_2 + 0xc0);
                uVar52 = *(uint *)(lVar22 + 0x2214);
                lVar24 = *(long *)(lVar22 + 0x28) + (ulong)uVar48 * 0x228;
                if (*(int *)(lVar22 + 0x20) <= (int)uVar48) {
                  lVar24 = 0;
                }
                if (((uVar52 >> 0x18 & 1) != 0) ||
                   (((*(uint *)(param_2 + 0x48) | uVar3) >> 0x18 & 1) != 0)) {
                  if ((*(long *)(param_2 + 0x50) != 0) &&
                     ((lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x28), lVar7 != 0 &&
                      (lVar7 = *(long *)**(undefined8 **)(lVar7 + 0x38),
                      (*(byte *)(lVar7 + 0xae) >> 3 & 1) != 0)))) {
                    plVar8 = (long *)(lVar7 + 0x80);
                    uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
                    if ((uVar9 & 1) != 0) {
                      local_178 = 0x3f800000;
                      local_150 = 0x3f800000;
                      local_120 = 2.8026e-45;
                      local_168 = 0x3f80000000000000;
                      local_108 = &local_178;
                      local_158 = 0;
                      local_170 = (ulong)(uint)fVar51 << 0x20;
                      local_160 = (float *)((ulong)(uint)fVar50 << 0x20);
                      local_100 = 0.0;
                      local_110 = 0;
                      local_14c = fVar49;
                      local_118 = lVar7;
                      (*(code *)**(undefined8 **)(lVar7 + 0x80))(plVar8,&local_120);
                    }
                  }
                  FUN_0071b954((double)SQRT(local_d8._4_4_ * local_d8._4_4_ +
                                            (float)local_d8 * (float)local_d8 +
                                            (float)local_d0 * (float)local_d0),
                               (double)SQRT(*(float *)(param_2 + 0xb4) * *(float *)(param_2 + 0xb4)
                                            + *(float *)(param_2 + 0xb0) *
                                              *(float *)(param_2 + 0xb0) +
                                            *(float *)(param_2 + 0xb8) * *(float *)(param_2 + 0xb8))
                               ,&local_178,"%f %f");
                  uVar19 = *(uint *)(param_2 + 0x10);
                  lVar7 = *(long *)(param_2 + 0x18);
                  uVar52 = *(uint *)(*(long *)(param_2 + 0xc0) + 0x2214);
                }
                uVar3 = uVar29;
                if (uVar19 <= uVar29) {
                  uVar3 = 0;
                }
                if (((uVar52 >> 0x15 & 1) == 0) &&
                   ((*(byte *)(lVar7 + (ulong)uVar3 * 0x48 + 0x1a) >> 5 & 1) == 0)) {
                  bVar14 = *(byte *)(param_2 + 0x4a) >> 5 & 1;
                }
                else {
                  bVar14 = 1;
                }
                FUN_03f0abf0(param_1,*(undefined8 *)(lVar7 + (ulong)uVar3 * 0x48 + 0x28),lVar24,
                             &local_d8,(float *)(param_2 + 0xb0),local_1a0,bVar14);
              }
              uVar29 = uVar29 + 1;
            } while (uVar6 != uVar29);
          }
        }
        if ((*(byte *)(param_2 + 0x49) >> 6 & 1) == 0) {
          uVar6 = *(uint *)(param_2 + 0x10);
          if (0 < (int)uVar6) {
            uVar29 = 0;
            uVar15 = *(undefined8 *)PTR_PTR_04bd4d20;
            do {
              local_188 = 0;
              local_180 = 0x8000000000000000;
              lVar7 = *(long *)(param_2 + 0x18);
              uVar3 = uVar29;
              if (*(uint *)(param_2 + 0x10) <= uVar29) {
                uVar3 = 0;
              }
              FUN_00426990(uVar15,&local_188,8);
              *(undefined8 *)(local_188 + (long)(int)local_180 * 8) =
                   *(undefined8 *)(lVar7 + (ulong)uVar3 * 0x48);
              local_180 = CONCAT44(local_180._4_4_,(int)local_180 + 1);
              FUN_005127c0(param_1,*(undefined8 *)(param_2 + 0x28),lVar25,&local_188);
              uVar3 = uVar29;
              if (*(uint *)(param_2 + 0x10) <= uVar29) {
                uVar3 = 0;
              }
              uVar19 = *(uint *)(*(long *)(param_2 + 0x18) + (ulong)uVar3 * 0x48 + 0x18);
              if (((uVar19 & 0x3c0) != 0) &&
                 (lVar7 = *(long *)(*(long *)(param_2 + 0x18) + (ulong)uVar3 * 0x48), lVar7 != 0)) {
                if ((uVar19 >> 7 & 1) != 0) {
                  lVar24 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x60) +
                                    (long)*(int *)(lVar7 + 0x134) * 8);
                  uVar3 = *(uint *)(lVar24 + 0x58);
                  if (0 < (int)uVar3) {
                    lVar22 = 0;
                    do {
                      uVar48 = *(uint *)(*(long *)(lVar24 + 0x50) + lVar22);
                      lVar10 = *(long *)(*(long *)(lVar7 + 0x40) + (long)(int)uVar48 * 8);
                      if (lVar10 != 0) {
                        uVar52 = uVar29;
                        if (*(uint *)(param_2 + 0x10) <= uVar29) {
                          uVar52 = 0;
                        }
                        lVar20 = *(long *)(param_2 + 0x18) + (ulong)uVar52 * 0x48;
                        if (*(uint *)(lVar20 + 8) <= uVar48) {
                          uVar48 = 0;
                        }
                        local_178 = param_2;
                        FUN_03f0c140(lVar10,*(long *)(lVar20 + 0x10) + (long)(int)uVar48 * 0x20,
                                     &local_178);
                      }
                      lVar22 = lVar22 + 4;
                    } while ((ulong)uVar3 * 4 != lVar22);
                  }
                }
                if ((uVar19 >> 6 & 1) != 0) {
                  lVar24 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x60) +
                                    (long)*(int *)(lVar7 + 0x134) * 8);
                  uVar3 = *(uint *)(lVar24 + 0x58);
                  if (0 < (int)uVar3) {
                    uVar9 = 0;
                    do {
                      lVar22 = *(long *)(*(long *)(lVar7 + 0x40) +
                                        (long)*(int *)(*(long *)(lVar24 + 0x50) + uVar9 * 4) * 8);
                      if (0 < *(int *)(lVar22 + 0x188)) {
                        iVar27 = 0;
                        do {
                          lVar10 = FUN_0053aea0(lVar22,iVar27);
                          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x9f) != '\0')) {
                            lVar20 = *(long *)(lVar10 + 0x88);
                            if (lVar20 != 0) {
                              iVar4 = *(int *)(lVar20 + 0x18);
                              if (iVar4 == 2) {
                                if ((*(long *)(param_2 + 0x50) != 0) &&
                                   (lVar16 = *(long *)(*(long *)(param_2 + 0x50) + 0x28),
                                   lVar16 != 0)) {
                                  lVar16 = *(long *)**(undefined8 **)(lVar16 + 0x38);
                                  uVar32 = *(undefined8 *)(lVar20 + 0x38);
                                  uVar31 = *(undefined8 *)(lVar20 + 0x30);
                                  fVar47 = (float)*(undefined8 *)(lVar10 + 0x20);
                                  fVar53 = (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
                                  fVar54 = (float)*(undefined8 *)(lVar10 + 0x28);
                                  fVar49 = (float)*(undefined8 *)(lVar10 + 0x30);
                                  fVar30 = (float)((ulong)*(undefined8 *)(lVar10 + 0x30) >> 0x20);
                                  fVar41 = (float)*(undefined8 *)(lVar10 + 0x38);
                                  fVar46 = (float)*(undefined8 *)(lVar10 + 0x40);
                                  fVar55 = (float)((ulong)*(undefined8 *)(lVar10 + 0x40) >> 0x20);
                                  fVar56 = (float)*(undefined8 *)(lVar10 + 0x48);
                                  fVar50 = (float)*(undefined8 *)(lVar10 + 0x50);
                                  fVar51 = (float)((ulong)*(undefined8 *)(lVar10 + 0x50) >> 0x20);
                                  fVar45 = (float)*(undefined8 *)(lVar10 + 0x58);
                                  if ((*(byte *)(lVar16 + 0xae) >> 3 & 1) != 0) {
                                    uVar34 = *(undefined8 *)(lVar20 + 0x28);
                                    uVar33 = *(undefined8 *)(lVar20 + 0x20);
                                    plVar8 = (long *)(lVar16 + 0x80);
                                    uVar11 = (**(code **)(*plVar8 + 0x10))(plVar8);
                                    if ((uVar11 & 1) != 0) {
                                      local_178 = 0x3f800000;
                                      local_150 = 0x3f800000;
                                      local_120 = 2.8026e-45;
                                      local_108 = &local_178;
                                      fVar42 = (float)uVar33;
                                      local_168 = 0x3f80000000000000;
                                      fVar43 = (float)((ulong)uVar33 >> 0x20);
                                      fVar44 = (float)uVar34;
                                      local_158 = 0;
                                      local_110 = 0;
                                      local_100 = 0.0;
                                      local_14c = fVar45 + fVar56 * fVar44 +
                                                           fVar54 * fVar42 + fVar41 * fVar43;
                                      local_170 = (ulong)(uint)(fVar50 + fVar46 * fVar44 +
                                                                         fVar47 * fVar42 +
                                                                         fVar49 * fVar43) << 0x20;
                                      local_160 = (float *)((ulong)(uint)(fVar51 + fVar55 * fVar44 +
                                                                                   fVar53 * fVar42 +
                                                                                   fVar30 * fVar43)
                                                           << 0x20);
                                      local_118 = lVar16;
                                      (*(code *)**(undefined8 **)(lVar16 + 0x80))(plVar8,&local_120)
                                      ;
                                    }
                                  }
                                  if (((*(long *)(param_2 + 0x50) != 0) &&
                                      (lVar10 = *(long *)(*(long *)(param_2 + 0x50) + 0x28),
                                      lVar10 != 0)) &&
                                     (lVar10 = *(long *)**(undefined8 **)(lVar10 + 0x38),
                                     (*(byte *)(lVar10 + 0xae) >> 3 & 1) != 0)) {
                                    plVar8 = (long *)(lVar10 + 0x80);
                                    uVar11 = (**(code **)(*plVar8 + 0x10))(plVar8);
                                    if ((uVar11 & 1) != 0) {
                                      local_178 = 0x3f800000;
                                      local_150 = 0x3f800000;
                                      local_120 = 2.8026e-45;
                                      local_108 = &local_178;
                                      puVar17 = *(undefined8 **)(lVar10 + 0x80);
                                      local_168 = 0x3f80000000000000;
                                      pfVar13 = &local_120;
                                      fVar42 = (float)uVar31;
                                      fVar43 = (float)((ulong)uVar31 >> 0x20);
                                      local_158 = 0;
                                      fVar44 = (float)uVar32;
                                      local_100 = 0.0;
                                      local_110 = 0;
                                      local_14c = fVar45 + fVar56 * fVar44 +
                                                           fVar54 * fVar42 + fVar41 * fVar43;
                                      local_170 = (ulong)(uint)(fVar50 + fVar46 * fVar44 +
                                                                         fVar47 * fVar42 +
                                                                         fVar49 * fVar43) << 0x20;
                                      local_160 = (float *)((ulong)(uint)(fVar51 + fVar55 * fVar44 +
                                                                                   fVar53 * fVar42 +
                                                                                   fVar30 * fVar43)
                                                           << 0x20);
                                      local_118 = lVar10;
LAB_03f0264c:
                                      (*(code *)*puVar17)(plVar8,pfVar13);
                                    }
                                  }
                                }
                              }
                              else if (iVar4 == 1) {
                                fVar47 = (float)((ulong)uStack_198 >> 0x20);
                                local_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar20 + 0x20) >>
                                                           0x20) * fVar47,
                                                    (float)*(undefined8 *)(lVar20 + 0x20) * fVar47);
                                uStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar20 + 0x28)
                                                            >> 0x20) * fVar47,
                                                     (float)*(undefined8 *)(lVar20 + 0x28) * fVar47)
                                ;
                                FUN_00482150(local_f0,local_1a0,&local_f0,lVar10 + 0x20,&local_f0);
                                lVar16 = local_f0;
                                fVar47 = DAT_04c4bac0;
                                fVar54 = (float)((ulong)*(undefined8 *)(lVar20 + 0x20) >> 0x20);
                                fVar53 = (float)*(undefined8 *)(lVar20 + 0x20);
                                fVar49 = (float)*(undefined8 *)(lVar20 + 0x28);
                                fVar50 = (float)*(undefined8 *)(lVar10 + 0x40) * fVar49 +
                                         (float)*(undefined8 *)(lVar10 + 0x20) * fVar53 +
                                         (float)*(undefined8 *)(lVar10 + 0x30) * fVar54;
                                fVar51 = (float)((ulong)*(undefined8 *)(lVar10 + 0x40) >> 0x20) *
                                         fVar49 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >>
                                                         0x20) * fVar53 +
                                                  (float)((ulong)*(undefined8 *)(lVar10 + 0x30) >>
                                                         0x20) * fVar54;
                                fVar30 = (float)*(undefined8 *)(lVar10 + 0x48) * fVar49 +
                                         (float)*(undefined8 *)(lVar10 + 0x28) * fVar53 +
                                         (float)*(undefined8 *)(lVar10 + 0x38) * fVar54;
                                uStack_198 = CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x48)
                                                             >> 0x20) * fVar49 +
                                                      (float)((ulong)*(undefined8 *)(lVar10 + 0x28)
                                                             >> 0x20) * fVar53 +
                                                      (float)((ulong)*(undefined8 *)(lVar10 + 0x38)
                                                             >> 0x20) * fVar54,fVar30);
                                local_1a0 = CONCAT44(fVar51,fVar50);
                                bVar5 = fVar50 + fVar51 * 0.0 + fVar30 * 0.0 != 1.0;
                                fVar53 = -0.0;
                                if (bVar5) {
                                  fVar53 = 0.0;
                                }
                                fVar54 = -1.0;
                                if (bVar5) {
                                  fVar54 = 0.0;
                                }
                                fVar49 = -0.0;
                                if (bVar5) {
                                  fVar49 = 1.0;
                                }
                                fVar45 = -fVar53 * fVar51 + fVar54 * fVar30;
                                fVar53 = -fVar49 * fVar30 + fVar53 * fVar50;
                                local_f8 = -fVar54 * fVar50 + fVar49 * fVar51;
                                fVar54 = SQRT(fVar53 * fVar53 + fVar45 * fVar45 +
                                              local_f8 * local_f8);
                                if (0.0 < fVar54) {
                                  fVar54 = 1.0 / fVar54;
                                  fVar45 = fVar45 * fVar54;
                                  fVar53 = fVar53 * fVar54;
                                  local_f8 = local_f8 * fVar54;
                                }
                                local_120 = -(fVar30 * fVar53) + local_f8 * fVar51;
                                fVar54 = -(fVar50 * local_f8) + fVar45 * fVar30;
                                local_100 = -(fVar51 * fVar45) + fVar53 * fVar50;
                                fVar49 = SQRT(fVar54 * fVar54 + local_120 * local_120 +
                                              local_100 * local_100);
                                if (0.0 < fVar49) {
                                  fVar49 = 1.0 / fVar49;
                                  local_120 = local_120 * fVar49;
                                  fVar54 = fVar54 * fVar49;
                                  local_100 = local_100 * fVar49;
                                }
                                local_120 = local_120 * DAT_04c4bac0;
                                fVar49 = (float)uStack_e8;
                                local_100 = local_100 * DAT_04c4bac0;
                                fVar41 = (float)((ulong)local_f0 >> 0x20);
                                fStack_11c = fVar50 * 0.001;
                                local_108 = (ulong *)CONCAT44(fVar41,fVar53 * DAT_04c4bac0);
                                local_f8 = local_f8 * DAT_04c4bac0;
                                fVar53 = (float)local_f0;
                                local_118 = CONCAT44(fVar53,fVar45 * DAT_04c4bac0);
                                local_110 = CONCAT44(fVar51 * 0.001,fVar54 * DAT_04c4bac0);
                                fStack_fc = fVar30 * 0.001;
                                fStack_f4 = fVar49;
                                if ((*(long *)(param_2 + 0x50) != 0) &&
                                   (lVar10 = *(long *)(*(long *)(param_2 + 0x50) + 0x28),
                                   lVar10 != 0)) {
                                  lVar10 = *(long *)**(undefined8 **)(lVar10 + 0x38);
                                  if ((*(byte *)(lVar10 + 0xae) >> 3 & 1) != 0) {
                                    plVar8 = (long *)(lVar10 + 0x80);
                                    uVar11 = (**(code **)(*plVar8 + 0x10))(plVar8);
                                    if ((uVar11 & 1) != 0) {
                                      local_178 = 0x3f800000;
                                      local_150 = 0x3f800000;
                                      local_d8 = CONCAT44(local_d8._4_4_,2);
                                      local_168 = 0x3f80000000000000;
                                      local_c0 = &local_178;
                                      local_158 = 0;
                                      local_170 = lVar16 << 0x20;
                                      local_160 = (float *)((ulong)(uint)fVar41 << 0x20);
                                      local_b8 = 0;
                                      uStack_c8 = 0;
                                      local_14c = fVar49;
                                      local_d0 = lVar10;
                                      (*(code *)**(undefined8 **)(lVar10 + 0x80))(plVar8,&local_d8);
                                    }
                                  }
                                  if ((*(long *)(param_2 + 0x50) != 0) &&
                                     (lVar10 = *(long *)(*(long *)(param_2 + 0x50) + 0x28),
                                     lVar10 != 0)) {
                                    lVar10 = *(long *)**(undefined8 **)(lVar10 + 0x38);
                                    if ((*(byte *)(lVar10 + 0xae) >> 3 & 1) != 0) {
                                      plVar8 = (long *)(lVar10 + 0x80);
                                      uVar11 = (**(code **)(*plVar8 + 0x10))(plVar8);
                                      if ((uVar11 & 1) != 0) {
                                        local_178 = 0x3f800000;
                                        local_150 = 0x3f800000;
                                        local_d8 = CONCAT44(local_d8._4_4_,2);
                                        local_c0 = &local_178;
                                        fVar47 = fVar47 * 0.5;
                                        local_168 = 0x3f80000000000000;
                                        local_158 = 0;
                                        uStack_c8 = 0;
                                        local_14c = fVar49 + fVar30 * fVar47;
                                        local_b8 = 0;
                                        local_170 = (ulong)(uint)(fVar53 + fVar50 * fVar47) << 0x20;
                                        local_160 = (float *)((ulong)(uint)(fVar41 + fVar51 * fVar47
                                                                           ) << 0x20);
                                        local_d0 = lVar10;
                                        (*(code *)**(undefined8 **)(lVar10 + 0x80))
                                                  (plVar8,&local_d8);
                                      }
                                    }
                                    if (((*(long *)(param_2 + 0x50) != 0) &&
                                        (lVar10 = *(long *)(*(long *)(param_2 + 0x50) + 0x28),
                                        lVar10 != 0)) &&
                                       (lVar10 = *(long *)**(undefined8 **)(lVar10 + 0x38),
                                       (*(byte *)(lVar10 + 0xae) >> 3 & 1) != 0)) {
                                      plVar8 = (long *)(lVar10 + 0x80);
                                      uVar11 = (**(code **)(*plVar8 + 0x10))(plVar8);
                                      if ((uVar11 & 1) != 0) {
                                        local_168 = 0;
                                        pfVar13 = (float *)&local_178;
                                        local_178 = CONCAT44(local_178._4_4_,2);
                                        local_160 = &local_120;
                                        puVar17 = *(undefined8 **)(lVar10 + 0x80);
                                        local_158 = local_158 & 0xffffffff00000000;
                                        local_170 = lVar10;
                                        goto LAB_03f0264c;
                                      }
                                    }
                                  }
                                }
                              }
                              else if (iVar4 == 0) {
                                if (*(long *)(param_2 + 0x50) != 0) {
                                  lVar16 = *(long *)(*(long *)(param_2 + 0x50) + 0x28);
                                  if ((lVar16 != 0) &&
                                     (lVar16 = *(long *)**(undefined8 **)(lVar16 + 0x38),
                                     (*(byte *)(lVar16 + 0xae) >> 3 & 1) != 0)) {
                                    uVar39 = *(undefined8 *)(lVar10 + 0x28);
                                    uVar37 = *(undefined8 *)(lVar10 + 0x20);
                                    uVar34 = *(undefined8 *)(lVar10 + 0x38);
                                    uVar31 = *(undefined8 *)(lVar10 + 0x30);
                                    uVar40 = *(undefined8 *)(lVar20 + 0x28);
                                    uVar38 = *(undefined8 *)(lVar20 + 0x20);
                                    uVar35 = *(undefined8 *)(lVar10 + 0x48);
                                    uVar32 = *(undefined8 *)(lVar10 + 0x40);
                                    uVar36 = *(undefined8 *)(lVar10 + 0x58);
                                    uVar33 = *(undefined8 *)(lVar10 + 0x50);
                                    plVar8 = (long *)(lVar16 + 0x80);
                                    uVar11 = (**(code **)(*plVar8 + 0x10))(plVar8);
                                    if ((uVar11 & 1) != 0) {
                                      local_178 = 0x3f800000;
                                      local_150 = 0x3f800000;
                                      local_120 = 2.8026e-45;
                                      local_108 = &local_178;
                                      fVar47 = (float)uVar38;
                                      fVar53 = (float)((ulong)uVar38 >> 0x20);
                                      local_168 = 0x3f80000000000000;
                                      fVar54 = (float)uVar40;
                                      local_158 = 0;
                                      local_110 = 0;
                                      local_100 = 0.0;
                                      local_14c = (float)uVar36 +
                                                  (float)uVar35 * fVar54 +
                                                  (float)uVar39 * fVar47 + (float)uVar34 * fVar53;
                                      local_170 = (ulong)(uint)((float)uVar33 +
                                                               (float)uVar32 * fVar54 +
                                                               (float)uVar37 * fVar47 +
                                                               (float)uVar31 * fVar53) << 0x20;
                                      local_160 = (float *)((ulong)(uint)((float)((ulong)uVar33 >>
                                                                                 0x20) +
                                                                         (float)((ulong)uVar32 >>
                                                                                0x20) * fVar54 +
                                                                         (float)((ulong)uVar37 >>
                                                                                0x20) * fVar47 +
                                                                         (float)((ulong)uVar31 >>
                                                                                0x20) * fVar53) <<
                                                           0x20);
                                      local_118 = lVar16;
                                      (*(code *)**(undefined8 **)(lVar16 + 0x80))(plVar8,&local_120)
                                      ;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          iVar27 = iVar27 + 1;
                        } while (iVar27 < *(int *)(lVar22 + 0x188));
                      }
                      uVar9 = uVar9 + 1;
                    } while (uVar9 != uVar3);
                  }
                }
                if ((uVar19 & 0x300) != 0) {
                  lVar24 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x60) +
                                    (long)*(int *)(lVar7 + 0x134) * 8);
                  uVar3 = *(uint *)(lVar24 + 0x58);
                  if (0 < (int)uVar3) {
                    uVar9 = 0;
                    do {
                      lVar22 = *(long *)(*(long *)(lVar7 + 0x40) +
                                        (long)*(int *)(*(long *)(lVar24 + 0x50) + uVar9 * 4) * 8);
                      iVar27 = *(int *)(lVar22 + 0x28);
                      if (((uVar19 >> 8 & 1) != 0) && (0 < iVar27)) {
                        lVar20 = 0;
                        lVar10 = 0;
                        do {
                          if (((*(long *)(param_2 + 0x50) != 0) &&
                              (lVar16 = *(long *)(*(long *)(param_2 + 0x50) + 0x28), lVar16 != 0))
                             && (lVar16 = *(long *)**(undefined8 **)(lVar16 + 0x38),
                                (*(byte *)(lVar16 + 0xae) >> 3 & 1) != 0)) {
                            puVar1 = (uint *)(*(long *)(lVar22 + 0x20) + lVar20);
                            uVar48 = *puVar1;
                            uVar52 = puVar1[1];
                            fVar47 = (float)puVar1[2];
                            plVar8 = (long *)(lVar16 + 0x80);
                            uVar11 = (**(code **)(*plVar8 + 0x10))(plVar8);
                            if ((uVar11 & 1) != 0) {
                              local_178 = 0x3f800000;
                              local_150 = 0x3f800000;
                              local_120 = 2.8026e-45;
                              local_168 = 0x3f80000000000000;
                              local_108 = &local_178;
                              local_158 = 0;
                              local_170 = (ulong)uVar48 << 0x20;
                              local_160 = (float *)((ulong)uVar52 << 0x20);
                              local_100 = 0.0;
                              local_110 = 0;
                              local_14c = fVar47;
                              local_118 = lVar16;
                              (*(code *)**(undefined8 **)(lVar16 + 0x80))(plVar8,&local_120);
                            }
                          }
                          iVar27 = *(int *)(lVar22 + 0x28);
                          lVar10 = lVar10 + 1;
                          lVar20 = lVar20 + 0x10;
                        } while (lVar10 < iVar27);
                      }
                      if (((uVar19 >> 9 & 1) != 0) &&
                         (lVar10 = *(long *)(lVar22 + 0x18),
                         *(short *)(lVar10 + 0x1c0) != 0 && 0 < iVar27)) {
                        lVar20 = 0;
                        do {
                          if (*(float *)(*(long *)(*(long *)(lVar22 + 0x18) + 0x40) + lVar20 * 0x10)
                              != 0.0) {
                            puVar17 = (undefined8 *)(*(long *)(lVar22 + 0x20) + lVar20 * 0x10);
                            uVar31 = *puVar17;
                            uVar11 = (ulong)*(ushort *)(*(long *)(lVar10 + 0x2a0) + lVar20 * 2);
                            fVar47 = (float)uVar31;
                            fVar53 = (float)((ulong)uVar31 >> 0x20);
                            fVar54 = (float)puVar17[1];
                            if (uVar11 != 0xffff) {
                              lVar16 = *(long *)(lVar10 + 0x230);
                              pbVar23 = (byte *)(lVar16 + uVar11 * 6 + 4);
                              bVar14 = *pbVar23;
                              uVar48 = (uint)bVar14;
                              if (bVar14 != 0) {
                                uVar52 = 0;
                                do {
                                  puVar21 = (ushort *)
                                            (*(long *)(lVar10 + 0x220) +
                                            (ulong)(ushort)(*(short *)(lVar16 + uVar11 * 6 + 2) +
                                                           (ushort)(byte)uVar52) * 4);
                                  psVar2 = (short *)(*(long *)(lVar10 + 0x1f0) +
                                                    (ulong)puVar21[1] * 4);
                                  pbVar28 = (byte *)(psVar2 + 1);
                                  if (*pbVar28 != 0 && *(long *)(param_2 + 0x50) != 0) {
                                    uVar26 = 0;
                                    puVar17 = (undefined8 *)
                                              (*(long *)(lVar22 + 0x20) + (ulong)*puVar21 * 0x10);
                                    uVar32 = puVar17[1];
                                    uVar31 = *puVar17;
                                    do {
                                      if (((*(long *)(param_2 + 0x50) != 0) &&
                                          (lVar18 = *(long *)(*(long *)(param_2 + 0x50) + 0x28),
                                          lVar18 != 0)) &&
                                         (lVar18 = *(long *)**(undefined8 **)(lVar18 + 0x38),
                                         (*(byte *)(lVar18 + 0xae) >> 3 & 1) != 0)) {
                                        fVar49 = *(float *)(*(long *)(lVar10 + 0x1e0) +
                                                           (ulong)(ushort)(*psVar2 + uVar26) * 4);
                                        local_1a0 = (ulong)(uint)fVar49;
                                        plVar8 = (long *)(lVar18 + 0x80);
                                        uStack_198 = 0;
                                        uVar12 = (**(code **)(*plVar8 + 0x10))(plVar8);
                                        if ((uVar12 & 1) != 0) {
                                          local_178 = 0x3f800000;
                                          local_150 = 0x3f800000;
                                          local_120 = 2.8026e-45;
                                          local_108 = &local_178;
                                          local_168 = 0x3f80000000000000;
                                          local_14c = fVar54 + ((float)uVar32 - fVar54) * fVar49;
                                          local_158 = 0;
                                          local_170 = (ulong)(uint)(fVar47 + ((float)uVar31 - fVar47
                                                                             ) * fVar49) << 0x20;
                                          local_110 = 0;
                                          local_100 = 0.0;
                                          local_160 = (float *)((ulong)(uint)(fVar53 + ((float)((
                                                  ulong)uVar31 >> 0x20) - fVar53) * fVar49) << 0x20)
                                          ;
                                          local_118 = lVar18;
                                          (*(code *)**(undefined8 **)(lVar18 + 0x80))
                                                    (plVar8,&local_120);
                                        }
                                      }
                                      uVar26 = uVar26 + 1;
                                    } while (uVar26 < *pbVar28);
                                    uVar48 = (uint)*pbVar23;
                                  }
                                  uVar52 = uVar52 + 1;
                                } while (uVar52 < uVar48);
                              }
                            }
                            uVar11 = (ulong)*(ushort *)(*(long *)(lVar10 + 0x2b0) + lVar20 * 2);
                            if (uVar11 != 0xffff) {
                              lVar16 = *(long *)(lVar10 + 0x250);
                              pbVar23 = (byte *)(lVar16 + uVar11 * 6 + 4);
                              bVar14 = *pbVar23;
                              uVar48 = (uint)bVar14;
                              if (bVar14 != 0) {
                                uVar52 = 0;
                                do {
                                  puVar21 = (ushort *)
                                            (*(long *)(lVar10 + 0x240) +
                                            (ulong)((uint)*(ushort *)(lVar16 + uVar11 * 6 + 2) +
                                                    (uVar52 & 0xff) & 0xffff) * 6);
                                  psVar2 = (short *)(*(long *)(lVar10 + 0x210) +
                                                    (ulong)puVar21[2] * 4);
                                  pbVar28 = (byte *)(psVar2 + 1);
                                  if (*pbVar28 != 0 && *(long *)(param_2 + 0x50) != 0) {
                                    uVar26 = 0;
                                    puVar17 = (undefined8 *)
                                              (*(long *)(lVar22 + 0x20) + (ulong)*puVar21 * 0x10);
                                    uVar33 = puVar17[1];
                                    uVar31 = *puVar17;
                                    puVar17 = (undefined8 *)
                                              (*(long *)(lVar22 + 0x20) + (ulong)puVar21[1] * 0x10);
                                    uVar34 = puVar17[1];
                                    uVar32 = *puVar17;
                                    do {
                                      if (((*(long *)(param_2 + 0x50) != 0) &&
                                          (lVar18 = *(long *)(*(long *)(param_2 + 0x50) + 0x28),
                                          lVar18 != 0)) &&
                                         (lVar18 = *(long *)**(undefined8 **)(lVar18 + 0x38),
                                         (*(byte *)(lVar18 + 0xae) >> 3 & 1) != 0)) {
                                        pfVar13 = (float *)(*(long *)(lVar10 + 0x200) +
                                                           (ulong)(ushort)(*psVar2 + uVar26) * 8);
                                        fVar50 = *pfVar13;
                                        fVar49 = pfVar13[1];
                                        local_1a0 = (ulong)(uint)fVar49;
                                        plVar8 = (long *)(lVar18 + 0x80);
                                        uStack_198 = 0;
                                        uVar12 = (**(code **)(*plVar8 + 0x10))(plVar8);
                                        if ((uVar12 & 1) != 0) {
                                          local_178 = 0x3f800000;
                                          local_150 = 0x3f800000;
                                          local_120 = 2.8026e-45;
                                          local_108 = &local_178;
                                          local_168 = 0x3f80000000000000;
                                          local_158 = 0;
                                          local_14c = fVar54 + ((float)uVar33 - fVar54) * fVar50 +
                                                      ((float)uVar34 - fVar54) * fVar49;
                                          local_100 = 0.0;
                                          local_110 = 0;
                                          local_170 = (ulong)(uint)(fVar47 + ((float)uVar31 - fVar47
                                                                             ) * fVar50 +
                                                                   ((float)uVar32 - fVar47) * fVar49
                                                                   ) << 0x20;
                                          local_160 = (float *)((ulong)(uint)(fVar53 + ((float)((
                                                  ulong)uVar31 >> 0x20) - fVar53) * fVar50 +
                                                  ((float)((ulong)uVar32 >> 0x20) - fVar53) * fVar49
                                                  ) << 0x20);
                                          local_118 = lVar18;
                                          (*(code *)**(undefined8 **)(lVar18 + 0x80))
                                                    (plVar8,&local_120);
                                        }
                                      }
                                      uVar26 = uVar26 + 1;
                                    } while (uVar26 < *pbVar28);
                                    uVar48 = (uint)*pbVar23;
                                  }
                                  uVar52 = uVar52 + 1;
                                } while (uVar52 < uVar48);
                              }
                            }
                          }
                          lVar20 = lVar20 + 1;
                        } while (lVar20 < *(int *)(lVar22 + 0x28));
                      }
                      uVar9 = uVar9 + 1;
                    } while (uVar9 != uVar3);
                  }
                }
              }
              lVar7 = local_180;
              uVar3 = local_180._4_4_;
              local_180 = (ulong)local_180._4_4_ << 0x20;
              if ((-1 < lVar7) && (local_188 != 0)) {
                FUN_00421f90(uVar15,local_188,8,uVar3 & 0x3fffffff);
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar6);
          }
        }
        else {
          FUN_005127b0(0x3d088889,*(undefined8 *)(param_2 + 0x28),lVar25);
          iVar27 = 0x1d;
          do {
            FUN_03f00480(0x3d088889,param_2,param_3 & 1,param_4);
            FUN_005127b0(0x3d088889,*(undefined8 *)(param_2 + 0x28),lVar25);
            iVar27 = iVar27 + -1;
          } while (iVar27 != 0);
          *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffbfff;
        }
      }
    }
  }
  return;
}

