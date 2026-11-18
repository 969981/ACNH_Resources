
void FUN_03209e90(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  short sVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  short *psVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  void *pvVar25;
  long lVar26;
  undefined *local_7f8;
  undefined *puStack_7f0;
  undefined *local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  plVar1 = param_1 + 0x38df;
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar12 = *(byte *)(param_3 + 0xe);
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar12;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b0fad8;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  FUN_03135560(param_1 + 0x47);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x6e,0,0x1bf30);
  lVar26 = 0x10e;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  lVar16 = 0;
  do {
    FUN_03463544((long)param_1 + lVar16 + 0x370,0);
    lVar26 = lVar26 + -1;
    *(undefined4 *)((long)param_1 + lVar16 + 0x4c8) = 0x40;
    *(long *)((long)param_1 + lVar16 + 0x4c0) = (long)param_1 + lVar16 + 0x4cc;
    *(undefined1 *)((long)param_1 + lVar16 + 0x50b) = 0;
    *(undefined1 *)((long)param_1 + lVar16 + 0x4cc) = 0;
    *(undefined **)((long)param_1 + lVar16 + 0x4b8) = puVar2;
    *(undefined4 *)((long)param_1 + lVar16 + 0x510) = 0;
    lVar16 = lVar16 + 0x1a8;
  } while (lVar26 != 0);
  *(undefined4 *)(param_1 + 0x3856) = 0;
  puVar2 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3857) = 0;
  puVar3 = PTR_DAT_04bc9ca8;
  lVar26 = 0;
  *(undefined4 *)(param_1 + 0x3858) = 0;
  *(undefined4 *)(param_1 + 0x385d) = 0;
  param_1[0x385e] = 0;
  param_1[0x3854] = (long)(puVar2 + 0x10);
  param_1[0x3855] = -1;
  param_1[0x3859] = (long)(puVar3 + 0x10);
  do {
    *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fa) = 0;
    *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fb) = 0;
    *(undefined4 *)((long)param_1 + lVar26 + 0x1c2fc) = 0;
    *(undefined2 *)((long)param_1 + lVar26 + 0x1c2f8) = 0xfffe;
    FUN_0277d4ac();
    lVar26 = lVar26 + 8;
  } while (lVar26 != 0x400);
  *plVar1 = (long)(PTR_DAT_04bc5b58 + 0x10);
  FUN_02c8cfc4(param_1 + 0x38e0);
  piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (0 < *piVar15) {
    lVar26 = 0;
    puVar18 = *(undefined8 **)(piVar15 + 4);
    do {
      puVar24 = *(undefined8 **)(*(long *)(piVar15 + 2) + lVar26 * 8);
      lVar26 = lVar26 + 1;
      *puVar24 = puVar18;
      *(undefined8 **)(piVar15 + 4) = puVar24;
      puVar18 = puVar24;
    } while (lVar26 < *piVar15);
  }
  *piVar15 = 0;
  *(undefined1 *)(param_1 + 0x39e4) = 0;
  lVar26 = 0;
  *(undefined4 *)((long)param_1 + 0x1cf24) = 0;
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  uVar8 = puVar2[2];
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  uVar10 = *(undefined2 *)puVar2;
  uVar9 = puVar2[3];
  uVar6 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  *(undefined4 *)((long)param_1 + 0x234) = 0;
  do {
    puVar23 = (undefined1 *)((long)param_1 + lVar26 + 0x1c2fa);
    lVar26 = lVar26 + 8;
    *(undefined2 *)(puVar23 + -2) = uVar10;
    *puVar23 = uVar8;
    puVar23[1] = uVar9;
    *(undefined4 *)(puVar23 + 2) = uVar6;
  } while (lVar26 != 0x400);
  lVar26 = *(long *)PTR_DAT_04bb2698;
  if (lVar26 == 0) {
    puVar18 = malloc(0x158);
joined_r0x0320a268:
    if (puVar18 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar18 + 2) = 0xffffffff;
      puVar2 = PTR_DAT_04bc4ee8;
      *(undefined1 *)((long)puVar18 + 0x6b) = 0;
      *puVar18 = 3;
      *(undefined1 *)((long)puVar18 + 0x2c) = 0;
      *(undefined4 *)(puVar18 + 5) = 0x40;
      puVar2 = puVar2 + 0x10;
      puVar18[1] = puVar2;
      puVar3 = PTR_DAT_04bb2bc0;
      puVar18[0xf] = puVar2;
      puVar18[0x1d] = puVar2;
      *(undefined1 *)((long)puVar18 + 0x9c) = 0;
      *(undefined4 *)(puVar18 + 0x10) = 0xffffffff;
      puVar3 = puVar3 + 0x10;
      *(undefined4 *)(puVar18 + 0x13) = 0x40;
      *(undefined1 *)((long)puVar18 + 0xdb) = 0;
      *(undefined4 *)(puVar18 + 0x1e) = 0xffffffff;
      *(undefined4 *)(puVar18 + 0x21) = 0x40;
      *(undefined1 *)((long)puVar18 + 0x14b) = 0;
      *(undefined1 *)((long)puVar18 + 0x10c) = 0;
      puVar18[3] = puVar3;
      puVar18[4] = (undefined1 *)((long)puVar18 + 0x2c);
      *(undefined1 *)(puVar18 + 0xe) = 1;
      *(undefined1 *)(puVar18 + 0x1c) = 1;
      *(undefined1 *)(puVar18 + 0x2a) = 1;
      puVar18[0x11] = puVar3;
      puVar18[0x12] = (undefined1 *)((long)puVar18 + 0x9c);
      puVar18[0x1f] = puVar3;
      puVar18[0x20] = (long)puVar18 + 0x10c;
      *(undefined4 *)(param_1 + 0x6a) = 3;
      param_1[0x6b] = (long)(puVar18 + 1);
    }
  }
  else {
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar17 = (long *)(lVar26 + 8);
    if (lVar16 != 0) {
      plVar17 = (long *)(lVar16 + 0xa8);
    }
    plVar17 = (long *)*plVar17;
    if (plVar17 != (long *)0x0) {
      puVar18 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0x158,8);
      goto joined_r0x0320a268;
    }
  }
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar26 = 0;
    if (DAT_000000c8 != '\0') goto LAB_0320a244;
