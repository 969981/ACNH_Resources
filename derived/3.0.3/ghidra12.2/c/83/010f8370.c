
void FUN_010f8370(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  char cVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  void *pvVar22;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_0497aa40;
  param_1[2] = 0;
  param_1[3] = param_2[5];
  param_1[4] = param_2[6];
  lVar14 = param_2[4];
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  plVar18 = param_1 + 7;
  *plVar18 = (long)puVar1;
  pvVar2 = (void *)((long)param_1 + 0x4c);
  param_1[5] = lVar14;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0x40;
  *(undefined1 *)((long)param_1 + 0x8b) = 0;
  param_1[8] = pvVar2;
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar22 = (void *)param_2[1];
  if (pvVar2 != pvVar22) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_010f8460;
      lVar16 = param_2[1] + lVar14;
      if (*(char *)(lVar16 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_010f8460;
      }
      if (*(char *)(lVar16 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_010f8460;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_010f8460:
    iVar7 = (int)lVar14;
    if (*(int *)(param_1 + 9) <= (int)lVar14) {
      iVar7 = *(int *)(param_1 + 9) + -1;
    }
    memcpy(pvVar2,pvVar22,(long)iVar7);
    *(undefined1 *)((long)pvVar2 + (long)iVar7) = 0;
  }
  puVar5 = PTR_DAT_04bb2bc0;
  pvVar2 = (void *)((long)param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x14) = 0x40;
  *(undefined1 *)((long)param_1 + 0xe3) = 0;
  param_1[0x12] = puVar1;
  param_1[0x13] = pvVar2;
  param_1[7] = puVar5 + 0x10;
  plVar9 = param_2 + 2;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar22 = (void *)param_2[3];
  if (pvVar2 != pvVar22) {
    (**(code **)(param_2[2] + 0x18))(plVar9);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[3] + lVar14) == '\0') goto LAB_010f851c;
      lVar16 = param_2[3] + lVar14;
      if (*(char *)(lVar16 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_010f851c;
      }
      if (*(char *)(lVar16 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_010f851c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_010f851c:
    iVar7 = (int)lVar14;
    if (*(int *)(param_1 + 0x14) <= (int)lVar14) {
      iVar7 = *(int *)(param_1 + 0x14) + -1;
    }
    memcpy(pvVar2,pvVar22,(long)iVar7);
    *(undefined1 *)((long)pvVar2 + (long)iVar7) = 0;
  }
  param_1[0x12] = puVar5 + 0x10;
  param_1[0x1d] = param_1 + 0x1d;
  param_1[0x1e] = param_1 + 0x1d;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x23] = param_1 + 0x23;
  param_1[0x24] = param_1 + 0x23;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  (**(code **)(param_1[7] + 0x18))(plVar18);
  (**(code **)(param_1[7] + 0x18))(plVar18);
  pcVar21 = (char *)param_1[8];
  (**(code **)(DAT_050b4c60 + 0x18))(&DAT_050b4c60);
  puVar1 = PTR_DAT_04bb27c0;
  if (pcVar21 == DAT_050b4c68) {
LAB_010f8620:
    if (((ulong)*(byte *)(param_1[3] + 0xc0) < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
      uVar8 = *(undefined4 *)
               (*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1[3] + 0xc0) * 4 + 0xde8);
    }
    else {
LAB_010f904c:
      uVar8 = *(undefined4 *)PTR_DAT_04bb3238;
    }
  }
  else {
    pcVar21 = (char *)param_1[8];
    if (*pcVar21 == *DAT_050b4c68) {
      if (*pcVar21 != '\0') {
        lVar14 = 0;
        do {
          if ((lVar14 == 0x80000) || (pcVar21[lVar14 + 1] != DAT_050b4c68[lVar14 + 1]))
          goto LAB_010f8650;
          if (pcVar21[lVar14 + 1] == '\0') break;
          lVar16 = lVar14 + 2;
          if (pcVar21[lVar16] != DAT_050b4c68[lVar14 + 2]) goto LAB_010f8650;
          lVar14 = lVar14 + 2;
        } while (pcVar21[lVar16] != '\0');
      }
      goto LAB_010f8620;
    }
LAB_010f8650:
    (**(code **)(param_1[7] + 0x18))(plVar18);
    (**(code **)(param_1[7] + 0x18))(plVar18);
    lVar14 = param_1[8];
    (**(code **)(DAT_050b4c70 + 0x18))(&DAT_050b4c70);
    if (lVar14 != DAT_050b4c78) {
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4c78 + uVar10)) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) goto LAB_010f8788;
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      puVar20 = &DAT_050b4c90;
      pcVar21 = (char *)param_1[8];
      (**(code **)(DAT_050b4c90 + 0x18))(&DAT_050b4c90);
      if (pcVar21 == DAT_050b4c98) goto LAB_010f8788;
      pcVar21 = (char *)param_1[8];
      if (*pcVar21 == *DAT_050b4c98) {
        if (*pcVar21 != '\0') {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            if ((uVar11 == 0x80000) || (pcVar21[uVar11 + 1] != DAT_050b4c98[uVar11 + 1]))
            goto LAB_010f8794;
            if (pcVar21[uVar11 + 1] == '\0') goto LAB_010f8780;
            if (pcVar21[uVar11 + 2] != DAT_050b4c98[uVar11 + 2]) goto LAB_010f8794;
            uVar10 = uVar11 + 2;
          } while (pcVar21[uVar11 + 2] != '\0');
          uVar11 = uVar11 + 1;
LAB_010f8780:
          if (uVar11 >> 0x13 != 0) goto LAB_010f8794;
        }
        goto LAB_010f8788;
      }
LAB_010f8794:
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      pcVar21 = (char *)param_1[8];
      (**(code **)(DAT_050b4c80 + 0x18))(&DAT_050b4c80);
      if (pcVar21 == DAT_050b4c88) {
LAB_010f88d4:
        uVar8 = *(undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xa24);
        goto LAB_010f9058;
      }
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != DAT_050b4c88[uVar10]) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) goto LAB_010f88d4;
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      pcVar21 = (char *)param_1[8];
      (**(code **)(DAT_050b4ca8 + 0x18))(&DAT_050b4ca8);
      if (pcVar21 == DAT_050b4cb0) goto LAB_010f88d4;
      pcVar21 = (char *)param_1[8];
      if (*pcVar21 == *DAT_050b4cb0) {
        if (*pcVar21 != '\0') {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            if ((uVar11 == 0x80000) || (pcVar21[uVar11 + 1] != DAT_050b4cb0[uVar11 + 1]))
            goto LAB_010f88e8;
            if (pcVar21[uVar11 + 1] == '\0') goto LAB_010f88cc;
            if (pcVar21[uVar11 + 2] != DAT_050b4cb0[uVar11 + 2]) goto LAB_010f88e8;
            uVar10 = uVar11 + 2;
          } while (pcVar21[uVar11 + 2] != '\0');
          uVar11 = uVar11 + 1;
LAB_010f88cc:
          if (uVar11 >> 0x13 != 0) goto LAB_010f88e8;
        }
        goto LAB_010f88d4;
      }
