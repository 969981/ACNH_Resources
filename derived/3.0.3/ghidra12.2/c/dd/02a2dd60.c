
/* WARNING: Removing unreachable block (ram,0x02a2e5c8) */
/* WARNING: Removing unreachable block (ram,0x02a2e500) */
/* WARNING: Removing unreachable block (ram,0x02a2e5e0) */
/* WARNING: Removing unreachable block (ram,0x02a2e5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a2dd60(long param_1,byte param_2)

{
  uint *puVar1;
  MutexType *pMVar2;
  ulong uVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  uint7 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  float *pfVar22;
  long *plVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  long lVar27;
  undefined8 *puVar28;
  char *pcVar29;
  void *__src;
  uint *puVar30;
  long lVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  int *piVar35;
  long *plVar36;
  char *pcVar37;
  void *__dest;
  long *plVar38;
  undefined8 *puVar39;
  code *pcVar40;
  long *plVar41;
  long *plVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 local_9940;
  char *local_9938;
  ulong uStack_9930;
  undefined4 local_9928;
  undefined1 local_9924;
  undefined1 local_9923;
  undefined1 local_9922;
  undefined8 *local_9920;
  undefined1 local_9918;
  undefined8 *local_9910;
  undefined8 uStack_9908;
  undefined8 local_9900;
  undefined8 uStack_98f8;
  undefined8 local_98f0;
  undefined8 local_98e8;
  uint local_98e0;
  undefined4 uStack_98dc;
  undefined1 uStack_98d8;
  undefined1 uStack_98d7;
  undefined2 uStack_98d6;
  undefined4 local_98d4;
  undefined8 uStack_98d0;
  undefined4 uStack_98c8;
  undefined4 uStack_98c4;
  undefined *local_98c0;
  undefined8 uStack_98b8;
  undefined8 local_98b0;
  undefined8 uStack_98a8;
  undefined4 local_98a0;
  uint local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  
  puVar1 = (uint *)(param_1 + 0xb3894);
  pMVar2 = (MutexType *)(param_1 + 0xb4408);
  nn::os::LockMutex(pMVar2);
  uVar25 = *(uint *)(param_1 + 0xb38a0);
  *(undefined4 *)(param_1 + 0xb38a0) = 0;
  if (0.0 <= *(float *)(param_1 + 0x11f930)) {
    *(float *)(param_1 + 0x11f934) = *(float *)(param_1 + 0x11f930);
    *(undefined4 *)(param_1 + 0x11f930) = 0xbf800000;
  }
  nn::os::UnlockMutex(pMVar2);
  nn::os::LockMutex((MutexType *)(param_1 + 0x89660));
  iVar18 = *(int *)(param_1 + 0x89630);
  cVar8 = *(char *)(param_1 + 0x8961c);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x89660));
  uVar24 = *puVar1;
  if ((uVar24 >> 3 & 1) == 0) {
    if ((uVar25 >> 1 & 1) != 0) {
      uVar24 = uVar24 | 8;
      goto LAB_02a2de28;
    }
  }
  else if ((uVar25 & 3) == 1) {
    uVar24 = uVar24 & 0xfffffff7;
LAB_02a2de28:
    *puVar1 = uVar24;
  }
  if ((uVar24 >> 4 & 1) == 0) {
    if ((uVar25 >> 6 & 1) != 0) {
      uVar24 = uVar24 | 0x10;
      goto LAB_02a2de44;
    }
  }
  else if ((uVar25 >> 7 & 1) != 0) {
    uVar24 = uVar24 & 0xffffffef;
LAB_02a2de44:
    *puVar1 = uVar24;
  }
  if (((uVar24 >> 8 & 1) == 0) && ((uVar25 >> 8 & 1) != 0)) {
    uVar24 = uVar24 | 0x100;
    *puVar1 = uVar24;
  }
  if ((uVar24 >> 1 & 1) == 0) {
    if ((uVar25 >> 4 & 1) != 0) {
      uVar24 = uVar24 | 2;
      goto LAB_02a2de88;
    }
    uVar32 = 0;
  }
  else if ((uVar25 >> 3 & 1) == 0) {
    uVar32 = 1;
  }
  else {
    uVar24 = uVar24 & 0xfffffffd;
LAB_02a2de88:
    uVar32 = uVar24 & 2;
    *puVar1 = uVar24;
  }
  uVar11 = CONCAT61(local_98e8._2_6_,(char)(uVar24 >> 4)) & 0xffffffffffff01;
  local_98e8._0_3_ = (int3)uVar11 << 8;
  bVar7 = param_2 ^ 1;
  uVar12 = (undefined1)(uVar25 >> 1);
  local_98e8._4_4_ = (undefined4)(uVar11 >> 0x18);
  uVar13 = (undefined1)uVar25;
  uVar3 = param_1 + 0xb3818;
  local_98e8 = (char *)(CONCAT71((int7)(CONCAT53((int5)(CONCAT44(local_98e8._4_4_,
                                                                 CONCAT13(uVar12,(int3)local_98e8))
                                                       >> 0x18),
                                                 CONCAT12(uVar13,(undefined2)local_98e8)) >> 8),
                                 uVar32 != 0 & bVar7) & 0xffffffff0101ffff);
  bVar5 = ((uVar24 ^ 0xffffffff) & 0x12) == 0 & bVar7;
  local_98f0 = (undefined *)uVar3;
  FUN_029fa170(param_1 + 0x11e588,&local_98f0);
  uVar24 = *(uint *)(FUN_0011e5e0 + param_1);
  if (uVar24 == 0xffffffff) {
    lVar27 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x11e608) <= uVar24) {
      uVar24 = 0;
    }
    lVar27 = *(long *)(param_1 + 0x11e610) + (long)(int)uVar24 * 0x80;
  }
  lVar31 = 0;
  if (lVar27 != 0) {
    lVar31 = lVar27 + 8;
  }
  *(long *)(param_1 + 0xa7698) = lVar31;
  uVar24 = *(uint *)(param_1 + 0x8974c);
  if (uVar24 == 0xffffffff) {
    lVar27 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x89750) <= uVar24) {
      uVar24 = 0;
    }
    lVar27 = *(long *)(param_1 + 0x89758) + (long)(int)uVar24 * 0x20;
  }
  *(long *)(param_1 + 0xa76a0) = lVar27;
  uVar11 = CONCAT61((int6)((ulong)local_98e8 >> 0x10),(char)(*puVar1 >> 4)) & 0xffff0000000001;
  local_98e8._0_3_ = (int3)uVar11 << 8;
  local_98e8._4_4_ = (undefined4)(uVar11 >> 0x18);
  bVar17 = *(long *)(*(long *)(param_1 + 0xb4510) + 0x50) != 0;
  uVar43 = 0;
  if (bVar17) {
    uVar43 = *(undefined4 *)(param_1 + 0xb44d0);
  }
  uStack_98dc = 0;
  if (bVar17) {
    uStack_98dc = *(undefined4 *)(param_1 + 0xb44cc);
  }
  local_98e0 = 0;
  if (bVar17) {
    local_98e0 = *(uint *)(param_1 + 0xb44c8);
  }
  uStack_98d8 = (undefined1)uVar43;
  uStack_98d7 = (undefined1)((uint)uVar43 >> 8);
  uStack_98d6 = (undefined2)((uint)uVar43 >> 0x10);
  local_98e8 = (char *)(CONCAT71((int7)(CONCAT53((int5)(CONCAT44(local_98e8._4_4_,
                                                                 CONCAT13(uVar12,(int3)local_98e8))
                                                       >> 0x18),
                                                 CONCAT12(uVar13,(undefined2)local_98e8)) >> 8),
                                 bVar7 & (byte)((*puVar1 & 2) >> 1)) & 0xffffffff0101ffff);
  local_98f0 = (undefined *)uVar3;
  FUN_029a1600(param_1 + 0x6d8,&local_98f0);
  local_98f0._0_1_ = bVar5;
  FUN_029d2840(param_1 + 0x63580,&local_98f0);
  FUN_03845528(param_1);
  local_98f0 = (undefined *)CONCAT71(local_98f0._1_7_,bVar5);
  FUN_02a09084(param_1 + 0x11f938,&local_98f0);
  local_100 = local_100 & 0xffffffffff000000;
  uVar20 = local_100;
  local_100 = CONCAT71(local_100._1_7_,bVar5);
  if ((cVar8 == '\0') && (bVar5 != 0)) {
    local_100._2_6_ = SUB86(uVar20,2);
    local_100._0_2_ = CONCAT11(1,bVar5);
LAB_02a2e06c:
    if (*(char *)(param_1 + 0x19faa9) == '\0') {
      bVar17 = false;
    }
    else {
      bVar17 = false;
      if (*(char *)(param_1 + 0x19faa8) != '\0') {
        pbVar26 = (byte *)(DAT_055f6860 + 0x636e0);
        uVar24 = *(uint *)(DAT_055f6860 + 0x63804);
        local_98f0 = (undefined *)CONCAT44(local_98f0._4_4_,uVar24);
        if (uVar24 != 0xffffffff) {
          pbVar26 = (byte *)(DAT_055f6860 + 0x63700) + (ulong)uVar24 * 0x20;
          if (7 < uVar24) {
            pbVar26 = (byte *)(DAT_055f6860 + 0x63700);
          }
        }
        if ((*pbVar26 >> 1 & 1) == 0) {
          bVar17 = false;
        }
        else {
          bVar17 = *(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x77130016;
        }
      }
    }
  }
  else {
    if (cVar8 == '\0') goto LAB_02a2e06c;
    bVar17 = false;
  }
  local_100._0_3_ = CONCAT12(bVar17,(undefined2)local_100);
  FUN_029af8b0((byte *)(param_1 + 0x11f9d8),&local_100);
  if (((*(byte *)(param_1 + 0x11f9d8) & 1) == 0) ||
     (lVar27 = *(long *)(param_1 + 0x11f9e0), lVar27 == 0)) {
    puVar28 = (undefined8 *)0x0;
  }
  else {
    puVar28 = *(undefined8 **)(lVar27 + 0x18);
    if ((*(byte *)(lVar27 + 8) & 10) != 2) {
      puVar28 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bc3ea8 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04bc3ea8), iVar19 != 0)) {
    *(undefined **)PTR_DAT_04bc3ea0 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc3ea8);
  }
  plVar23 = (long *)(param_1 + 0x19dee0);
  if ((puVar28 == (undefined8 *)0x0) ||
     (uVar20 = (**(code **)*puVar28)(puVar28,PTR_DAT_04bc3ea0), (uVar20 & 1) == 0)) {
    bVar17 = false;
  }
  else {
    bVar17 = *(char *)((long)puVar28 + 0x67d) != '\0';
  }
  *(bool *)(param_1 + 0xa7668) = bVar17;
  local_98f0._0_1_ = iVar18 == 2;
  FUN_029e89b4(param_1 + 0x11fa78,&local_98f0);
  local_98f0 = (undefined *)CONCAT71(local_98f0._1_7_,bVar5);
  FUN_029e9834(param_1 + 0x11fab8,&local_98f0);
  uVar24 = *(uint *)(FUN_0011e5e0 + DAT_055f6860);
  if ((uVar24 == 0xffffffff) || (*(long *)(DAT_055f6860 + 0x11e610) == 0)) {
    uVar24 = 0;
  }
  else {
    if (*(uint *)(DAT_055f6860 + 0x11e608) <= uVar24) {
      uVar24 = 0;
    }
    uVar32 = *(uint *)(*(long *)(DAT_055f6860 + 0x11e610) + (long)(int)uVar24 * 0x80 + 8);
    local_98f0 = (undefined *)(ulong)uVar32;
    uVar24 = uVar32 - 0x20;
    if ((int)uVar32 < 0x20) {
      uVar24 = uVar32;
    }
    uVar33 = 0x1ffbf;
    if ((int)uVar32 < 0x20) {
      uVar33 = 0xfffffff8;
    }
    uVar24 = uVar33 >> (ulong)(uVar24 & 0x1f) & 1;
  }
  bVar6 = 0;
  if (*(char *)(param_1 + 0x19df50) == '\0') {
    bVar6 = bVar5;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb30a0 + 0x653dc) == '\0') {
    uVar43 = 0;
  }
  else {
    uVar43 = *(undefined4 *)(*(long *)PTR_DAT_04bb30a0 + 0x653c0);
  }
  *(undefined4 *)(param_1 + 0x19df54) = uVar43;
  local_98e0 = local_98e0 & 0xffffff00;
  local_98f0 = (undefined *)CONCAT44(0x3c23d70a,(int)local_98f0);
  local_98e8 = (char *)CONCAT71(local_98e8._1_7_,1);
  uStack_98dc = 0;
  uStack_98d8 = 0;
  uStack_98d7 = 0;
  uStack_98d6 = 0;
  local_98d4 = 0;
  uStack_98d0._0_4_ = 0;
  uStack_98d0._4_4_ = 0;
  uStack_98c8 = 0;
  local_98f0._0_2_ = CONCAT11(bVar6,(char)uVar24);
  local_98e8 = (char *)CONCAT44(uVar43,(undefined4)local_98e8);
  FUN_029eb478(param_1 + 0x19df68,&local_98f0);
  uVar21 = local_98f0;
  fVar44 = *(float *)(param_1 + 0x19df78);
  fVar46 = -fVar44;
  if (0.0 <= fVar44) {
    fVar46 = fVar44;
  }
  if (bVar6 != 0) {
    *(float *)(param_1 + 0x19df5c) = fVar46;
  }
  if (uVar24 == 0) {
    if (fVar46 <= *(float *)(param_1 + 0x19df5c)) {
      fVar46 = *(float *)(param_1 + 0x19df5c) + -0.02;
    }
    *(float *)(param_1 + 0x19df5c) = fVar46;
  }
  *(undefined4 *)(param_1 + 0x19df60) = 0;
  *(byte *)(param_1 + 0x19df50) = bVar5;
  local_98f0._0_6_ = (uint6)bVar5 << 0x20;
  local_98f0._7_1_ = SUB81(uVar21,7);
  local_98f0 = (undefined *)
               (CONCAT17(local_98f0._7_1_,CONCAT16(uVar12,(int6)local_98f0)) & 0xff01ffffffffffff);
  uVar20 = (ulong)local_98f0;
  local_98f0 = (undefined *)CONCAT44(local_98f0._4_4_,*(undefined4 *)(param_1 + 0xa7548));
  uVar21 = local_98f0;
  local_98f0._6_2_ = SUB82(uVar20,6);
  local_98f0._0_5_ = (undefined5)uVar21;
  local_98f0 = (undefined *)
               (CONCAT26(local_98f0._6_2_,CONCAT15(uVar13,(undefined5)local_98f0)) &
               0xffff01ffffffffff);
  FUN_029ee360(param_1 + 0x11fbe8,&local_98f0);
  FUN_029d0ec8(param_1 + 0x120f98,&local_98f0);
  FUN_029d025c(param_1 + 0x121100,&local_98f0);
  FUN_029f4248(param_1 + 0x895c8,&local_98f0);
  local_e0 = 0;
  uStack_dc = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  local_f0 = 0;
  local_c0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  local_b8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  local_f8 = 0;
  local_100 = 0;
  local_b0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  uStack_a8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  local_d0 = *(undefined8 *)PTR_DAT_04bb2f80;
  uStack_c8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  local_a0 = 0;
  local_94 = 0;
  local_8c = 0;
  uStack_88 = 0;
  local_d8 = PTR_DAT_04bb41a0 + 0x10;
  local_98 = 0x41200000;
  local_84 = 0x3f800000;
  uStack_80 = 0;
  nn::os::LockMutex(pMVar2);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb4460);
  local_d0 = *(undefined8 *)(param_1 + 0xb4458);
  local_b8 = *(undefined8 *)(param_1 + 0xb4470);
  local_c0 = *(undefined8 *)(param_1 + 0xb4468);
  uStack_dc = *(undefined4 *)(param_1 + 0xb444c);
  uStack_e4 = (undefined4)*(undefined8 *)(param_1 + 0xb4444);
  local_e0 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xb4444) >> 0x20);
  local_100 = *(undefined8 *)(param_1 + 0xb4428);
  local_f8 = *(undefined8 *)(param_1 + 0xb4430);
  local_98 = *(undefined4 *)(param_1 + 0xb4490);
  local_f0 = *(undefined8 *)(param_1 + 0xb4438);
  local_e8 = *(undefined4 *)(param_1 + 0xb4440);
  local_a0 = *(undefined8 *)(param_1 + 0xb4488);
  local_8c = *(undefined4 *)(param_1 + 0xb449c);
  local_94 = *(undefined8 *)(param_1 + 0xb4494);
  uStack_80 = *(undefined4 *)(param_1 + 0xb44a8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb4480);
  local_b0 = *(undefined8 *)(param_1 + 0xb4478);
  uStack_88 = (undefined4)*(undefined8 *)(param_1 + 0xb44a0);
  local_84 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xb44a0) >> 0x20);
  nn::os::UnlockMutex(pMVar2);
  if ((char)local_100 != '\0') {
    local_98f0 = (undefined *)(((ulong)local_98f0 >> 0x18 & 0xff) << 0x18);
    if ((*(long *)PTR_DAT_04bb2200 != 0) &&
       (lVar27 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x78), lVar27 != 0)) {
      local_98f0 = (undefined *)CONCAT71(local_98f0._1_7_,0.001 < *(float *)(lVar27 + 0x3c));
    }
    lVar27 = (long)local_98f0;
    if (*(long *)PTR_DAT_04bb7ff8 != 0) {
      local_9940 = (undefined *)((ulong)local_9940 & 0xffffffff00000000);
      local_98e8 = (char *)&local_d8;
                    /* WARNING: Could not recover jumptable at 0x02a2e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_02a2e4ec + (ulong)DAT_0417edbe * 4))();
      return;
    }
    local_98f0._0_2_ = (ushort)(byte)local_98f0;
    local_98f0._3_5_ = SUB85(lVar27,3);
    local_98f0._0_3_ = CONCAT12(local_100._1_1_,(ushort)local_98f0);
    local_98f0 = (undefined *)CONCAT44(local_100._4_4_,(int)local_98f0);
    local_98e8 = (char *)&local_d8;
    FUN_02a54920(param_1 + 0xb44b8,&local_98f0);
    lVar27 = DAT_055f6860;
    fVar46 = 0.0;
    uVar43 = (undefined4)((ulong)local_9940 >> 0x20);
    DAT_055f5eb0 = 0;
    if (*(long *)(*(long *)(param_1 + 0xb4510) + 0x50) != 0) {
      DAT_055f5eb0 = *(undefined4 *)(param_1 + 0xb44d8);
    }
    DAT_055f5f10 = *(undefined4 *)(param_1 + 0xb4524);
    DAT_055f5f14 = *(undefined4 *)(param_1 + 0xb4528);
    local_9940 = (undefined *)CONCAT44(uVar43,2);
    DAT_055f5f18 = *(undefined4 *)(param_1 + 0xb452c);
    DAT_055f5f1c = *(undefined4 *)(param_1 + 0xb455c);
    DAT_055f5f20 = *(undefined4 *)(param_1 + 0xb4560);
    sVar10 = *(short *)PTR_DAT_04bb6298;
    if (sVar10 == -1) {
LAB_02a2e704:
      DAT_055f5f28 = 0;
    }
    else {
      local_9940 = (undefined *)CONCAT44(uVar43,0x20);
      puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8;
      if (0xff < (uint)(int)sVar10) {
        puVar4 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar4 + 4) & 1) == 0) goto LAB_02a2e704;
      pMVar2 = (MutexType *)(DAT_055f6860 + 0x89660);
      fVar46 = 0.0;
      nn::os::LockMutex(pMVar2);
      iVar19 = *(int *)(lVar27 + 0x8963c);
      nn::os::UnlockMutex(pMVar2);
      fVar44 = 0.0;
      if (599 < iVar19) {
        fVar45 = ((float)iVar19 + -600.0) / 300.0;
        fVar46 = 1.0;
        if (fVar45 <= 1.0) {
          fVar46 = fVar45;
        }
        fVar44 = 0.0;
        if (0.0 <= fVar45) {
          fVar44 = fVar46;
        }
      }
      (**(code **)(PTR_PTR_04bb4f70 + (ulong)*(byte *)(DAT_055f6860 + 0x19de38) * 8))
                (fVar44,(byte *)(DAT_055f6860 + 0x19de38),*(undefined8 *)(DAT_055f6860 + 0x19de30));
      DAT_055f5f28 = 1;
    }
    DAT_055f5f24 = fVar46;
  }
  if (bVar5 != 0) {
    local_98f0 = (undefined *)CONCAT44(local_98f0._4_4_,local_100._4_4_);
    local_98e8 = (char *)&local_d8;
    FUN_029ad984(param_1 + 0x19d100,&local_98f0);
  }
  DAT_055f5ea4 = 0x3f80000040400000;
  uVar20 = (ulong)local_98f0 >> 0x28;
  DAT_055f5ea0 = *(undefined4 *)(param_1 + 0x19d10c);
  local_98f0._0_4_ = (CONCAT11(uVar12,uVar13) & 0xffff0101) << 0x10;
  _DAT_055f5eac = 0xbf000000;
  local_98f0._0_5_ = CONCAT14(iVar18 == 1,(int)local_98f0);
  local_98f0._2_6_ = (undefined6)(CONCAT35((int3)uVar20,(undefined5)local_98f0) >> 0x10);
  local_98f0 = (undefined *)
               (CONCAT71(CONCAT61(local_98f0._2_6_,(char)(*puVar1 >> 4)),
                         bVar7 & (byte)((*puVar1 & 2) >> 1)) & 0xffffffffffff01ff);
  FUN_029838d0(param_1 + 0x122a40,&local_98f0);
  plVar41 = (long *)PTR_DAT_04bc3ee8;
  uVar24 = *(uint *)(FUN_0011e5e0 + DAT_055f6860);
  if ((uVar24 == 0xffffffff) || (*(long *)(DAT_055f6860 + 0x11e610) == 0)) {
LAB_02a2e950:
    bVar17 = false;
  }
  else {
    if (*(uint *)(DAT_055f6860 + 0x11e608) <= uVar24) {
      uVar24 = 0;
    }
    uVar24 = *(uint *)(*(long *)(DAT_055f6860 + 0x11e610) + (long)(int)uVar24 * 0x80 + 8);
    local_98f0 = (undefined *)CONCAT44(local_98f0._4_4_,uVar24);
    lVar27 = *(long *)PTR_DAT_04bb28b0 + 0x1f60 + (ulong)uVar24 * 0x50;
    if (0x32 < uVar24) {
      lVar27 = *(long *)PTR_DAT_04bb28b0 + 0x1f60;
    }
    plVar36 = (long *)(lVar27 + 8);
    (**(code **)(*plVar36 + 0x18))(plVar36);
    (**(code **)(*plVar36 + 0x18))(plVar36);
    pcVar37 = *(char **)(lVar27 + 0x10);
    (**(code **)(*plVar23 + 0x18))(plVar23);
    pcVar29 = *(char **)(param_1 + 0x19dee8);
    if (pcVar37 == pcVar29) goto LAB_02a2e950;
    pcVar37 = *(char **)(lVar27 + 0x10);
    if (*pcVar37 == *pcVar29) {
      if (*pcVar37 == '\0') goto LAB_02a2e950;
      lVar27 = 0;
      do {
        if ((lVar27 == 0x80000) || (pcVar37[lVar27 + 1] != pcVar29[lVar27 + 1])) goto LAB_02a2e8c4;
        if (pcVar37[lVar27 + 1] == '\0') goto LAB_02a2e950;
        lVar31 = lVar27 + 2;
        if (pcVar37[lVar31] != pcVar29[lVar27 + 2]) goto LAB_02a2e8c4;
        bVar17 = false;
        lVar27 = lVar27 + 2;
      } while (pcVar37[lVar31] != '\0');
    }
    else {
LAB_02a2e8c4:
      *(char **)(param_1 + 0x19dee8) = pcVar37;
      if ((*plVar41 == 0) || (lVar27 = *(long *)(*plVar41 + 0x90), lVar27 == 0)) goto LAB_02a2e950;
      __dest = *(void **)(lVar27 + 0x1c8);
      (**(code **)(*plVar23 + 0x18))(plVar23);
      __src = *(void **)(param_1 + 0x19dee8);
      if (__dest != __src) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
        lVar31 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x19dee8) + lVar31) == '\0') goto LAB_02a2f090;
          lVar34 = *(long *)(param_1 + 0x19dee8) + lVar31;
          if (*(char *)(lVar34 + 1) == '\0') {
            lVar31 = lVar31 + 1;
            goto LAB_02a2f090;
          }
          if (*(char *)(lVar34 + 2) == '\0') {
            lVar31 = lVar31 + 2;
            goto LAB_02a2f090;
          }
          lVar31 = lVar31 + 3;
        } while (lVar31 != 0x80001);
        lVar31 = 0;
LAB_02a2f090:
        iVar18 = (int)lVar31;
        if (*(int *)(lVar27 + 0x1d0) <= (int)lVar31) {
          iVar18 = *(int *)(lVar27 + 0x1d0) + -1;
        }
        memcpy(__dest,__src,(long)iVar18);
        *(undefined1 *)((long)__dest + (long)iVar18) = 0;
        plVar41 = (long *)PTR_DAT_04bc3ee8;
      }
      bVar17 = true;
      *(undefined1 *)(lVar27 + 0x218) = 1;
    }
  }
  uVar21 = *(undefined8 *)(*plVar41 + 0x98);
  puVar28 = (undefined8 *)FUN_03b80b70(uVar21,&DAT_055f5e80);
  if (((*PTR_DAT_04bc43d8 & 1) == 0) &&
     (iVar18 = __cxa_guard_acquire(PTR_DAT_04bc43d8), iVar18 != 0)) {
    *(undefined **)PTR_DAT_04bc43d0 = PTR_DAT_04bc3f50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc43d8);
  }
  puVar39 = puVar28;
  if (puVar28 != (undefined8 *)0x0) {
    puVar39 = puVar28 + -0x13;
    uVar20 = (**(code **)*puVar28)(puVar28,PTR_DAT_04bc43d0);
    if ((uVar20 & 1) == 0) {
      puVar39 = (undefined8 *)0x0;
    }
  }
  lVar27 = 0;
  if (*plVar41 != 0) {
    lVar27 = *(long *)(*plVar41 + 0x10);
  }
  local_98e8 = (char *)(lVar27 + 0x90);
  local_98f0 = PTR_DAT_04bb2020 + 0x10;
  if (puVar39 != (undefined8 *)0x0) {
    fVar46 = 0.0;
    if (local_98e8 != "AudioTvOutput") {
      uVar20 = 0;
      bVar16 = true;
      do {
        if (local_98e8[uVar20] != "AudioTvOutput"[uVar20]) break;
        if (local_98e8[uVar20] == '\0') {
          if (bVar16) goto LAB_02a2ec0c;
          break;
        }
        bVar16 = uVar20 < 0x80000;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x80001);
      fVar46 = 6.0;
      if (local_98e8 != "AudioStereoJackOutput") {
        uVar20 = 0;
        bVar16 = true;
        do {
          if (local_98e8[uVar20] != "AudioStereoJackOutput"[uVar20]) break;
          if (local_98e8[uVar20] == '\0') {
            if ((bool)(bVar16 | local_98e8 == "AudioBuiltInSpeakerOutput")) goto LAB_02a2ec0c;
            goto LAB_02a2ea94;
          }
          bVar16 = uVar20 < 0x80000;
          uVar20 = uVar20 + 1;
        } while (uVar20 != 0x80001);
        if (local_98e8 != "AudioBuiltInSpeakerOutput") {
LAB_02a2ea94:
          uVar20 = 0;
          bVar16 = true;
          do {
            if (local_98e8[uVar20] != "AudioBuiltInSpeakerOutput"[uVar20]) break;
            if (local_98e8[uVar20] == '\0') {
              if (bVar16) goto LAB_02a2ec0c;
              break;
            }
            bVar16 = uVar20 < 0x80000;
            uVar20 = uVar20 + 1;
          } while (uVar20 != 0x80001);
          local_9940 = PTR_DAT_04bb2020 + 0x10;
          local_9938 = "AudioUsbDeviceOutput";
          FUN_006bd3a4(&local_98f0);
          (**(code **)(local_98f0 + 0x18))(&local_98f0);
          pcVar29 = local_98e8;
          (**(code **)(local_9940 + 0x18))(&local_9940);
          if (pcVar29 != local_9938) {
            uVar20 = 0;
            bVar16 = true;
            do {
              if (local_98e8[uVar20] != local_9938[uVar20]) break;
              if (local_98e8[uVar20] == '\0') {
                if (bVar16) goto LAB_02a2ec0c;
                break;
              }
              bVar16 = uVar20 < 0x80000;
              uVar20 = uVar20 + 1;
            } while (uVar20 != 0x80001);
            local_9940 = PTR_DAT_04bb2020 + 0x10;
            local_9938 = "AudioExternalOutput";
            (**(code **)(local_98f0 + 0x18))(&local_98f0);
            (**(code **)(local_98f0 + 0x18))(&local_98f0);
            pcVar29 = local_98e8;
            (**(code **)(local_9940 + 0x18))(&local_9940);
            if (pcVar29 != local_9938) {
              uVar20 = 0;
              bVar16 = true;
              do {
                if (local_98e8[uVar20] != local_9938[uVar20]) break;
                if (local_98e8[uVar20] == '\0') {
                  if (bVar16) goto LAB_02a2ec0c;
                  break;
                }
                bVar16 = uVar20 < 0x80000;
                uVar20 = uVar20 + 1;
              } while (uVar20 != 0x80001);
              fVar46 = 0.0;
            }
          }
        }
      }
    }
LAB_02a2ec0c:
    fVar44 = powf(10.0,fVar46 * 0.05);
    *(float *)((long)puVar39 + 0x23c) = fVar44;
    puVar39[0x5b] = CONCAT44(fVar44,fVar44);
    puVar39[0x5a] = CONCAT44(fVar44,fVar44);
    puVar39[0x55] = CONCAT44(fVar44,fVar44);
    if (puVar39[100] != 0) {
      *(float *)(puVar39[100] + 0x14) = fVar46;
    }
  }
  if (bVar17) {
    uVar21 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    *(undefined8 *)(param_1 + 0x19d130) = uVar21;
    *(undefined8 *)(param_1 + 0x19d140) = uVar21;
  }
  else {
    local_104 = *(uint *)(param_1 + 0x122ad0);
    if (((*PTR_DAT_04bbde00 & 1) == 0) &&
       (iVar18 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar18 != 0)) {
      FUN_016cb6ac(PTR_DAT_04bbddf8);
      __cxa_guard_release(PTR_DAT_04bbde00);
    }
    uVar24 = local_104;
    if (*(uint *)PTR_DAT_04bbddf8 <= local_104) {
      uVar24 = 0;
    }
    lVar27 = *(long *)(param_1 + 0x122a60);
    if (lVar27 != 0) {
      uVar9 = *(ushort *)
               (*(long *)(PTR_DAT_04bbddf8 + 8) +
               (-(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2));
      do {
        while (uVar9 < *(ushort *)(lVar27 + 0x20)) {
          lVar27 = *(long *)(lVar27 + 8);
          if (lVar27 == 0) goto LAB_02a2ecf4;
        }
        if (uVar9 <= *(ushort *)(lVar27 + 0x20)) {
          plVar23 = (long *)(param_1 + 0x19d128);
          plVar41 = (long *)(param_1 + 0x19d130);
          if (*(char *)(lVar27 + 0x22) != '\0') {
            local_98f0 = PTR_DAT_04bb2020 + 0x10;
            local_98e8 = "Idr_Normal_Placement";
            (**(code **)(*plVar23 + 0x18))(plVar23);
            (**(code **)(*plVar23 + 0x18))(plVar23);
            pcVar29 = (char *)*plVar41;
            (**(code **)(local_98f0 + 0x18))(&local_98f0);
            if (pcVar29 == local_98e8) goto LAB_02a2f0e4;
            uVar20 = 0;
            bVar16 = true;
            goto LAB_02a2ee10;
          }
          break;
        }
        lVar27 = *(long *)(lVar27 + 0x10);
      } while (lVar27 != 0);
    }
LAB_02a2ecf4:
    plVar23 = (long *)(param_1 + 0x19d128);
    local_98f0 = PTR_DAT_04bb2020 + 0x10;
    local_98e8 = "Idr_Normal";
    (**(code **)(*plVar23 + 0x18))(plVar23);
    (**(code **)(*plVar23 + 0x18))(plVar23);
    pcVar29 = *(char **)(param_1 + 0x19d130);
    (**(code **)(local_98f0 + 0x18))(&local_98f0);
    if (pcVar29 != local_98e8) {
      uVar20 = 0;
      bVar16 = true;
      do {
        cVar8 = *(char *)(*(long *)(param_1 + 0x19d130) + uVar20);
        if (cVar8 != local_98e8[uVar20]) break;
        if (cVar8 == '\0') {
          if (bVar16) goto LAB_02a2eed8;
          break;
        }
        bVar16 = uVar20 < 0x80000;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x80001);
      local_98f0 = PTR_DAT_04bb2020 + 0x10;
      local_98e8 = "DSP_Rvb_Idr_Normal_Far_2ch";
      plVar23 = (long *)FUN_03b80b70(uVar21,&local_98f0);
      if ((plVar23 != (long *)0x0) &&
         (*(char **)(param_1 + 0x19d130) = "Idr_Normal", plVar23[0x1e] != 0)) {
        iVar18 = FUN_006bd550("Idr_Normal",0);
        if ((int)plVar23[0x1d] != 0) {
          puVar28 = (undefined8 *)plVar23[0x1e];
          lVar27 = (long)(int)plVar23[0x1d] << 3;
          do {
            if (*(int *)*puVar28 == iVar18) {
              if (*(long *)((int *)*puVar28 + 2) != 0) {
                (**(code **)(*plVar23 + 0x38))(plVar23);
              }
              break;
            }
            puVar28 = puVar28 + 1;
            lVar27 = lVar27 + -8;
          } while (lVar27 != 0);
        }
      }
    }
LAB_02a2eed8:
    local_98f0 = PTR_DAT_04bb2020 + 0x10;
    local_98e8 = "Idr_Normal";
    pcVar40 = FUN_0019d134 + param_1 + 4;
    (**(code **)(*(long *)pcVar40 + 0x18))(pcVar40);
    (**(code **)(*(long *)pcVar40 + 0x18))(pcVar40);
    pcVar29 = *(char **)(param_1 + 0x19d140);
    (**(code **)(local_98f0 + 0x18))(&local_98f0);
    if (pcVar29 != local_98e8) {
      uVar20 = 0;
      bVar16 = true;
      do {
        cVar8 = *(char *)(*(long *)(param_1 + 0x19d140) + uVar20);
        if (cVar8 != local_98e8[uVar20]) break;
        if (cVar8 == '\0') {
          if (bVar16) goto LAB_02a2f184;
          break;
        }
        bVar16 = uVar20 < 0x80000;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x80001);
      local_98f0 = PTR_DAT_04bb2020 + 0x10;
      local_98e8 = "DSP_Rvb_Idr_Normal_Near_2ch";
      plVar23 = (long *)FUN_03b80b70(uVar21,&local_98f0);
      if ((plVar23 != (long *)0x0) &&
         (*(char **)(param_1 + 0x19d140) = "Idr_Normal", plVar23[0x1e] != 0)) {
        iVar18 = FUN_006bd550("Idr_Normal",0);
        if ((int)plVar23[0x1d] != 0) {
          puVar28 = (undefined8 *)plVar23[0x1e];
          lVar27 = (long)(int)plVar23[0x1d] << 3;
          do {
            piVar35 = (int *)*puVar28;
            if (*piVar35 == iVar18) goto LAB_02a2fa60;
            puVar28 = puVar28 + 1;
            lVar27 = lVar27 + -8;
          } while (lVar27 != 0);
        }
      }
    }
  }
  goto LAB_02a2f184;
LAB_02a2fa60:
  if (*(long *)(piVar35 + 2) != 0) {
    (**(code **)(*plVar23 + 0x38))(plVar23);
  }
  goto LAB_02a2f184;
  while( true ) {
    if (*(char *)(*plVar41 + uVar20) == '\0') {
      if (bVar16) goto LAB_02a2f0e4;
      break;
    }
    bVar16 = uVar20 < 0x80000;
    uVar20 = uVar20 + 1;
    if (uVar20 == 0x80001) break;
LAB_02a2ee10:
    if (*(char *)(*plVar41 + uVar20) != local_98e8[uVar20]) break;
  }
  local_98f0 = PTR_DAT_04bb2020 + 0x10;
  local_98e8 = "DSP_Rvb_Idr_Normal_Far_2ch";
  plVar23 = (long *)FUN_03b80b70(uVar21,&local_98f0);
  if ((plVar23 != (long *)0x0) && (*plVar41 = (long)"Idr_Normal_Placement", plVar23[0x1e] != 0)) {
    iVar18 = FUN_006bd550("Idr_Normal_Placement",0);
    if ((int)plVar23[0x1d] != 0) {
      puVar28 = (undefined8 *)plVar23[0x1e];
      lVar27 = (long)(int)plVar23[0x1d] << 3;
      do {
        if (*(int *)*puVar28 == iVar18) {
          if (*(long *)((int *)*puVar28 + 2) != 0) {
            (**(code **)(*plVar23 + 0x38))(plVar23);
          }
          break;
        }
        puVar28 = puVar28 + 1;
        lVar27 = lVar27 + -8;
      } while (lVar27 != 0);
    }
  }
LAB_02a2f0e4:
  local_98f0 = PTR_DAT_04bb2020 + 0x10;
  local_98e8 = "Idr_Normal_Placement";
  pcVar40 = FUN_0019d134 + param_1 + 4;
  (**(code **)(*(long *)pcVar40 + 0x18))(pcVar40);
  (**(code **)(*(long *)pcVar40 + 0x18))(pcVar40);
  pcVar29 = *(char **)(param_1 + 0x19d140);
  (**(code **)(local_98f0 + 0x18))(&local_98f0);
  if (pcVar29 != local_98e8) {
    uVar20 = 0;
    bVar16 = true;
    do {
      cVar8 = *(char *)(*(long *)(param_1 + 0x19d140) + uVar20);
      if (cVar8 != local_98e8[uVar20]) break;
      if (cVar8 == '\0') {
        if (bVar16) goto LAB_02a2f184;
        break;
      }
      bVar16 = uVar20 < 0x80000;
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x80001);
    local_98f0 = PTR_DAT_04bb2020 + 0x10;
    local_98e8 = "DSP_Rvb_Idr_Normal_Near_2ch";
    plVar23 = (long *)FUN_03b80b70(uVar21,&local_98f0);
    if ((plVar23 != (long *)0x0) &&
       (*(char **)(param_1 + 0x19d140) = "Idr_Normal_Placement", plVar23[0x1e] != 0)) {
      iVar18 = FUN_006bd550("Idr_Normal_Placement",0);
      if ((int)plVar23[0x1d] != 0) {
        puVar28 = (undefined8 *)plVar23[0x1e];
        lVar27 = (long)(int)plVar23[0x1d] << 3;
        do {
          piVar35 = (int *)*puVar28;
          if (*piVar35 == iVar18) goto LAB_02a2fa60;
          puVar28 = puVar28 + 1;
          lVar27 = lVar27 + -8;
        } while (lVar27 != 0);
      }
    }
  }
LAB_02a2f184:
  uVar20 = (ulong)local_9940 >> 8;
  local_9940 = (undefined *)((ulong)local_9940 & 0xffffffffffffff00);
  uVar24 = *(uint *)(FUN_0011e5e0 + param_1);
  if ((uVar24 != 0xffffffff) && (*(long *)(param_1 + 0x11e610) != 0)) {
    if (*(uint *)(param_1 + 0x11e608) <= uVar24) {
      uVar24 = 0;
    }
    uVar32 = *(uint *)(*(long *)(param_1 + 0x11e610) + (long)(int)uVar24 * 0x80 + 8);
    local_98f0 = (undefined *)CONCAT44(local_98f0._4_4_,uVar32);
    uVar24 = uVar32 - 0x20;
    if ((int)uVar32 < 0x20) {
      uVar24 = uVar32;
    }
    uVar33 = 0x1ffbf;
    if ((int)uVar32 < 0x20) {
      uVar33 = 0xfffffff8;
    }
    local_9940 = (undefined *)
                 (CONCAT71((int7)uVar20,(char)(uVar33 >> (ulong)(uVar24 & 0x1f))) &
                 0xffffffffffffff01);
  }
  plVar23 = (long *)(param_1 + 0x19e198);
  FUN_029adc88(param_1 + 0x19def0,&local_9940);
  puVar4 = local_98f0;
  bVar16 = false;
  if (((*(byte *)puVar1 >> 3 & 1) != 0) && ((char)local_100 != '\0')) {
    bVar16 = *(char *)(param_1 + 0xb44b0) != '\0';
  }
  local_98f0._0_2_ = CONCAT11(bVar5,bVar16);
  local_98f0._3_5_ = SUB85(puVar4,3);
  local_98f0._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x146620),(ushort)local_98f0);
  FUN_0382b448(param_1 + 0x146628,&local_98f0);
  *(undefined1 *)(param_1 + 0x146620) = 0;
  if ((bVar5 == 0) &&
     (plVar41 = *(long **)(param_1 + 0x19e188), plVar41 != (long *)(param_1 + 0x19e180))) {
    plVar36 = plVar41 + -5;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_98e8 = (char *)plVar36[2];
      local_9938 = (char *)plVar36[4];
      plVar42 = (long *)plVar41[1];
      local_9940 = puVar4;
      local_98f0 = puVar4;
      FUN_02a0d120(DAT_055f6860 + 0xa7660,&local_98f0,&local_9940);
      if (*plVar41 != 0) {
        *(long *)(*plVar41 + 8) = plVar41[1];
      }
      if ((long *)plVar41[1] != (long *)0x0) {
        *(long *)plVar41[1] = *plVar41;
      }
      *plVar41 = 0;
      plVar41[1] = 0;
      *(int *)(FUN_0019e190 + param_1) = *(int *)(FUN_0019e190 + param_1) + -1;
      *plVar36 = *plVar23;
      *plVar23 = (long)plVar36;
      plVar36 = plVar42 + -5;
      plVar41 = plVar42;
    } while (plVar36 != (long *)(param_1 + 0x19e158));
  }
  plVar41 = (long *)(param_1 + 0x19e158);
  lVar27 = *(long *)(param_1 + 0x19e188);
  if (lVar27 != param_1 + 0x19e180) {
    do {
      *(undefined1 *)(lVar27 + -0x28) = 0;
      lVar27 = *(long *)(lVar27 + 8);
    } while ((long *)(lVar27 + -0x28) != plVar41);
  }
  FUN_0386c6f0(*(undefined8 *)PTR_DAT_04bb49e0,param_1 + 0x19dfb0,1);
  plVar36 = *(long **)(param_1 + 0x19e188) + -5;
  if (plVar36 != plVar41) {
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    plVar42 = *(long **)(param_1 + 0x19e188);
    do {
      plVar38 = (long *)plVar42[1];
      if ((char)plVar42[-5] == '\0') {
        local_98e8 = (char *)plVar36[2];
        local_9938 = (char *)plVar36[4];
        local_9940 = puVar4;
        local_98f0 = puVar4;
        FUN_02a0d120(DAT_055f6860 + 0xa7660,&local_98f0,&local_9940);
        if (*plVar42 != 0) {
          *(long *)(*plVar42 + 8) = plVar42[1];
        }
        if ((long *)plVar42[1] != (long *)0x0) {
          *(long *)plVar42[1] = *plVar42;
        }
        *plVar42 = 0;
        plVar42[1] = 0;
        *(int *)(FUN_0019e190 + param_1) = *(int *)(FUN_0019e190 + param_1) + -1;
        *plVar36 = *plVar23;
        *plVar23 = (long)plVar36;
      }
      plVar36 = plVar38 + -5;
      plVar42 = plVar38;
    } while (plVar36 != plVar41);
  }
  FUN_029f1230(*(undefined8 *)(param_1 + 0x6c8),&local_98f0);
  uVar24 = *(uint *)(param_1 + 0xa639c);
  puVar30 = *(uint **)(param_1 + 0x6d0);
  if (uVar24 != 0) {
    uVar32 = puVar30[4];
    if (uVar32 == 6) {
      if (uVar24 == 7) goto LAB_02a2f480;
    }
    else if (uVar32 == 2) {
      if (uVar24 == 3) goto LAB_02a2f480;
    }
    else if ((uVar32 == 0) && ((uVar24 | 4) == 5)) {
LAB_02a2f480:
      uVar32 = *puVar30 ^ *puVar30 << 0xb;
      uVar33 = puVar30[3];
      *puVar30 = puVar30[1];
      puVar30[1] = puVar30[2];
      uVar32 = uVar32 >> 8 ^ uVar33 >> 0x13 ^ uVar32 ^ uVar33;
      puVar30[2] = uVar33;
      puVar30[3] = uVar32;
      *(char *)(puVar30 + 5) = (char)((ulong)uVar32 + (ulong)uVar32 * 4 >> 0x20) + '\x01';
    }
  }
  puVar30[4] = uVar24;
  local_98e8 = (char *)((ulong)(CONCAT31(local_98e8._5_3_,param_2) & 0xffffff01) << 0x20);
  local_98e8 = (char *)(CONCAT71(CONCAT61(local_98e8._2_6_,(char)(*puVar1 >> 4)),
                                 bVar7 & (byte)((*puVar1 & 2) >> 1)) & 0xffffffffffff01ff);
  local_98e8 = (char *)(CONCAT53(CONCAT41(local_98e8._4_4_,uVar12),
                                 CONCAT12(uVar13,(undefined2)local_98e8)) & 0xffffffff0101ffff);
  local_98f0 = (undefined *)uVar3;
  FUN_029d8db0(param_1 + 0x89730,&local_98f0);
  local_98f0 = (undefined *)((ulong)local_98f0 & 0xffffffffffffff00);
  FUN_02a2fca0(&local_98e8);
  uStack_98f8 = *(undefined8 *)(param_1 + 0x8a118);
  local_9940 = (undefined *)(CONCAT71(local_9940._1_7_,param_2) & 0xffffffffffffff01);
  uVar20 = (ulong)local_9940;
  local_9900 = 0xffffffff;
  local_9940._0_2_ = CONCAT11(bVar5,(undefined1)local_9940);
  local_9940._3_5_ = SUB85(uVar20,3);
  local_9940 = (undefined *)
               (CONCAT53(local_9940._3_5_,CONCAT12((char)(uVar25 >> 5),(undefined2)local_9940)) &
               0xffffffffff01ffff);
  local_9928 = *(undefined4 *)(param_1 + 0x19faac);
  local_9924 = *(undefined1 *)(param_1 + 0x19fab2);
  local_9923 = *(undefined1 *)(param_1 + 0x19faaa);
  local_9922 = *(undefined1 *)(param_1 + 0x19fab0);
  local_9918 = *(undefined1 *)(param_1 + 0x19fab1);
  local_9910 = &uStack_98f8;
  uStack_9908 = 0xffffffff;
  local_9938 = (char *)(param_1 + 0xa7660);
  uStack_9930 = uVar3;
  local_9920 = &local_98f0;
  FUN_02a10b00(param_1 + 0x8b928,&local_9940);
  FUN_038386d0(param_1 + 0x8a170);
  local_98f0 = PTR_DAT_04bc4020 + 0x10;
  uStack_98d7 = *(undefined1 *)(DAT_055f6860 + 0xb3868);
  uStack_98b8 = *(undefined8 *)(DAT_055f6860 + 0xb3860);
  local_98a0 = *(undefined4 *)(DAT_055f6860 + 0xb3880);
  local_98b0 = *(undefined8 *)(DAT_055f6860 + 0xb3870);
  uStack_98a8 = *(undefined8 *)(DAT_055f6860 + 0xb3878);
  local_98e8 = (char *)((ulong)local_98e8 & 0xffffffffffffff00);
  local_98e0 = 0;
  uStack_98dc = 0;
  uStack_98d8 = 1;
  local_98c0 = PTR_DAT_04bb2020 + 0x10;
  local_9940 = (undefined *)0x0;
  uStack_98c8 = (undefined4)*(undefined8 *)(DAT_055f6860 + 0xb3850);
  uStack_98c4 = (undefined4)((ulong)*(undefined8 *)(DAT_055f6860 + 0xb3850) >> 0x20);
  local_9938 = (char *)&local_98f0;
  uStack_98d0 = local_98c0;
  FUN_03838950(param_1 + 0x8a170,&local_9940);
  if (*(long *)(param_1 + 0x1211b8) != 0) {
    FUN_029f62a0(*(long *)(param_1 + 0x1211b8),&local_98f0);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x89710));
  uVar21 = *(undefined8 *)(param_1 + 0x896e8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x89710));
  local_98f0._1_7_ = CONCAT52(local_98f0._3_5_,(short)((ulong)uVar21 >> 0x20));
  local_98f0._0_1_ = bVar5;
  FUN_02a029f0(param_1 + 0x1211c8,&local_98f0);
  local_98f0 = (undefined *)CONCAT71(local_98f0._1_7_,bVar5);
  FUN_02a00620(param_1 + 0x122ad8,&local_98f0);
  FUN_029ccb60(*(undefined8 *)(param_1 + 0x6c0),&local_98f0);
  FUN_029bfd70(param_1 + 0xb3b18,&local_98f0);
  FUN_03beb8c0(*(undefined8 *)PTR_DAT_04bb49b0);
  FUN_029c9450(param_1 + 0x63810);
  puVar15 = PTR_DAT_04bc3ee8;
  puVar4 = PTR_DAT_04bb2738;
  lVar27 = *(long *)PTR_DAT_04bb2738;
  if (lVar27 == 0) goto joined_r0x02a2f8e4;
  uVar25 = *puVar1;
  if ((uVar25 >> 8 & 1) == 0) {
LAB_02a2f6c0:
    bVar16 = false;
  }
  else {
    if (*(float *)(param_1 + 0x11f934) < 0.0) {
      fVar46 = 0.0;
      if ((*(long *)PTR_DAT_04bb2808 != 0) && (*(long *)(*(long *)PTR_DAT_04bb2808 + 8) != 0)) {
        iVar18 = FUN_02e2a238();
        fVar46 = (float)iVar18;
      }
      if (fVar46 / 30.0 <= 0.0) {
        lVar31 = *(long *)(lVar27 + 0x7e0);
        if ((lVar31 == 0) || (*(float *)(lVar31 + 8) == *(float *)(lVar31 + 0x10)))
        goto LAB_02a2f6c0;
        bVar16 = true;
        *(undefined1 **)(lVar31 + 8) = &DAT_3f8000003f800000;
        *(undefined8 *)(lVar31 + 0x10) = 0x3f800000;
        goto LAB_02a2f73c;
      }
      uVar25 = *puVar1;
      *(float *)(param_1 + 0x11f934) = fVar46 / 30.0;
    }
    bVar16 = false;
    *puVar1 = uVar25 & 0xfffffeff;
  }
LAB_02a2f73c:
  fVar46 = *(float *)(param_1 + 0x11f934);
  if (((0.0 <= fVar46) && (lVar31 = *(long *)(lVar27 + 0x7e0), lVar31 != 0)) &&
     (fVar44 = *(float *)(lVar31 + 8), fVar44 != *(float *)(lVar31 + 0x10))) {
    *(undefined4 *)(lVar31 + 0x10) = 0;
    if ((fVar46 == 0.0) || (fVar44 == 0.0)) {
      *(undefined8 *)(lVar31 + 8) = 0;
      *(undefined4 *)(lVar31 + 0x14) = 0;
    }
    else {
      lVar34 = *(long *)puVar15;
      fVar46 = (0.0 - fVar44) / fVar46;
      *(float *)(lVar31 + 0x14) = fVar46;
      fVar44 = fVar44 + *(float *)(*(long *)(lVar34 + 0x10) + 0x1c) * fVar46;
      if (0.0 <= fVar46) {
        if (0.0 < fVar44) goto LAB_02a2f7a4;
      }
      else if (fVar44 < 0.0) {
LAB_02a2f7a4:
        fVar44 = 0.0;
      }
      *(float *)(lVar31 + 0xc) = fVar44;
    }
    *(undefined4 *)(param_1 + 0x11f934) = 0xbf800000;
  }
  puVar14 = PTR_DAT_04bb26a0;
  iVar18 = (**(code **)(**(long **)PTR_DAT_04bb26a0 + 0x70))();
  if (*(char *)(*(long *)puVar4 + 0x7f9) != '\0') {
    iVar18 = *(int *)(*(long *)puVar4 + 0x7fc);
  }
  if (iVar18 == 2) {
    FUN_03c43770(lVar27);
    if (*(int *)(lVar27 + 0x350) == 1) {
      if (*(long **)puVar14 == (long *)0x0) {
        uVar43 = 1;
      }
      else {
        uVar43 = (**(code **)(**(long **)puVar14 + 0x38))();
      }
      FUN_03b4c5b0(*(undefined8 *)puVar15,uVar43);
      *(undefined4 *)(lVar27 + 0x350) = 0;
    }
  }
  if (!bVar16) goto joined_r0x02a2f8e4;
  fVar46 = *(float *)(lVar27 + 0x7e8);
  if (fVar46 < 0.0) {
    pfVar22 = (float *)(**(code **)(*(long *)(lVar27 + 0x388) + 0xf0))(lVar27 + 0x388);
    fVar46 = *pfVar22;
  }
  lVar27 = *(long *)(lVar27 + 0x7e0);
  if ((lVar27 == 0) || (fVar46 < 0.0)) goto joined_r0x02a2f8e4;
  *(undefined4 *)(lVar27 + 0x10) = 0;
  if ((fVar46 == 0.0) || (fVar44 = *(float *)(lVar27 + 8), fVar44 == 0.0)) {
    *(undefined8 *)(lVar27 + 8) = 0;
    *(undefined4 *)(lVar27 + 0x14) = 0;
    goto joined_r0x02a2f8e4;
  }
  lVar31 = *(long *)puVar15;
  fVar46 = (0.0 - fVar44) / fVar46;
  *(float *)(lVar27 + 0x14) = fVar46;
  fVar44 = fVar44 + *(float *)(*(long *)(lVar31 + 0x10) + 0x1c) * fVar46;
  if (0.0 <= fVar46) {
    if (0.0 < fVar44) goto LAB_02a2f8d8;
  }
  else if (fVar44 < 0.0) {
LAB_02a2f8d8:
    fVar44 = 0.0;
  }
  *(float *)(lVar27 + 0xc) = fVar44;
joined_r0x02a2f8e4:
  if (bVar17) {
    uVar21 = *(undefined8 *)(*(long *)puVar15 + 0x98);
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    local_98e8 = "CPU_VoiceDistortion_1ch";
    local_98f0 = puVar4;
    plVar23 = (long *)FUN_03b80b70(uVar21,&local_98f0);
    local_98e8 = "DSP_VoicePhoneFilter_1ch";
    local_98f0 = puVar4;
    plVar41 = (long *)FUN_03b80b70(uVar21,&local_98f0);
    if (plVar23 != (long *)0x0) {
      plVar23 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23);
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))(plVar23,0);
      }
    }
    if (plVar41 != (long *)0x0) {
      plVar23 = (long *)(**(code **)(*plVar41 + 0x10))(plVar41);
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))(plVar23,0);
      }
    }
  }
  return;
}

