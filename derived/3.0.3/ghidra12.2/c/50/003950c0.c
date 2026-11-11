
void FUN_003950c0(undefined4 param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                 long *param_6,float *param_7,long param_8,uint param_9,uint param_10)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 auStack_b0 [2];
  undefined8 local_98;
  
  if ((0.0 < *param_7) && (lVar7 = *(long *)(param_7 + 2), lVar7 != 0)) {
    iVar4 = *(int *)(param_3 + 0xe8);
    uVar9 = (ulong)(param_9 - 1);
    if (0 < (int)param_9) {
      uVar12 = 0;
      do {
        fVar24 = (float)param_2;
        uVar1 = uVar12 + 1;
        uVar3 = 0;
        if (uVar1 != param_9) {
          uVar3 = uVar1 & 0xffffffff;
        }
        if (*(char *)(param_8 + uVar12 * 0x18 + 0x14) == '\0') {
          puVar10 = (undefined8 *)(param_8 + uVar3 * 0x18);
          uVar21 = *(undefined8 *)(param_8 + uVar12 * 0x18);
          plVar11 = (long *)(param_8 + uVar12 * 0x18 + 8);
          uVar30 = *(undefined8 *)*plVar11;
          uVar22 = *puVar10;
          local_98 = uVar21;
          fVar18 = (float)(**(code **)(*param_4 + 0x30))(param_4);
          iVar6 = (**(code **)(*param_4 + 0x20))(param_4);
          fVar20 = (float)uVar30;
          fVar31 = (float)((ulong)uVar30 >> 0x20);
          fVar19 = (float)uVar21;
          fVar23 = (float)((ulong)uVar21 >> 0x20);
          if (iVar6 == 1) {
            fVar18 = fVar19 - fVar18;
            fVar24 = fVar23 - fVar24;
            fVar16 = fVar18 * fVar18 + fVar24 * fVar24;
            fVar17 = fVar18 * fVar18 + fVar24 * fVar24;
            uVar21 = 0;
            if (0.00024414062 <= SQRT(fVar16)) {
              uVar21 = NEON_frsqrte(CONCAT44(fVar17,fVar16),4);
              fVar28 = (float)((ulong)uVar21 >> 0x20);
              uVar30 = NEON_frsqrts(uVar21,CONCAT44(fVar17 * fVar28,fVar16 * (float)uVar21),4);
              fVar26 = (float)uVar21 * (float)uVar30;
              fVar28 = fVar28 * (float)((ulong)uVar30 >> 0x20);
              iVar6 = -(uint)(fVar16 == 0.0);
              iVar25 = -(uint)(fVar17 == 0.0);
              uVar21 = NEON_frsqrts(CONCAT44(fVar28,fVar26),
                                    CONCAT44(fVar17 * fVar28,fVar16 * fVar26),4);
              fVar18 = fVar18 * fVar26 * (float)uVar21;
              fVar24 = fVar24 * fVar28 * (float)((ulong)uVar21 >> 0x20);
              uVar21 = CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16((byte)((uint)fVar24 >> 0x10) &
                                         ~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15((byte)((uint)fVar24 >> 8) &
                                                  ~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(SUB41(fVar24,0) & ~(byte)iVar25,
                                                           CONCAT13((byte)((uint)fVar18 >> 0x18) &
                                                                    ~(byte)((uint)iVar6 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar18 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar6 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar18 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                                  SUB41(fVar18,0) & ~(byte)iVar6)))))));
            }
            uVar21 = CONCAT44((int)uVar21,-(float)((ulong)uVar21 >> 0x20));
          }
          else {
            fVar16 = fVar20 - fVar19;
            fVar17 = fVar31 - fVar23;
            fVar24 = fVar16 * fVar16 + fVar17 * fVar17;
            fVar18 = fVar16 * fVar16 + fVar17 * fVar17;
            uVar21 = 0;
            if (0.00024414062 <= SQRT(fVar24)) {
              uVar21 = NEON_frsqrte(CONCAT44(fVar18,fVar24),4);
              fVar28 = (float)((ulong)uVar21 >> 0x20);
              uVar30 = NEON_frsqrts(uVar21,CONCAT44(fVar18 * fVar28,fVar24 * (float)uVar21),4);
              fVar26 = (float)uVar21 * (float)uVar30;
              fVar28 = fVar28 * (float)((ulong)uVar30 >> 0x20);
              iVar6 = -(uint)(fVar24 == 0.0);
              iVar25 = -(uint)(fVar18 == 0.0);
              uVar21 = NEON_frsqrts(CONCAT44(fVar28,fVar26),
                                    CONCAT44(fVar18 * fVar28,fVar24 * fVar26),4);
              fVar16 = fVar16 * fVar26 * (float)uVar21;
              fVar17 = fVar17 * fVar28 * (float)((ulong)uVar21 >> 0x20);
              uVar21 = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                         ~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15((byte)((uint)fVar17 >> 8) &
                                                  ~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(SUB41(fVar17,0) & ~(byte)iVar25,
                                                           CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                                                    ~(byte)((uint)iVar6 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar16 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar6 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar16 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                                  SUB41(fVar16,0) & ~(byte)iVar6)))))));
            }
          }
          fVar24 = -(float)((ulong)uVar21 >> 0x20);
          uVar30 = CONCAT44((float)uVar21,fVar24);
          local_b8 = uVar30;
          auStack_b0[0] = uVar21;
          if ((uVar12 == 0) && ((param_10 & 1) == 0)) {
            FUN_00394dd0(param_3,param_5,param_6,param_7,&local_98,&local_b8,auStack_b0,1);
          }
          *(undefined4 *)*param_6 = *(undefined4 *)(param_3 + 0xe8);
          *param_6 = *param_6 + 4;
          *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 1;
          *(int *)*param_6 = *(int *)(param_3 + 0xe8) + 1;
          *param_6 = *param_6 + 4;
          *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 1;
          fVar24 = fVar24 * (float)*(undefined8 *)param_7;
          fVar16 = (float)uVar21 * (float)*(undefined8 *)param_7;
          fVar18 = fVar19 + fVar24;
          fVar17 = fVar23 + fVar16;
          fVar19 = fVar19 - fVar24;
          fVar23 = fVar23 - fVar16;
          *(float *)*param_5 = fVar18;
          *(float *)(*param_5 + 4) = fVar17;
          *param_5 = *param_5 + 8;
          *(int *)(param_3 + 0xe8) = *(int *)(param_3 + 0xe8) + 1;
          *(float *)*param_5 = fVar19;
          *(float *)(*param_5 + 4) = fVar23;
          *param_5 = *param_5 + 8;
          iVar6 = *(int *)(param_3 + 0xe8) + 1;
          *(int *)(param_3 + 0xe8) = iVar6;
          puVar13 = (uint *)(param_8 + uVar12 * 0x18 + 0x10);
          if (*puVar13 != 0) {
            uVar14 = 0;
            do {
              *(int *)*param_6 = iVar6;
              *param_6 = *param_6 + 4;
              *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 1;
              *(int *)*param_6 = *(int *)(param_3 + 0xe8) + 1;
              *param_6 = *param_6 + 4;
              *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 1;
              uVar5 = *puVar13;
              if (uVar14 == uVar5 - 1) {
                if (uVar5 < 2) {
                  fVar19 = (float)uVar30 * (float)*(undefined8 *)param_7;
                  fVar23 = (float)((ulong)uVar30 >> 0x20) * (float)*(undefined8 *)param_7;
                  fVar18 = fVar20 + fVar19;
                  fVar17 = fVar31 + fVar23;
                  fVar19 = fVar20 - fVar19;
                  fVar23 = fVar31 - fVar23;
                }
                else {
                  uVar21 = *(undefined8 *)(*plVar11 + (ulong)(uVar5 - 2) * 8);
                  uVar30 = *(undefined8 *)(*plVar11 + uVar14 * 8);
                  fVar24 = (float)(**(code **)(*param_4 + 0x30))(param_4);
                  iVar6 = (**(code **)(*param_4 + 0x20))(param_4);
                  fVar19 = (float)uVar30;
                  fVar23 = (float)((ulong)uVar30 >> 0x20);
                  fVar16 = (float)uVar21;
                  fVar17 = (float)((ulong)uVar21 >> 0x20);
                  if (iVar6 == 1) {
                    fVar16 = fVar16 - fVar24;
                    fVar17 = fVar17 - fVar18;
                    fVar24 = fVar16 * fVar16 + fVar17 * fVar17;
                    fVar18 = fVar16 * fVar16 + fVar17 * fVar17;
                    uVar21 = 0;
                    if (0.00024414062 <= SQRT(fVar24)) {
                      uVar21 = NEON_frsqrte(CONCAT44(fVar18,fVar24),4);
                      fVar28 = (float)((ulong)uVar21 >> 0x20);
                      uVar30 = NEON_frsqrts(uVar21,CONCAT44(fVar18 * fVar28,fVar24 * (float)uVar21),
                                            4);
                      fVar26 = (float)uVar21 * (float)uVar30;
                      fVar28 = fVar28 * (float)((ulong)uVar30 >> 0x20);
                      iVar6 = -(uint)(fVar24 == 0.0);
                      iVar25 = -(uint)(fVar18 == 0.0);
                      uVar21 = NEON_frsqrts(CONCAT44(fVar28,fVar26),
                                            CONCAT44(fVar18 * fVar28,fVar24 * fVar26),4);
                      fVar16 = fVar16 * fVar26 * (float)uVar21;
                      fVar17 = fVar17 * fVar28 * (float)((ulong)uVar21 >> 0x20);
                      uVar21 = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18)
                                        ,CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                                  ~(byte)((uint)iVar25 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar17 >> 8) &
                                                           ~(byte)((uint)iVar25 >> 8),
                                                           CONCAT14(SUB41(fVar17,0) & ~(byte)iVar25,
                                                                    CONCAT13((byte)((uint)fVar16 >>
                                                                                   0x18) &
                                                                             ~(byte)((uint)iVar6 >>
                                                                                    0x18),
                                                                             CONCAT12((byte)((uint)
                                                  fVar16 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar16 >> 8) &
                                                           ~(byte)((uint)iVar6 >> 8),
                                                           SUB41(fVar16,0) & ~(byte)iVar6)))))));
                    }
                    uVar21 = CONCAT44((int)uVar21,-(float)((ulong)uVar21 >> 0x20));
                  }
                  else {
                    fVar16 = fVar19 - fVar16;
                    fVar17 = fVar23 - fVar17;
                    fVar24 = fVar16 * fVar16 + fVar17 * fVar17;
                    fVar18 = fVar16 * fVar16 + fVar17 * fVar17;
                    uVar21 = 0;
                    if (0.00024414062 <= SQRT(fVar24)) {
                      uVar21 = NEON_frsqrte(CONCAT44(fVar18,fVar24),4);
                      fVar28 = (float)((ulong)uVar21 >> 0x20);
                      uVar30 = NEON_frsqrts(uVar21,CONCAT44(fVar18 * fVar28,fVar24 * (float)uVar21),
                                            4);
                      fVar26 = (float)uVar21 * (float)uVar30;
                      fVar28 = fVar28 * (float)((ulong)uVar30 >> 0x20);
                      iVar6 = -(uint)(fVar24 == 0.0);
                      iVar25 = -(uint)(fVar18 == 0.0);
                      uVar21 = NEON_frsqrts(CONCAT44(fVar28,fVar26),
                                            CONCAT44(fVar18 * fVar28,fVar24 * fVar26),4);
                      fVar16 = fVar16 * fVar26 * (float)uVar21;
                      fVar17 = fVar17 * fVar28 * (float)((ulong)uVar21 >> 0x20);
                      uVar21 = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18)
                                        ,CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                                  ~(byte)((uint)iVar25 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar17 >> 8) &
                                                           ~(byte)((uint)iVar25 >> 8),
                                                           CONCAT14(SUB41(fVar17,0) & ~(byte)iVar25,
                                                                    CONCAT13((byte)((uint)fVar16 >>
                                                                                   0x18) &
                                                                             ~(byte)((uint)iVar6 >>
                                                                                    0x18),
                                                                             CONCAT12((byte)((uint)
                                                  fVar16 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar16 >> 8) &
                                                           ~(byte)((uint)iVar6 >> 8),
                                                           SUB41(fVar16,0) & ~(byte)iVar6)))))));
                    }
                  }
                  fVar24 = -(float)((ulong)uVar21 >> 0x20);
                  uVar30 = CONCAT44((float)uVar21,fVar24);
                  fVar24 = fVar24 * (float)*(undefined8 *)param_7;
                  fVar16 = (float)uVar21 * (float)*(undefined8 *)param_7;
                  fVar18 = fVar19 + fVar24;
                  fVar17 = fVar23 + fVar16;
                  fVar19 = fVar19 - fVar24;
                  fVar23 = fVar23 - fVar16;
                }
              }
              else {
                puVar2 = (undefined8 *)(*plVar11 + uVar14 * 8);
                uVar21 = *puVar2;
                uVar30 = puVar2[1];
                fVar24 = (float)(**(code **)(*param_4 + 0x30))(param_4);
                iVar6 = (**(code **)(*param_4 + 0x20))(param_4);
                fVar19 = (float)uVar21;
                fVar23 = (float)((ulong)uVar21 >> 0x20);
                if (iVar6 == 1) {
                  fVar24 = fVar19 - fVar24;
                  fVar18 = fVar23 - fVar18;
                  fVar16 = fVar24 * fVar24 + fVar18 * fVar18;
                  fVar17 = fVar24 * fVar24 + fVar18 * fVar18;
                  uVar21 = 0;
                  if (0.00024414062 <= SQRT(fVar16)) {
                    uVar21 = NEON_frsqrte(CONCAT44(fVar17,fVar16),4);
                    fVar28 = (float)((ulong)uVar21 >> 0x20);
                    uVar30 = NEON_frsqrts(uVar21,CONCAT44(fVar17 * fVar28,fVar16 * (float)uVar21),4)
                    ;
                    fVar26 = (float)uVar21 * (float)uVar30;
                    fVar28 = fVar28 * (float)((ulong)uVar30 >> 0x20);
                    iVar6 = -(uint)(fVar16 == 0.0);
                    iVar25 = -(uint)(fVar17 == 0.0);
                    uVar21 = NEON_frsqrts(CONCAT44(fVar28,fVar26),
                                          CONCAT44(fVar17 * fVar28,fVar16 * fVar26),4);
                    fVar24 = fVar24 * fVar26 * (float)uVar21;
                    fVar18 = fVar18 * fVar28 * (float)((ulong)uVar21 >> 0x20);
                    uVar21 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                      CONCAT16((byte)((uint)fVar18 >> 0x10) &
                                               ~(byte)((uint)iVar25 >> 0x10),
                                               CONCAT15((byte)((uint)fVar18 >> 8) &
                                                        ~(byte)((uint)iVar25 >> 8),
                                                        CONCAT14(SUB41(fVar18,0) & ~(byte)iVar25,
                                                                 CONCAT13((byte)((uint)fVar24 >>
                                                                                0x18) &
                                                                          ~(byte)((uint)iVar6 >>
                                                                                 0x18),
                                                                          CONCAT12((byte)((uint)
                                                  fVar24 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar24 >> 8) &
                                                           ~(byte)((uint)iVar6 >> 8),
                                                           SUB41(fVar24,0) & ~(byte)iVar6)))))));
                  }
                  uVar21 = CONCAT44((int)uVar21,-(float)((ulong)uVar21 >> 0x20));
                }
                else {
                  fVar16 = (float)uVar30 - fVar19;
                  fVar17 = (float)((ulong)uVar30 >> 0x20) - fVar23;
                  fVar24 = fVar16 * fVar16 + fVar17 * fVar17;
                  fVar18 = fVar16 * fVar16 + fVar17 * fVar17;
                  uVar21 = 0;
                  if (0.00024414062 <= SQRT(fVar24)) {
                    uVar21 = NEON_frsqrte(CONCAT44(fVar18,fVar24),4);
                    fVar28 = (float)((ulong)uVar21 >> 0x20);
                    uVar30 = NEON_frsqrts(uVar21,CONCAT44(fVar18 * fVar28,fVar24 * (float)uVar21),4)
                    ;
                    fVar26 = (float)uVar21 * (float)uVar30;
                    fVar28 = fVar28 * (float)((ulong)uVar30 >> 0x20);
                    iVar6 = -(uint)(fVar24 == 0.0);
                    iVar25 = -(uint)(fVar18 == 0.0);
                    uVar21 = NEON_frsqrts(CONCAT44(fVar28,fVar26),
                                          CONCAT44(fVar18 * fVar28,fVar24 * fVar26),4);
                    fVar16 = fVar16 * fVar26 * (float)uVar21;
                    fVar17 = fVar17 * fVar28 * (float)((ulong)uVar21 >> 0x20);
                    uVar21 = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                      CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                               ~(byte)((uint)iVar25 >> 0x10),
                                               CONCAT15((byte)((uint)fVar17 >> 8) &
                                                        ~(byte)((uint)iVar25 >> 8),
                                                        CONCAT14(SUB41(fVar17,0) & ~(byte)iVar25,
                                                                 CONCAT13((byte)((uint)fVar16 >>
                                                                                0x18) &
                                                                          ~(byte)((uint)iVar6 >>
                                                                                 0x18),
                                                                          CONCAT12((byte)((uint)
                                                  fVar16 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar16 >> 8) &
                                                           ~(byte)((uint)iVar6 >> 8),
                                                           SUB41(fVar16,0) & ~(byte)iVar6)))))));
                  }
                }
                fVar24 = -(float)((ulong)uVar21 >> 0x20);
                uVar30 = CONCAT44((float)uVar21,fVar24);
                fVar24 = fVar24 * (float)*(undefined8 *)param_7;
                fVar16 = (float)uVar21 * (float)*(undefined8 *)param_7;
                fVar18 = fVar19 + fVar24;
                fVar17 = fVar23 + fVar16;
                fVar19 = fVar19 - fVar24;
                fVar23 = fVar23 - fVar16;
              }
              uVar14 = uVar14 + 1;
              *(float *)*param_5 = fVar18;
              *(float *)(*param_5 + 4) = fVar17;
              *param_5 = *param_5 + 8;
              *(int *)(param_3 + 0xe8) = *(int *)(param_3 + 0xe8) + 1;
              *(float *)*param_5 = fVar19;
              *(float *)(*param_5 + 4) = fVar23;
              *param_5 = *param_5 + 8;
              iVar6 = *(int *)(param_3 + 0xe8) + 1;
              *(int *)(param_3 + 0xe8) = iVar6;
            } while (uVar14 < *puVar13);
          }
          uVar15 = *puVar10;
          uVar32 = **(undefined8 **)(param_8 + uVar3 * 0x18 + 8);
          local_f0 = uVar15;
          local_e8 = fVar18;
          fStack_e4 = fVar17;
          local_e0 = fVar19;
          fStack_dc = fVar23;
          local_d8 = uVar21;
          local_b8 = uVar30;
          auStack_b0[0] = uVar21;
          fVar24 = fVar18;
          fVar20 = (float)(**(code **)(*param_4 + 0x30))(param_4);
          iVar6 = (**(code **)(*param_4 + 0x20))(param_4);
          fVar31 = (float)uVar22;
          fVar16 = (float)((ulong)uVar22 >> 0x20);
          if (iVar6 == 1) {
            fVar20 = fVar31 - fVar20;
            fVar24 = fVar16 - fVar24;
            fVar26 = fVar20 * fVar20 + fVar24 * fVar24;
            fVar28 = fVar20 * fVar20 + fVar24 * fVar24;
            uVar22 = 0;
            if (0.00024414062 <= SQRT(fVar26)) {
              uVar22 = NEON_frsqrte(CONCAT44(fVar28,fVar26),4);
              fVar29 = (float)((ulong)uVar22 >> 0x20);
              uVar30 = NEON_frsqrts(uVar22,CONCAT44(fVar28 * fVar29,fVar26 * (float)uVar22),4);
              fVar27 = (float)uVar22 * (float)uVar30;
              fVar29 = fVar29 * (float)((ulong)uVar30 >> 0x20);
              iVar6 = -(uint)(fVar26 == 0.0);
              iVar25 = -(uint)(fVar28 == 0.0);
              uVar22 = NEON_frsqrts(CONCAT44(fVar29,fVar27),
                                    CONCAT44(fVar28 * fVar29,fVar26 * fVar27),4);
              fVar20 = fVar20 * fVar27 * (float)uVar22;
              fVar24 = fVar24 * fVar29 * (float)((ulong)uVar22 >> 0x20);
              uVar22 = CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16((byte)((uint)fVar24 >> 0x10) &
                                         ~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15((byte)((uint)fVar24 >> 8) &
                                                  ~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(SUB41(fVar24,0) & ~(byte)iVar25,
                                                           CONCAT13((byte)((uint)fVar20 >> 0x18) &
                                                                    ~(byte)((uint)iVar6 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar20 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar6 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar20 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                                  SUB41(fVar20,0) & ~(byte)iVar6)))))));
            }
            local_c0 = CONCAT44((int)uVar22,-(float)((ulong)uVar22 >> 0x20));
          }
          else {
            fVar26 = (float)uVar32 - fVar31;
            fVar28 = (float)((ulong)uVar32 >> 0x20) - fVar16;
            fVar24 = fVar26 * fVar26 + fVar28 * fVar28;
            fVar20 = fVar26 * fVar26 + fVar28 * fVar28;
            local_c0 = 0;
            if (0.00024414062 <= SQRT(fVar24)) {
              uVar22 = NEON_frsqrte(CONCAT44(fVar20,fVar24),4);
              fVar29 = (float)((ulong)uVar22 >> 0x20);
              uVar30 = NEON_frsqrts(uVar22,CONCAT44(fVar20 * fVar29,fVar24 * (float)uVar22),4);
              fVar27 = (float)uVar22 * (float)uVar30;
              fVar29 = fVar29 * (float)((ulong)uVar30 >> 0x20);
              uVar22 = NEON_frsqrts(CONCAT44(fVar29,fVar27),
                                    CONCAT44(fVar20 * fVar29,fVar24 * fVar27),4);
              fVar26 = fVar26 * fVar27 * (float)uVar22;
              fVar28 = fVar28 * fVar29 * (float)((ulong)uVar22 >> 0x20);
              iVar6 = -(uint)(fVar24 == 0.0);
              iVar25 = -(uint)(fVar20 == 0.0);
              local_c0 = CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                  CONCAT16((byte)((uint)fVar28 >> 0x10) &
                                           ~(byte)((uint)iVar25 >> 0x10),
                                           CONCAT15((byte)((uint)fVar28 >> 8) &
                                                    ~(byte)((uint)iVar25 >> 8),
                                                    CONCAT14(SUB41(fVar28,0) & ~(byte)iVar25,
                                                             CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                                                      ~(byte)((uint)iVar6 >> 0x18),
                                                                      CONCAT12((byte)((uint)fVar26
                                                                                     >> 0x10) &
                                                                               ~(byte)((uint)iVar6
                                                                                      >> 0x10),
                                                                               CONCAT11((byte)((uint
                                                  )fVar26 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar6)))))));
            }
          }
          fVar24 = -(float)((ulong)local_c0 >> 0x20) * (float)*(undefined8 *)param_7;
          fVar20 = (float)local_c0 * (float)*(undefined8 *)param_7;
          local_d0 = CONCAT44(fVar16 + fVar20,fVar31 + fVar24);
          param_2 = CONCAT44(fVar16 - fVar20,fVar31 - fVar24);
          uStack_c8 = param_2;
          if (((uVar12 < uVar9) || ((param_10 & 1) != 0)) && (*(long *)(param_7 + 2) != 0)) {
            iVar6 = *(int *)(*(long *)(param_7 + 2) + 8);
            if (iVar6 == 1) {
              local_100 = CONCAT44((int)uVar21,-(float)((ulong)uVar21 >> 0x20));
              local_f8 = uVar15;
              FUN_00394b70(param_3,param_5,param_6,param_7,&local_f8,&local_100,uVar12 == uVar9);
            }
            else if (iVar6 == 0) {
              FUN_003946c0(param_1,param_3,param_5,param_6,param_7,&local_f0,uVar12 == uVar9,iVar4);
            }
          }
          if ((uVar12 == uVar9) && ((param_10 & 1) == 0)) {
            fVar18 = fVar18 - fVar19;
            fVar17 = fVar17 - fVar23;
            fVar24 = fVar18 * fVar18 + fVar17 * fVar17;
            fVar19 = fVar18 * fVar18 + fVar17 * fVar17;
            param_2 = CONCAT44(fVar19,fVar24);
            local_b8 = 0;
            if (0.00024414062 <= SQRT(fVar24)) {
              uVar22 = NEON_frsqrte(param_2,4);
              fVar20 = (float)((ulong)uVar22 >> 0x20);
              uVar30 = NEON_frsqrts(uVar22,CONCAT44(fVar19 * fVar20,fVar24 * (float)uVar22),4);
              fVar23 = (float)uVar22 * (float)uVar30;
              fVar20 = fVar20 * (float)((ulong)uVar30 >> 0x20);
              iVar6 = -(uint)(fVar24 == 0.0);
              iVar25 = -(uint)(fVar19 == 0.0);
              param_2 = CONCAT44(iVar25,iVar6);
              uVar22 = NEON_frsqrts(CONCAT44(fVar20,fVar23),
                                    CONCAT44(fVar19 * fVar20,fVar24 * fVar23),4);
              fVar18 = fVar18 * fVar23 * (float)uVar22;
              fVar17 = fVar17 * fVar20 * (float)((ulong)uVar22 >> 0x20);
              local_b8 = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                  CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                           ~(byte)((uint)iVar25 >> 0x10),
                                           CONCAT15((byte)((uint)fVar17 >> 8) &
                                                    ~(byte)((uint)iVar25 >> 8),
                                                    CONCAT14(SUB41(fVar17,0) & ~(byte)iVar25,
                                                             CONCAT13((byte)((uint)fVar18 >> 0x18) &
                                                                      ~(byte)((uint)iVar6 >> 0x18),
                                                                      CONCAT12((byte)((uint)fVar18
                                                                                     >> 0x10) &
                                                                               ~(byte)((uint)iVar6
                                                                                      >> 0x10),
                                                                               CONCAT11((byte)((uint
                                                  )fVar18 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                                  SUB41(fVar18,0) & ~(byte)iVar6)))))));
            }
            local_f8 = *(undefined8 *)(*plVar11 + (ulong)(*puVar13 - 1) * 8);
            auStack_b0[0] = uVar21;
            FUN_00394dd0(param_3,param_5,param_6,param_7,&local_f8,&local_b8,auStack_b0,0);
          }
        }
        uVar12 = uVar1;
      } while (uVar1 != param_9);
      lVar7 = *(long *)(param_7 + 2);
      if (lVar7 == 0) {
        return;
      }
    }
    if (*(int *)(lVar7 + 8) == 2) {
      piVar8 = (int *)*param_6;
      *param_6 = (long)(piVar8 + 1);
      *piVar8 = iVar4;
      piVar8 = (int *)*param_6;
      *param_6 = (long)(piVar8 + 1);
      *piVar8 = iVar4 + 1;
      *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 2;
    }
  }
  return;
}