LAB_010f88e8:
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      lVar14 = param_1[8];
      (**(code **)(DAT_050b4c70 + 0x18))(&DAT_050b4c70);
      if (lVar14 == DAT_050b4c78) {
LAB_010f8964:
        lVar14 = 0;
LAB_010f8a10:
        uVar8 = *(undefined4 *)(*(long *)PTR_DAT_04bb3968 + lVar14 * 4 + 0xa20);
        goto LAB_010f9058;
      }
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4c78 + uVar10)) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) goto LAB_010f8964;
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      pcVar21 = (char *)param_1[8];
      (**(code **)(DAT_050b4c80 + 0x18))(&DAT_050b4c80);
      if (pcVar21 == DAT_050b4c88) {
LAB_010f8a0c:
        lVar14 = 1;
        goto LAB_010f8a10;
      }
      pcVar21 = (char *)param_1[8];
      if (*pcVar21 == *DAT_050b4c88) {
        if (*pcVar21 != '\0') {
          lVar16 = 0;
          lVar14 = 1;
          do {
            if ((lVar16 == 0x80000) || (pcVar21[lVar16 + 1] != DAT_050b4c88[lVar16 + 1]))
            goto LAB_010f8a2c;
            if (pcVar21[lVar16 + 1] == '\0') break;
            lVar4 = lVar16 + 2;
            if (pcVar21[lVar4] != DAT_050b4c88[lVar16 + 2]) goto LAB_010f8a2c;
            lVar16 = lVar16 + 2;
          } while (pcVar21[lVar4] != '\0');
          goto LAB_010f8a10;
        }
        goto LAB_010f8a0c;
      }
