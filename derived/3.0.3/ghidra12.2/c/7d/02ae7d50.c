
void FUN_02ae7d50(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  byte bVar13;
  long lVar14;
  undefined1 *__dest;
  void *pvVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  char *__dest_00;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined *local_f0;
  undefined1 *local_e8;
  undefined *local_e0;
  undefined1 *local_d8;
  int local_d0;
  undefined1 local_cc [31];
  undefined1 local_ad;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined1 local_75;
  
  plVar8 = (long *)(**(code **)(*param_1 + 0x178))();
  lVar14 = *(long *)PTR_DAT_04bb27a8;
  if ((lVar14 == 0) || (*(char *)(lVar14 + 0x4b30) == '\0')) {
LAB_02ae7dd8:
    bVar13 = *(byte *)(param_1 + 0x52) & 0xfe;
  }
  else {
    if ((*(int *)(lVar14 + 0x4b34) != 2) && (*(int *)(lVar14 + 0x4b34) != 3)) goto LAB_02ae7dd8;
    bVar13 = *(byte *)(param_1 + 0x52) | 1;
  }
  *(byte *)(param_1 + 0x52) = bVar13;
  puVar2 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar10 = malloc(0x2e8);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_02ae7e4c;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2e8,8);
  }
LAB_02ae7e4c:
  FUN_00705c50(plVar10);
  puVar1 = PTR_DAT_04bb3078;
  puVar17 = (undefined *)plVar10[0xc];
  plVar10[0x54] = (long)&DAT_3f8000003f800000;
  plVar10[0x4f] = 0;
  plVar10[0x50] = 0;
  plVar10[0x51] = 0;
  plVar10[0x52] = 0;
  plVar10[0x53] = 0;
  *(undefined4 *)(plVar10 + 0x55) = 0x3f800000;
  *plVar10 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar10 + 700) = 0;
  *(undefined8 *)((long)plVar10 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar10 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar10 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar10 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar10 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar10 + 0x2d4) = 0;
  if (puVar17 != &DAT_040afd37) {
    iVar7 = 4;
    if ((int)plVar10[0xd] < 5) {
      iVar7 = (int)plVar10[0xd] + -1;
    }
    memcpy(puVar17,&DAT_040afd37,(long)iVar7);
    puVar17[iVar7] = 0;
  }
  *(uint *)(plVar10 + 0x4c) = *(uint *)(plVar10 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar10,0xffffffff);
  lVar14 = *(long *)puVar2;
  if (lVar14 == 0) {
    plVar10 = malloc(0x2e0);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_02ae7f68;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2e0,8);
  }
LAB_02ae7f68:
  FUN_00705c50(plVar10);
  plVar10[0x4f] = 0;
  puVar1 = PTR_DAT_04bb3300;
  plVar10[0x50] = 0;
  plVar10[0x53] = -0x100000000;
  plVar10[0x52] = (long)(plVar10 + 0x51);
  plVar10[0x51] = (long)(plVar10 + 0x51);
  *plVar10 = (long)(puVar1 + 0x10);
  FUN_038e18e4(plVar10 + 0x54);
  __dest_00 = (char *)plVar10[0xc];
  if (__dest_00 != "Family") {
    iVar7 = 6;
    if ((int)plVar10[0xd] < 7) {
      iVar7 = (int)plVar10[0xd] + -1;
    }
    memcpy(__dest_00,"Family",(long)iVar7);
    __dest_00[iVar7] = '\0';
  }
  *(uint *)(plVar10 + 0x4c) = *(uint *)(plVar10 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar10 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar10,0xffffffff);
  lVar14 = *(long *)puVar2;
  if (lVar14 == 0) {
    plVar10 = malloc(0x1400);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_02ae806c;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1400,8);
  }