LAB_0320a27c:
    bVar12 = 1;
  }
  else {
    lVar26 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    if (*(char *)(lVar26 + 200) == '\0') goto LAB_0320a27c;
LAB_0320a244:
    bVar12 = (**(code **)(*(long *)(lVar26 + 0xc0) + 0x18))((long *)(lVar26 + 0xc0));
    *(undefined1 *)(lVar26 + 200) = 0;
  }
  *(byte *)(lVar26 + 0xc9) = bVar12 & 1;
  lVar16 = 0;
  do {
    lVar4 = lVar26 + lVar16;
    *(undefined2 *)((long)param_1 + lVar16 + 0x1c2f8) = *(undefined2 *)(lVar4 + 0xd0);
    puVar23 = (undefined1 *)((long)param_1 + lVar16 + 0x1c2fa);
    *puVar23 = *(undefined1 *)(lVar4 + 0xd2);
    puVar23[1] = *(undefined1 *)(lVar4 + 0xd3);
    *(undefined4 *)((long)param_1 + lVar16 + 0x1c2fc) = *(undefined4 *)(lVar4 + 0xd4);
    lVar16 = lVar16 + 8;
  } while (lVar16 != 0x400);
  *(undefined4 *)((long)param_1 + 0x1cf24) = *(undefined4 *)(lVar26 + 0x4d0);
  *(undefined1 *)((long)param_1 + 0x1cf21) = *(undefined1 *)(lVar26 + 0x4d4);
  switch(*(undefined4 *)((long)param_1 + 0x1cf24)) {
  case 4:
  case 0x13:
    local_7d8 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7d0,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_7c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar19 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar19,0,0x754);
    pvVar19 = (void *)(**(code **)(local_7d8 + 0x18))(&local_7d8);
    memset(pvVar19,0,0x754);
    piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (0 < *piVar15) {
      lVar26 = 0;
      puVar18 = *(undefined8 **)(piVar15 + 4);
      do {
        puVar24 = *(undefined8 **)(*(long *)(piVar15 + 2) + lVar26 * 8);
        lVar26 = lVar26 + 1;
        *puVar24 = puVar18;
        *(undefined8 **)(piVar15 + 4) = puVar24;
        puVar18 = puVar24;
      } while (lVar26 < *piVar15);
    }
    puVar2 = PTR_DAT_04bb43c0;
    uVar13 = 0;
    *piVar15 = 0;
    do {
      lVar26 = *(long *)puVar2;
      psVar22 = (short *)((long)param_1 + ((long)((ulong)uVar13 << 0x20) >> 0x1d) + 0x1c2f8);
      uVar14 = FUN_0277d6c4(psVar22);
      if (*(long *)puVar2 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) && (*psVar22 != -2)
           ) {
          FUN_0277dedc(psVar22);
          lVar26 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
          uVar14 = FUN_0277d6c4(psVar22);
          if ((uVar14 >> 3 & 0x1fff) < 0x753) {
            lVar16 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
            *(uint *)(lVar26 + lVar16) = *(uint *)(lVar26 + lVar16) | 1 << (ulong)(uVar14 & 0x1f);
          }
          sVar11 = *psVar22;
          lVar26 = (long)(int)uVar13 * 8;
          uVar8 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fa);
          uVar9 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fb);
          uVar6 = *(undefined4 *)((long)param_1 + lVar26 + 0x1c2fc);
          piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar15 < piVar15[1]) {
            psVar22 = *(short **)(piVar15 + 4);
            if (psVar22 != (short *)0x0) {
              *(undefined8 *)(piVar15 + 4) = *(undefined8 *)psVar22;
            }
            *psVar22 = sVar11;
            *(undefined1 *)(psVar22 + 1) = uVar8;
            *(undefined1 *)((long)psVar22 + 3) = uVar9;
            *(undefined4 *)(psVar22 + 2) = uVar6;
            if (*piVar15 < piVar15[1]) {
              *(short **)(*(long *)(piVar15 + 2) + (long)*piVar15 * 8) = psVar22;
              *piVar15 = *piVar15 + 1;
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80);
    local_7f8 = PTR_DAT_04bc5a40 + 0x10;
    puStack_7f0 = PTR_LAB_04bc8a00;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar20 = (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_02c5ef70(uVar20,&local_7f8);
    puVar21 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    lVar26 = param_1[0x6b];
    *(undefined4 *)(param_1 + 0x43) = *puVar21;
    pvVar25 = *(void **)(lVar26 + 0x18);
    *(undefined4 *)(lVar26 + 8) = DAT_05720720;
    puVar18 = &DAT_05720728;
    (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
    pvVar19 = DAT_05720730;
    if (pvVar25 != DAT_05720730) {
      (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
      lVar16 = 0;
      do {
        if (*(char *)((long)DAT_05720730 + lVar16) == '\0') goto LAB_0320b2dc;
        if (*(char *)((long)DAT_05720730 + lVar16 + 1) == '\0') goto LAB_0320b2d0;
        if (*(char *)((long)DAT_05720730 + lVar16 + 2) == '\0') goto LAB_0320b2d8;
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
LAB_0320b2c8:
      lVar16 = 0;
      goto LAB_0320b2dc;
    }
    break;
  default:
    FUN_0320f5b0(param_1);
    if ((int)param_1[0x43] == 0) {
      uVar13 = 0;
    }
    else {
      lVar26 = param_1[0x6b];
      *(undefined4 *)(lVar26 + 8) = DAT_057206b0;
      pvVar25 = *(void **)(lVar26 + 0x18);
      (**(code **)(DAT_057206b8 + 0x18))(&DAT_057206b8);
      pvVar19 = DAT_057206c0;
      if (pvVar25 != DAT_057206c0) {
        (**(code **)(DAT_057206b8 + 0x18))(&DAT_057206b8);
        lVar16 = 0;
        do {
          if (*(char *)((long)DAT_057206c0 + lVar16) == '\0') goto LAB_0320b328;
          if (*(char *)((long)DAT_057206c0 + lVar16 + 1) == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_0320b328;
          }
          if (*(char *)((long)DAT_057206c0 + lVar16 + 2) == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_0320b328;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_0320b328:
        iVar5 = (int)lVar16;
        if (*(int *)(lVar26 + 0x20) <= (int)lVar16) {
          iVar5 = *(int *)(lVar26 + 0x20) + -1;
        }
        memcpy(pvVar25,pvVar19,(long)iVar5);
        *(undefined1 *)((long)pvVar25 + (long)iVar5) = 0;
      }
      *(undefined1 *)(lVar26 + 0x68) = DAT_05720710;
      uVar13 = 1;
    }
    FUN_0320fa10(param_1);
    if ((int)param_1[0x43] != 0) {
      lVar26 = param_1[0x6b];
      uVar14 = uVar13;
      if (*(uint *)(param_1 + 0x6a) <= uVar13) {
        uVar14 = 0;
      }
      lVar16 = lVar26 + (ulong)uVar14 * 0x70;
      *(undefined4 *)(lVar16 + 8) = DAT_05720720;
      pvVar25 = *(void **)(lVar16 + 0x18);
      (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
      pvVar19 = DAT_05720730;
      if (pvVar25 != DAT_05720730) {
        (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
        lVar16 = 0;
        do {
          if (*(char *)((long)DAT_05720730 + lVar16) == '\0') goto LAB_0320b41c;
          if (*(char *)((long)DAT_05720730 + lVar16 + 1) == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_0320b41c;
          }
          if (*(char *)((long)DAT_05720730 + lVar16 + 2) == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_0320b41c;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_0320b41c:
        iVar7 = *(int *)(lVar26 + (ulong)uVar14 * 0x70 + 0x20);
        iVar5 = (int)lVar16;
        if (iVar7 <= (int)lVar16) {
          iVar5 = iVar7 + -1;
        }
        memcpy(pvVar25,pvVar19,(long)iVar5);
        *(undefined1 *)((long)pvVar25 + (long)iVar5) = 0;
      }
      uVar13 = uVar13 + 1;
      *(undefined1 *)(lVar26 + (ulong)uVar14 * 0x70 + 0x68) = DAT_05720780;
    }
    FUN_03210010(param_1);
    if ((int)param_1[0x43] != 0) {
      lVar26 = param_1[0x6b];
      uVar14 = uVar13;
      if (*(uint *)(param_1 + 0x6a) <= uVar13) {
        uVar14 = 0;
      }
      lVar16 = lVar26 + (ulong)uVar14 * 0x70;
      *(undefined4 *)(lVar16 + 8) = DAT_05720790;
      pvVar25 = *(void **)(lVar16 + 0x18);
      (**(code **)(DAT_05720798 + 0x18))(&DAT_05720798);
      pvVar19 = DAT_057207a0;
      if (pvVar25 != DAT_057207a0) {
        (**(code **)(DAT_05720798 + 0x18))(&DAT_05720798);
        lVar16 = 0;
        do {
          if (*(char *)((long)DAT_057207a0 + lVar16) == '\0') goto LAB_0320b64c;
          if (*(char *)((long)DAT_057207a0 + lVar16 + 1) == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_0320b64c;
          }
          if (*(char *)((long)DAT_057207a0 + lVar16 + 2) == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_0320b64c;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_0320b64c:
        iVar7 = *(int *)(lVar26 + (ulong)uVar14 * 0x70 + 0x20);
        iVar5 = (int)lVar16;
        if (iVar7 <= (int)lVar16) {
          iVar5 = iVar7 + -1;
        }
        memcpy(pvVar25,pvVar19,(long)iVar5);
        *(undefined1 *)((long)pvVar25 + (long)iVar5) = 0;
      }
      uVar13 = uVar13 + 1;
      *(undefined1 *)(lVar26 + (ulong)uVar14 * 0x70 + 0x68) = DAT_057207f0;
LAB_0320b694:
      if (2 < uVar13) {
        return;
      }
      goto LAB_0320b5ac;
    }
    if (uVar13 != 0) goto LAB_0320b694;
    lVar26 = param_1[0x6b];
    *(undefined4 *)(lVar26 + 8) = DAT_057206b0;
    pvVar25 = *(void **)(lVar26 + 0x18);
    puVar18 = &DAT_057206b8;
    (**(code **)(DAT_057206b8 + 0x18))(&DAT_057206b8);
    pvVar19 = DAT_057206c0;
    if (pvVar25 == DAT_057206c0) break;
    (**(code **)(DAT_057206b8 + 0x18))(&DAT_057206b8);
    lVar16 = 0;
    do {
      if (*(char *)((long)DAT_057206c0 + lVar16) == '\0') goto LAB_0320b6ac;
      if (*(char *)((long)DAT_057206c0 + lVar16 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_0320b6ac;
      }
      if (*(char *)((long)DAT_057206c0 + lVar16 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_0320b6ac;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_0320b6ac:
    iVar5 = (int)lVar16;
    if (*(int *)(lVar26 + 0x20) <= (int)lVar16) {
      iVar5 = *(int *)(lVar26 + 0x20) + -1;
    }
    memcpy(pvVar25,pvVar19,(long)iVar5);
    puVar23 = (undefined1 *)((long)pvVar25 + (long)iVar5);
    puVar18 = (undefined8 *)&DAT_05720710;
    goto LAB_0320b30c;
  case 0xb:
    local_7d8 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7d0,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_7c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar19 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar19,0,0x754);
    pvVar19 = (void *)(**(code **)(local_7d8 + 0x18))(&local_7d8);
    memset(pvVar19,0,0x754);
    piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (0 < *piVar15) {
      lVar26 = 0;
      puVar18 = *(undefined8 **)(piVar15 + 4);
      do {
        puVar24 = *(undefined8 **)(*(long *)(piVar15 + 2) + lVar26 * 8);
        lVar26 = lVar26 + 1;
        *puVar24 = puVar18;
        *(undefined8 **)(piVar15 + 4) = puVar24;
        puVar18 = puVar24;
      } while (lVar26 < *piVar15);
    }
    puVar2 = PTR_DAT_04bb43c0;
    uVar13 = 0;
    *piVar15 = 0;
    do {
      lVar26 = *(long *)puVar2;
      psVar22 = (short *)((long)param_1 + ((long)((ulong)uVar13 << 0x20) >> 0x1d) + 0x1c2f8);
      uVar14 = FUN_0277d6c4(psVar22);
      if (*(long *)puVar2 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) && (*psVar22 != -2)
           ) {
          FUN_0277dedc(psVar22);
          lVar26 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
          uVar14 = FUN_0277d6c4(psVar22);
          if ((uVar14 >> 3 & 0x1fff) < 0x753) {
            lVar16 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
            *(uint *)(lVar26 + lVar16) = *(uint *)(lVar26 + lVar16) | 1 << (ulong)(uVar14 & 0x1f);
          }
          sVar11 = *psVar22;
          lVar26 = (long)(int)uVar13 * 8;
          uVar8 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fa);
          uVar9 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fb);
          uVar6 = *(undefined4 *)((long)param_1 + lVar26 + 0x1c2fc);
          piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar15 < piVar15[1]) {
            psVar22 = *(short **)(piVar15 + 4);
            if (psVar22 != (short *)0x0) {
              *(undefined8 *)(piVar15 + 4) = *(undefined8 *)psVar22;
            }
            *psVar22 = sVar11;
            *(undefined1 *)(psVar22 + 1) = uVar8;
            *(undefined1 *)((long)psVar22 + 3) = uVar9;
            *(undefined4 *)(psVar22 + 2) = uVar6;
            if (*piVar15 < piVar15[1]) {
              *(short **)(*(long *)(piVar15 + 2) + (long)*piVar15 * 8) = psVar22;
              *piVar15 = *piVar15 + 1;
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80);
    local_7f8 = PTR_DAT_04bc5a40 + 0x10;
    puStack_7f0 = PTR_LAB_04bc89f8;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar20 = (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_02c5ef70(uVar20,&local_7f8);
    puVar21 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    lVar26 = param_1[0x6b];
    *(undefined4 *)(param_1 + 0x43) = *puVar21;
    pvVar25 = *(void **)(lVar26 + 0x18);
    *(undefined4 *)(lVar26 + 8) = DAT_05720720;
    puVar18 = &DAT_05720728;
    (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
    pvVar19 = DAT_05720730;
    if (pvVar25 != DAT_05720730) {
      (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
      lVar16 = 0;
      do {
        if (*(char *)((long)DAT_05720730 + lVar16) == '\0') goto LAB_0320b2dc;
        if (*(char *)((long)DAT_05720730 + lVar16 + 1) == '\0') goto LAB_0320b2d0;
        if (*(char *)((long)DAT_05720730 + lVar16 + 2) == '\0') goto LAB_0320b2d8;
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      goto LAB_0320b2c8;
    }
    break;
  case 0xc:
    local_7d8 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7d0,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_7c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar19 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar19,0,0x754);
    pvVar19 = (void *)(**(code **)(local_7d8 + 0x18))(&local_7d8);
    memset(pvVar19,0,0x754);
    piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (0 < *piVar15) {
      lVar26 = 0;
      puVar18 = *(undefined8 **)(piVar15 + 4);
      do {
        puVar24 = *(undefined8 **)(*(long *)(piVar15 + 2) + lVar26 * 8);
        lVar26 = lVar26 + 1;
        *puVar24 = puVar18;
        *(undefined8 **)(piVar15 + 4) = puVar24;
        puVar18 = puVar24;
      } while (lVar26 < *piVar15);
    }
    puVar2 = PTR_DAT_04bb43c0;
    uVar13 = 0;
    *piVar15 = 0;
    do {
      lVar26 = *(long *)puVar2;
      psVar22 = (short *)((long)param_1 + ((long)((ulong)uVar13 << 0x20) >> 0x1d) + 0x1c2f8);
      uVar14 = FUN_0277d6c4(psVar22);
      if (*(long *)puVar2 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) && (*psVar22 != -2)
           ) {
          FUN_0277dedc(psVar22);
          lVar26 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
          uVar14 = FUN_0277d6c4(psVar22);
          if ((uVar14 >> 3 & 0x1fff) < 0x753) {
            lVar16 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
            *(uint *)(lVar26 + lVar16) = *(uint *)(lVar26 + lVar16) | 1 << (ulong)(uVar14 & 0x1f);
          }
          sVar11 = *psVar22;
          lVar26 = (long)(int)uVar13 * 8;
          uVar8 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fa);
          uVar9 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fb);
          uVar6 = *(undefined4 *)((long)param_1 + lVar26 + 0x1c2fc);
          piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar15 < piVar15[1]) {
            psVar22 = *(short **)(piVar15 + 4);
            if (psVar22 != (short *)0x0) {
              *(undefined8 *)(piVar15 + 4) = *(undefined8 *)psVar22;
            }
            *psVar22 = sVar11;
            *(undefined1 *)(psVar22 + 1) = uVar8;
            *(undefined1 *)((long)psVar22 + 3) = uVar9;
            *(undefined4 *)(psVar22 + 2) = uVar6;
            if (*piVar15 < piVar15[1]) {
              *(short **)(*(long *)(piVar15 + 2) + (long)*piVar15 * 8) = psVar22;
              *piVar15 = *piVar15 + 1;
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80);
    puVar21 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    lVar26 = param_1[0x6b];
    *(undefined4 *)(param_1 + 0x43) = *puVar21;
    pvVar25 = *(void **)(lVar26 + 0x18);
    *(undefined4 *)(lVar26 + 8) = DAT_05720720;
    puVar18 = &DAT_05720728;
    (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
    pvVar19 = DAT_05720730;
    if (pvVar25 != DAT_05720730) {
      (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
      lVar16 = 0;
      do {
        if (*(char *)((long)DAT_05720730 + lVar16) == '\0') goto LAB_0320b2dc;
        if (*(char *)((long)DAT_05720730 + lVar16 + 1) == '\0') goto LAB_0320b2d0;
        if (*(char *)((long)DAT_05720730 + lVar16 + 2) == '\0') goto LAB_0320b2d8;
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      goto LAB_0320b2c8;
    }
    break;
  case 0xd:
  case 0x11:
    local_7d8 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7d0,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_7c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar19 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar19,0,0x754);
    pvVar19 = (void *)(**(code **)(local_7d8 + 0x18))(&local_7d8);
    memset(pvVar19,0,0x754);
    piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (0 < *piVar15) {
      lVar26 = 0;
      puVar18 = *(undefined8 **)(piVar15 + 4);
      do {
        puVar24 = *(undefined8 **)(*(long *)(piVar15 + 2) + lVar26 * 8);
        lVar26 = lVar26 + 1;
        *puVar24 = puVar18;
        *(undefined8 **)(piVar15 + 4) = puVar24;
        puVar18 = puVar24;
      } while (lVar26 < *piVar15);
    }
    puVar2 = PTR_DAT_04bb43c0;
    uVar13 = 0;
    *piVar15 = 0;
    do {
      lVar26 = *(long *)puVar2;
      psVar22 = (short *)((long)param_1 + ((long)((ulong)uVar13 << 0x20) >> 0x1d) + 0x1c2f8);
      uVar14 = FUN_0277d6c4(psVar22);
      if (*(long *)puVar2 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) && (*psVar22 != -2)
           ) {
          FUN_0277dedc(psVar22);
          lVar26 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
          uVar14 = FUN_0277d6c4(psVar22);
          if ((uVar14 >> 3 & 0x1fff) < 0x753) {
            lVar16 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
            *(uint *)(lVar26 + lVar16) = *(uint *)(lVar26 + lVar16) | 1 << (ulong)(uVar14 & 0x1f);
          }
          sVar11 = *psVar22;
          lVar26 = (long)(int)uVar13 * 8;
          uVar8 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fa);
          uVar9 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fb);
          uVar6 = *(undefined4 *)((long)param_1 + lVar26 + 0x1c2fc);
          piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar15 < piVar15[1]) {
            psVar22 = *(short **)(piVar15 + 4);
            if (psVar22 != (short *)0x0) {
              *(undefined8 *)(piVar15 + 4) = *(undefined8 *)psVar22;
            }
            *psVar22 = sVar11;
            *(undefined1 *)(psVar22 + 1) = uVar8;
            *(undefined1 *)((long)psVar22 + 3) = uVar9;
            *(undefined4 *)(psVar22 + 2) = uVar6;
            if (*piVar15 < piVar15[1]) {
              *(short **)(*(long *)(piVar15 + 2) + (long)*piVar15 * 8) = psVar22;
              *piVar15 = *piVar15 + 1;
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80);
    local_7f8 = PTR_DAT_04bc5a40 + 0x10;
    puStack_7f0 = PTR_LAB_04bc8a08;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar20 = (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_02c5ef70(uVar20,&local_7f8);
    puVar21 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    lVar26 = param_1[0x6b];
    *(undefined4 *)(param_1 + 0x43) = *puVar21;
    pvVar25 = *(void **)(lVar26 + 0x18);
    *(undefined4 *)(lVar26 + 8) = DAT_05720720;
    puVar18 = &DAT_05720728;
    (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
    pvVar19 = DAT_05720730;
    if (pvVar25 != DAT_05720730) {
      (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
      lVar16 = 0;
      do {
        if (*(char *)((long)DAT_05720730 + lVar16) == '\0') goto LAB_0320b2dc;
        if (*(char *)((long)DAT_05720730 + lVar16 + 1) == '\0') goto LAB_0320b2d0;
        if (*(char *)((long)DAT_05720730 + lVar16 + 2) == '\0') goto LAB_0320b2d8;
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      goto LAB_0320b2c8;
    }
    break;
  case 0x10:
    local_7d8 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7d0,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_7c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar19 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar19,0,0x754);
    pvVar19 = (void *)(**(code **)(local_7d8 + 0x18))(&local_7d8);
    memset(pvVar19,0,0x754);
    piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (0 < *piVar15) {
      lVar26 = 0;
      puVar18 = *(undefined8 **)(piVar15 + 4);
      do {
        puVar24 = *(undefined8 **)(*(long *)(piVar15 + 2) + lVar26 * 8);
        lVar26 = lVar26 + 1;
        *puVar24 = puVar18;
        *(undefined8 **)(piVar15 + 4) = puVar24;
        puVar18 = puVar24;
      } while (lVar26 < *piVar15);
    }
    puVar2 = PTR_DAT_04bb43c0;
    uVar13 = 0;
    *piVar15 = 0;
    do {
      lVar26 = *(long *)puVar2;
      psVar22 = (short *)((long)param_1 + ((long)((ulong)uVar13 << 0x20) >> 0x1d) + 0x1c2f8);
      uVar14 = FUN_0277d6c4(psVar22);
      if (*(long *)puVar2 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) && (*psVar22 != -2)
           ) {
          FUN_0277dedc(psVar22);
          lVar26 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
          uVar14 = FUN_0277d6c4(psVar22);
          if ((uVar14 >> 3 & 0x1fff) < 0x753) {
            lVar16 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
            *(uint *)(lVar26 + lVar16) = *(uint *)(lVar26 + lVar16) | 1 << (ulong)(uVar14 & 0x1f);
          }
          sVar11 = *psVar22;
          lVar26 = (long)(int)uVar13 * 8;
          uVar8 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fa);
          uVar9 = *(undefined1 *)((long)param_1 + lVar26 + 0x1c2fb);
          uVar6 = *(undefined4 *)((long)param_1 + lVar26 + 0x1c2fc);
          piVar15 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar15 < piVar15[1]) {
            psVar22 = *(short **)(piVar15 + 4);
            if (psVar22 != (short *)0x0) {
              *(undefined8 *)(piVar15 + 4) = *(undefined8 *)psVar22;
            }
            *psVar22 = sVar11;
            *(undefined1 *)(psVar22 + 1) = uVar8;
            *(undefined1 *)((long)psVar22 + 3) = uVar9;
            *(undefined4 *)(psVar22 + 2) = uVar6;
            if (*piVar15 < piVar15[1]) {
              *(short **)(*(long *)(piVar15 + 2) + (long)*piVar15 * 8) = psVar22;
              *piVar15 = *piVar15 + 1;
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80);
    local_7f8 = PTR_DAT_04bc5a40 + 0x10;
    puStack_7f0 = PTR_LAB_04bc8a10;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar20 = (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_02c5ef70(uVar20,&local_7f8);
    puVar21 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    lVar26 = param_1[0x6b];
    *(undefined4 *)(param_1 + 0x43) = *puVar21;
    pvVar25 = *(void **)(lVar26 + 0x18);
    *(undefined4 *)(lVar26 + 8) = DAT_05720720;
    puVar18 = &DAT_05720728;
    (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
    pvVar19 = DAT_05720730;
    if (pvVar25 != DAT_05720730) {
      (**(code **)(DAT_05720728 + 0x18))(&DAT_05720728);
      lVar16 = 0;
      do {
        if (*(char *)((long)DAT_05720730 + lVar16) == '\0') goto LAB_0320b2dc;
        if (*(char *)((long)DAT_05720730 + lVar16 + 1) == '\0') goto LAB_0320b2d0;
        if (*(char *)((long)DAT_05720730 + lVar16 + 2) == '\0') goto LAB_0320b2d8;
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      goto LAB_0320b2c8;
    }
  }
  puVar18 = puVar18 + 0xb;
  goto LAB_0320b5a0;
LAB_0320b2d0:
  lVar16 = lVar16 + 1;
  goto LAB_0320b2dc;
LAB_0320b2d8:
  lVar16 = lVar16 + 2;
LAB_0320b2dc:
  iVar5 = (int)lVar16;
  if (*(int *)(lVar26 + 0x20) <= (int)lVar16) {
    iVar5 = *(int *)(lVar26 + 0x20) + -1;
  }
  memcpy(pvVar25,pvVar19,(long)iVar5);
  puVar23 = (undefined1 *)((long)pvVar25 + (long)iVar5);
  puVar18 = (undefined8 *)&DAT_05720780;
LAB_0320b30c:
  *puVar23 = 0;
LAB_0320b5a0:
  *(undefined1 *)(lVar26 + 0x68) = *(undefined1 *)puVar18;
  uVar13 = 1;
LAB_0320b5ac:
  uVar14 = uVar13;
  if ((uVar13 & 1) == 0) {
    if (*(uint *)(param_1 + 0x6a) <= uVar13) {
      uVar14 = 0;
    }
    *(undefined1 *)(param_1[0x6b] + (ulong)uVar14 * 0x70 + 0x68) = 0;
    uVar14 = uVar13 + 1;
  }
  if (uVar13 != 2) {
    do {
      uVar13 = uVar14;
      if (*(uint *)(param_1 + 0x6a) <= uVar14) {
        uVar13 = 0;
      }
      *(undefined1 *)(param_1[0x6b] + (ulong)uVar13 * 0x70 + 0x68) = 0;
      uVar13 = 0;
      if (uVar14 + 1 < *(uint *)(param_1 + 0x6a)) {
        uVar13 = uVar14 + 1;
      }
      uVar14 = uVar14 + 2;
      *(undefined1 *)(param_1[0x6b] + (ulong)uVar13 * 0x70 + 0x68) = 0;
    } while (uVar14 != 3);
  }
  return;
}

