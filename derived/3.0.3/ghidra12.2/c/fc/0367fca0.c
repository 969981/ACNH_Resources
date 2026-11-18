
void FUN_0367fca0(long *param_1,void *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  bool bVar15;
  LightLimiterParameterSet *pLVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  short *psVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long *plVar26;
  char *__dest;
  void *__s;
  ulong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  char *local_68;
  
  puVar14 = PTR_DAT_04bb2020;
  lVar17 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    lVar17 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10);
  }
  pcVar2 = (char *)(lVar17 + 0x90);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  plVar26 = param_1 + 0x14;
  local_68 = pcVar2;
  (**(code **)(*plVar26 + 0x18))(plVar26);
  (**(code **)(*plVar26 + 0x18))(plVar26);
  if ((char *)param_1[0x15] == pcVar2) goto LAB_03680058;
  uVar18 = 0;
  bVar15 = true;
  do {
    cVar6 = ((char *)param_1[0x15])[uVar18];
    if (cVar6 != pcVar2[uVar18]) break;
    if (cVar6 == '\0') {
      if (bVar15) goto LAB_03680058;
      break;
    }
    bVar15 = uVar18 < 0x80000;
    uVar18 = uVar18 + 1;
  } while (uVar18 != 0x80001);
  if (pcVar2 == "AudioTvOutput") {
LAB_0367fdb0:
    pLVar16 = (LightLimiterParameterSet *)&DAT_04198dd8;
LAB_0367ffac:
    nn::audio::SetAuxLightLimiterParameters((AuxLightLimiterType *)(param_1 + 0x10),pLVar16);
  }
  else {
    uVar18 = 0;
    bVar15 = true;
    do {
      if (pcVar2[uVar18] != "AudioTvOutput"[uVar18]) break;
      if (pcVar2[uVar18] == '\0') {
        if (bVar15) goto LAB_0367fdb0;
        break;
      }
      bVar15 = uVar18 < 0x80000;
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x80001);
    if (pcVar2 == "AudioStereoJackOutput") goto LAB_0367ffa0;
    uVar18 = 0;
    bVar15 = true;
    do {
      if (pcVar2[uVar18] != "AudioStereoJackOutput"[uVar18]) break;
      if (pcVar2[uVar18] == '\0') {
        if (bVar15) goto LAB_0367ffa0;
        break;
      }
      bVar15 = uVar18 < 0x80000;
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x80001);
    local_80 = puVar14 + 0x10;
    local_78 = "AudioBuiltInSpeakerOutput";
    FUN_006bd3a4(&local_80);
    if (pcVar2 == local_78) {
LAB_0367fe70:
      pLVar16 = (LightLimiterParameterSet *)&DAT_04198e28;
      goto LAB_0367ffac;
    }
    uVar18 = 0;
    bVar15 = true;
    do {
      if (local_68[uVar18] != local_78[uVar18]) break;
      if (local_68[uVar18] == '\0') {
        if (bVar15) goto LAB_0367fe70;
        break;
      }
      bVar15 = uVar18 < 0x80000;
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x80001);
    local_80 = puVar14 + 0x10;
    local_78 = "AudioUsbDeviceOutput";
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    pcVar2 = local_68;
    (**(code **)(local_80 + 0x18))(&local_80);
    if (pcVar2 == local_78) {
LAB_0367ffa0:
      pLVar16 = (LightLimiterParameterSet *)&DAT_04198e00;
      goto LAB_0367ffac;
    }
    uVar18 = 0;
    bVar15 = true;
    do {
      if (local_68[uVar18] != local_78[uVar18]) break;
      if (local_68[uVar18] == '\0') {
        if (bVar15) goto LAB_0367ffa0;
        break;
      }
      bVar15 = uVar18 < 0x80000;
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x80001);
    local_80 = puVar14 + 0x10;
    local_78 = "AudioExternalOutput";
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    pcVar2 = local_68;
    (**(code **)(local_80 + 0x18))(&local_80);
    if (pcVar2 == local_78) goto LAB_0367ffa0;
    uVar18 = 0;
    bVar15 = true;
    do {
      if (local_68[uVar18] != local_78[uVar18]) break;
      if (local_68[uVar18] == '\0') {
        if (bVar15) goto LAB_0367ffa0;
        break;
      }
      bVar15 = uVar18 < 0x80000;
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x80001);
  }
  __dest = (char *)param_1[0x15];
  (**(code **)(local_70 + 0x18))(&local_70);
  pcVar2 = local_68;
  if (__dest != local_68) {
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar17 = 0;
    do {
      if (local_68[lVar17] == '\0') goto LAB_0368002c;
      if (local_68[lVar17 + 1] == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_0368002c;
      }
      if (local_68[lVar17 + 2] == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_0368002c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_0368002c:
    iVar22 = (int)lVar17;
    if ((int)param_1[0x16] <= (int)lVar17) {
      iVar22 = (int)param_1[0x16] + -1;
    }
    memcpy(__dest,pcVar2,(long)iVar22);
    __dest[iVar22] = '\0';
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
LAB_03680058:
  memcpy((void *)(*param_1 + (ulong)*(uint *)((long)param_1 + 0x14) * 2),param_2,
         -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1);
  uVar4 = *(int *)((long)param_1 + 0x14) + param_3;
  uVar5 = *(uint *)(param_1 + 0x13);
  uVar18 = (ulong)uVar5;
  uVar8 = uVar4 >> 1;
  uVar11 = 0;
  if (uVar5 != 0) {
    uVar11 = uVar8 / uVar5;
  }
  uVar9 = uVar5 * 2 * uVar11;
  uVar27 = (ulong)uVar9;
  if (*(char *)((long)param_1 + 0x9c) != '\0') {
    puVar19 = (undefined8 *)*param_1;
    uVar7 = *(ushort *)((long)param_1 + 0x9e);
    if (uVar9 < 8) {
      uVar25 = 0;
    }
    else {
      uVar21 = 0;
      puVar24 = puVar19;
      do {
        uVar13 = puVar24[1];
        uVar12 = *puVar24;
        uVar25 = uVar21 + 8;
        uVar3 = uVar21 + 0x10;
        iVar22 = (int)(short)uVar7;
        auVar28._0_8_ = CONCAT44((short)((ulong)uVar12 >> 0x10) * iVar22,(short)uVar12 * iVar22);
        auVar28._8_4_ = (short)((ulong)uVar12 >> 0x20) * iVar22;
        auVar28._12_4_ = (short)((ulong)uVar12 >> 0x30) * iVar22;
        iVar22 = (int)(short)uVar7;
        iVar10 = (short)((ulong)uVar13 >> 0x10) * iVar22;
        auVar29._8_8_ = auVar28._8_8_;
        auVar29._0_8_ = NEON_sqrshrn(auVar28._0_8_,auVar28,7,4);
        auVar30._4_2_ = (short)iVar10;
        auVar30._0_4_ = (short)uVar13 * iVar22;
        auVar30._6_2_ = (short)((uint)iVar10 >> 0x10);
        auVar30._8_4_ = (short)((ulong)uVar13 >> 0x20) * iVar22;
        auVar30._12_4_ = (short)((ulong)uVar13 >> 0x30) * iVar22;
        auVar30 = NEON_sqrshrn2(auVar29,auVar30,7,4);
        puVar24[1] = auVar30._8_8_;
        *puVar24 = auVar30._0_8_;
        uVar21 = uVar25;
        puVar24 = puVar24 + 2;
      } while (uVar3 <= uVar27);
    }
    lVar17 = uVar27 - uVar25;
    if (uVar25 <= uVar27 && lVar17 != 0) {
      psVar20 = (short *)((long)puVar19 + uVar25 * 2);
      do {
        iVar10 = (int)*psVar20 * (uint)uVar7;
        iVar22 = iVar10 + 0xbf;
        if (-0x41 < iVar10) {
          iVar22 = iVar10 + 0x40;
        }
        iVar22 = iVar22 >> 7;
        if (iVar22 < -0x7fff) {
          iVar22 = -0x8000;
        }
        if (0x7ffe < iVar22) {
          iVar22 = 0x7fff;
        }
        lVar17 = lVar17 + -1;
        *psVar20 = (short)iVar22;
        psVar20 = psVar20 + 1;
      } while (lVar17 != 0);
    }
  }
  __s = (void *)param_1[5];
  memset(__s,0,(ulong)*(uint *)(param_1 + 6));
  if (uVar9 != 0) {
    lVar17 = 0;
    uVar21 = 0;
    do {
      uVar25 = 0;
      if (uVar18 != 0) {
        uVar25 = uVar21 / uVar18;
      }
      psVar20 = (short *)(*param_1 + lVar17);
      lVar17 = lVar17 + 4;
      lVar23 = uVar21 - uVar25 * uVar18;
      uVar21 = uVar21 + 1;
      *(int *)((long)__s + lVar23 * 4 + uVar18 * 2 * uVar25 * 4) = (int)*psVar20;
    } while (uVar27 != uVar21);
    uVar21 = 0;
    lVar17 = 2;
    do {
      uVar25 = 0;
      if (uVar18 != 0) {
        uVar25 = uVar21 / uVar18;
      }
      psVar20 = (short *)(*param_1 + lVar17);
      lVar17 = lVar17 + 4;
      lVar23 = uVar21 - uVar25 * uVar18;
      uVar21 = uVar21 + 1;
      *(int *)((long)__s + lVar23 * 4 + (uVar25 << 1 | 1) * uVar18 * 4) = (int)*psVar20;
    } while (uVar27 != uVar21);
  }
  if (uVar5 <= uVar8) {
    uVar21 = 0;
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    uVar25 = (ulong)uVar11;
    do {
      piVar1 = (int *)((long)__s + uVar21 * 4);
      nn::audio::ProcessAuxLightLimiter((AuxLightLimiterType *)(param_1 + 0x10),piVar1,piVar1,uVar5)
      ;
      uVar25 = uVar25 - 1;
      uVar21 = (ulong)((int)uVar21 + uVar5 * 2);
    } while (uVar25 != 0);
  }
  if (uVar9 != 0) {
    lVar17 = 0;
    uVar21 = 0;
    do {
      uVar25 = 0;
      if (uVar18 != 0) {
        uVar25 = uVar21 / uVar18;
      }
      lVar23 = uVar21 - uVar25 * uVar18;
      uVar21 = uVar21 + 1;
      iVar22 = *(int *)((long)__s + lVar23 * 4 + uVar18 * 2 * uVar25 * 4);
      if (0x7ffe < iVar22) {
        iVar22 = 0x7fff;
      }
      if (iVar22 < -0x7fff) {
        iVar22 = -0x8000;
      }
      *(short *)(param_1[1] + lVar17) = (short)iVar22;
      lVar17 = lVar17 + 4;
    } while (uVar27 != uVar21);
    uVar21 = 0;
    lVar17 = 2;
    do {
      uVar25 = 0;
      if (uVar18 != 0) {
        uVar25 = uVar21 / uVar18;
      }
      lVar23 = uVar21 - uVar25 * uVar18;
      uVar21 = uVar21 + 1;
      iVar22 = *(int *)((long)__s + lVar23 * 4 + (uVar25 << 1 | 1) * uVar18 * 4);
      if (0x7ffe < iVar22) {
        iVar22 = 0x7fff;
      }
      if (iVar22 < -0x7fff) {
        iVar22 = -0x8000;
      }
      *(short *)(param_1[1] + lVar17) = (short)iVar22;
      lVar17 = lVar17 + 4;
    } while (uVar27 != uVar21);
  }
  *(uint *)(param_1 + 2) = uVar9;
  uVar4 = uVar4 - uVar9;
  memcpy((void *)*param_1,(void *)((long)param_2 + (ulong)(param_3 - uVar4) * 2),(ulong)uVar4 << 1);
  *(uint *)((long)param_1 + 0x14) = uVar4;
  return;
}

