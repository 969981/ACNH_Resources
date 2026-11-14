
/* WARNING: Removing unreachable block (ram,0x0161c6b0) */

byte FUN_0161c2a0(float param_1,long param_2,long *param_3,float *param_4,float *param_5,
                 undefined4 *param_6,long param_7,byte param_8)

{
  undefined4 *puVar1;
  void *pvVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  float *pfVar22;
  undefined4 *puVar23;
  uint uVar24;
  long lVar25;
  long *plVar26;
  size_t __n;
  ulong uVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  int *piVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar15 = FUN_006bd550(param_3[1],0);
  puVar11 = PTR_DAT_04bb2200;
  lVar19 = *(long *)(param_2 + 0x30);
  if (lVar19 == 0) {
    bVar14 = 0;
  }
  else {
    do {
      while (*(uint *)(lVar19 + 0x30) <= uVar15) {
        if (uVar15 <= *(uint *)(lVar19 + 0x30)) {
          lVar19 = *(long *)(lVar19 + 0x38);
          if (lVar19 == 0) goto LAB_0161c798;
          puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x18) + 0x38);
          uVar4 = *puVar20;
          uVar5 = puVar20[1];
          local_b8 = (float)uVar4;
          fStack_b4 = (float)((ulong)uVar4 >> 0x20);
          local_b0 = (float)uVar5;
          local_ac = (float)((ulong)uVar5 >> 0x20);
          if (param_7 == 0) {
            bVar13 = true;
            goto LAB_0161c464;
          }
          fVar36 = param_4[3] + local_b8;
          fVar37 = param_4[7] + fStack_b4;
          fVar38 = param_4[0xb] + local_b0;
          if ((((param_1 < 0.0) || (*PTR_DAT_04bb34c0 == '\0')) || (local_ac <= param_1)) ||
             (DAT_04c47d18 <=
              (fVar37 * *(float *)(PTR_DAT_04bb34c8 + 4) + fVar36 * *(float *)PTR_DAT_04bb34c8 +
              fVar38 * *(float *)(PTR_DAT_04bb34c8 + 8)) - *(float *)(PTR_DAT_04bb34c8 + 0xc))) {
            lVar21 = *(long *)PTR_DAT_04bb2200;
            if ((*(long *)(lVar21 + 0x58) == 0) ||
               (pfVar22 = *(float **)
                           (*(long *)(lVar21 + 0x58) +
                            (ulong)(*(int *)(param_2 + 0x194) != 0) * 0x10 + 0xea8),
               pfVar22 == (float *)0x0)) {
              bVar12 = true;
            }
            else {
              fVar39 = pfVar22[3];
              bVar13 = false;
              bVar12 = true;
              if (*pfVar22 <= fVar36) {
                bVar13 = false;
                bVar12 = true;
                if (!NAN(fVar36) && !NAN(fVar39)) {
                  bVar13 = fVar36 == fVar39;
                  bVar12 = fVar39 <= fVar36;
                }
              }
              if (!bVar12 || bVar13) {
                fVar39 = pfVar22[4];
                bVar13 = false;
                bVar12 = true;
                if (pfVar22[1] <= fVar37) {
                  bVar13 = false;
                  bVar12 = true;
                  if (!NAN(fVar37) && !NAN(fVar39)) {
                    bVar13 = fVar37 == fVar39;
                    bVar12 = fVar39 <= fVar37;
                  }
                }
                if ((!bVar12 || bVar13) && (pfVar22[2] <= fVar38)) {
                  bVar12 = fVar38 <= pfVar22[5];
                  goto LAB_0161c470;
                }
              }
              bVar12 = false;
            }
LAB_0161c470:
            bVar13 = (bool)(bVar12 ^ 1);
          }
          else {
            lVar21 = *(long *)PTR_DAT_04bb2200;
            bVar12 = true;
            bVar13 = true;
          }
          fVar33 = *param_5;
          fVar35 = param_5[1];
          fVar32 = param_5[2];
          lVar21 = *(long *)(lVar21 + 0x78);
          fVar39 = fVar33;
          if (fVar33 <= fVar32) {
            fVar39 = fVar32;
          }
          fVar34 = fVar35;
          if (fVar35 <= fVar32) {
            fVar34 = fVar32;
          }
          if (fVar33 <= fVar35) {
            fVar39 = fVar34;
          }
          fVar39 = local_ac * fVar39;
          local_e8 = CONCAT44(fVar37,fVar36);
          fVar32 = fVar37;
          local_e0 = fVar38;
          local_b8 = fVar36;
          fStack_b4 = fVar37;
          local_b0 = fVar38;
          local_ac = fVar39;
          local_dc = fVar39;
          if (lVar21 != 0) {
            fVar35 = *(float *)(lVar21 + 0x40) * 0.017453292 *
                     ((fVar38 + *(float *)(lVar21 + 0x38)) / 160.0);
            fVar32 = 57600.0 / (*(float *)(lVar21 + 0x40) * 6.2831855) + fVar37;
            fVar33 = cosf(fVar35);
            if (fVar33 == 0.0) {
              fVar33 = 0.001;
            }
            else {
              fVar33 = cosf(fVar35);
            }
            fVar35 = sinf(fVar35);
            lVar21 = *(long *)(*(long *)puVar11 + 0x78);
            fVar34 = *(float *)(lVar21 + 0x3c);
            local_e0 = fVar35 * fVar32 * fVar34 + (1.0 - fVar34) * fVar38;
            fVar32 = fVar37 * (1.0 - fVar34) +
                     fVar34 * (fVar33 * fVar32 + -57600.0 / (*(float *)(lVar21 + 0x40) * 6.2831855))
            ;
          }
          local_e8._0_4_ = fVar36;
          local_e8._4_4_ = fVar32;
          if ((bVar13) || (uVar18 = FUN_0073e274(local_dc,param_7,&local_e8), (uVar18 & 1) == 0)) {
            iVar30 = 0;
            iVar28 = -1;
          }
          else {
            iVar30 = 1;
            lVar21 = *(long *)(*(long *)puVar11 + 0x78);
            if ((((0.0 < *(float *)(lVar21 + 0x3c)) && (0.0 <= fVar37)) &&
                (local_e0 < *(float *)(lVar21 + 0x58))) &&
               ((fVar32 = (*(float *)(lVar21 + 100) * local_e8._4_4_ +
                           (float)local_e8 * *(float *)(lVar21 + 0x60) +
                          local_e0 * *(float *)(lVar21 + 0x68)) - *(float *)(lVar21 + 0x6c),
                fVar32 < 0.0 && (local_dc < -fVar32)))) {
              iVar30 = 0;
            }
            iVar28 = iVar30;
          }
          bVar13 = iVar30 != 0;
          bVar10 = false;
          if (iVar28 != 0) {
            bVar10 = bVar12;
          }
          bVar14 = bVar13;
          if ((iVar30 != 0) || (!bVar10)) goto LAB_0161c790;
          lVar21 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x78);
          if (lVar21 != 0) {
            fVar38 = *(float *)(lVar21 + 0x3c) * (fVar38 + *(float *)(lVar21 + 0x38)) +
                     (1.0 - *(float *)(lVar21 + 0x3c)) * fVar38;
          }
          lVar21 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x58);
          if (lVar21 == 0) {
            lVar21 = 0;
            uVar15 = 0xffffffff;
          }
          else {
            bVar13 = false;
            lVar21 = *(long *)(lVar21 + 0xe88);
            plVar26 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bbdb78 + 0x28);
            if (((*PTR_DAT_04bbdb68 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar16 != 0)) {
              *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
              __cxa_guard_release(PTR_DAT_04bbdb68);
            }
            if ((plVar26 == (long *)0x0) ||
               (uVar18 = (**(code **)(*plVar26 + 0x10))(plVar26,PTR_DAT_04bbdb60), (uVar18 & 1) == 0
               )) {
              uVar15 = 0xffffffff;
            }
            else {
              uVar15 = (uint)(char)plVar26[0x1a3];
            }
          }
          if (fVar39 <= 0.0) goto LAB_0161c78c;
          if (*(uint *)(lVar21 + 0x1a70) <= uVar15) {
            uVar15 = 0;
          }
          lVar21 = *(long *)(*(long *)(lVar21 + 0x1a78) + (long)(int)uVar15 * 0xfc8 + 0x378);
          uVar15 = *(uint *)(lVar21 + 0x438);
          if ((int)uVar15 < 1) goto LAB_0161c7f0;
          if (fVar39 < (fVar37 * *(float *)(lVar21 + 0x440) + fVar36 * *(float *)(lVar21 + 0x43c) +
                       fVar38 * *(float *)(lVar21 + 0x444)) - *(float *)(lVar21 + 0x448))
          goto LAB_0161c78c;
          uVar18 = 0;
          pfVar22 = (float *)(lVar21 + 0x44c);
          goto LAB_0161c7b0;
        }
        lVar19 = *(long *)(lVar19 + 0x10);
        if (lVar19 == 0) {
          bVar14 = 0;
          goto LAB_0161cc18;
        }
      }
      lVar19 = *(long *)(lVar19 + 8);
      bVar14 = 0;
    } while (lVar19 != 0);
  }
  goto LAB_0161cc18;
  while( true ) {
    bVar12 = 0x16 < uVar18;
    uVar18 = uVar18 + 1;
    pfVar3 = pfVar22;
    if (bVar12) {
      pfVar3 = (float *)(lVar21 + 0x43c);
    }
    pfVar22 = pfVar22 + 4;
    if (fVar39 < (fVar37 * pfVar3[1] + fVar36 * *pfVar3 + fVar38 * pfVar3[2]) - pfVar3[3]) break;
LAB_0161c7b0:
    if ((ulong)uVar15 - 1 == uVar18) goto LAB_0161c7f0;
  }
  if (uVar18 < uVar15) {
LAB_0161c78c:
    bVar14 = false;
LAB_0161c790:
    if (iVar30 == 0) goto LAB_0161c794;
  }
  else {
LAB_0161c7f0:
    if (iVar28 < 0) {
      bVar14 = FUN_015e9d34(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x78),&local_e8,&local_b8);
LAB_0161c794:
      if ((bVar14 & 1) == 0) {
LAB_0161c798:
        bVar14 = 0;
        goto LAB_0161cc18;
      }
    }
    else {
      bVar13 = false;
LAB_0161c464:
      bVar14 = 1;
    }
  }
  fVar36 = *param_5;
  fVar37 = param_5[1];
  fStack_d4 = fVar37 * param_4[5];
  fStack_c4 = fVar37 * param_4[9];
  local_d8 = fVar36 * param_4[4];
  local_c8 = fVar36 * param_4[8];
  local_e8 = CONCAT44(param_4[1] * fVar37,*param_4 * fVar36);
  local_c0 = param_5[2];
  _local_e0 = CONCAT44(param_4[3],param_4[2] * local_c0);
  fStack_cc = param_4[7];
  local_d0 = local_c0 * param_4[6];
  fStack_bc = param_4[0xb];
  local_c0 = local_c0 * param_4[10];
  nn::os::LockMutex((MutexType *)(param_2 + 0x88));
  if (*(int *)(param_2 + 0x60) < 1) {
    plVar26 = (long *)0x0;
  }
  else {
    plVar26 = *(long **)(param_2 + 0x58);
    if (*plVar26 != 0) {
      *(long *)(*plVar26 + 8) = plVar26[1];
    }
    if ((long *)plVar26[1] != (long *)0x0) {
      *(long *)plVar26[1] = *plVar26;
    }
    *plVar26 = 0;
    plVar26[1] = 0;
    *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + -1;
  }
  iVar28 = *(int *)(param_2 + 100);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x88));
  if ((plVar26 != (long *)0x0) &&
     (piVar31 = (int *)((long)plVar26 - (long)iVar28), piVar31 != (int *)0x0)) {
    iVar30 = *piVar31;
    plVar26 = (long *)(param_2 + 0xa8);
    lVar21 = *(long *)(param_2 + 0xb8);
    iVar28 = *(int *)(param_2 + 0xd8);
    iVar16 = (**(code **)(*plVar26 + 0x20))(plVar26);
    iVar17 = (**(code **)(*plVar26 + 0x20))(plVar26);
    lVar29 = **(long **)(param_2 + 0xb0);
    uVar27 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar29 + 8) * 4];
    uVar18 = (**(code **)(*plVar26 + 0x18))(plVar26);
    if (uVar27 != 0) {
      __n = uVar27 * 4;
      pvVar2 = (void *)(lVar21 + (ulong)((iVar28 + iVar16) - 1U & -iVar17) * (long)iVar30 +
                       (ulong)*(ushort *)(lVar29 + 4));
      memcpy(pvVar2,&local_e8,__n);
      lVar21 = (uVar18 & 0xff) * 4;
      pvVar2 = (void *)((long)pvVar2 + lVar21);
      memcpy(pvVar2,(void *)((long)&local_e8 + __n),__n);
      memcpy((void *)((long)pvVar2 + lVar21),&local_e8 + uVar27,__n);
    }
    lVar21 = *(long *)(param_2 + 0xb8);
    iVar30 = *piVar31;
    iVar28 = *(int *)(param_2 + 0xd8);
    iVar16 = (**(code **)(*(long *)(param_2 + 0xa8) + 0x20))(plVar26);
    iVar17 = (**(code **)(*(long *)(param_2 + 0xa8) + 0x20))(plVar26);
    lVar29 = **(long **)(param_2 + 0xb0);
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar29 + 0x74) * 4];
    (**(code **)(*(long *)(param_2 + 0xa8) + 0x18))(plVar26);
    if (bVar8 != 0) {
      uVar27 = (ulong)*(ushort *)(lVar29 + 0x70);
      lVar29 = (ulong)((iVar28 + iVar16) - 1U & -iVar17) * (long)iVar30;
      uVar18 = (ulong)bVar8 & 3;
      if (bVar8 < 4) {
        lVar25 = 0;
      }
      else {
        lVar25 = 0;
        puVar23 = (undefined4 *)(lVar29 + uVar27 + lVar21 + 8);
        do {
          lVar25 = lVar25 + -4;
          puVar23[-2] = *param_6;
          puVar23[-1] = param_6[1];
          *puVar23 = param_6[2];
          puVar1 = param_6 + 3;
          param_6 = param_6 + 4;
          puVar23[1] = *puVar1;
          puVar23 = puVar23 + 4;
        } while (-lVar25 != ((ulong)bVar8 & 0xfc));
        lVar25 = -lVar25;
      }
      if ((bVar8 & 3) != 0) {
        puVar23 = (undefined4 *)(lVar21 + uVar27 + lVar29 + lVar25 * 4);
        do {
          uVar18 = uVar18 - 1;
          *puVar23 = *param_6;
          puVar23 = puVar23 + 1;
          param_6 = param_6 + 1;
        } while (uVar18 != 0);
      }
    }
    iVar28 = *piVar31;
    bVar8 = *(byte *)(param_2 + 0xe1);
    uVar9 = *(ushort *)(param_2 + 0xe2);
    iVar30 = *(int *)(param_2 + 0xd8);
    iVar16 = (**(code **)(*(long *)(param_2 + 0xa8) + 0x20))(plVar26);
    iVar17 = (**(code **)(*(long *)(param_2 + 0xa8) + 0x20))(plVar26);
    lVar21 = *(long *)(param_2 + 200);
    if (lVar21 != 0) {
      uVar6 = *(undefined4 *)(param_2 + 0xd8);
      iVar7 = *(int *)(param_2 + 0xc0);
      uVar15 = (**(code **)PTR_DAT_04bcf030)(lVar21);
      if ((uVar15 >> 2 & 1) != 0) {
        (**(code **)PTR_DAT_04bcf350)
                  (lVar21,iVar7 + ((iVar30 + iVar16) - 1U & -iVar17) *
                                  (iVar28 + (uint)uVar9 * (uint)bVar8),uVar6);
      }
    }
    uVar15 = 0x40;
    if (bVar13 == false) {
      uVar15 = 0;
    }
    piVar31[6] = (int)local_b8;
    uVar24 = 0x80;
    if ((bVar14 & 1) == 0) {
      uVar24 = 0;
    }
    piVar31[10] = uVar24 | uVar15 | piVar31[10] & 0xffffff3fU;
    piVar31[9] = (int)local_ac;
    *(ulong *)(piVar31 + 7) = CONCAT44(local_b0,fStack_b4);
    *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0xa4) = 0xffff;
    nn::os::LockMutex((MutexType *)(lVar19 + 0x58));
    plVar26 = (long *)((long)piVar31 + (long)*(int *)(lVar19 + 0x34));
    lVar21 = *(long *)(lVar19 + 0x20);
    *(long **)(lVar19 + 0x20) = plVar26;
    *plVar26 = lVar21;
    plVar26[1] = lVar19 + 0x20;
    if (lVar21 != 0) {
      *(long **)(lVar21 + 8) = plVar26;
    }
    *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar19 + 0x58));
  }
  bVar14 = bVar13 | param_8 ^ 1;
LAB_0161cc18:
  return bVar14 & 1;
}