LAB_02ae806c:
  FUN_00739870(plVar10,0,0,1);
  *(undefined4 *)(plVar10 + 0x23e) = 0;
  puVar1 = PTR_DAT_04bb2d88;
  plVar10[0x240] = (long)plVar10 + 0x120c;
  puVar17 = PTR_DAT_04bc4540;
  *(undefined1 *)((long)plVar10 + 0x128b) = 0;
  *(undefined1 *)((long)plVar10 + 0x120c) = 0;
  *(undefined4 *)(plVar10 + 0x241) = 0x80;
  puVar1 = puVar1 + 0x10;
  plVar10[0x23f] = (long)puVar1;
  *plVar10 = (long)(puVar17 + 0x10);
  memset(plVar10 + 0x254,0,0x120);
  puVar17 = PTR_DAT_04bbb8f0;
  plVar10[0x252] = (long)puVar1;
  *(undefined4 *)(plVar10 + 0x254) = 0x80;
  *(undefined4 *)(plVar10 + 0x267) = 0x80;
  plVar10[0x265] = (long)puVar1;
  plVar10[0x253] = (long)plVar10 + 0x12a4;
  plVar10[0x266] = (long)plVar10 + 0x133c;
  plVar10[0x27c] = 0;
  plVar10[0x278] = (long)(puVar17 + 0x10);
  *(undefined4 *)(plVar10 + 0x27d) = 7;
  plVar10[0x27e] = 0x2000000020;
  plVar10[0x27f] = 0x100000010;
  FUN_006f9fc0(param_1,plVar10,0xffffffff);
  lVar14 = *(long *)puVar2;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x328);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x328,8);
  }
  FUN_02a77540(pvVar11,plVar8);
  FUN_006f9fc0(param_1,pvVar11,0xffffffff);
  lVar14 = *(long *)puVar2;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x330);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x330,8);
  }
  FUN_00793690(pvVar11,plVar8);
  FUN_006f9fc0(param_1,pvVar11,0xffffffff);
  lVar14 = *(long *)puVar2;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x440);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar6 = (undefined8 *)(lVar14 + 8);
      if (lVar9 != 0) {
        puVar6 = (undefined8 *)(lVar9 + 0xa8);
      }
      param_3 = (long *)*puVar6;
      pvVar11 = (void *)0x0;
      if (param_3 == (long *)0x0) goto LAB_02ae8280;
    }
    pvVar11 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x440,8);
  }
