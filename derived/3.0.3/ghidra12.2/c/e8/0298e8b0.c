
void FUN_0298e8b0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  undefined4 uVar19;
  float __y;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined4 local_208;
  undefined1 local_204;
  undefined4 local_200;
  undefined2 local_1fc;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1ec;
  int local_1e4;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  char *local_1b8;
  int local_1b0;
  char local_1ac [255];
  undefined1 local_ad;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  lVar17 = *param_2;
  if (lVar17 == 0) {
    return;
  }
  lVar16 = param_2[1];
  if (lVar16 == 0) {
    return;
  }
  if ((uint *)param_2[2] == (uint *)0x0) {
    return;
  }
  uVar9 = (ulong)*(uint *)param_2[2];
  local_ad = 0;
  pcVar18 = (char *)(param_1 + 0x17a0);
  lVar15 = param_2[4];
  pcVar10 = (char *)(*(ulong *)PTR_DAT_04bb38c8 | uVar9);
  pcVar8 = pcVar10 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar9) {
    pcVar8 = pcVar10;
  }
  local_1b0 = 0x100;
  local_1c0 = PTR_DAT_04bb4520 + 0x10;
  local_1b8 = local_1ac;
  if (local_1ac != pcVar8) {
    lVar11 = 0;
    do {
      if (pcVar8[lVar11] == '\0') {
LAB_0298e9d0:
        iVar13 = (int)lVar11;
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        goto LAB_0298e9dc;
      }
      if (pcVar8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0298e9d0;
      }
      if (pcVar8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0298e9d0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    iVar13 = 0;
LAB_0298e9dc:
    memcpy(local_1ac,pcVar8,(long)iVar13);
    local_1ac[iVar13] = '\0';
    pcVar8 = local_1b8;
  }
  pcVar10 = local_1b8;
  puVar1 = PTR_DAT_04bb21f8;
  lVar11 = 0;
  local_1c0 = PTR_DAT_04bb21f8 + 0x10;
  pcVar8[(long)local_1b0 + -1] = '\0';
  do {
    if (local_1b8[lVar11] == '\0') {
LAB_0298ea50:
      iVar13 = (int)lVar11;
joined_r0x0298ea54:
      if ((((3 < iVar13) && (uVar9 = (ulong)(iVar13 - 4), pcVar8[uVar9] == 'H')) &&
          (pcVar8[uVar9 + 1] == 'i')) && ((pcVar8[uVar9 + 2] == 'f' && (pcVar8[uVar9 + 3] == 'i'))))
      {
        pcVar18 = (char *)(param_1 + 0xb8);
        goto LAB_0298ed44;
      }
      break;
    }
    if (local_1b8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0298ea50;
    }
    if (local_1b8[lVar11 + 2] == '\0') {
      iVar13 = (int)lVar11 + 2;
      goto joined_r0x0298ea54;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  (**(code **)(puVar1 + 0x28))(&local_1c0);
  pcVar8 = local_1b8;
  lVar11 = 0;
  do {
    if (local_1b8[lVar11] == '\0') {
LAB_0298eaf4:
      iVar13 = (int)lVar11;
joined_r0x0298eaf8:
      if (((4 < iVar13) && (uVar9 = (ulong)(iVar13 - 5), pcVar10[uVar9] == 'R')) &&
         ((pcVar10[uVar9 + 1] == 'e' &&
          (((pcVar10[uVar9 + 2] == 't' && (pcVar10[uVar9 + 3] == 'r')) &&
           (pcVar10[uVar9 + 4] == 'o')))))) goto LAB_0298ed44;
      break;
    }
    if (local_1b8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0298eaf4;
    }
    if (local_1b8[lVar11 + 2] == '\0') {
      iVar13 = (int)lVar11 + 2;
      goto joined_r0x0298eaf8;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  (**(code **)(local_1c0 + 0x18))(&local_1c0);
  pcVar10 = local_1b8;
  lVar11 = 0;
  do {
    if (local_1b8[lVar11] == '\0') {
LAB_0298eba0:
      iVar13 = (int)lVar11;
joined_r0x0298eba4:
      if (((4 < iVar13) && (uVar9 = (ulong)(iVar13 - 5), pcVar8[uVar9] == 'C')) &&
         (((pcVar8[uVar9 + 1] == 'h' && ((pcVar8[uVar9 + 2] == 'e' && (pcVar8[uVar9 + 3] == 'a'))))
          && (pcVar18 = (char *)(param_1 + 0x2e88), pcVar8[uVar9 + 4] == 'p')))) goto LAB_0298ed44;
      break;
    }
    if (local_1b8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0298eba0;
    }
    if (local_1b8[lVar11 + 2] == '\0') {
      iVar13 = (int)lVar11 + 2;
      goto joined_r0x0298eba4;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  (**(code **)(local_1c0 + 0x18))(&local_1c0);
  lVar11 = 0;
  do {
    if (local_1b8[lVar11] == '\0') {
LAB_0298ec50:
      iVar13 = (int)lVar11;
joined_r0x0298ec54:
      if ((((4 < iVar13) && (uVar9 = (ulong)(iVar13 - 5), pcVar10[uVar9] == 'P')) &&
          (pcVar10[uVar9 + 1] == 'h')) &&
         (((pcVar10[uVar9 + 2] == 'o' && (pcVar10[uVar9 + 3] == 'n')) && (pcVar10[uVar9 + 4] == 'o')
          ))) goto LAB_0298ed40;
      break;
    }
    if (local_1b8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0298ec50;
    }
    if (local_1b8[lVar11 + 2] == '\0') {
      iVar13 = (int)lVar11 + 2;
      goto joined_r0x0298ec54;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  if (((*local_1b8 != 'B') || (local_1b8[1] != 'G')) ||
     ((((local_1b8[2] != 'M' ||
        ((((local_1b8[3] != '_' || (local_1b8[4] != 'M')) || (local_1b8[5] != 'u')) ||
         ((local_1b8[6] != 's' || (local_1b8[7] != 'i')))))) ||
       ((local_1b8[8] != 'c' || ((local_1b8[9] != 'B' || (local_1b8[10] != 'o')))))) ||
      (pcVar18 = (char *)(param_1 + 0x5c58), local_1b8[0xb] != 'x')))) {
LAB_0298ed40:
    pcVar18 = (char *)(param_1 + 0x4570);
  }
LAB_0298ed44:
  puVar1 = PTR_DAT_04bb26a8;
  if (*(char *)(param_1 + 0xb0) != '\0') {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_238 = "LayerReverbNear";
    local_240 = puVar1;
    FUN_03b3e860(0,lVar16,&local_240);
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
      local_238 = "LayerReverbNearYmm";
      local_240 = puVar1;
      FUN_03b3e860(0,lVar16,&local_240);
    }
    local_238 = "LayerReverbFar";
    local_240 = puVar1;
    FUN_03b3e860(0,lVar16,&local_240);
    fVar23 = 0.0;
    local_240 = puVar1;
    goto LAB_0298f3bc;
  }
  cVar3 = *(char *)(param_1 + 0xb1);
  cVar4 = *(char *)(param_1 + 0xb2);
  cVar5 = *pcVar18;
  sVar7 = *(short *)PTR_DAT_04bb6298;
  cVar6 = *(char *)(param_1 + 0x743b);
  if (sVar7 == -1) {
LAB_0298ee7c:
    local_1c8 = 0xbf800000bf800000;
    if ((lVar15 == 0) || ((*(ushort *)(lVar15 + 0x98) >> 9 & 1) == 0)) {
      puVar12 = *(undefined4 **)(lVar17 + 0x50);
      if (puVar12 == (undefined4 *)0x0) {
        lVar11 = *(long *)(lVar17 + 0x40);
        if (lVar11 == 0) {
          local_1dc = 0;
          local_1d4 = 0;
        }
        else {
          if (*(char *)(lVar17 + 0x48) == '\0') {
            uVar19 = *(undefined4 *)(lVar11 + 0xc);
            puVar14 = (undefined4 *)(lVar11 + 0x1c);
            local_1d4 = *(undefined4 *)(lVar11 + 0x2c);
            goto LAB_0298eea8;
          }
          local_1dc = *(undefined8 *)(lVar11 + 0x30);
          local_1d4 = (undefined4)*(undefined8 *)(lVar11 + 0x38);
        }
      }
      else {
        uVar19 = *puVar12;
        puVar14 = puVar12 + 1;
        local_1d4 = puVar12[2];
LAB_0298eea8:
        local_1dc = CONCAT44(*puVar14,uVar19);
      }
    }
    else {
      local_1dc = *(undefined8 *)(lVar15 + 0xc0);
      local_1d4 = *(undefined4 *)(lVar15 + 200);
    }
    local_238 = (char *)0x0;
    local_230 = 0;
    local_240 = (undefined *)0x0;
    local_a8 = 0;
    lVar11 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
    local_a0 = 0;
    local_98 = *(undefined8 *)(lVar11 + 0x130);
    local_90 = (undefined4)*(undefined8 *)(lVar11 + 0x138);
    FUN_02a1e144(lVar11,&local_a8,&local_1dc,&local_98,0);
    FUN_02a1e4c0(local_a8,local_a0,lVar11,&local_240);
    puVar2 = PTR_PTR_04bb4f70;
    local_240 = (undefined *)CONCAT44(local_240._4_4_,local_238._4_4_ / 10.0);
    if (cVar4 == '\0') {
      if (cVar5 == '\0') {
        FUN_02a55914(&local_1c8,&local_240,cVar6 != '\0');
      }
      else {
        FUN_02a559b4();
      }
    }
    else if (cVar5 == '\0') {
LAB_0298f004:
      FUN_02a55a54(&local_1c8,&local_240,cVar6 != '\0');
    }
    else {
      lVar11 = *(long *)puVar1 + 0x19db58;
      if (cVar6 == '\0') {
        lVar11 = *(long *)puVar1 + 0x19d598;
      }
      fVar22 = *(float *)(lVar11 + 8);
      fVar24 = (local_238._4_4_ / 10.0) / fVar22;
      (**(code **)(PTR_PTR_04bb4f70 + (ulong)*(byte *)(lVar11 + 0x20) * 8))
                (fVar24,(byte *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x18));
      local_1c8 = CONCAT44(local_1c8._4_4_,fVar22);
      (**(code **)(puVar2 + (ulong)*(byte *)(lVar11 + 0xd0) * 8))
                (fVar24,(byte *)(lVar11 + 0xd0),*(undefined8 *)(lVar11 + 200));
      local_1c8 = CONCAT44(fVar22,(float)local_1c8);
    }
LAB_0298f0f8:
    uVar9 = local_1c8 & 0xffffffff;
    fVar24 = 0.0;
    fVar22 = local_1c8._4_4_;
    if (cVar5 != '\0') goto LAB_0298f104;
LAB_0298f324:
    fVar23 = 0.0;
  }
  else {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
    if (0xff < (uint)(int)sVar7) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_0298ee7c;
    local_1d0 = 0xbf800000bf800000;
    local_1c8 = 0xbf800000bf800000;
    if ((lVar15 == 0) || ((*(ushort *)(lVar15 + 0x98) >> 9 & 1) == 0)) {
      puVar12 = *(undefined4 **)(lVar17 + 0x50);
      if (puVar12 == (undefined4 *)0x0) {
        lVar11 = *(long *)(lVar17 + 0x40);
        if (lVar11 == 0) {
          local_1dc = 0;
          local_1d4 = 0;
        }
        else {
          if (*(char *)(lVar17 + 0x48) == '\0') {
            uVar19 = *(undefined4 *)(lVar11 + 0xc);
            puVar14 = (undefined4 *)(lVar11 + 0x1c);
            local_1d4 = *(undefined4 *)(lVar11 + 0x2c);
            goto LAB_0298ee74;
          }
          local_1dc = *(undefined8 *)(lVar11 + 0x30);
          local_1d4 = (undefined4)*(undefined8 *)(lVar11 + 0x38);
        }
      }
      else {
        uVar19 = *puVar12;
        puVar14 = puVar12 + 1;
        local_1d4 = puVar12[2];
LAB_0298ee74:
        local_1dc = CONCAT44(*puVar14,uVar19);
      }
    }
    else {
      local_1dc = *(undefined8 *)(lVar15 + 0xc0);
      local_1d4 = *(undefined4 *)(lVar15 + 200);
    }
    local_238 = (char *)0x0;
    local_230 = 0;
    local_240 = (undefined *)0x0;
    local_a8 = 0;
    lVar11 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
    local_a0 = 0;
    local_98 = *(undefined8 *)(lVar11 + 0x130);
    local_90 = (undefined4)*(undefined8 *)(lVar11 + 0x138);
    FUN_02a1e144(lVar11,&local_a8,&local_1dc,&local_98,0);
    FUN_02a1e4c0(local_a8,local_a0,lVar11,&local_240);
    local_240 = (undefined *)CONCAT44(local_240._4_4_,local_238._4_4_ / 10.0);
    if (cVar4 != '\0') {
      if (cVar5 == '\0') goto LAB_0298f004;
      FUN_02a55af4();
      goto LAB_0298f0f8;
    }
    if (cVar5 == '\0') {
      FUN_02a55914(&local_1c8,&local_240,0);
      FUN_02a55914(&local_1d0,&local_240,1);
    }
    else {
      FUN_02a559b4(&local_1c8,&local_240,cVar6 != '\0');
      FUN_02a559b4(&local_1d0,&local_240,1);
    }
    local_20c = 0;
    local_208 = 0xffffffff;
    local_200 = 0xffffffff;
    local_210 = 0xffffffff;
    local_204 = 0;
    local_1fc = 0;
    local_1f8 = 3;
    local_1f4 = 0xffffffffffffffff;
    local_1ec = 0xffffffffffffffff;
    local_1e4 = -1;
    local_220 = 0xffffffffffffffff;
    uStack_218 = 0xffffffffffffffff;
    local_230 = 0xffffffffffffffff;
    uStack_228 = 0xffffffffffffffff;
    local_240 = (undefined *)0xffffffffffffffff;
    local_238 = (char *)0xffffffffffffffff;
    FUN_02a22734(&local_240);
    local_240 = (undefined *)0xbf800000bf800000;
    local_98 = CONCAT44(local_98._4_4_,(float)local_1e4);
    FUN_02a56028(&local_240,&local_98);
    uVar9 = (ulong)(uint)((float)local_240 * (float)local_1c8);
    fVar24 = local_240._4_4_ * (float)local_1d0;
    fVar22 = local_1c8._4_4_;
    if (cVar5 == '\0') goto LAB_0298f324;
LAB_0298f104:
    if ((lVar15 == 0) || ((*(ushort *)(lVar15 + 0x98) >> 9 & 1) == 0)) {
      puVar12 = *(undefined4 **)(lVar17 + 0x50);
      if (puVar12 == (undefined4 *)0x0) {
        lVar15 = *(long *)(lVar17 + 0x40);
        if (lVar15 == 0) {
          uVar21 = 0;
          fVar23 = 0.0;
        }
        else {
          if (*(char *)(lVar17 + 0x48) == '\0') {
            uVar19 = *(undefined4 *)(lVar15 + 0xc);
            puVar14 = (undefined4 *)(lVar15 + 0x1c);
            fVar23 = *(float *)(lVar15 + 0x2c);
            goto LAB_0298f124;
          }
          uVar21 = *(undefined8 *)(lVar15 + 0x30);
          fVar23 = (float)*(undefined8 *)(lVar15 + 0x38);
        }
      }
      else {
        uVar19 = *puVar12;
        puVar14 = puVar12 + 1;
        fVar23 = (float)puVar12[2];
LAB_0298f124:
        uVar21 = CONCAT44(*puVar14,uVar19);
      }
    }
    else {
      uVar21 = *(undefined8 *)(lVar15 + 0xc0);
      fVar23 = *(float *)(lVar15 + 200);
    }
    lVar17 = 0;
    if (*(long *)PTR_DAT_04bc3ee8 != 0) {
      lVar17 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20);
    }
    if (*(int *)(lVar17 + 0x10) < 1) {
      return;
    }
    lVar17 = **(long **)(lVar17 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    fVar20 = (float)((ulong)uVar21 >> 0x20);
    lVar15 = 0xf8;
    lVar11 = lVar17 + 0xf8;
    if (*(char *)(lVar17 + 0xe8) != '\0') {
      lVar15 = 0x158;
      lVar11 = lVar17 + 0x158;
    }
    __y = *(float *)(lVar11 + 0x2c) +
          fVar20 * *(float *)(lVar11 + 0x24) + (float)uVar21 * *(float *)(lVar11 + 0x20) +
          fVar23 * *(float *)(lVar11 + 0x28);
    if (*(char *)(lVar17 + 0xe0) != '\0') {
      __y = 0.0;
    }
    fVar23 = atan2f(__y,*(float *)(lVar11 + 0xc) +
                        fVar20 * *(float *)(lVar11 + 4) +
                        (float)uVar21 * *(float *)(lVar17 + lVar15) +
                        fVar23 * *(float *)(lVar11 + 8));
    FUN_03b4ecc0(0,&local_240,(int)(long)(fVar23 * 6.8356525e+08) + 0x40000000,0,0);
    fVar20 = ((float)local_240 + (float)local_240) * ((float)local_240 + (float)local_240);
    fVar23 = 1.0;
    if (fVar20 <= 1.0) {
      fVar23 = fVar20;
    }
    if (cVar3 != '\0') {
      fVar23 = 0.0;
    }
    fVar23 = fVar22 * fVar23;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_238 = "LayerReverbNear";
  local_240 = puVar1;
  FUN_03b3e860(uVar9,lVar16,&local_240);
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
    local_238 = "LayerReverbNearYmm";
    local_240 = puVar1;
    FUN_03b3e860(fVar24,lVar16,&local_240);
  }
  local_238 = "LayerReverbFar";
  local_240 = puVar1;
  FUN_03b3e860(fVar22,lVar16,&local_240);
  local_240 = puVar1;
LAB_0298f3bc:
  local_238 = "PingpongSpread";
  FUN_03b3e860(fVar23,lVar16,&local_240);
  return;
}

