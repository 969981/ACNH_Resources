
void FUN_03969d80(long *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long local_8a0;
  undefined8 local_898;
  undefined1 auStack_488 [1048];
  
  *(undefined1 *)((long)param_1 + 0x92) = 0;
  if (param_2 != 0) {
    FUN_0396ccd0(param_2,param_1);
  }
  uVar4 = *(ushort *)(param_1 + 0x11);
  uVar16 = (uint)uVar4;
  if ((uVar4 >> 1 & 1) == 0) {
    return;
  }
  piVar18 = (int *)param_1[0x3f];
  if (piVar18 == (int *)0x0) goto LAB_0396a9ec;
  if (*piVar18 != 0) {
    *(ushort *)(param_1 + 0x11) = uVar4 & 0xffef | (ushort)(9 < *piVar18 % 0x14) << 4;
    iVar9 = *piVar18;
    *piVar18 = iVar9 + -1;
    uVar16 = (uint)*(ushort *)(param_1 + 0x11);
    if (iVar9 + -1 == 0) {
      uVar16 = uVar16 & 0xffffffef;
      *(short *)(param_1 + 0x11) = (short)uVar16;
    }
  }
  if ((uVar16 >> 6 & 1) != 0) {
    lVar26 = param_1[0x3f];
    (**(code **)(*(long *)(lVar26 + 0x3c8) + 0x18))(lVar26 + 0x3c8);
    puVar25 = &DAT_0407ebb1;
    if (**(char **)(param_1[0x3f] + 0x3d0) != '\0') {
      puVar25 = (undefined8 *)&DAT_0407494a;
    }
    FUN_006e9454(&local_8a0,"%s%sOrder = %d",*(undefined8 *)(lVar26 + 0x3d0),puVar25,
                 ~*(uint *)((long)param_1 + 0x94));
    puVar6 = PTR_DAT_04bd1158;
    if ((*(long *)PTR_DAT_04bd1158 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
      (**(code **)(local_8a0 + 0x18))(&local_8a0);
      lVar26 = *(long *)puVar6;
      plVar27 = (long *)(lVar26 + 8);
      (**(code **)(*plVar27 + 0x18))(plVar27);
      FUN_006e9454(auStack_488,&DAT_0406a3d7,local_898,*(undefined8 *)(lVar26 + 0x10));
    }
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xffbf;
  }
  uVar4 = *(ushort *)((long)param_1 + 0x8a);
  if ((uVar4 & 1) != 0) {
    if ((uVar4 >> 1 & 1) != 0) {
      if (param_3 != 0) {
        uVar16 = *(uint *)(param_3 + 0x114);
        uVar22 = *(uint *)(param_3 + 8);
        uVar5 = *(uint *)(param_3 + 0x10) | uVar22;
        if ((uVar16 & 0x24) == 0) {
          uVar33 = 0;
          if ((param_5 >> 1 & 1) != 0) {
            if (((uVar16 >> 0xd & (uVar22 & 0x4000) >> 0xe) == 0) &&
               ((uVar22 & 0x2000) == 0 || (uVar16 & 0x4000) == 0)) {
              if (((uVar16 & 0x2000) == 0) == ((uVar16 & 0x4000) == 0)) {
                if ((uVar16 & 0x6000) == 0) {
                  *(uint *)(param_1[0x3f] + 0x3c4) = *(uint *)(param_1[0x3f] + 0x3c4) & 0xfffffffe;
                }
              }
              else {
                lVar26 = param_1[0x3f];
                if ((*(byte *)(lVar26 + 0x3c4) & 1) == 0) {
                  fVar28 = 0.0;
                  if ((uVar5 & 0x4000) != 0) {
                    fVar28 = -1.0;
                  }
                  if ((uVar5 & 0x2000) != 0) {
                    fVar28 = 1.0;
                  }
                  fVar34 = DAT_04c4bac4;
                  if ((uVar22 & 0x6000) != 0) {
                    fVar34 = 1.0;
                  }
                  fVar28 = *(float *)(lVar26 + 0xcc) + fVar28 * fVar34 * 0.004363323;
                  fVar34 = fVar28 * 0.15915494;
                  uVar16 = 0;
                  if (fVar34 != (float)(int)fVar34) {
                    uVar16 = (uint)(fVar34 < 0.0);
                  }
                  fVar28 = fVar28 + (float)(int)((int)fVar34 - uVar16) * -6.2831855;
                  bVar7 = false;
                  bVar8 = false;
                  if (fVar28 < 6.2831855) {
                    bVar7 = false;
                    bVar8 = true;
                    if (!NAN(fVar28)) {
                      bVar7 = fVar28 == 0.0;
                      bVar8 = 0.0 <= fVar28;
                    }
                  }
                  if (!bVar8 || bVar7) {
                    fVar28 = 0.0;
                  }
                  *(float *)(lVar26 + 0xcc) = fVar28;
                }
              }
            }
            else {
              *(undefined4 *)(param_1[0x3f] + 0xcc) = 0;
              *(uint *)(param_1[0x3f] + 0x3c4) = *(uint *)(param_1[0x3f] + 0x3c4) | 1;
            }
            goto LAB_0396a0c0;
          }
        }
        else {
          if ((param_5 >> 2 & 1) != 0) {
            fVar28 = *(float *)(param_1[0x3f] + 0xf0);
            if ((uVar22 >> 0xd & 1) == 0) {
              if ((uVar22 >> 0xe & 1) != 0) {
                fVar34 = 0.1;
                goto LAB_0396a08c;
              }
              if ((uVar5 >> 0xd & 1) == 0) {
                fVar34 = -0.0;
                if ((uVar5 & 0x4000) != 0) {
                  fVar34 = DAT_04c4bac4 * 0.5;
                }
                goto LAB_0396a08c;
              }
              fVar28 = fVar28 - DAT_04c4bac4 * 0.5;
            }
            else {
              fVar34 = -0.1;
LAB_0396a08c:
              fVar28 = fVar28 + fVar34;
            }
            fVar34 = 1.0;
            if ((1.0 <= fVar28) && (fVar34 = fVar28, 179.0 < fVar28)) {
              fVar34 = 179.0;
            }
            *(float *)(param_1[0x3f] + 0xf0) = fVar34;
          }
          uVar33 = 0;
          if ((param_5 >> 1 & 1) != 0) {
LAB_0396a0c0:
            uVar33 = *(undefined4 *)(param_1[0x3f] + 0xcc);
          }
        }
        if (param_4 < 2) {
          uVar16 = *(uint *)(param_3 + 0x114);
          uVar29 = 0;
          if ((uVar16 & 8) != 0) {
            uVar29 = 0xbf800000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar29 = 0x3f800000;
          }
          uVar30 = 0;
          if ((uVar16 & 2) != 0) {
            uVar30 = 0xbf800000;
          }
          if ((uVar16 & 1) != 0) {
            uVar30 = 0x3f800000;
          }
          FUN_03945264(uVar29,uVar30,uVar33,param_1[0x3f] + 0x68,param_3 + 0x120,param_3 + 0x128,1,
                       param_4);
        }
      }
      uVar4 = *(ushort *)((long)param_1 + 0x8a);
      if ((uVar4 >> 4 & 1) != 0) {
        lVar26 = param_1[0x3f];
        *(float *)(lVar26 + 0xa0) = *(float *)(lVar26 + 0xa0) - *(float *)(lVar26 + 0xac);
        *(float *)(lVar26 + 0xa4) = *(float *)(lVar26 + 0xa4) - *(float *)(lVar26 + 0xb0);
        *(float *)(lVar26 + 0xa8) = *(float *)(lVar26 + 0xa8) - *(float *)(lVar26 + 0xb4);
        lVar26 = param_1[0x3f];
        *(undefined8 *)(lVar26 + 0xac) = 0;
        *(undefined4 *)(lVar26 + 0xb4) = 0;
        uVar4 = *(ushort *)((long)param_1 + 0x8a);
      }
      if ((uVar4 >> 8 & 1) != 0) {
        puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar22 = puVar10[1];
        uVar5 = puVar10[2];
        uVar1 = puVar10[3];
        lVar26 = param_1[0x3f];
        uVar16 = *puVar10 ^ *puVar10 << 0xb;
        fVar28 = *(float *)(lVar26 + 0x3c0);
        *puVar10 = uVar22;
        puVar10[1] = uVar5;
        uVar22 = uVar22 ^ uVar22 << 0xb;
        uVar16 = uVar16 >> 8 ^ uVar1 >> 0x13 ^ uVar16 ^ uVar1;
        puVar10[2] = uVar1;
        puVar10[3] = uVar16;
        fVar34 = *(float *)(param_1[0x3f] + 0x3c0);
        *puVar10 = uVar5;
        puVar10[1] = uVar1;
        uVar5 = uVar5 ^ uVar5 << 0xb;
        uVar22 = uVar22 >> 8 ^ uVar16 >> 0x13 ^ uVar22 ^ uVar16;
        puVar10[2] = uVar16;
        puVar10[3] = uVar22;
        fVar35 = *(float *)(param_1[0x3f] + 0x3c0);
        *puVar10 = uVar1;
        puVar10[1] = uVar16;
        uVar5 = uVar5 >> 8 ^ uVar22 >> 0x13 ^ uVar5 ^ uVar22;
        puVar10[2] = uVar22;
        puVar10[3] = uVar5;
        *(float *)(lVar26 + 0xa0) = fVar28 * ((float)(uVar16 >> 9 | 0x3f800000) + -1.0);
        *(float *)(lVar26 + 0xa4) = fVar34 * ((float)(uVar22 >> 9 | 0x3f800000) + -1.0);
        *(float *)(lVar26 + 0xa8) = fVar35 * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0);
        uVar16 = *puVar10 ^ *puVar10 << 0xb;
        uVar1 = puVar10[3];
        uVar22 = puVar10[1] ^ puVar10[1] << 0xb;
        uVar5 = puVar10[2] ^ puVar10[2] << 0xb;
        uVar16 = uVar16 >> 8 ^ uVar1 >> 0x13 ^ uVar16 ^ uVar1;
        *puVar10 = uVar1;
        puVar10[1] = uVar16;
        uVar22 = uVar22 >> 8 ^ uVar16 >> 0x13 ^ uVar22 ^ uVar16;
        uVar5 = uVar5 >> 8 ^ uVar22 >> 0x13 ^ uVar5 ^ uVar22;
        puVar10[2] = uVar22;
        puVar10[3] = uVar5;
        fVar34 = (float)(uVar16 >> 9 | 0x3f800000) + -1.0 + -0.5;
        fVar35 = (float)(uVar22 >> 9 | 0x3f800000) + -1.0 + -0.5;
        fVar28 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0 + -0.5;
        fVar36 = SQRT(fVar35 * fVar35 + fVar34 * fVar34 + fVar28 * fVar28);
        if (0.0 < fVar36) {
          fVar36 = 1.0 / fVar36;
          fVar34 = fVar34 * fVar36;
          fVar35 = fVar35 * fVar36;
          fVar28 = fVar28 * fVar36;
        }
        lVar26 = param_1[0x3f];
        *(float *)(lVar26 + 0xac) = fVar34 + *(float *)(lVar26 + 0xa0);
        *(float *)(lVar26 + 0xb0) = fVar35 + *(float *)(lVar26 + 0xa4);
        *(float *)(lVar26 + 0xb4) = fVar28 + *(float *)(lVar26 + 0xa8);
      }
      plVar27 = (long *)(param_1[0x3f] + 0x68);
      (**(code **)(*plVar27 + 0x20))(plVar27,param_1[0x3f] + 0x70);
      lVar26 = param_1[0x3f];
      *(float *)(lVar26 + 0x4c) = *(float *)(lVar26 + 0xac) + *(float *)(lVar26 + 0xd0);
      *(float *)(lVar26 + 0x50) = *(float *)(lVar26 + 0xb0) + *(float *)(lVar26 + 0xd4);
      *(float *)(lVar26 + 0x54) = *(float *)(lVar26 + 0xb4) + *(float *)(lVar26 + 0xd8);
      lVar26 = param_1[0x3f];
      *(float *)(lVar26 + 0x40) = *(float *)(lVar26 + 0xa0) + *(float *)(lVar26 + 0xd0);
      *(float *)(lVar26 + 0x44) = *(float *)(lVar26 + 0xa4) + *(float *)(lVar26 + 0xd4);
      *(float *)(lVar26 + 0x48) = *(float *)(lVar26 + 0xa8) + *(float *)(lVar26 + 0xd8);
      lVar26 = param_1[0x3f];
      fVar28 = *(float *)(lVar26 + 0xb8);
      fVar34 = *(float *)(lVar26 + 0xbc);
      fVar35 = *(float *)(lVar26 + 0xc0);
      *(float *)(lVar26 + 0x58) = fVar28;
      *(float *)(lVar26 + 0x5c) = fVar34;
      *(float *)(lVar26 + 0x60) = fVar35;
      fVar36 = SQRT(fVar34 * fVar34 + fVar28 * fVar28 + fVar35 * fVar35);
      if (0.0 < fVar36) {
        fVar36 = 1.0 / fVar36;
        *(float *)(lVar26 + 0x58) = fVar28 * fVar36;
        *(float *)(lVar26 + 0x5c) = fVar34 * fVar36;
        *(float *)(lVar26 + 0x60) = fVar35 * fVar36;
      }
      plVar27 = (long *)(param_1[0x3f] + 8);
      (**(code **)(*plVar27 + 0x20))(plVar27,param_1[0x3f] + 0x10);
      uVar4 = *(ushort *)((long)param_1 + 0x8a);
    }
    if ((uVar4 >> 5 & 1) != 0) {
      plVar27 = (long *)param_1[0xf];
      if (((*PTR_DAT_04bb6208 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6208);
      }
      if ((plVar27 != (long *)0x0) &&
         (uVar11 = (**(code **)*plVar27)(plVar27,PTR_DAT_04bb6200), (uVar11 & 1) != 0)) {
        fVar34 = *(float *)(param_1[0x3f] + 0x39c) * 0.017453292;
        fVar36 = *(float *)(param_1[0x3f] + 0x398) * 0.017453292;
        fVar28 = cosf(fVar34);
        fVar34 = sinf(fVar34);
        fVar35 = sinf(fVar36);
        fVar36 = cosf(fVar36);
        lVar26 = param_1[0x3f];
        lVar17 = plVar27[1];
        *(long *)(lVar26 + 0x18) = plVar27[2];
        *(long *)(lVar26 + 0x10) = lVar17;
        lVar17 = plVar27[3];
        *(long *)(lVar26 + 0x28) = plVar27[4];
        *(long *)(lVar26 + 0x20) = lVar17;
        lVar17 = plVar27[5];
        *(long *)(lVar26 + 0x38) = plVar27[6];
        *(long *)(lVar26 + 0x30) = lVar17;
        *(int *)(lVar26 + 0x40) = (int)plVar27[7];
        *(undefined4 *)(lVar26 + 0x44) = *(undefined4 *)((long)plVar27 + 0x3c);
        *(int *)(lVar26 + 0x48) = (int)plVar27[8];
        *(undefined4 *)(lVar26 + 0x4c) = *(undefined4 *)((long)plVar27 + 0x44);
        *(int *)(lVar26 + 0x50) = (int)plVar27[9];
        *(undefined4 *)(lVar26 + 0x54) = *(undefined4 *)((long)plVar27 + 0x4c);
        *(int *)(lVar26 + 0x58) = (int)plVar27[10];
        *(undefined4 *)(lVar26 + 0x5c) = *(undefined4 *)((long)plVar27 + 0x54);
        *(int *)(lVar26 + 0x60) = (int)plVar27[0xb];
        lVar26 = param_1[0x3f];
        *(undefined8 *)(lVar26 + 0x4c) = *(undefined8 *)(lVar26 + 0x388);
        *(undefined4 *)(lVar26 + 0x54) = *(undefined4 *)(lVar26 + 0x390);
        lVar26 = param_1[0x3f];
        fVar31 = *(float *)(lVar26 + 0x394);
        *(float *)(lVar26 + 0x40) = *(float *)(lVar26 + 0x388) + fVar28 * fVar35 * fVar31;
        *(float *)(lVar26 + 0x44) = fVar34 * fVar31 + *(float *)(lVar26 + 0x38c);
        *(float *)(lVar26 + 0x48) = fVar28 * fVar36 * fVar31 + *(float *)(lVar26 + 0x390);
        plVar12 = (long *)(param_1[0x3f] + 8);
        (**(code **)(*plVar12 + 0x20))(plVar12,param_1[0x3f] + 0x10);
        lVar26 = param_1[0x3f];
        *(undefined4 *)((long)plVar27 + 0x44) = *(undefined4 *)(lVar26 + 0x4c);
        *(undefined4 *)(plVar27 + 9) = *(undefined4 *)(lVar26 + 0x50);
        *(undefined4 *)((long)plVar27 + 0x4c) = *(undefined4 *)(lVar26 + 0x54);
        lVar26 = param_1[0x3f];
        *(undefined4 *)(plVar27 + 7) = *(undefined4 *)(lVar26 + 0x40);
        *(undefined4 *)((long)plVar27 + 0x3c) = *(undefined4 *)(lVar26 + 0x44);
        *(undefined4 *)(plVar27 + 8) = *(undefined4 *)(lVar26 + 0x48);
        lVar26 = param_1[0x3f];
        fVar28 = *(float *)(lVar26 + 0x58);
        *(float *)(plVar27 + 10) = fVar28;
        fVar34 = *(float *)(lVar26 + 0x5c);
        *(float *)((long)plVar27 + 0x54) = fVar34;
        fVar35 = *(float *)(lVar26 + 0x60);
        *(float *)(plVar27 + 0xb) = fVar35;
        fVar36 = SQRT(fVar34 * fVar34 + fVar28 * fVar28 + fVar35 * fVar35);
        if (0.0 < fVar36) {
          fVar36 = 1.0 / fVar36;
          *(float *)(plVar27 + 10) = fVar28 * fVar36;
          *(float *)((long)plVar27 + 0x54) = fVar34 * fVar36;
          *(float *)(plVar27 + 0xb) = fVar35 * fVar36;
        }
        (**(code **)(*plVar27 + 0x20))(plVar27,plVar27 + 1);
      }
    }
  }
  if (((*(ushort *)((long)param_1 + 0x8c) & 4) != 0 || (*(ushort *)((long)param_1 + 0x8a) & 1) != 0)
     && ((*(ushort *)((long)param_1 + 0x8c) >> 1 & 1) != 0)) {
    puVar25 = (undefined8 *)param_1[0x10];
    if (((*PTR_DAT_04bbdcb0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbdcb0), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bbdca8 = PTR_DAT_04bb6238 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbdcb0);
    }
    if ((puVar25 == (undefined8 *)0x0) ||
       (uVar11 = (**(code **)*puVar25)(puVar25,PTR_DAT_04bbdca8), (uVar11 & 1) == 0)) {
      puVar25 = (undefined8 *)param_1[0x10];
      if (((*PTR_DAT_04bb6230 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6230);
      }
      if ((puVar25 == (undefined8 *)0x0) ||
         (uVar11 = (**(code **)*puVar25)(puVar25,PTR_DAT_04bb6228), (uVar11 & 1) == 0)) {
        plVar27 = (long *)param_1[0x10];
        if (plVar27 == (long *)0x0) goto LAB_0396a8f4;
        lVar26 = param_1[0x3f];
        if ((char)plVar27[1] == '\0') {
          if (*(char *)((long)plVar27 + 9) != '\0') goto LAB_0396a8b8;
        }
        else {
          (**(code **)(*plVar27 + 0x58))(plVar27,(long)plVar27 + 0xc);
          *(undefined2 *)(plVar27 + 1) = 0x100;
LAB_0396a8b8:
          (**(code **)(*plVar27 + 0x60))
                    (plVar27,(long)plVar27 + 0x4c,(long)plVar27 + 0xc,
                     *(undefined4 *)((long)plVar27 + 0x8c));
          *(undefined1 *)((long)plVar27 + 9) = 0;
        }
        FUN_038e6014(lVar26 + 0x1c8,(long)plVar27 + 0xc,0);
        lVar17 = param_1[0x3f];
        lVar26 = lVar17 + 0x1c8;
      }
      else {
        lVar26 = param_1[0x3f];
        *(undefined2 *)(lVar26 + 0x110) = *(undefined2 *)(puVar25 + 1);
        uVar19 = *(undefined8 *)((long)puVar25 + 0xc);
        *(undefined8 *)(lVar26 + 0x11c) = *(undefined8 *)((long)puVar25 + 0x14);
        *(undefined8 *)(lVar26 + 0x114) = uVar19;
        uVar19 = *(undefined8 *)((long)puVar25 + 0x1c);
        *(undefined8 *)(lVar26 + 300) = *(undefined8 *)((long)puVar25 + 0x24);
        *(undefined8 *)(lVar26 + 0x124) = uVar19;
        uVar19 = *(undefined8 *)((long)puVar25 + 0x2c);
        *(undefined8 *)(lVar26 + 0x13c) = *(undefined8 *)((long)puVar25 + 0x34);
        *(undefined8 *)(lVar26 + 0x134) = uVar19;
        uVar19 = *(undefined8 *)((long)puVar25 + 0x3c);
        *(undefined8 *)(lVar26 + 0x14c) = *(undefined8 *)((long)puVar25 + 0x44);
        *(undefined8 *)(lVar26 + 0x144) = uVar19;
        uVar19 = *(undefined8 *)((long)puVar25 + 0x4c);
        *(undefined8 *)(lVar26 + 0x15c) = *(undefined8 *)((long)puVar25 + 0x54);
        *(undefined8 *)(lVar26 + 0x154) = uVar19;
        uVar19 = *(undefined8 *)((long)puVar25 + 0x5c);
        *(undefined8 *)(lVar26 + 0x16c) = *(undefined8 *)((long)puVar25 + 100);
        *(undefined8 *)(lVar26 + 0x164) = uVar19;
        uVar19 = *(undefined8 *)((long)puVar25 + 0x6c);
        *(undefined8 *)(lVar26 + 0x17c) = *(undefined8 *)((long)puVar25 + 0x74);
        *(undefined8 *)(lVar26 + 0x174) = uVar19;
        uVar19 = *(undefined8 *)((long)puVar25 + 0x7c);
        *(undefined8 *)(lVar26 + 0x18c) = *(undefined8 *)((long)puVar25 + 0x84);
        *(undefined8 *)(lVar26 + 0x184) = uVar19;
        uVar19 = *(undefined8 *)((long)puVar25 + 0x8c);
        *(undefined4 *)(lVar26 + 0x19c) = *(undefined4 *)((long)puVar25 + 0x94);
        *(undefined8 *)(lVar26 + 0x194) = uVar19;
        uVar20 = puVar25[0x15];
        uVar19 = puVar25[0x13];
        uVar2 = puVar25[0x14];
        *(undefined4 *)(lVar26 + 0x1b8) = *(undefined4 *)(puVar25 + 0x16);
        *(undefined8 *)(lVar26 + 0x1a8) = uVar2;
        *(undefined8 *)(lVar26 + 0x1b0) = uVar20;
        *(undefined8 *)(lVar26 + 0x1a0) = uVar19;
        *(undefined4 *)(lVar26 + 0x1bc) = *(undefined4 *)((long)puVar25 + 0xb4);
        *(undefined4 *)(lVar26 + 0x1c0) = *(undefined4 *)(puVar25 + 0x17);
        lVar26 = param_1[0x3f];
        *(undefined1 *)(lVar26 + 0x110) = 1;
        *(undefined4 *)(lVar26 + 0x1a0) = *(undefined4 *)(lVar26 + 0xe8);
        lVar26 = param_1[0x3f];
        *(undefined1 *)(lVar26 + 0x110) = 1;
        *(undefined4 *)(lVar26 + 0x1a4) = *(undefined4 *)(lVar26 + 0xec);
        lVar26 = param_1[0x3f];
        fVar28 = *(float *)(lVar26 + 0xf0) * 0.017453292;
        fVar34 = fVar28 * 0.5;
        *(float *)(lVar26 + 0x1a8) = fVar28;
        fVar28 = sinf(fVar34);
        *(float *)(lVar26 + 0x1ac) = fVar28;
        fVar28 = cosf(fVar34);
        *(float *)(lVar26 + 0x1b0) = fVar28;
        fVar28 = tanf(fVar34);
        *(float *)(lVar26 + 0x1b4) = fVar28;
        *(undefined1 *)(lVar26 + 0x110) = 1;
        lVar26 = param_1[0x3f];
        *(undefined1 *)(lVar26 + 0x110) = 1;
        *(undefined4 *)(lVar26 + 0x1c0) = *(undefined4 *)(lVar26 + 0xf8);
        *(undefined4 *)(lVar26 + 0x1bc) = *(undefined4 *)(lVar26 + 0xf4);
        lVar26 = param_1[0x3f];
        *(undefined1 *)(lVar26 + 0x110) = 1;
        *(undefined4 *)(lVar26 + 0x1b8) = *(undefined4 *)(lVar26 + 0xfc);
        if ((*(byte *)((long)param_1 + 0x8c) >> 2 & 1) != 0) {
          uVar33 = *(undefined4 *)(param_1[0x3f] + 0x1a0);
          *(undefined1 *)(puVar25 + 1) = 1;
          *(undefined4 *)(puVar25 + 0x13) = uVar33;
          uVar33 = *(undefined4 *)(param_1[0x3f] + 0x1a4);
          *(undefined1 *)(puVar25 + 1) = 1;
          *(undefined4 *)((long)puVar25 + 0x9c) = uVar33;
          fVar34 = *(float *)(param_1[0x3f] + 0x1a8) * 0.5;
          *(float *)(puVar25 + 0x14) = *(float *)(param_1[0x3f] + 0x1a8);
          fVar28 = sinf(fVar34);
          *(float *)((long)puVar25 + 0xa4) = fVar28;
          fVar28 = cosf(fVar34);
          *(float *)(puVar25 + 0x15) = fVar28;
          fVar28 = tanf(fVar34);
          *(float *)((long)puVar25 + 0xac) = fVar28;
          *(undefined1 *)(puVar25 + 1) = 1;
          lVar26 = param_1[0x3f];
          *(undefined4 *)((long)puVar25 + 0xb4) = *(undefined4 *)(lVar26 + 0x1bc);
          uVar33 = *(undefined4 *)(lVar26 + 0x1c0);
          *(undefined1 *)(puVar25 + 1) = 1;
          *(undefined4 *)(puVar25 + 0x17) = uVar33;
        }
        lVar17 = param_1[0x3f];
        lVar26 = lVar17 + 0x108;
      }
    }
    else {
      lVar26 = param_1[0x3f];
      *(undefined2 *)(lVar26 + 0x2c8) = *(undefined2 *)(puVar25 + 1);
      uVar19 = *(undefined8 *)((long)puVar25 + 0xc);
      *(undefined8 *)(lVar26 + 0x2d4) = *(undefined8 *)((long)puVar25 + 0x14);
      *(undefined8 *)(lVar26 + 0x2cc) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar25 + 0x1c);
      *(undefined8 *)(lVar26 + 0x2e4) = *(undefined8 *)((long)puVar25 + 0x24);
      *(undefined8 *)(lVar26 + 0x2dc) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar25 + 0x2c);
      *(undefined8 *)(lVar26 + 0x2f4) = *(undefined8 *)((long)puVar25 + 0x34);
      *(undefined8 *)(lVar26 + 0x2ec) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar25 + 0x3c);
      *(undefined8 *)(lVar26 + 0x304) = *(undefined8 *)((long)puVar25 + 0x44);
      *(undefined8 *)(lVar26 + 0x2fc) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar25 + 0x4c);
      *(undefined8 *)(lVar26 + 0x314) = *(undefined8 *)((long)puVar25 + 0x54);
      *(undefined8 *)(lVar26 + 0x30c) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar25 + 0x5c);
      *(undefined8 *)(lVar26 + 0x324) = *(undefined8 *)((long)puVar25 + 100);
      *(undefined8 *)(lVar26 + 0x31c) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar25 + 0x6c);
      *(undefined8 *)(lVar26 + 0x334) = *(undefined8 *)((long)puVar25 + 0x74);
      *(undefined8 *)(lVar26 + 0x32c) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar25 + 0x7c);
      *(undefined8 *)(lVar26 + 0x344) = *(undefined8 *)((long)puVar25 + 0x84);
      *(undefined8 *)(lVar26 + 0x33c) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar25 + 0x8c);
      *(undefined4 *)(lVar26 + 0x354) = *(undefined4 *)((long)puVar25 + 0x94);
      *(undefined8 *)(lVar26 + 0x34c) = uVar19;
      uVar19 = puVar25[0x13];
      uVar2 = puVar25[0x14];
      *(undefined8 *)(lVar26 + 0x368) = puVar25[0x15];
      *(undefined8 *)(lVar26 + 0x360) = uVar2;
      *(undefined8 *)(lVar26 + 0x358) = uVar19;
      lVar26 = param_1[0x3f];
      *(undefined1 *)(lVar26 + 0x2c8) = 1;
      *(undefined4 *)(lVar26 + 0x358) = *(undefined4 *)(lVar26 + 0xe8);
      lVar26 = param_1[0x3f];
      *(undefined1 *)(lVar26 + 0x2c8) = 1;
      *(undefined4 *)(lVar26 + 0x35c) = *(undefined4 *)(lVar26 + 0xec);
      lVar17 = param_1[0x3f];
      lVar26 = lVar17 + 0x2c0;
    }
    *(long *)(lVar17 + 0x100) = lVar26;
  }
