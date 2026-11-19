
undefined8 FUN_03a23e20(long param_1,undefined8 param_2,long *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  void *pvVar20;
  ulong uVar21;
  void *pvVar22;
  undefined1 *__dest;
  ulong uVar23;
  undefined4 *puVar24;
  undefined *local_190;
  char *local_188;
  undefined *local_180;
  undefined1 *local_178;
  int local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_0039c3f8();
    FUN_038fe020();
  }
  *(undefined1 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x218) = param_2;
  lVar12 = FUN_0039c3f8(param_2);
  FUN_038fdc20();
  pvVar20 = *(void **)(param_1 + 8);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar22 = (void *)param_3[1];
  if (pvVar20 != pvVar22) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar16 = 0;
    do {
      if (*(char *)(param_3[1] + lVar16) == '\0') goto LAB_03a23ef0;
      lVar19 = param_3[1] + lVar16;
      if (*(char *)(lVar19 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_03a23ef0;
      }
      if (*(char *)(lVar19 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_03a23ef0;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_03a23ef0:
    iVar15 = (int)lVar16;
    if (*(int *)(param_1 + 0x10) <= (int)lVar16) {
      iVar15 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(pvVar20,pvVar22,(long)iVar15);
    *(undefined1 *)((long)pvVar20 + (long)iVar15) = 0;
  }
  lVar16 = FUN_038fe410(lVar12);
  if (lVar16 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(*(long *)(lVar16 + 0x38) + 4);
  }
  if (*(int *)(param_1 + 0x228) <= iVar15) {
    iVar15 = *(int *)(param_1 + 0x228);
  }
  *(int *)(param_1 + 0x220) = iVar15;
  if (0 < iVar15) {
    uVar23 = 0;
    do {
      lVar16 = FUN_038fde10(lVar12);
      lVar16 = *(long *)(*(long *)(lVar16 + 0x28) + uVar23 * 8);
      uVar21 = uVar23;
      if (*(uint *)(param_1 + 0x228) <= uVar23) {
        uVar21 = 0;
      }
      FUN_03973f28(*(long *)(param_1 + 0x230) + uVar21 * 0x298 + 0xe0,lVar16);
      uVar21 = uVar23;
      if (*(uint *)(param_1 + 0x228) <= uVar23) {
        uVar21 = 0;
      }
      puVar24 = (undefined4 *)(*(long *)(param_1 + 0x230) + uVar21 * 0x298);
      *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar24 + 0x3a);
      *(undefined8 *)(puVar24 + 4) = *(undefined8 *)(puVar24 + 0x3c);
      puVar24[6] = puVar24[0x3e];
      puVar24[7] = puVar24[0x3f];
      *(undefined8 *)(puVar24 + 8) = *(undefined8 *)(puVar24 + 0x40);
      *(undefined8 *)(puVar24 + 10) = *(undefined8 *)(puVar24 + 0x42);
      *puVar24 = puVar24[0x38];
      puVar24[1] = puVar24[0x39];
      *(undefined8 *)((long)puVar24 + 0x47) = *(undefined8 *)((long)puVar24 + 0x127);
      *(undefined8 *)(puVar24 + 0xc) = *(undefined8 *)(puVar24 + 0x44);
      *(undefined8 *)(puVar24 + 0xe) = *(undefined8 *)(puVar24 + 0x46);
      *(undefined8 *)(puVar24 + 0x10) = *(undefined8 *)(puVar24 + 0x48);
      FUN_038fd1e0(puVar24 + 0x14);
      FUN_038fd2f0(puVar24 + 0x14,puVar24 + 0x4c);
      *(undefined8 *)(puVar24 + 0x24) = *(undefined8 *)(puVar24 + 0x5c);
      puVar24[0x26] = puVar24[0x5e];
      puVar1 = puVar24 + 0x35;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      lVar16 = *(long *)(lVar16 + 0x60);
      pvVar20 = (void *)(lVar16 + 2);
      uVar21 = uVar23;
      if (*(uint *)(param_1 + 0x228) <= uVar23) {
        uVar21 = 0;
      }
      lVar19 = *(long *)(param_1 + 0x230) + uVar21 * 0x298;
      pvVar22 = *(void **)(lVar19 + 0x188);
      if (pvVar22 != pvVar20) {
        lVar17 = 0;
        do {
          lVar4 = lVar16 + lVar17;
          if (*(char *)(lVar4 + 2) == '\0') goto LAB_03a23f5c;
          if (*(char *)(lVar4 + 3) == '\0') {
            lVar17 = lVar17 + 1;
            goto LAB_03a23f5c;
          }
          if (*(char *)(lVar4 + 4) == '\0') {
            lVar17 = lVar17 + 2;
            goto LAB_03a23f5c;
          }
          lVar17 = lVar17 + 3;
        } while (lVar17 != 0x80001);
        lVar17 = 0;
LAB_03a23f5c:
        iVar14 = *(int *)(lVar19 + 400);
        iVar15 = (int)lVar17;
        if (iVar14 <= (int)lVar17) {
          iVar15 = iVar14 + -1;
        }
        memcpy(pvVar22,pvVar20,(long)iVar15);
        *(undefined1 *)((long)pvVar22 + (long)iVar15) = 0;
      }
      uVar23 = uVar23 + 1;
    } while ((long)uVar23 < (long)*(int *)(param_1 + 0x220));
  }
  puVar11 = PTR_DAT_04bb4520;
  puVar10 = PTR_DAT_04bb2020;
  uVar7 = *(ushort *)(lVar12 + 0xec);
  if ((ulong)uVar7 == 0) {
    return 1;
  }
  uVar23 = 0;
  puVar2 = PTR_DAT_04bb21f8 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
LAB_03a2411c:
  local_178 = local_16c;
  if (*(long *)(lVar12 + 0xc0) == 0) {
    puVar13 = (undefined1 *)0x0;
    local_180 = puVar11;
LAB_03a24178:
    local_180 = local_180 + 0x10;
    local_6d = 0;
    local_170 = 0x100;
    lVar16 = 0;
    do {
      if (puVar13[lVar16] == '\0') {
LAB_03a241b4:
        iVar15 = (int)lVar16;
joined_r0x03a241b8:
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        goto LAB_03a241c0;
      }
      if (puVar13[lVar16 + 1] == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_03a241b4;
      }
      if (puVar13[lVar16 + 2] == '\0') {
        iVar15 = (int)lVar16 + 2;
        goto joined_r0x03a241b8;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    iVar15 = 0;
LAB_03a241c0:
    memcpy(local_16c,puVar13,(long)iVar15);
    local_16c[iVar15] = 0;
  }
  else {
    local_6d = 0;
    local_170 = 0x100;
    puVar13 = (undefined1 *)(*(long *)(*(long *)(lVar12 + 0xc0) + uVar23 * 0x10 + 0x20) + 2);
    local_180 = PTR_DAT_04bb4520;
    if (local_16c != puVar13) goto LAB_03a24178;
  }
  lVar16 = 0;
  local_188 = ".baglofx";
  local_178[(long)local_170 + -1] = 0;
  do {
    if (local_178[lVar16] == '\0') goto LAB_03a24244;
    if (local_178[lVar16 + 1] == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_03a24244;
    }
    if (local_178[lVar16 + 2] == '\0') {
      lVar16 = lVar16 + 2;
      goto LAB_03a24244;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  lVar16 = 0;
LAB_03a24244:
  local_190 = puVar3;
  local_180 = puVar2;
  (**(code **)(puVar10 + 0x28))(&local_190);
  lVar19 = 0;
  do {
    iVar15 = (int)lVar16;
    if (local_188[lVar19] == '\0') {
LAB_03a24294:
      iVar14 = (int)lVar19;
      if (iVar15 < iVar14) goto LAB_03a24110;
LAB_03a242ac:
      if ((int)lVar19 < 1) goto LAB_03a24344;
      uVar21 = 0;
      goto LAB_03a242c4;
    }
    if (local_188[lVar19 + 1] == '\0') {
      lVar19 = lVar19 + 1;
      goto LAB_03a24294;
    }
    if (local_188[lVar19 + 2] == '\0') {
      lVar19 = lVar19 + 2;
      iVar14 = (int)lVar19;
      if (iVar14 <= iVar15) goto LAB_03a242ac;
      goto LAB_03a24110;
    }
    lVar19 = lVar19 + 3;
  } while (lVar19 != 0x80001);
  if (-1 < iVar15) {
LAB_03a24344:
    (**(code **)(local_190 + 0x18))(&local_190);
LAB_03a24364:
    __dest = *(undefined1 **)(param_1 + 0x248);
    *(undefined1 *)(param_1 + 0x358) = 1;
    *(ulong *)(param_1 + 0x238) = *(long *)(lVar12 + 0xb8) + uVar23 * 0x10;
    (**(code **)(local_180 + 0x18))(&local_180);
    puVar13 = local_178;
    if (__dest != local_178) {
      (**(code **)(local_180 + 0x18))(&local_180);
      lVar16 = 0;
      do {
        if (local_178[lVar16] == '\0') goto LAB_03a243fc;
        if (local_178[lVar16 + 1] == '\0') {
          lVar16 = lVar16 + 1;
          goto LAB_03a243fc;
        }
        if (local_178[lVar16 + 2] == '\0') {
          lVar16 = lVar16 + 2;
          goto LAB_03a243fc;
        }
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      lVar16 = 0;
LAB_03a243fc:
      iVar15 = (int)lVar16;
      if (*(int *)(param_1 + 0x250) <= (int)lVar16) {
        iVar15 = *(int *)(param_1 + 0x250) + -1;
      }
      memcpy(__dest,puVar13,(long)iVar15);
      __dest[iVar15] = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1 + 0x240);
    lVar19 = *(long *)(param_1 + 0x248);
    lVar16 = 0;
    do {
      if (*(char *)(lVar19 + lVar16) == '\0') goto LAB_03a2447c;
      if (*(char *)(lVar19 + lVar16 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_03a2447c;
      }
      if (*(char *)(lVar19 + lVar16 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_03a2447c;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_03a2447c:
    iVar14 = (int)lVar16;
    iVar15 = iVar14;
    if (6 < iVar14) {
      iVar15 = 7;
    }
    *(undefined1 *)(lVar19 + (iVar14 - iVar15)) = 0;
    lVar19 = *(long *)(param_1 + 0x248);
    local_190 = PTR_DAT_04bb2020 + 0x10;
    local_188 = "aglofx";
    (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1 + 0x240);
    lVar16 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x248) + lVar16) == '\0') goto LAB_03a24500;
      lVar17 = *(long *)(param_1 + 0x248) + lVar16;
      if (*(char *)(lVar17 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_03a24500;
      }
      if (*(char *)(lVar17 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_03a24500;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_03a24500:
    uVar5 = (uint)lVar16 & ((int)(uint)lVar16 >> 0x1f ^ 0xffffffffU);
    (**(code **)(local_190 + 0x18))(&local_190);
    lVar16 = 0;
    do {
      if (local_188[lVar16] == '\0') goto LAB_03a2455c;
      if (local_188[lVar16 + 1] == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_03a2455c;
      }
      if (local_188[lVar16 + 2] == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_03a2455c;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_03a2455c:
    uVar6 = (uint)lVar16;
    if ((int)(*(int *)(param_1 + 0x250) - uVar5) <= (int)(uint)lVar16) {
      uVar6 = *(int *)(param_1 + 0x250) + ~uVar5;
    }
    if (0 < (int)uVar6) {
      (**(code **)(local_190 + 0x18))(&local_190);
      memcpy((void *)(lVar19 + (ulong)uVar5),local_188,(ulong)uVar6);
      *(undefined1 *)(lVar19 + (int)(uVar6 + uVar5)) = 0;
    }
  }
  goto LAB_03a24110;
  while( true ) {
    pcVar18 = local_188;
    lVar16 = lVar19;
    while( true ) {
      lVar16 = lVar16 + -1;
      if (puVar13[uVar21] != *pcVar18) break;
      if ((puVar13[uVar21] == '\0') || (puVar13 = puVar13 + 1, pcVar18 = pcVar18 + 1, lVar16 == 0))
      goto LAB_03a24360;
    }
    uVar21 = uVar21 + 1;
    if (uVar21 == (iVar15 - iVar14) + 1) break;
LAB_03a242c4:
    puVar13 = local_178;
    pcVar18 = local_178 + uVar21;
    (**(code **)(local_190 + 0x18))(&local_190);
    if (pcVar18 == local_188) {
LAB_03a24360:
      if (-1 < (int)uVar21) goto LAB_03a24364;
      break;
    }
  }
LAB_03a24110:
  uVar23 = uVar23 + 1;
  if (uVar23 == uVar7) {
    return 1;
  }
  goto LAB_03a2411c;
}

