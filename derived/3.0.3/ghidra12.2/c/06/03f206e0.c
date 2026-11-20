
/* WARNING: Removing unreachable block (ram,0x03f20eac) */

undefined8 FUN_03f206e0(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  long lVar12;
  long *plVar13;
  undefined4 *puVar14;
  short *psVar15;
  ulong uVar16;
  void *__dest;
  undefined8 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  ulong uVar25;
  float *pfVar26;
  ulong uVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 local_90;
  long local_88;
  undefined1 local_80 [16];
  
  lVar28 = DAT_05ae7600;
  puVar20 = (uint *)param_3[1];
  if (puVar20 == (uint *)0x0) {
    return 1;
  }
  if ((*puVar20 & 0xfe) != 0xc0) {
    return 1;
  }
  uVar9 = *puVar20 >> 8;
  if (*(short *)*param_3 == 0x5942) {
    uVar9 = uVar9 & 0xff00 | *puVar20 >> 0x18 | (uVar9 & 0xff) << 0x10;
  }
  uVar21 = (ulong)uVar9;
  if (uVar9 == 0) {
    return 1;
  }
  if (DAT_05ae7600 == 0) {
    puVar14 = malloc(uVar21 << 5);
  }
  else {
    plVar13 = param_2;
    if (param_2 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar13 = (long *)(lVar28 + 8);
      if (lVar12 != 0) {
        plVar13 = (long *)(lVar12 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        puVar14 = (undefined4 *)0x0;
        goto LAB_03f207d4;
      }
    }
    puVar14 = (undefined4 *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar21 << 5,8);
  }
LAB_03f207d4:
  uVar27 = uVar21 & 7;
  puVar23 = puVar14;
  if ((uVar9 & 7) != 0) {
    puVar22 = puVar14;
    do {
      uVar27 = uVar27 - 1;
      puVar23 = puVar22 + 8;
      *puVar22 = 0;
      puVar22 = puVar23;
    } while (uVar27 != 0);
  }
  if (6 < (uVar21 - 1 & 0x7ffffffffffffff)) {
    do {
      *puVar23 = 0;
      puVar23[8] = 0;
      puVar23[0x10] = 0;
      puVar23[0x18] = 0;
      puVar23[0x20] = 0;
      puVar23[0x28] = 0;
      puVar23[0x30] = 0;
      puVar23[0x38] = 0;
      puVar23 = puVar23 + 0x40;
    } while (puVar23 != puVar14 + uVar21 * 8);
  }
  uVar27 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    auVar31 = FUN_03b36a34(param_3,uVar27 & 0xffffffff);
    psVar15 = auVar31._0_8_;
    local_90 = (undefined *)((ulong)local_90 & 0xffffff0000000000);
    local_80 = auVar31;
    uVar16 = FUN_03b36b40(local_80,&local_90,&DAT_040fe5ab);
    puVar23 = puVar14 + uVar27 * 8;
    if (((uVar16 & 1) != 0) && (local_90._4_1_ == -0x60)) {
      uVar19 = *(uint *)(psVar15 + 4);
      uVar24 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
      if (*psVar15 != 0x5942) {
        uVar24 = uVar19;
      }
      if (uVar24 != 0) {
        uVar5 = *(uint *)((long)psVar15 + (long)(int)(float)local_90 * 4 + (long)(int)uVar24 + 4);
        uVar19 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
        if (*psVar15 != 0x5942) {
          uVar19 = uVar5;
        }
        pcVar2 = (char *)((long)psVar15 + (ulong)uVar19 + (long)(int)uVar24);
        if ((pcVar2 == &DAT_04ba8170) ||
           ((((*pcVar2 == 'E' && (pcVar2[1] == 'n')) && (pcVar2[2] == 'd')) && (pcVar2[3] == '\0')))
           ) {
          uVar18 = 0;
        }
        else {
          if ((pcVar2 != s_Playing_04ba8175) &&
             (((((*pcVar2 != 'P' || (pcVar2[1] != 'l')) ||
                ((pcVar2[2] != 'a' || ((pcVar2[3] != 'y' || (pcVar2[4] != 'i')))))) ||
               (pcVar2[5] != 'n')) || ((pcVar2[6] != 'g' || (pcVar2[7] != '\0'))))))
          goto LAB_03f209b0;
          uVar18 = 1;
        }
        *puVar23 = uVar18;
      }
    }
LAB_03f209b0:
    local_90 = (undefined *)((ulong)local_90 & 0xffffff0000000000);
    uVar16 = FUN_03b36b40(local_80,&local_90,"DestinationNode");
    local_88 = 0;
    if (((uVar16 & 1) != 0) && (local_90._4_1_ == -0x60)) {
      uVar19 = *(uint *)(psVar15 + 4);
      uVar24 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
      if (*psVar15 != 0x5942) {
        uVar24 = uVar19;
      }
      if (uVar24 == 0) {
        local_88 = 0;
      }
      else {
        uVar5 = *(uint *)((long)psVar15 + (long)(int)(float)local_90 * 4 + (long)(int)uVar24 + 4);
        uVar19 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
        if (*psVar15 != 0x5942) {
          uVar19 = uVar5;
        }
        local_88 = (long)psVar15 + (ulong)uVar19 + (long)(int)uVar24;
      }
    }
    iVar6 = *(int *)(param_4 + 0x50);
    local_90 = puVar1;
    if (iVar6 != 0) {
      lVar28 = *(long *)(param_4 + 0x58);
      uVar16 = 0;
      do {
        plVar13 = *(long **)(lVar28 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
        (**(code **)(local_90 + 0x18))(&local_90);
        (**(code **)(local_90 + 0x18))(&local_90);
        lVar12 = local_88;
        (**(code **)(*plVar13 + 0x18))(plVar13);
        if (lVar12 == plVar13[1]) goto LAB_03f20b14;
        uVar25 = 0;
        lVar12 = plVar13[1] + 1;
        bVar10 = true;
        do {
          lVar3 = local_88 + 1 + uVar25;
          lVar4 = lVar12 + uVar25;
          cVar8 = *(char *)(lVar3 + -1);
          if (cVar8 != *(char *)(lVar4 + -1)) break;
          if (cVar8 == '\0') {
            if (bVar10) goto LAB_03f20b14;
            break;
          }
          cVar8 = *(char *)(local_88 + 1 + uVar25);
          if (cVar8 != *(char *)(lVar12 + uVar25)) break;
          if (cVar8 == '\0') goto LAB_03f20b14;
          cVar8 = *(char *)(lVar3 + 1);
          if (cVar8 != *(char *)(lVar4 + 1)) break;
          if (cVar8 == '\0') goto LAB_03f20b14;
          bVar10 = uVar25 < 0x7fffe;
          uVar25 = uVar25 + 3;
        } while (uVar25 != 0x80001);
        uVar25 = uVar16 + 1;
        uVar16 = uVar25 & 0xffffffff;
      } while (iVar6 != (int)uVar25);
    }
    plVar13 = (long *)0x0;
LAB_03f20b14:
    *(long **)(puVar23 + 2) = plVar13;
    iVar6 = *(int *)(param_1 + 0x38);
    if (iVar6 == 5) {
LAB_03f20b40:
      pfVar26 = (float *)(puVar23 + 4);
      *pfVar26 = 1.0;
      local_90 = (undefined *)((ulong)local_90._5_3_ << 0x28);
      uVar16 = FUN_03b36b40(local_80,&local_90,"RandomWeight");
      if (((uVar16 & 1) == 0) || (local_90._4_1_ != -0x2e)) {
        local_90 = (undefined *)((ulong)local_90 & 0xffffff0000000000);
        uVar16 = FUN_03b36b40(local_80,&local_90,"RandomWeight");
        if (((uVar16 & 1) == 0) || (local_90._4_1_ != -0x2f)) goto LAB_03f20c4c;
        fVar29 = (float)(int)(float)local_90;
        *pfVar26 = fVar29;
      }
      else {
        *pfVar26 = (float)local_90;
LAB_03f20c4c:
        fVar29 = *pfVar26;
      }
      if (fVar29 == 0.0) {
        *pfVar26 = 1.0;
      }
    }
    else if (iVar6 == 4) {
      *(undefined8 *)(puVar23 + 4) = 0;
    }
    else {
      if (iVar6 == 3) goto LAB_03f20b40;
      local_90 = (undefined *)((ulong)local_90._5_3_ << 0x28);
      uVar16 = FUN_03b36b40(local_80,&local_90,"ConditionBin");
      lVar28 = DAT_05ae7600;
      if ((uVar16 & 1) == 0) {
LAB_03f20c3c:
        puVar17 = (undefined8 *)0x0;
      }
      else {
        if (local_90._4_1_ == -0x5e) {
          sVar7 = *psVar15;
          uVar19 = *(uint *)((long)psVar15 + ((ulong)local_90 & 0xffffffff));
          uVar24 = (int)(float)local_90 + 8;
        }
        else {
          if (local_90._4_1_ != -0x5f) goto LAB_03f20c3c;
          sVar7 = *psVar15;
          uVar19 = *(uint *)((long)psVar15 + ((ulong)local_90 & 0xffffffff));
          uVar24 = (int)(float)local_90 + 4;
        }
        uVar5 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if (sVar7 != 0x5942) {
          uVar5 = uVar19;
        }
        uVar16 = (ulong)uVar5;
        if (*(short *)((long)psVar15 + (ulong)uVar24) == 0x3143) {
          if (DAT_05ae7600 == 0) {
            __dest = malloc(uVar16);
          }
          else {
            plVar13 = param_2;
            if (param_2 == (long *)0x0) {
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              plVar13 = (long *)(lVar28 + 8);
              if (lVar12 != 0) {
                plVar13 = (long *)(lVar12 + 0xa8);
              }
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) {
                __dest = (void *)0x0;
                goto LAB_03f20d0c;
              }
            }
            __dest = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar16,8);
          }
LAB_03f20d0c:
          memcpy(__dest,(short *)((long)psVar15 + (ulong)uVar24),uVar16);
        }
        else {
          __dest = (void *)0x0;
        }
        local_90 = (undefined *)((ulong)local_90 & 0xffffff0000000000);
        bVar11 = FUN_03b36b40(local_80,&local_90,"TimeFulfillCondition");
        bVar10 = local_90._4_1_ == -0x2e;
        fVar29 = (float)local_90;
        lVar28 = *(long *)PTR_DAT_04bb2698;
        if (lVar28 == 0) {
          puVar17 = malloc(0x28);
        }
        else {
          plVar13 = param_2;
          if (param_2 == (long *)0x0) {
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar13 = (long *)(lVar28 + 8);
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + 0xa8);
            }
            plVar13 = (long *)*plVar13;
            puVar17 = (undefined8 *)0x0;
            if (plVar13 == (long *)0x0) goto LAB_03f20db4;
          }
          puVar17 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x28,8);
        }