LAB_0396a8f4:
  uVar4 = *(ushort *)((long)param_1 + 0x8a);
  *(ushort *)((long)param_1 + 0x8a) = uVar4 & 0xffef;
  if ((*(ushort *)(param_1 + 0x11) >> 3 & 1) == 0) {
    if (((uVar4 >> 2 & 1) != 0) && ((*(byte *)(param_1[0x3f] + 0x3b0) & 3) == 0)) {
      FUN_039697a0(param_1,1);
    }
    if (((*(ushort *)((long)param_1 + 0x8c) & 1) != 0) &&
       ((*(uint *)(param_1[0x3f] + 0x3b0) & 3) == 2)) {
      FUN_039697a0(param_1,2);
    }
  }
  else {
    FUN_039697a0(param_1,3);
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfff7;
  }
  *(int *)(param_1[0x3f] + 0x3b0) = *(int *)(param_1[0x3f] + 0x3b0) + 1;
  if ((*(ushort *)(param_1 + 0x11) >> 9 & 1) == 0) {
    *(int *)(param_1[0x3f] + 0x370) = (int)param_1[6];
    *(undefined4 *)(param_1[0x3f] + 0x374) = *(undefined4 *)((long)param_1 + 0x34);
    *(float *)(param_1[0x3f] + 0x378) = *(float *)(param_1 + 7) - *(float *)(param_1 + 6);
    *(float *)(param_1[0x3f] + 0x37c) =
         *(float *)((long)param_1 + 0x3c) - *(float *)((long)param_1 + 0x34);
  }
  else {
    lVar26 = param_1[0x3f];
    fVar28 = *(float *)(lVar26 + 0x378);
    fVar34 = *(float *)(lVar26 + 0x37c);
    fVar35 = *(float *)(lVar26 + 0x370);
    fVar36 = *(float *)(lVar26 + 0x374);
    *(float *)(param_1 + 6) = fVar35;
    *(float *)((long)param_1 + 0x34) = fVar36;
    *(float *)(param_1 + 7) = fVar28 + fVar35;
    *(float *)((long)param_1 + 0x3c) = fVar34 + fVar36;
  }
