
/* WARNING: Removing unreachable block (ram,0x01db93b4) */
/* WARNING: Removing unreachable block (ram,0x01db965c) */

void FUN_01db91c0(long param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  short sVar13;
  short sVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  SteadyClockTimePoint SVar18;
  short sVar19;
  undefined4 uVar20;
  SteadyClockTimePoint *pSVar21;
  undefined8 uVar22;
  SteadyClockTimePoint local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_5c [4];
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if ((*(long *)(param_1 + 0xd0) != 0) ||
     (*(ulong *)(param_1 + 0xd8) != 0 && (*(ulong *)(param_1 + 0xd8) & 1) != 0)) {
    if (*(char *)(param_1 + 0x84bf) != '\0') {
      if (*(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 8) + 0x10) == 2) {
        local_58 = CONCAT44(local_58._4_4_,DAT_05378520);
        uVar8 = DAT_05378520;
        if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_05378520) {
          uVar8 = 0;
        }
        *(undefined1 *)
         (*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar8 * 0x38 + 0x2f) = 1;
      }
      *(char *)(param_1 + 0x84bf) = '\0';
    }
    if ((*(int *)(param_1 + 0xa8) != 0) &&
       ((DAT_0537c938 != '\x01' || (uVar10 = FUN_02640eb0(), (uVar10 & 1) != 0)))) {
      pcVar15 = *(code **)(param_1 + 0xd0);
      uVar10 = *(ulong *)(param_1 + 0xd8);
      *(long *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      if ((uVar10 & 1) != 0) {
        pcVar15 = *(code **)(pcVar15 + *(long *)(param_1 + 0x98 + ((long)uVar10 >> 1)));
      }
      (*pcVar15)();
      *(undefined1 *)(param_1 + 0x84c0) = 0;
    }
  }
  if (*(short *)(param_1 + 0x84fc) == 0) {
    sVar19 = 0;
    sVar13 = *(short *)(param_1 + 0x84fe);
    if (sVar13 != 0) goto LAB_01db92d8;
    sVar14 = 0;
  }
  else {
    sVar19 = *(short *)(param_1 + 0x84fc) + -1;
    *(short *)(param_1 + 0x84fc) = sVar19;
    sVar13 = *(short *)(param_1 + 0x84fe);
    sVar14 = 0;
    if (sVar13 != 0) {
LAB_01db92d8:
      sVar14 = sVar13 + -1;
      *(short *)(param_1 + 0x84fe) = sVar14;
    }
  }
  puVar6 = PTR_DAT_04bc10b0;
  if (((*(char *)(param_1 + 0x8502) != '\0') && (*(char *)(param_1 + 0x8503) == '\0')) &&
     ((*(char *)(*(long *)PTR_DAT_04bc10b0 + 0xa8) != '\0' ||
      (*(char *)(*(long *)PTR_DAT_04bc10e0 + 0x38) != '\0')))) {
    sVar19 = 0;
    *(undefined2 *)(param_1 + 0x84fc) = 0;
  }
  puVar5 = PTR_DAT_04bb39b0;
  switch(*(undefined4 *)(param_1 + 0x84f4)) {
  case 2:
    lVar17 = *(long *)PTR_DAT_04bb49f8;
    if (*(int *)(lVar17 + 0x68) == 0 && *(int *)(lVar17 + 0xb0) == 0) {
      uVar8 = *(uint *)(lVar17 + 0x28);
      if (uVar8 != 0xffffffff) {
        if (*(uint *)(lVar17 + 8) <= uVar8) {
          uVar8 = 0;
        }
        if (*(char *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar8 * 0x40 + 0x39) != '\0')
        goto LAB_01db9350;
      }
      uVar22 = 0x2cffffffff;
LAB_01db9460:
      *(undefined8 *)(param_1 + 0x84d8) = uVar22;
      *(undefined8 *)(param_1 + 0x84e0) = 0;
    }
    break;
  case 8:
  case 0xe:
    uVar10 = FUN_02f07acc();
    if ((uVar10 & 1) != 0) {
LAB_01db9350:
      uVar22 = 1;
      goto LAB_01db9460;
    }
    break;
  case 9:
  case 0xf:
    if ((*(byte *)(param_1 + 0x94) & 1) != 0) {
      *(undefined8 *)(param_1 + 0x84e0) = 0;
      bVar7 = *(int *)(param_1 + 0x48) != 1;
      uVar3 = 1;
      if (bVar7) {
        uVar3 = 0xffffffff;
      }
      uVar20 = 0;
      if (bVar7) {
        uVar20 = 0x1e;
      }
      *(undefined4 *)(param_1 + 0x84d8) = uVar3;
      *(undefined4 *)(param_1 + 0x84dc) = uVar20;
      local_58 = CONCAT44(local_58._4_4_,0xd);
      puVar11 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
      if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc73c8);
      }
      if ((puVar11 != (undefined8 *)0x0) &&
         (uVar10 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc73c0), (uVar10 & 1) != 0)) {
        *(undefined1 *)(puVar11[0x52] + 0x254) = 1;
      }
    }
    break;
  case 0xffffffff:
    if (*(char *)(*(long *)puVar6 + 0xa8) == '\0') {
      bVar7 = *(char *)(*(long *)PTR_DAT_04bc10e0 + 0x38) != '\0';
    }
    else {
      bVar7 = true;
    }
    bVar1 = false;
    if (*(char *)(param_1 + 0x8502) == '\0') {
      bVar1 = (bool)(bVar7 ^ 1);
    }
    if ((bVar1) || (sVar19 != 0)) goto LAB_01db96e4;
    lVar17 = *(long *)PTR_DAT_04bb39b0;
    pSVar21 = (SteadyClockTimePoint *)PTR_DAT_04bb32e0;
    if (lVar17 == 0) {
LAB_01db9738:
      if ((byte)*pSVar21 < 8) goto LAB_01db97b0;
LAB_01db9744:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01db97a8:
        pSVar21 = (SteadyClockTimePoint *)PTR_DAT_04bb5038;
        goto LAB_01db97b0;
      }
      lVar17 = **(long **)PTR_DAT_04bb27d0;
      bVar4 = *(byte *)(lVar17 + 0x473);
      pSVar21 = (SteadyClockTimePoint *)PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar2 = (uint *)(lVar17 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pSVar21 = (SteadyClockTimePoint *)(lVar17 + 0x471);
        }
      }
      local_78 = *pSVar21;
      if (7 < (byte)local_78) goto LAB_01db97a8;
    }
    else {
      if (*(int *)(lVar17 + 0x15c) != 0) {
        pSVar21 = (SteadyClockTimePoint *)(lVar17 + 0x158);
      }
      if (7 < (byte)*pSVar21) {
        if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pSVar21 = (SteadyClockTimePoint *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01db9738;
        }
        goto LAB_01db9744;
      }
LAB_01db97b0:
      local_78 = *pSVar21;
      if (7 < (byte)local_78) {
        local_78 = (SteadyClockTimePoint)0xff;
      }
    }
    sVar13 = *(short *)PTR_DAT_04bb6298;
    if (sVar13 == -1) {
LAB_01db9814:
      if (sVar14 == 0) {
        plVar12 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
        uVar10 = (**(code **)(*plVar12 + 0x18))(plVar12);
        if (((((uVar10 & 1) == 0) &&
             (uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12), (uVar10 & 1) == 0)) &&
            (*(int *)(param_1 + 0x84f4) == -1)) &&
           ((uVar10 = FUN_01db9aa8(param_1,&local_78,1), (uVar10 & 1) != 0 &&
            (*(int *)(*(long *)puVar5 + 0x15c) == 0)))) {
          *(undefined1 *)(param_1 + 0x8500) = 1;
          *(undefined8 *)(param_1 + 0x84f4) = 0x800000002;
          DAT_0537c938 = 0;
          SVar18 = local_78;
          if (7 < (byte)local_78) {
            SVar18 = (SteadyClockTimePoint)0xff;
          }
          *(SteadyClockTimePoint *)(param_1 + 0x84f1) = SVar18;
          if (*(undefined8 **)(param_1 + 0x84c8) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x84c8) = 0;
            *(undefined8 *)(param_1 + 0x84c8) = 0;
          }
          *(undefined2 *)(param_1 + 0x8506) = 0x101;
          FUN_01dba640(param_1);
          DAT_0537c938 = '\x01';
          if (*(char *)(param_1 + 0x8502) == '\0') {
            if (*(char *)(*(long *)puVar6 + 0xa8) == '\0') {
              *(undefined1 *)(param_1 + 0x8506) = 0;
            }
            if (*(char *)(*(long *)PTR_DAT_04bc10e0 + 0x38) == '\0') {
              *(undefined1 *)(param_1 + 0x8507) = 0;
            }
          }
        }
      }
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,0xf);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar13 * 8);
      if (0xff < (uint)(int)sVar13) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0xf & 1) == 0) goto LAB_01db9814;
    }
    *(undefined1 *)(param_1 + 0x8502) = 0;
    goto LAB_01db96e4;
  }
  puVar5 = PTR_DAT_04bc10e0;
  if (*(int *)(param_1 + 0x84d8) == 0) goto LAB_01db96e4;
  uVar8 = *(uint *)(param_1 + 0x84f4);
  if (*(char *)(param_1 + 0x8504) == '\0') {
    if (*(int *)(param_1 + 0x84d8) == 1) {
      if ((uVar8 & 0xfffffffe) == 6) goto LAB_01db949c;
      goto LAB_01db9690;
    }
    if (uVar8 == 7) {
LAB_01db949c:
      local_5c[0] = *(byte *)(param_1 + 0x84f1);
      if (7 < local_5c[0]) {
        local_5c[0] = 0xff;
      }
      lVar17 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_5c,1);
      if (lVar17 != 0) {
        lVar16 = lVar17 + 0x194b0;
        if (*(long *)(lVar17 + 0x194b8) == 0) {
          lVar16 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long *)(lVar16 + 0x2aca0) == 0) ||
           (puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x2aca0) + 0x10),
           puVar11 == (undefined8 *)0x0)) {
          uVar8 = 1;
        }
        else {
          uVar8 = (**(code **)*puVar11)();
          uVar8 = uVar8 ^ 1;
        }
        iVar9 = nn::time::GetStandardSteadyClockCurrentTimePoint(&local_78);
        if (iVar9 == 0) {
          if ((*(long *)(lVar16 + 0x2aca0) != 0) &&
             (plVar12 = *(long **)(*(long *)(lVar16 + 0x2aca0) + 0x20), plVar12 != (long *)0x0)) {
            local_58 = *(long *)(lVar16 + 0x2ac80);
            local_50 = *(undefined8 *)(lVar16 + 0x2ac88);
            uStack_48 = 0x180;
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
          }
          local_58 = CONCAT44(local_58._4_4_,1);
          lVar17 = *(long *)(lVar16 + 0x2ac88) + *(long *)(lVar16 + 0x2ac80);
          *(undefined8 *)(lVar17 + 0x28) = uStack_68;
          *(ulong *)(lVar17 + 0x18) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar17 + 0x20) = local_70;
        }
        if ((((uVar8 & 1) == 0) && (*(long *)(lVar16 + 0x2aca0) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x2aca0) + 0x18),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
      }
      uVar8 = *(uint *)(param_1 + 0x84f4);
      goto LAB_01db9690;
    }
    lVar17 = *(long *)puVar6;
    if ((*(char *)(lVar17 + 0xa8) != '\0') || (*(char *)(*(long *)PTR_DAT_04bc10e0 + 0x38) != '\0'))
    {
      if (uVar8 - 3 < 2) {
        *(undefined1 *)(lVar17 + 0xa8) = 0;
        *(undefined1 *)(*(long *)puVar5 + 0x38) = 0;
      }
      else if (uVar8 == 2) {
LAB_01db95e8:
        *(undefined2 *)(param_1 + 0x84fc) = 0x708;
      }
      else if (uVar8 == 1) {
        if (*(int *)(param_1 + 0x84dc) == 1) goto LAB_01db95e8;
        *(undefined1 *)(lVar17 + 0xa8) = 0;
        *(undefined1 *)(*(long *)PTR_DAT_04bc10e0 + 0x38) = 0;
        FUN_01dbb130(param_1 + 0x84f1);
      }
    }
    lVar17 = *(long *)(param_1 + 0x84c8);
    if (lVar17 != 0) {
      uVar22 = *(undefined8 *)(param_1 + 0x84dc);
      uVar3 = *(undefined4 *)(param_1 + 0x84e4);
      *(undefined4 *)(lVar17 + 8) = *(undefined4 *)(param_1 + 0x84d8);
      *(int *)(lVar17 + 0xc) = (int)uVar22;
      *(int *)(lVar17 + 0x10) = (int)((ulong)uVar22 >> 0x20);
      *(undefined4 *)(lVar17 + 0x14) = uVar3;
    }
  }
  else {
LAB_01db9690:
    *(uint *)(param_1 + 0x84f4) = uVar8 + 1;
    if (*(int *)(param_1 + 0x84f4) < *(int *)(param_1 + 0x84f8)) {
      FUN_01dba640(param_1);
      goto LAB_01db96e4;
    }
    lVar17 = *(long *)(param_1 + 0x84c8);
    if (lVar17 != 0) {
      *(undefined8 *)(lVar17 + 8) = 1;
      *(undefined8 *)(lVar17 + 0x10) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x8504) = 0;
  *(undefined4 *)(param_1 + 0x84f4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x84f1) = 0xff;
  *(undefined1 *)(param_1 + 0x84e8) = 0;
  DAT_0537c938 = '\0';
LAB_01db96e4:
  if (*(char *)(*(long *)puVar6 + 0xa8) == '\0') {
    bVar7 = *(char *)(*(long *)PTR_DAT_04bc10e0 + 0x38) != '\0';
  }
  else {
    bVar7 = true;
  }
  *(bool *)(param_1 + 0x8503) = bVar7;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