LAB_03f20db4:
        lVar12 = *(long *)(param_4 + 8);
        *puVar17 = __dest;
        lVar28 = (long)(fVar29 * 1000.0);
        if ((bVar11 & bVar10) == 0) {
          lVar28 = 0;
        }
        *(undefined1 *)(puVar17 + 2) = 0;
        puVar17[1] = (DAT_05ae7888 * lVar28) / 1000;
        if (lVar12 == 0) {
          lVar28 = 0;
        }
        else if (*(char *)(lVar12 + 0x15) == '\0') {
          lVar28 = *(long *)(lVar12 + 0x18);
        }
        else {
          lVar28 = (long)(DAT_05ae7888 *
                          (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                   1000 + *(long *)(lVar12 + 0x18);
        }
        puVar17[3] = lVar28;
        puVar17[4] = lVar12;
      }
      *(undefined8 **)(puVar23 + 4) = puVar17;
    }
    lVar28 = *(long *)(puVar23 + 2);
    fVar29 = 0.0;
    if ((lVar28 != 0) && (fVar30 = *(float *)(lVar28 + 0x48), fVar30 < 0.0)) {
      fVar29 = -fVar30;
    }
    uVar27 = uVar27 + 1;
    puVar23[6] = fVar29;
    *(uint *)(param_1 + 0x70) = uVar9;
    *(undefined4 **)(param_1 + 0x78) = puVar14;
    if (uVar27 == uVar21) {
      return 1;
    }
  } while( true );
}