LAB_02ae8280:
  FUN_02a7240c(pvVar11);
  param_1[0x51] = (long)pvVar11;
  FUN_006f9fc0(param_1,pvVar11,0xffffffff);
  plVar10 = (long *)param_1[0xd];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x100))(plVar10,param_2 + 8);
  }
  lVar14 = param_1[0xc];
  if (lVar14 != 0) {
    local_75 = 0;
    plVar10 = plVar8 + 7;
    pvVar11 = (void *)((long)&local_98 + 4);
    local_98 = CONCAT44(local_98._4_4_,0x20);
    puVar2 = PTR_DAT_04bb2a08 + 0x10;
    local_a8 = puVar2;
    local_a0 = pvVar11;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pvVar15 = (void *)plVar8[8];
    if (pvVar11 != pvVar15) {
      (**(code **)(plVar8[7] + 0x18))(plVar10);
      lVar9 = 0;
      do {
        if (*(char *)(plVar8[8] + lVar9) == '\0') goto LAB_02ae8360;
        lVar3 = plVar8[8] + lVar9;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02ae8360;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02ae8360;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02ae8360:
      iVar7 = (int)lVar9;
      if ((int)local_98 <= (int)lVar9) {
        iVar7 = (int)local_98 + -1;
      }
      memcpy(pvVar11,pvVar15,(long)iVar7);
      *(undefined1 *)((long)pvVar11 + (long)iVar7) = 0;
    }
    local_ad = 0;
    puVar1 = PTR_DAT_04bb2028 + 0x10;
    local_d0 = 0x20;
    local_e0 = puVar2;
    local_d8 = local_cc;
    local_a8 = puVar1;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puVar16 = (undefined1 *)plVar8[1];
    if (local_cc != puVar16) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar9 = 0;
      do {
        if (*(char *)(plVar8[1] + lVar9) == '\0') goto LAB_02ae8420;
        lVar3 = plVar8[1] + lVar9;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02ae8420;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02ae8420;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02ae8420:
      iVar7 = (int)lVar9;
      if (local_d0 <= (int)lVar9) {
        iVar7 = local_d0 + -1;
      }
      memcpy(local_cc,puVar16,(long)iVar7);
      local_cc[iVar7] = 0;
    }
    puVar16 = local_d8;
    puVar2 = PTR_DAT_04bb2020;
    local_e0 = puVar1;
    if ((*(byte *)(param_1 + 0x52) & 1) != 0) {
      lVar9 = 0;
      local_f0 = PTR_DAT_04bb2020 + 0x10;
      local_e8 = &DAT_040c646f;
      local_d8[(long)local_d0 + -1] = 0;
      do {
        if (local_d8[lVar9] == '\0') goto LAB_02ae84d8;
        if (local_d8[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02ae84d8;
        }
        if (local_d8[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02ae84d8;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02ae84d8:
      uVar4 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
      (**(code **)(puVar2 + 0x28))(&local_f0);
      lVar9 = 0;
      do {
        if (local_e8[lVar9] == '\0') goto LAB_02ae8530;
        if (local_e8[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02ae8530;
        }
        if (local_e8[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02ae8530;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02ae8530:
      uVar5 = (uint)lVar9;
      if ((int)(local_d0 - uVar4) <= (int)(uint)lVar9) {
        uVar5 = local_d0 + ~uVar4;
      }
      if (0 < (int)uVar5) {
        (**(code **)(local_f0 + 0x18))(&local_f0);
        memcpy(puVar16 + uVar4,local_e8,(ulong)uVar5);
        puVar16[(int)(uVar5 + uVar4)] = 0;
      }
    }
    pvVar11 = *(void **)(lVar14 + 0x280);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puVar2 = local_a0;
    if (pvVar11 != local_a0) {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar9 = 0;
      do {
        if (*(char *)((long)local_a0 + lVar9) == '\0') goto LAB_02ae85f0;
        if (*(char *)((long)local_a0 + lVar9 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02ae85f0;
        }
        if (*(char *)((long)local_a0 + lVar9 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02ae85f0;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02ae85f0:
      iVar7 = (int)lVar9;
      if (*(int *)(lVar14 + 0x288) <= (int)lVar9) {
        iVar7 = *(int *)(lVar14 + 0x288) + -1;
      }
      memcpy(pvVar11,puVar2,(long)iVar7);
      *(undefined1 *)((long)pvVar11 + (long)iVar7) = 0;
    }
    *(undefined4 *)(lVar14 + 0x10d8) = 0;
    __dest = *(undefined1 **)(lVar14 + 0xf90);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    puVar16 = local_d8;
    if (__dest != local_d8) {
      (**(code **)(local_e0 + 0x18))(&local_e0);
      lVar9 = 0;
      do {
        if (local_d8[lVar9] == '\0') goto LAB_02ae8690;
        if (local_d8[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02ae8690;
        }
        if (local_d8[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02ae8690;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02ae8690:
      iVar7 = (int)lVar9;
      if (*(int *)(lVar14 + 0xf98) <= (int)lVar9) {
        iVar7 = *(int *)(lVar14 + 0xf98) + -1;
      }
      memcpy(__dest,puVar16,(long)iVar7);
      __dest[iVar7] = 0;
    }
  }
  plVar10 = (long *)param_1[0x51];
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bc4510 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4510), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc4508 = PTR_DAT_04bc44f8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4510);
    }
    uVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,PTR_DAT_04bc4508);
    if ((uVar12 & 1) != 0) {
      plVar10[0x50] = 0;
      fVar19 = *(float *)(plVar8 + 0x1c);
      *(float *)(plVar10 + 0x52) = fVar19;
      *(int *)(plVar10[9] + 0x27c) = (int)(long)(fVar19 * 11930465.0);
      *(undefined4 *)((long)plVar10 + 0x28c) = *(undefined4 *)((long)plVar8 + 0xe4);
      *(float *)(plVar10[9] + 0x274) =
           *(float *)((long)plVar8 + 0xec) * *(float *)((long)plVar8 + 0xec);
      plVar18 = plVar8 + 0xe;
      pvVar11 = (void *)plVar10[0x71];
      (**(code **)(*plVar18 + 0x18))(plVar18);
      pvVar15 = (void *)plVar8[0xf];
      if (pvVar11 != pvVar15) {
        (**(code **)(plVar8[0xe] + 0x18))(plVar18);
        lVar14 = 0;
        do {
          if (*(char *)(plVar8[0xf] + lVar14) == '\0') goto LAB_02ae87ac;
          lVar9 = plVar8[0xf] + lVar14;
          if (*(char *)(lVar9 + 1) == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_02ae87ac;
          }
          if (*(char *)(lVar9 + 2) == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_02ae87ac;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_02ae87ac:
        iVar7 = (int)lVar14;
        if ((int)plVar10[0x72] <= (int)lVar14) {
          iVar7 = (int)plVar10[0x72] + -1;
        }
        memcpy(pvVar11,pvVar15,(long)iVar7);
        *(undefined1 *)((long)pvVar11 + (long)iVar7) = 0;
      }
      pvVar11 = (void *)plVar10[0x78];
      plVar18 = plVar8 + 0x15;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      pvVar15 = (void *)plVar8[0x16];
      if (pvVar11 != pvVar15) {
        (**(code **)(plVar8[0x15] + 0x18))(plVar18);
        lVar14 = 0;
        do {
          if (*(char *)(plVar8[0x16] + lVar14) == '\0') goto LAB_02ae884c;
          lVar9 = plVar8[0x16] + lVar14;
          if (*(char *)(lVar9 + 1) == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_02ae884c;
          }
          if (*(char *)(lVar9 + 2) == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_02ae884c;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_02ae884c:
        iVar7 = (int)lVar14;
        if ((int)plVar10[0x79] <= (int)lVar14) {
          iVar7 = (int)plVar10[0x79] + -1;
        }
        memcpy(pvVar11,pvVar15,(long)iVar7);
        *(undefined1 *)((long)pvVar11 + (long)iVar7) = 0;
      }
    }
  }
  lVar14 = param_1[0xd];
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar14 + 0x278);
  *(undefined4 *)((long)param_1 + 0x2a4) = *(undefined4 *)(lVar14 + 0x27c);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(lVar14 + 0x280);
  (**(code **)(*param_1 + 0x170))(&local_f0,param_1);
  local_e0 = PTR_DAT_04bc35c0 + 0x10;
  local_d8 = local_f0;
  iVar7 = FUN_0277d6c4(&local_d8);
  fVar19 = 0.0;
  fVar20 = 0.0;
  if (iVar7 - 0xf619U < 7) {
    local_98 = 0;
    local_a8 = PTR_DAT_04bbc1a0 + 0x10;
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_88 = 0;
    local_90 = local_a0;
    FUN_0263fe7c(&local_e0,&local_a8);
    fVar20 = ((float)(int)local_98 * 5.0 + (float)(int)local_88 * 5.0 + 5.0) * 0.5;
    fVar19 = ((float)local_98._4_4_ * 5.0 + (float)local_88._4_4_ * 5.0 + 5.0) * 0.5;
  }
  fVar20 = fVar20 + *(float *)(param_1 + 0x54);
  fVar19 = fVar19 + *(float *)(param_1 + 0x55);
  fVar22 = -1.0;
  if ((*(byte *)(param_1 + 0x52) & 1) != 0) {
    fVar22 = 1.0;
  }
  fVar21 = *(float *)((long)param_1 + 0x2a4) + 0.0;
  *(float *)(param_1 + 0x54) = fVar20;
  *(float *)(param_1 + 0x55) = fVar19;
  *(float *)((long)param_1 + 0x294) = fVar20;
  *(float *)((long)param_1 + 0x29c) = fVar19;
  *(float *)((long)param_1 + 0x2a4) = fVar21;
  *(float *)(param_1 + 0x53) = fVar21;
  *(float *)((long)param_1 + 0x294) = fVar20 + fVar22 * *(float *)((long)plVar8 + 0xf4);
  *(float *)(param_1 + 0x53) = fVar21 + *(float *)(plVar8 + 0x1f);
  *(float *)((long)param_1 + 0x29c) = fVar19 + *(float *)((long)plVar8 + 0xfc);
  return;
}