LAB_0396a9ec:
  param_1[0xd] = param_1[8];
  fVar34 = *(float *)(param_1 + 6);
  fVar28 = *(float *)((long)param_1 + 0x34);
  *(float *)(param_1 + 0xb) = fVar34;
  *(float *)((long)param_1 + 0x5c) = fVar28;
  fVar36 = *(float *)(param_1 + 7);
  fVar35 = *(float *)((long)param_1 + 0x3c);
  *(float *)(param_1 + 0xc) = fVar36;
  *(float *)((long)param_1 + 100) = fVar35;
  *(int *)(param_1 + 0xe) = (int)param_1[9];
  if ((long)*(char *)((long)param_1 + 0x8e) != 0) {
    fVar32 = (fVar34 + fVar36) * 0.5;
    fVar31 = (fVar28 + fVar35) * 0.5;
    fVar34 = (fVar36 - fVar34) *
             *(float *)(&DAT_041b3d58 + (long)*(char *)((long)param_1 + 0x8e) * 4) * 0.5;
    fVar28 = (fVar35 - fVar28) *
             *(float *)(&DAT_041b3d58 + (long)*(char *)((long)param_1 + 0x8e) * 4) * 0.5;
    *(float *)(param_1 + 0xb) = fVar32 - fVar34;
    *(float *)(param_1 + 0xc) = fVar32 + fVar34;
    *(float *)((long)param_1 + 0x5c) = fVar31 - fVar28;
    *(float *)((long)param_1 + 100) = fVar31 + fVar28;
  }
  lVar26 = param_1[0x16];
  if ((int)lVar26 != 0) {
    lVar17 = param_1[0x17];
    iVar9 = 0;
    do {
      lVar21 = lVar17 + (long)iVar9 * 0x820;
      iVar3 = *(int *)(lVar21 + 8);
      if (1 < iVar3) {
        lVar21 = *(long *)(lVar21 + 0x10);
        uVar22 = 0;
        uVar16 = iVar3 - 1;
        do {
          if ((int)uVar16 <= (int)uVar22) break;
          lVar23 = *(long *)(lVar21 + (ulong)uVar22 * 8);
          uVar11 = (ulong)uVar22;
          if ((uVar16 - uVar22 & 1) == 0) {
            lVar13 = lVar23;
            uVar24 = uVar11;
          }
          else {
            uVar24 = uVar11 + 1;
            lVar13 = *(long *)(lVar21 + uVar24 * 8);
            if (*(int *)(lVar13 + 0x34) < *(int *)(lVar23 + 0x34)) {
              *(long *)(lVar21 + uVar24 * 8) = lVar23;
              *(long *)(lVar21 + uVar11 * 8) = lVar13;
              lVar13 = lVar23;
            }
          }
          uVar14 = (ulong)uVar16;
          uVar16 = uVar22;
          if (~uVar11 + uVar14 != 0) {
            plVar27 = (long *)(lVar21 + 8 + uVar24 * 8);
            do {
              lVar23 = *plVar27;
              if (*(int *)(lVar23 + 0x34) < *(int *)(lVar13 + 0x34)) {
                plVar27[-1] = lVar23;
                *plVar27 = lVar13;
                uVar16 = (uint)uVar24;
              }
              else {
                lVar13 = lVar23;
              }
              lVar23 = plVar27[1];
              if (*(int *)(lVar23 + 0x34) < *(int *)(lVar13 + 0x34)) {
                uVar16 = (uint)uVar24 + 1;
                *plVar27 = lVar23;
                plVar27[1] = lVar13;
              }
              else {
                lVar13 = lVar23;
              }
              uVar24 = uVar24 + 2;
              plVar27 = plVar27 + 2;
            } while (uVar14 != uVar24);
          }
          if ((int)uVar16 <= (int)uVar22) break;
          lVar23 = *(long *)(lVar21 + (ulong)uVar16 * 8);
          uVar24 = (ulong)uVar16;
          uVar22 = uVar16;
          do {
            lVar13 = lVar21 + uVar24 * 8;
            lVar15 = *(long *)(lVar13 + -8);
            if (*(int *)(lVar23 + 0x34) < *(int *)(lVar15 + 0x34)) {
              uVar22 = (uint)uVar24;
              *(long *)(lVar13 + -8) = lVar23;
              *(long *)(lVar21 + uVar24 * 8) = lVar15;
            }
            else {
              lVar23 = lVar15;
            }
            uVar24 = uVar24 - 1;
          } while ((long)uVar11 < (long)uVar24);
        } while (uVar22 != uVar16);
      }
      iVar9 = iVar9 + 1;
    } while ((int)lVar26 != iVar9);
  }
  if ((((param_2 == 0) || (((*(ushort *)(param_1 + 0x11) ^ 0xffff) & 3) != 0)) ||
      (uVar11 = (**(code **)(*param_1 + 0x88))(param_1), (uVar11 & 1) != 0)) ||
     ((*(ushort *)(param_1 + 0x11) >> 4 & 1) != 0)) {
    (**(code **)(*param_1 + 0x38))(param_1,0);
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x10);
    if (*(int *)(param_2 + 0x6b8) < *(int *)(param_2 + 0x6bc)) {
      *(long **)(*(long *)(param_2 + 0x6c0) + (long)*(int *)(param_2 + 0x6b8) * 8) = param_1;
      *(int *)(param_2 + 0x6b8) = *(int *)(param_2 + 0x6b8) + 1;
    }
    *(byte *)((long)param_1 + 0x92) =
         *(byte *)((long)param_1 + 0x92) | (byte)(1 << (ulong)(*(byte *)(param_2 + 8) & 0x1f));
  }
  return;
}