LAB_010f8a2c:
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      pcVar21 = (char *)param_1[8];
      (**(code **)(DAT_050b4c90 + 0x18))(&DAT_050b4c90);
      if (pcVar21 == DAT_050b4c98) {
LAB_010f8ea0:
        puVar12 = (undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
        if (*(byte *)(puVar20 + 2) < 0x12) {
          puVar12 = (undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xa20) + *(byte *)(puVar20 + 2);
        }
LAB_010f8ec4:
        uVar8 = *puVar12;
        goto LAB_010f9058;
      }
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != DAT_050b4c98[uVar10]) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) {
            puVar20 = &DAT_050b4c90;
            goto LAB_010f8ea0;
          }
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      pcVar21 = (char *)param_1[8];
      (**(code **)(DAT_050b4ca8 + 0x18))(&DAT_050b4ca8);
      if (pcVar21 == DAT_050b4cb0) {
        puVar20 = &DAT_050b4ca8;
        goto LAB_010f8ea0;
      }
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != DAT_050b4cb0[uVar10]) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) {
            puVar20 = &DAT_050b4ca8;
            goto LAB_010f8ea0;
          }
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      puVar20 = &DAT_050b4cc0;
      lVar14 = param_1[8];
      (**(code **)(DAT_050b4cc0 + 0x18))(&DAT_050b4cc0);
      if (lVar14 == DAT_050b4cc8) goto LAB_010f8ea0;
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4cc8 + uVar10)) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) {
            puVar20 = &DAT_050b4cc0;
            goto LAB_010f8ea0;
          }
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      puVar20 = &DAT_050b4cd8;
      lVar14 = param_1[8];
      (**(code **)(DAT_050b4cd8 + 0x18))(&DAT_050b4cd8);
      if (lVar14 == DAT_050b4ce0) goto LAB_010f8ea0;
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4ce0 + uVar10)) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) {
            puVar20 = &DAT_050b4cd8;
            goto LAB_010f8ea0;
          }
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      puVar20 = &DAT_050b4cf0;
      lVar14 = param_1[8];
      (**(code **)(DAT_050b4cf0 + 0x18))(&DAT_050b4cf0);
      if (lVar14 == DAT_050b4cf8) goto LAB_010f8ea0;
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4cf8 + uVar10)) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) {
            puVar20 = &DAT_050b4cf0;
            goto LAB_010f8ea0;
          }
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      puVar20 = &DAT_050b4d08;
      lVar14 = param_1[8];
      (**(code **)(DAT_050b4d08 + 0x18))(&DAT_050b4d08);
      if (lVar14 == DAT_050b4d10) goto LAB_010f8ea0;
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4d10 + uVar10)) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) {
            puVar20 = &DAT_050b4d08;
            goto LAB_010f8ea0;
          }
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      puVar20 = &DAT_050b4d20;
      lVar14 = param_1[8];
      (**(code **)(DAT_050b4d20 + 0x18))(&DAT_050b4d20);
      if (lVar14 == DAT_050b4d28) goto LAB_010f8ea0;
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4d28 + uVar10)) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) {
            puVar20 = &DAT_050b4d20;
            goto LAB_010f8ea0;
          }
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      puVar20 = &DAT_050b4d38;
      lVar14 = param_1[8];
      (**(code **)(DAT_050b4d38 + 0x18))(&DAT_050b4d38);
      if (lVar14 == DAT_050b4d40) goto LAB_010f8ea0;
      uVar10 = 0;
      bVar6 = true;
      do {
        if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4d40 + uVar10)) break;
        if (*(char *)(param_1[8] + uVar10) == '\0') {
          if (bVar6) {
            puVar20 = &DAT_050b4d38;
            goto LAB_010f8ea0;
          }
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      (**(code **)(param_1[7] + 0x18))(plVar18);
      pcVar21 = (char *)param_1[8];
      (**(code **)(DAT_050b4d50 + 0x18))(&DAT_050b4d50);
      if (pcVar21 != DAT_050b4d58) {
        pcVar21 = (char *)param_1[8];
        if (*pcVar21 == *DAT_050b4d58) {
          if (*pcVar21 != '\0') {
            lVar14 = 0;
            do {
              if ((lVar14 == 0x80000) || (pcVar21[lVar14 + 1] != DAT_050b4d58[lVar14 + 1]))
              goto LAB_010f9170;
              if (pcVar21[lVar14 + 1] == '\0') break;
              lVar16 = lVar14 + 2;
              if (pcVar21[lVar16] != DAT_050b4d58[lVar14 + 2]) goto LAB_010f9170;
              lVar14 = lVar14 + 2;
            } while (pcVar21[lVar16] != '\0');
          }
          goto LAB_010f8f6c;
        }
LAB_010f9170:
        (**(code **)(param_1[7] + 0x18))(plVar18);
        (**(code **)(param_1[7] + 0x18))(plVar18);
        lVar14 = param_1[8];
        (**(code **)(DAT_050b4d60 + 0x18))(&DAT_050b4d60);
        if (lVar14 == DAT_050b4d68) goto LAB_010f8788;
        uVar10 = 0;
        bVar6 = true;
        do {
          if (*(char *)(param_1[8] + uVar10) != *(char *)(DAT_050b4d68 + uVar10)) break;
          if (*(char *)(param_1[8] + uVar10) == '\0') {
            if (bVar6) goto LAB_010f8788;
            break;
          }
          bVar6 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        uVar10 = FUN_00710cb0(plVar18,&DAT_050b4d70);
        if ((((uVar10 & 1) != 0) ||
            (uVar10 = FUN_00710cb0(plVar18,&DAT_050b4d80), (uVar10 & 1) != 0)) ||
           (uVar10 = FUN_00710cb0(plVar18,&DAT_050b4d90), (uVar10 & 1) != 0)) goto LAB_010f8788;
        cVar13 = *DAT_050b4da8;
        if (cVar13 != '\0') {
          pcVar21 = (char *)param_1[8];
          pcVar15 = DAT_050b4da8;
          do {
            pcVar15 = pcVar15 + 1;
            if (*pcVar21 != cVar13) goto LAB_010f905c;
            cVar13 = *pcVar15;
            pcVar21 = pcVar21 + 1;
          } while (cVar13 != '\0');
        }
        *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 1;
        uVar8 = FUN_010fa0c0(plVar18);
        goto LAB_010f9058;
      }
LAB_010f8f6c:
      uVar19 = *(uint *)PTR_DAT_04bbb7f0;
      if (((uVar19 == 0) ||
          (plVar18 = *(long **)(*(long *)(*(long *)(*(long *)puVar1 + 0x1c0) + 8) +
                               ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
         (((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar18 + 0x46) != uVar19)))) {
        plVar18 = (long *)0x0;
      }
      iVar7 = *(int *)(*(long *)puVar1 + 0x288);
      if ((iVar7 == 1) || (iVar7 == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        (**(code **)(*plVar9 + 0x60))();
      }
      if (((*PTR_DAT_04bbb7e8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbb7e8), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bbb7e0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbb7e8);
      }
      (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bbb7e0);
      plVar9 = (long *)plVar18[0x50];
      if (plVar9 != plVar18 + 0x4f) {
        plVar17 = plVar9 + -1;
        do {
          if ((char)plVar9[-1] == '\0') {
            *(undefined1 *)plVar17 = 1;
            puVar12 = (undefined4 *)((long)plVar17 + 4);
            break;
          }
          plVar9 = (long *)plVar9[1];
          plVar17 = plVar9 + -1;
          puVar12 = (undefined4 *)PTR_DAT_04bb3238;
        } while (plVar17 != plVar18 + 0x4e);
        goto LAB_010f8ec4;
      }
      goto LAB_010f904c;
    }
LAB_010f8788:
    uVar8 = *(undefined4 *)(param_1[3] + 0xbc);
  }
LAB_010f9058:
  *(undefined4 *)(param_1 + 1) = uVar8;
LAB_010f905c:
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    return;
  }
  uVar19 = *(uint *)(param_1 + 1);
  if ((((uVar19 == 0) ||
       (plVar18 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
      ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar19)) {
    plVar18 = (long *)0x0;
  }
  if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar1;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar19 = 1;
      goto joined_r0x010f90fc;
    }
    if (*(uint *)(lVar14 + 0x5e8) < 5) {
      uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x010f90fc;
    }
  }
  uVar19 = 0;
joined_r0x010f90fc:
  if (plVar18 != (long *)0x0) {
    lVar14 = plVar18[0x2a];
    if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2e60);
    }
    uVar10 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb2e58);
    uVar3 = 0;
    if ((int)lVar14 == 1) {
      uVar3 = uVar19;
    }
    if (((uVar10 & 1) != 0) && (uVar3 != 0)) {
      param_1[2] = plVar18[0x13];
    }
  }
  return;
}

