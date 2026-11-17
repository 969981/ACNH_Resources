
/* WARNING: Removing unreachable block (ram,0x02a2c4ac) */
/* WARNING: Removing unreachable block (ram,0x02a2cbdc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02a2c0b0(long param_1,char *param_2)

{
  uint *puVar1;
  MutexType *pMVar2;
  MutexType *pMVar3;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  void *pvVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  int iVar28;
  undefined4 uVar29;
  int iVar30;
  uint uVar31;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  undefined4 *puVar36;
  void *pvVar37;
  undefined1 *puVar38;
  uint uVar39;
  long *plVar40;
  byte bVar41;
  uint uVar42;
  uint uVar43;
  undefined8 uVar44;
  long lVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 local_194;
  uint local_164;
  undefined *local_158;
  undefined1 *local_150;
  int local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  char *local_b8;
  undefined1 local_ad;
  
  puVar1 = (uint *)(param_1 + 0xb3890);
  bVar21 = *param_2 != '\0';
  bVar20 = param_2[1] == '\0';
  if (bVar21 && bVar20) {
    uVar39 = *puVar1;
    if (param_2[2] == '\0') {
      local_194 = 1;
      goto LAB_02a2c14c;
    }
    uVar39 = uVar39 | 2;
    local_194 = 1;
    local_164 = 1;
  }
  else {
    uVar39 = *puVar1;
    local_194 = 0;
LAB_02a2c14c:
    uVar39 = uVar39 & 0xfffffffd;
    local_164 = 0;
  }
  *puVar1 = uVar39;
  uVar31 = 4;
  if (!bVar21 || !bVar20) {
    uVar31 = 0;
  }
  *puVar1 = uVar39 & 0xffffff7b | uVar31 | (uint)(byte)param_2[3] << 7;
  pMVar2 = (MutexType *)(param_1 + 0x89660);
  nn::os::LockMutex(pMVar2);
  iVar30 = *(int *)(param_1 + 0x89630);
  nn::os::UnlockMutex(pMVar2);
  puVar32 = (undefined8 *)FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
  uVar44 = *puVar32;
  nn::os::LockMutex((MutexType *)(param_1 + 0x89710));
  *(char *)(param_1 + 0x896e9) = (char)((ulong)uVar44 >> 0x10);
  *(undefined1 *)(param_1 + 0x896e8) = 1;
  *(char *)(param_1 + 0x896ea) = (char)((ulong)uVar44 >> 0x18);
  *(char *)(param_1 + 0x896eb) = (char)((ulong)uVar44 >> 0x20);
  *(char *)(param_1 + 0x896ec) = (char)((ulong)uVar44 >> 0x28);
  *(char *)(param_1 + 0x896ed) = (char)((ulong)uVar44 >> 0x30);
  *(short *)(param_1 + 0x896ee) = (short)uVar44;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x89710));
  lVar45 = *(long *)PTR_DAT_04bb2230;
  lVar33 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar33 == 0) {
    iVar28 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar28 = (int)lVar33 + -1;
  }
  uVar31 = 1;
  if (iVar28 != 1) {
    uVar31 = 2;
  }
  uVar43 = 0;
  if (iVar28 != 0) {
    uVar43 = uVar31;
  }
  local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar43);
  lVar33 = lVar45 + 0x288 + (ulong)uVar43 * 0x44;
  if (2 < uVar43) {
    lVar33 = lVar45 + 0x288;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x895a8));
  *(undefined1 *)(param_1 + 0x89580) = 1;
  *(undefined4 *)(param_1 + 0x89584) = *(undefined4 *)(lVar33 + 0x40);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x895a8));
  if (*(int *)(param_1 + 0xb3898) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0xb43c8));
    uVar31 = *(uint *)(param_1 + 0xb3898);
    *(undefined4 *)(param_1 + 0xb3898) = 0;
    *(uint *)(param_1 + 0xb389c) = *(uint *)(param_1 + 0xb389c) | uVar31;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xb43c8));
  }
  uVar43 = *(uint *)(param_1 + 0xb389c);
  bVar22 = iVar30 == 1;
  uVar42 = (uint)bVar22;
  uVar31 = uVar43 & 0xfffffffe;
  if ((uVar43 & uVar42) == 0) {
    uVar31 = uVar43;
  }
  uVar6 = local_164 & (uVar31 & 2) >> 1;
  uVar10 = uVar31 & 0xfffffffd;
  if (uVar6 == 0) {
    uVar10 = uVar31;
  }
  uVar31 = uVar42 & uVar10 >> 2;
  uVar8 = uVar10 & 0xfffffffb;
  if (uVar31 == 0) {
    uVar8 = uVar10;
  }
  uVar7 = (uint)bVar22 & uVar8 >> 5;
  uVar9 = uVar8 & 0xffffffdf;
  if (uVar7 == 0) {
    uVar9 = uVar8;
  }
  if ((((uVar6 != 0) || ((uVar9 & 0x100) != 0)) || ((uVar43 & uVar42) != 0)) ||
     ((uVar31 != 0 || (uVar7 != 0)))) {
    *(uint *)(param_1 + 0xb389c) = uVar9 & 0xfffffeff;
  }
  pMVar3 = (MutexType *)(param_1 + 0xb4408);
  nn::os::LockMutex(pMVar3);
  uVar12 = *(undefined1 *)(param_1 + 0xb44b9);
  *(undefined1 *)(param_1 + 0xb44b9) = 0;
  *(undefined1 *)(param_1 + 0xb44ba) = uVar12;
  if ((uVar42 & (uVar43 | uVar10 >> 2)) != 0) {
    *(uint *)(param_1 + 0xb38a0) = *(uint *)(param_1 + 0xb38a0) | 1;
  }
  uVar43 = *(uint *)(param_1 + 0xb38a0) | 2;
  if ((uVar6 | uVar31) == 0) {
    uVar43 = *(uint *)(param_1 + 0xb38a0);
  }
  uVar42 = 0x10;
  if (!bVar21 || !bVar20) {
    uVar42 = 8;
  }
  uVar10 = uVar43 | uVar42 | 0x20;
  if (uVar7 == 0) {
    uVar10 = uVar43 | uVar42;
  }
  *(uint *)(param_1 + 0xb38a0) = uVar10;
  uVar43 = 0x80;
  if (param_2[2] != '\0') {
    uVar43 = 0x40;
  }
  *(uint *)(param_1 + 0xb38a0) = uVar9 & 0x100 | uVar43 | uVar10;
  nn::os::UnlockMutex(pMVar3);
  puVar13 = PTR_DAT_04bb2020;
  if (local_164 != 0) {
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    local_f8 = "SzaTaled1stTimeAnyPlayer";
    local_100 = puVar4;
    bVar24 = FUN_0273f0a0(&local_100);
    local_f8 = "ValidateVillageSave";
    local_100 = puVar4;
    bVar25 = FUN_0273f0a0(&local_100);
    local_f8 = "CampFireRemoved";
    local_100 = puVar4;
    bVar26 = FUN_0273f0a0(&local_100);
    local_f8 = "OpeningSeqBGMChangeCounter";
    local_100 = puVar4;
    uVar29 = FUN_0273ea30(&local_100);
    local_f8 = "UnlockCommuneExpandedBGM";
    local_100 = puVar4;
    bVar27 = FUN_0273f0a0(&local_100);
    lVar33 = *(long *)PTR_DAT_04bb46b0;
    if (lVar33 == 0) {
LAB_02a2c4fc:
      bVar22 = false;
    }
    else {
      local_100 = (undefined *)CONCAT44(local_100._4_4_,1);
      if ((((*(byte *)(lVar33 + 0x50d) ^ 0xff) & 6) != 0) ||
         (lVar33 = (**(code **)(**(long **)(*(long *)(lVar33 + 0x10) + 0x188) + 0x38))(),
         lVar33 == 0)) goto LAB_02a2c4fc;
      local_100 = puVar13 + 0x10;
      local_f8 = "OtgGetStartingSalary";
      iVar30 = FUN_02758850(&local_100);
      bVar22 = iVar30 != 0;
    }
    FUN_0252d11c(&local_158);
    bVar41 = *PTR_DAT_04bb32e0;
    if (7 < (byte)local_158) {
      local_158._0_1_ = 0xff;
    }
    if (7 < bVar41) {
      bVar41 = 0xff;
    }
    if ((byte)local_158 == bVar41) {
      bVar23 = false;
    }
    else {
      local_100 = puVar13 + 0x10;
      local_f8 = "JuneBrideBGMHasUnlocked";
      iVar30 = FUN_0274bce0(&local_158,&local_100);
      bVar23 = iVar30 != 0;
    }
    nn::os::LockMutex(pMVar3);
    *(byte *)(param_1 + 0x19faa8) = bVar24 & 1;
    *(byte *)(param_1 + 0x19faa9) = bVar25 & 1;
    *(undefined4 *)(param_1 + 0x19faac) = uVar29;
    *(byte *)(param_1 + 0x19fab0) = bVar27 & 1;
    *(bool *)(param_1 + 0x19fab1) = bVar22;
    *(bool *)(param_1 + 0x19fab2) = bVar23;
    *(byte *)(param_1 + 0x19faaa) = bVar26 & 1;
    nn::os::UnlockMutex(pMVar3);
  }
  lVar45 = *(long *)PTR_DAT_04bb47c8;
  lVar33 = *(long *)(lVar45 + 0x188);
  uVar44 = *(undefined8 *)(lVar45 + 0x198);
  if (*(char *)(lVar45 + 0x1a0) == '\0') {
    lVar33 = -1;
    uVar44 = 0xffffffffffffffff;
  }
  plVar40 = *(long **)PTR_DAT_04bb27d0;
  if (lVar33 < 0) {
    bVar24 = 0;
    bVar22 = false;
    if (plVar40 != (long *)0x0) {
      lVar45 = plVar40[5];
      goto joined_r0x02a2c628;
    }
LAB_02a2c678:
    bVar23 = false;
  }
  else {
    lVar45 = *plVar40;
    bVar24 = *(byte *)(lVar45 + 0x473);
    if ((long)(char)bVar24 == 0xffffffffffffffff) {
      bVar22 = true;
      lVar45 = plVar40[5];
joined_r0x02a2c628:
      bVar24 = 0;
    }
    else {
      pbVar11 = (byte *)(lVar45 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x80;
      if (7 < bVar24) {
        pbVar11 = (byte *)(lVar45 + 0x48);
      }
      if ((*pbVar11 >> 3 & 1) == 0) {
        bVar22 = true;
      }
      else {
        bVar22 = *(byte *)(lVar45 + 0x472) == bVar24;
      }
      bVar24 = 0;
      if (-1 < lVar33) {
        bVar24 = bVar22 ^ 1;
      }
      lVar45 = plVar40[5];
    }
    if (lVar45 == 0) goto LAB_02a2c678;
    bVar23 = (int)plVar40[0x10] == 1;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x896c8));
  *(byte *)(param_1 + 0x89691) = (byte)((ulong)lVar33 >> 0x3f) ^ 1;
  *(undefined1 *)(param_1 + 0x89690) = 1;
  *(bool *)(param_1 + 0x89692) = bVar22;
  *(byte *)(param_1 + 0x89693) = bVar24;
  *(bool *)(param_1 + 0x89694) = bVar23;
  *(long *)(param_1 + 0x89698) = lVar33;
  *(undefined8 *)(param_1 + 0x896a0) = uVar44;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x896c8));
  FUN_029f2e10(param_1 + 0x895c8,(uVar39 & 4) == 0 && (bVar21 && bVar20),local_194,param_2[2]);
  nn::os::LockMutex(pMVar2);
  if ((*(byte *)(param_1 + 0x895d0) & 1) != 0) {
    *(byte *)(param_1 + 0x895d0) = *(byte *)(param_1 + 0x895d0) & 0xfe;
    *(byte *)(param_1 + 0x89680) = *(byte *)(param_1 + 0x89680) | 1;
    uVar29 = *(undefined4 *)(param_1 + 0x895d4);
    *(undefined4 *)(param_1 + 0x895d4) = 0;
    *(undefined4 *)(param_1 + 0x89684) = uVar29;
  }
  nn::os::UnlockMutex(pMVar2);
  if ((((uVar6 | uVar31) & (uint)(param_2[2] != '\0')) == 1) &&
     (lVar33 = *(long *)PTR_DAT_04bb46b0, lVar33 != 0)) {
    puVar32 = *(undefined8 **)(lVar33 + 0x10);
    if ((*(byte *)(lVar33 + 0x453) & 1) == 0) {
      lVar33 = (**(code **)(*(long *)*puVar32 + 0x38))();
      if (lVar33 != 0) {
        lVar33 = lVar33 + 0x70;
        goto LAB_02a2c784;
      }
    }
    else if (((puVar32 != (undefined8 *)0x0) && ((long *)puVar32[0x26] != (long *)0x0)) &&
            (lVar33 = (**(code **)(*(long *)puVar32[0x26] + 0x38))(), lVar33 != 0)) {
LAB_02a2c784:
      if ((*(long **)(lVar33 + 0x1c25c8) == (long *)0x0) ||
         (puVar32 = (undefined8 *)**(long **)(lVar33 + 0x1c25c8), puVar32 == (undefined8 *)0x0)) {
        uVar44 = *(undefined8 *)(*(long *)(lVar33 + 0x1c25b0) + *(long *)(lVar33 + 0x1c25a8));
      }
      else {
        uVar34 = (**(code **)*puVar32)();
        uVar44 = *(undefined8 *)(*(long *)(lVar33 + 0x1c25b0) + *(long *)(lVar33 + 0x1c25a8));
        if ((((uVar34 & 1) != 0) && (*(long *)(lVar33 + 0x1c25c8) != 0)) &&
           (puVar32 = *(undefined8 **)(*(long *)(lVar33 + 0x1c25c8) + 8),
           puVar32 != (undefined8 *)0x0)) {
          (**(code **)*puVar32)();
        }
      }
      lVar33 = *(long *)PTR_DAT_04bc4280;
      if (lVar33 != 0) {
        nn::os::LockMutex((MutexType *)(lVar33 + 0x78));
        *(undefined8 *)(lVar33 + 0x50) = uVar44;
        *(byte *)(lVar33 + 0x99) = *(byte *)(lVar33 + 0x99) | 1;
        nn::os::UnlockMutex((MutexType *)(lVar33 + 0x78));
      }
    }
  }
  nn::os::LockMutex(pMVar3);
  puVar13 = PTR_DAT_04bb27c0;
  lVar33 = *(long *)PTR_DAT_04bb27c0;
  if (lVar33 == 0) {
LAB_02a2cb9c:
    *(undefined1 *)(param_1 + 0xb4428) = 0;
  }
  else {
    uVar39 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar39 == 0) ||
         (plVar40 = *(long **)(*(long *)(*(long *)(lVar33 + 0x1c0) + 8) +
                              ((ulong)(uVar39 >> 0x11) & 0x7ff8)), plVar40 == (long *)0x0)) ||
        ((*(uint *)(plVar40 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar40 + 0x46) != uVar39)) {
      plVar40 = (long *)0x0;
    }
    if ((*(int *)(lVar33 + 0x288) == 1) || (*(int *)(lVar33 + 0x288) == -1)) {
      plVar35 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar33 = *(long *)puVar13;
      iVar30 = (**(code **)(*plVar35 + 0x60))();
      if (iVar30 < 0x11) {
        uVar39 = 1;
      }
      else {
        if (4 < *(uint *)(lVar33 + 0x5e8)) goto LAB_02a2c8c8;
        uVar39 = 0x1aU >> (ulong)(*(uint *)(lVar33 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar40 != (long *)0x0) goto LAB_02a2c8dc;
      goto LAB_02a2cb9c;
    }
LAB_02a2c8c8:
    uVar39 = 0;
    if (plVar40 == (long *)0x0) goto LAB_02a2cb9c;
LAB_02a2c8dc:
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar30 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar30 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar31 = (**(code **)(*plVar40 + 0x20))(plVar40,PTR_DAT_04bb3278);
    if (((uVar39 & uVar31) == 0) || (lVar33 = *(long *)puVar13, lVar33 == 0)) goto LAB_02a2cb9c;
    uVar39 = *(uint *)((long)plVar40 + 0x274);
    if ((uVar39 == 0) ||
       (((plVar40 = *(long **)(*(long *)(*(long *)(lVar33 + 0x1c0) + 8) +
                              ((ulong)(uVar39 >> 0x11) & 0x7ff8)), plVar40 == (long *)0x0 ||
         ((*(uint *)(plVar40 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar40 + 0x46) != uVar39)))) {
      plVar40 = (long *)0x0;
    }
    if ((*(int *)(lVar33 + 0x288) != 1) && (*(int *)(lVar33 + 0x288) != -1)) goto LAB_02a2cb9c;
    plVar35 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar33 = *(long *)puVar13;
    iVar30 = (**(code **)(*plVar35 + 0x60))();
    puVar13 = PTR_DAT_04bb32c0;
    if (((0x10 < iVar30) &&
        ((4 < *(uint *)(lVar33 + 0x5e8) ||
         ((1 << (ulong)(*(uint *)(lVar33 + 0x5e8) & 0x1f) & 0x1aU) == 0)))) ||
       (plVar40 == (long *)0x0)) goto LAB_02a2cb9c;
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar30 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar30 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    puVar4 = PTR_DAT_04bb32b8;
    uVar34 = (**(code **)(*plVar40 + 0x20))(plVar40,PTR_DAT_04bb32b8);
    if ((uVar34 & 1) != 0) {
      if (((*puVar13 & 1) == 0) && (iVar30 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar30 != 0)) {
        *(undefined **)puVar4 = PTR_DAT_04bb32c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32c0);
      }
      uVar34 = (**(code **)(*plVar40 + 0x20))(plVar40,PTR_DAT_04bb32b8);
      if ((uVar34 & 1) == 0) goto LAB_02a2cb9c;
      fVar50 = *(float *)(plVar40 + 0x52);
      fVar57 = *(float *)(plVar40 + 0x55);
      fVar56 = *(float *)((long)plVar40 + 0x2ac);
      fVar55 = *(float *)(plVar40 + 0x56);
      fVar51 = *(float *)((long)plVar40 + 0x294);
      fVar46 = *(float *)(plVar40 + 0x53);
      *(float *)(param_1 + 0xb4488) = fVar50;
      *(float *)(param_1 + 0xb448c) = fVar51;
      *(float *)(param_1 + 0xb4490) = fVar46;
      fVar52 = fVar57;
      fVar54 = fVar55;
      fVar53 = fVar56;
      if (((((-1.1920929e-07 <= fVar50 - fVar57) && (fVar50 - fVar57 <= 1.1920929e-07)) &&
           (-1.1920929e-07 <= fVar51 - fVar56)) &&
          ((fVar51 - fVar56 <= 1.1920929e-07 && (-1.1920929e-07 <= fVar46 - fVar55)))) &&
         (fVar46 - fVar55 <= 1.1920929e-07)) {
        fVar52 = fVar50 + 0.0;
        fVar53 = fVar51 + 0.0;
        fVar54 = fVar46 + 1.0;
      }
      *(float *)(param_1 + 0xb4494) = fVar52;
      *(float *)(param_1 + 0xb4498) = fVar53;
      *(float *)(param_1 + 0xb449c) = fVar54;
      (**(code **)(*(long *)(param_1 + 0xb4450) + 0x20))(param_1 + 0xb4450,param_1 + 0xb4458);
      uVar29 = *(undefined4 *)((long)plVar40 + 0x308a4);
      *(float *)(param_1 + 0xb4444) = fVar57;
      *(float *)(param_1 + 0xb4448) = fVar56;
      *(float *)(param_1 + 0xb444c) = fVar55;
      *(undefined4 *)(param_1 + 0xb4430) = uVar29;
      *(float *)(param_1 + 0xb4444) = fVar57 - *(float *)(plVar40 + 0x6114);
      *(float *)(param_1 + 0xb4448) = fVar56 - *(float *)((long)plVar40 + 0x308a4);
      *(float *)(param_1 + 0xb444c) = fVar55 - *(float *)(plVar40 + 0x6115);
      (**(code **)(*plVar40 + 0x118))(&local_100,plVar40);
      uVar29 = (float)local_100;
      local_100._0_4_ = 2.8026e-45;
      fVar52 = (float)NEON_ucvtf(uVar29);
      *(float *)(param_1 + 0xb442c) = fVar52 * 1.4629181e-09;
      if (*(uint *)(plVar40 + 0xa9) < 3) {
        lVar33 = 0;
      }
      else {
        lVar33 = *(long *)(plVar40[0xaa] + 0x10);
      }
      puVar36 = (undefined4 *)(**(code **)(*(long *)(lVar33 + 0x180) + 0xf0))(lVar33 + 0x180);
      local_100 = (undefined *)((ulong)local_100._4_4_ << 0x20);
      *(undefined4 *)(param_1 + 0xb4434) = *puVar36;
      if ((int)plVar40[0xa9] == 0) {
        lVar33 = 0;
      }
      else {
        lVar33 = *(long *)plVar40[0xaa];
      }
      puVar36 = (undefined4 *)(**(code **)(*(long *)(lVar33 + 0x180) + 0xf0))(lVar33 + 0x180);
      *(undefined4 *)(param_1 + 0xb4438) = *puVar36;
      local_100._0_4_ = 1.4013e-45;
      if (*(uint *)(plVar40 + 0xa9) < 2) {
        lVar33 = 0;
      }
      else {
        lVar33 = *(long *)(plVar40[0xaa] + 8);
      }
      puVar36 = (undefined4 *)(**(code **)(*(long *)(lVar33 + 0x180) + 0xf0))(lVar33 + 0x180);
      local_100._0_4_ = 8.26766e-44;
      *(undefined4 *)(param_1 + 0xb443c) = *puVar36;
      if (*(uint *)(plVar40 + 0xa9) < 0x3c) {
        lVar33 = 0;
      }
      else {
        lVar33 = *(long *)(plVar40[0xaa] + 0x1d8);
      }
      puVar36 = (undefined4 *)(**(code **)(*(long *)(lVar33 + 0x180) + 0xf0))(lVar33 + 0x180);
      *(undefined4 *)(param_1 + 0xb4440) = *puVar36;
      lVar33 = FUN_008c7330(plVar40,(int)plVar40[0x60fd]);
      local_100 = (undefined *)CONCAT44(local_100._4_4_,0x3b);
      if (*(uint *)(plVar40 + 0xa9) < 0x3c) {
        lVar45 = 0;
      }
      else {
        lVar45 = *(long *)(plVar40[0xaa] + 0x1d8);
      }
      *(bool *)(param_1 + 0xb4429) = lVar33 == lVar45;
      *(bool *)(param_1 + 0xb442a) = *(int *)((long)plVar40 + 0x31804) - 1U < 6;
      *(bool *)(param_1 + 0xb442b) = (int)plVar40[0x82] == 0x16;
      *(undefined1 *)(param_1 + 0xb4428) = 1;
    }
  }
  nn::os::UnlockMutex(pMVar3);
  bVar24 = 0;
  if (*(long *)PTR_DAT_04bb2200 != 0) {
    lVar33 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50);
    bVar24 = 0;
    if (lVar33 != 0) {
      local_100 = (undefined *)((ulong)local_100 & 0xffffffff00000000);
      bVar21 = false;
      lVar33 = *(long *)(lVar33 + 0x118);
      if (lVar33 != 0) {
        bVar21 = *(char *)(lVar33 + 0xe0b) == '\0';
      }
      bVar24 = lVar33 != 0 & bVar21;
    }
  }
  *(byte *)(param_1 + 0xb44b0) = bVar24 ^ 1;
  FUN_02a02720(param_1 + 0x1211c8);
  puVar13 = PTR_DAT_04bb3238;
  if ((local_164 != 0) && (lVar33 = *(long *)PTR_DAT_04bb4848, lVar33 != 0)) {
    local_100 = (undefined *)0x0;
    local_f8 = (char *)0x40a0000000000000;
    local_f0 = CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,*(undefined4 *)PTR_DAT_04bb3238);
    FUN_022924b4(lVar33,&local_100,0);
    fVar52 = (float)local_100;
    fVar51 = (float)local_f8;
    fVar16 = local_f8._4_4_;
    local_100 = (undefined *)0x0;
    local_f8 = (char *)0x40a0000000000000;
    local_f0 = CONCAT44(*(undefined4 *)puVar13,*(undefined4 *)puVar13);
    FUN_022924b4(lVar33,&local_100,1);
    fVar54 = (float)local_100;
    fVar55 = (float)local_f8;
    fVar17 = local_f8._4_4_;
    local_f0 = CONCAT44(*(undefined4 *)puVar13,*(undefined4 *)puVar13);
    local_100 = (undefined *)0x0;
    local_f8 = (char *)0x40a0000000000000;
    FUN_022924b4(lVar33,&local_100,2);
    fVar56 = (float)local_f8;
    fVar18 = local_f8._4_4_;
    fVar53 = (float)local_100;
    local_f0._0_4_ = *(int *)puVar13;
    local_100 = (undefined *)0x0;
    local_f8 = (char *)0x40a0000000000000;
    local_f0._4_4_ = (int)local_f0;
    FUN_022924b4(lVar33,&local_100,3);
    fVar57 = (float)local_f8;
    fVar19 = local_f8._4_4_;
    fVar46 = (float)local_100;
    local_f0._0_4_ = *(int *)puVar13;
    local_100 = (undefined *)0x0;
    local_f8 = (char *)0x40a0000000000000;
    FUN_022921a8(lVar33,&local_100,0);
    fVar50 = (float)local_100;
    fVar48 = (float)local_f8;
    fVar49 = local_f8._4_4_;
    local_100 = (undefined *)0x0;
    local_f8 = (char *)0x40a0000000000000;
    bVar21 = fVar50 != fVar52;
    bVar20 = fVar48 != fVar51;
    bVar22 = fVar49 != fVar16;
    fVar47 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar47 = fVar50;
    }
    fVar50 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar50 = fVar48;
    }
    fVar48 = 5.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar48 = fVar49;
    }
    bVar21 = fVar47 != fVar54;
    bVar20 = fVar50 != fVar55;
    bVar22 = fVar48 != fVar17;
    fVar49 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar49 = fVar47;
    }
    fVar47 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar47 = fVar50;
    }
    fVar50 = 5.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar50 = fVar48;
    }
    bVar21 = fVar49 != fVar53;
    bVar20 = fVar47 != fVar56;
    bVar22 = fVar50 != fVar18;
    fVar48 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar48 = fVar49;
    }
    fVar49 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar49 = fVar47;
    }
    fVar47 = 5.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar47 = fVar50;
    }
    bVar21 = fVar48 != fVar46;
    bVar20 = fVar49 != fVar57;
    bVar22 = fVar47 != fVar19;
    fVar50 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar50 = fVar48;
    }
    fVar48 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar48 = fVar49;
    }
    fVar49 = 5.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar49 = fVar47;
    }
    local_f0 = CONCAT44(local_f0._4_4_,*(undefined4 *)puVar13);
    FUN_022921a8(lVar33,&local_100,1);
    bVar21 = (float)local_100 != fVar52;
    bVar20 = (float)local_f8 != fVar51;
    *(float *)(param_1 + 0x19fad4) = fVar16;
    *(float *)(param_1 + 0x19fab4) = fVar50;
    *(float *)(param_1 + 0x19facc) = fVar52;
    *(float *)(param_1 + 0x19fad0) = fVar51;
    *(float *)(param_1 + 0x19fad8) = fVar54;
    *(float *)(param_1 + 0x19fadc) = fVar55;
    *(float *)(param_1 + 0x19fae0) = fVar17;
    *(float *)(param_1 + 0x19fae4) = fVar53;
    *(float *)(param_1 + 0x19fae8) = fVar56;
    *(float *)(param_1 + 0x19faec) = fVar18;
    bVar22 = local_f8._4_4_ != fVar16;
    *(float *)(param_1 + 0x19fab8) = fVar48;
    *(float *)(param_1 + 0x19faf0) = fVar46;
    *(float *)(param_1 + 0x19faf4) = fVar57;
    *(float *)(param_1 + 0x19fabc) = fVar49;
    fVar52 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar52 = (float)local_100;
    }
    fVar50 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar50 = (float)local_f8;
    }
    fVar51 = 5.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar51 = local_f8._4_4_;
    }
    *(float *)(param_1 + 0x19faf8) = fVar19;
    bVar21 = fVar52 != fVar54;
    bVar20 = fVar50 != fVar55;
    bVar22 = fVar51 != fVar17;
    fVar54 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar54 = fVar52;
    }
    fVar52 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar52 = fVar50;
    }
    fVar50 = 5.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar50 = fVar51;
    }
    bVar21 = fVar54 != fVar53;
    bVar20 = fVar52 != fVar56;
    bVar22 = fVar50 != fVar18;
    fVar53 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar53 = fVar54;
    }
    fVar54 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar54 = fVar52;
    }
    fVar52 = 5.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar52 = fVar50;
    }
    bVar21 = fVar53 != fVar46;
    bVar20 = fVar54 != fVar57;
    bVar22 = fVar52 != fVar19;
    fVar46 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar46 = fVar53;
    }
    *(float *)(param_1 + 0x19fac0) = fVar46;
    fVar53 = 0.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar53 = fVar54;
    }
    *(float *)(param_1 + 0x19fac4) = fVar53;
    fVar54 = 5.0;
    if ((bVar20 || bVar21) || bVar22) {
      fVar54 = fVar52;
    }
    *(float *)(param_1 + 0x19fac8) = fVar54;
  }
  local_ad = 0;
  local_f8 = (char *)((long)&local_f0 + 4);
  local_f0 = CONCAT35(local_f0._5_3_,0x40);
  local_148 = 0x40;
  local_105 = 0;
  local_158 = PTR_DAT_04bb2bc0 + 0x10;
  local_144[0] = 0;
  local_150 = local_144;
  lVar45 = *(long *)PTR_DAT_04bb3240;
  lVar33 = *(long *)(lVar45 + 0x1da0);
  local_100 = local_158;
  if (lVar33 != 0) {
    (**(code **)(*(long *)(lVar33 + 0x2df0) + 0x18))(lVar33 + 0x2df0);
    pvVar15 = local_f8;
    pvVar37 = *(void **)(lVar33 + 0x2df8);
    if (local_f8 != pvVar37) {
      lVar33 = 0;
      do {
        if (*(char *)((long)pvVar37 + lVar33) == '\0') goto LAB_02a2cfdc;
        if (*(char *)((long)pvVar37 + lVar33 + 1) == '\0') {
          lVar33 = lVar33 + 1;
          goto LAB_02a2cfdc;
        }
        if (*(char *)((long)pvVar37 + lVar33 + 2) == '\0') {
          lVar33 = lVar33 + 2;
          goto LAB_02a2cfdc;
        }
        lVar33 = lVar33 + 3;
      } while (lVar33 != 0x80001);
      lVar33 = 0;
LAB_02a2cfdc:
      iVar30 = (int)lVar33;
      if ((int)local_f0 <= (int)lVar33) {
        iVar30 = (int)local_f0 + -1;
      }
      memcpy(local_f8,pvVar37,(long)iVar30);
      *(undefined1 *)((long)pvVar15 + (long)iVar30) = 0;
    }
    lVar33 = *(long *)(lVar45 + 0x1da0);
    (**(code **)(*(long *)(lVar33 + 0x2e48) + 0x18))(lVar33 + 0x2e48);
    puVar14 = local_150;
    puVar38 = *(undefined1 **)(lVar33 + 0x2e50);
    if (local_150 != puVar38) {
      lVar33 = 0;
      do {
        if (puVar38[lVar33] == '\0') goto LAB_02a2d06c;
        if (puVar38[lVar33 + 1] == '\0') {
          lVar33 = lVar33 + 1;
          goto LAB_02a2d06c;
        }
        if (puVar38[lVar33 + 2] == '\0') {
          lVar33 = lVar33 + 2;
          goto LAB_02a2d06c;
        }
        lVar33 = lVar33 + 3;
      } while (lVar33 != 0x80001);
      lVar33 = 0;
LAB_02a2d06c:
      iVar30 = (int)lVar33;
      if (local_148 <= (int)lVar33) {
        iVar30 = local_148 + -1;
      }
      memcpy(local_150,puVar38,(long)iVar30);
      puVar14[iVar30] = 0;
    }
  }
  pvVar37 = *(void **)(param_1 + 0x8b880);
  pcVar5 = (char *)(param_1 + 0x19f8c4);
  (**(code **)(local_100 + 0x18))(&local_100);
  pvVar15 = local_f8;
  if (pvVar37 != local_f8) {
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar33 = 0;
    do {
      if (*(char *)((long)local_f8 + lVar33) == '\0') goto LAB_02a2d10c;
      if (*(char *)((long)local_f8 + lVar33 + 1) == '\0') {
        lVar33 = lVar33 + 1;
        goto LAB_02a2d10c;
      }
      if (*(char *)((long)local_f8 + lVar33 + 2) == '\0') {
        lVar33 = lVar33 + 2;
        goto LAB_02a2d10c;
      }
      lVar33 = lVar33 + 3;
    } while (lVar33 != 0x80001);
    lVar33 = 0;
LAB_02a2d10c:
    iVar30 = (int)lVar33;
    if (*(int *)(param_1 + 0x8b888) <= (int)lVar33) {
      iVar30 = *(int *)(param_1 + 0x8b888) + -1;
    }
    memcpy(pvVar37,pvVar15,(long)iVar30);
    *(undefined1 *)((long)pvVar37 + (long)iVar30) = 0;
  }
  puVar38 = *(undefined1 **)(param_1 + 0x8b8d8);
  (**(code **)(local_158 + 0x18))(&local_158);
  puVar14 = local_150;
  if (puVar38 != local_150) {
    (**(code **)(local_158 + 0x18))(&local_158);
    lVar33 = 0;
    do {
      if (local_150[lVar33] == '\0') goto LAB_02a2d1ac;
      if (local_150[lVar33 + 1] == '\0') {
        lVar33 = lVar33 + 1;
        goto LAB_02a2d1ac;
      }
      if (local_150[lVar33 + 2] == '\0') {
        lVar33 = lVar33 + 2;
        goto LAB_02a2d1ac;
      }
      lVar33 = lVar33 + 3;
    } while (lVar33 != 0x80001);
    lVar33 = 0;
LAB_02a2d1ac:
    iVar30 = (int)lVar33;
    if (*(int *)(param_1 + 0x8b8e0) <= (int)lVar33) {
      iVar30 = *(int *)(param_1 + 0x8b8e0) + -1;
    }
    memcpy(puVar38,puVar14,(long)iVar30);
    puVar38[iVar30] = 0;
  }
  if (*pcVar5 != '\0') {
    lVar33 = *(long *)PTR_DAT_04bb2720;
    if (lVar33 == 0) {
      puVar32 = &DAT_055c04a0;
    }
    else {
      puVar32 = &DAT_055c04a0;
      if (*(long *)(lVar33 + 0x330) != 0) {
        puVar32 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar33 + 0x338));
        iVar30 = FUN_006bd550(*puVar32,0);
        puVar32 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar30 != 0x758f7eaf) {
          puVar32 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar32 + 7) == 0x244db4da) {
      bVar21 = *pcVar5 == '\0';
      goto LAB_02a2d274;
    }
    *pcVar5 = '\0';
  }
  bVar21 = true;
LAB_02a2d274:
  uVar39 = *puVar1;
  if ((*param_2 != '\0') || (!bVar21)) {
    *puVar1 = uVar39 & 0xffffffbf;
    if ((uVar39 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x19f8c8) = 0;
      *(undefined1 *)(param_1 + 0x19f8c5) = 1;
      if ((*(long *)PTR_DAT_04bc3ee8 != 0) &&
         (plVar40 = *(long **)(*(long *)PTR_DAT_04bc3ee8 + 0x50), plVar40 != (long *)0x0)) {
        (**(code **)(*plVar40 + 0x58))(plVar40,0x11);
      }
      (**(code **)(**(long **)(param_1 + 0xb80e0) + 0x58))(*(long **)(param_1 + 0xb80e0),0x11);
    }
    if ((*(int *)(param_1 + 0x19f8c8) == 0) && (*(int *)(param_1 + 0x19f8cc) == 0)) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x19f988));
      if (*(char *)(param_1 + 0x19f8c5) != '\0') {
        *(undefined1 *)(param_1 + 0x19f8c5) = 0;
      }
      local_e0 = param_1 + 0x19f9a8;
      local_c8 = &DAT_0019f9c8 + param_1;
      local_100 = PTR_DAT_04bb5070 + 0x10;
      local_b8 = "SoundUpdate";
      local_f0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_f8 = (char *)CONCAT53(local_f8._3_5_,0x10001);
      local_c0 = PTR_DAT_04bb2020 + 0x10;
      local_e8 = *(undefined8 *)(*(long *)PTR_DAT_04bb49a8 + 8);
      FUN_03f44830(param_1 + 0x19f910,&local_100);
      *puVar1 = *puVar1 & 0xffffffdf;
    }
  }
  else {
    *puVar1 = uVar39 | 0x40;
    if ((uVar39 >> 6 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0xb80e0) + 0x58))(*(long **)(param_1 + 0xb80e0),0xf);
      if ((*(long *)PTR_DAT_04bc3ee8 != 0) &&
         (plVar40 = *(long **)(*(long *)PTR_DAT_04bc3ee8 + 0x50), plVar40 != (long *)0x0)) {
        (**(code **)(*plVar40 + 0x58))(plVar40,0xf);
      }
      local_e0 = param_1 + 0x19fa68;
      *puVar1 = *puVar1 | 0x20;
      *(undefined4 *)(param_1 + 0x19f8c8) = 1;
      local_d8 = 0;
      local_c8 = (undefined *)(param_1 + 0x19fa88);
      local_d0 = 0;
      local_f8 = (char *)CONCAT53(local_f8._3_5_,1);
      local_100 = PTR_DAT_04bb5070 + 0x10;
      local_e8 = *(undefined8 *)(param_1 + 0x19f908);
      local_c0 = PTR_DAT_04bb2020 + 0x10;
      local_f0 = 0;
      local_b8 = "SoundUpdateLPT";
      FUN_03f44830(param_1 + 0x19f910,&local_100);
    }
  }
  *(undefined4 *)(param_1 + 0x19f8cc) = 0;
  return;
}

