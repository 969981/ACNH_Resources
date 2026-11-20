
undefined8 FUN_03ffdde0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  MutexType *pMVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  float *pfVar8;
  undefined *puVar9;
  long *plVar10;
  void *__dest;
  long *plVar11;
  long lVar12;
  undefined2 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (6 < *(byte *)((long)param_2 + 0x1c)) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  uVar2 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  param_3[4] = param_2[4];
  param_3[5] = uVar4;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  nn::audio::InitializeAudioOutParameter((AudioOutParameter *)&local_70);
  uVar5 = *(undefined4 *)param_2;
  uVar19 = 2;
  if (2 < *(byte *)((long)param_2 + 0x1c)) {
    uVar19 = 6;
  }
  *(undefined4 *)(param_1 + 0x4bc) = uVar19;
  local_70._0_6_ = CONCAT24((short)uVar19,uVar5);
  local_74 = nn::audio::OpenDefaultAudioOut
                       ((AudioOut *)(param_1 + 8),(SystemEvent *)(param_1 + 0x170),
                        (AudioOutParameter *)&local_70);
  if ((local_74 != 0) ||
     (local_74 = nn::audio::StartAudioOut((AudioOut *)(param_1 + 8)), plVar10 = DAT_05b059a0,
     local_74 != 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_74);
  }
  lVar15 = param_3[2];
  uVar22 = lVar15 + 1;
  if (lVar15 != -1) {
    uVar16 = *(ulong *)(param_1 + 0x538);
    if (uVar22 <= uVar16) goto LAB_03ffe010;
    if (lVar15 == 0) {
      *(undefined8 *)(param_1 + 0x538) = 1;
      goto LAB_03ffe010;
    }
    if (-1 < (long)uVar22) {
      uVar18 = (**(code **)(*DAT_05b059a0 + 0x28))(DAT_05b059a0);
      if ((uVar18 & 1) == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10,0);
        __dest = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar22 * 2,2);
      }
      else {
        __dest = (void *)(**(code **)(*plVar10 + 0x20))(plVar10,0,uVar22 * 2,2);
      }
      if (__dest != (void *)0x0) {
        uVar17 = *(ulong *)(param_1 + 0x568);
        uVar18 = *(ulong *)(param_1 + 0x570);
        if (uVar18 < uVar17) {
          memcpy(__dest,*(void **)(param_1 + 0x550),uVar18 << 1);
          lVar15 = uVar16 - *(long *)(param_1 + 0x568);
          memcpy((void *)((long)__dest + lVar15 * -2 + uVar22 * 2),
                 (void *)(*(long *)(param_1 + 0x550) + *(long *)(param_1 + 0x568) * 2),lVar15 * 2);
          *(ulong *)(param_1 + 0x568) = uVar22 - lVar15;
        }
        else if (uVar17 < uVar18) {
          uVar20 = *(ulong *)(param_1 + 0x538);
          uVar18 = (uVar20 - uVar17) + uVar18;
          uVar16 = 0;
          if (uVar20 <= uVar18) {
            uVar16 = uVar20;
          }
          memcpy(__dest,(void *)(*(long *)(param_1 + 0x550) + uVar17 * 2),(uVar18 - uVar16) * 2);
        }
        plVar11 = *(long **)(param_1 + 0x540);
        *(long **)(param_1 + 0x540) = plVar10;
        *(undefined8 *)(param_1 + 0x558) = 0;
        lVar15 = *(long *)(param_1 + 0x550);
        *(void **)(param_1 + 0x550) = __dest;
        *(ulong *)(param_1 + 0x560) = uVar22;
        *(ulong *)(param_1 + 0x538) = uVar22;
        if (lVar15 != 0) {
          (**(code **)(*plVar11 + 0x18))();
        }
        goto LAB_03ffe010;
      }
    }
  }
  FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
LAB_03ffe010:
  uVar22 = param_3[2];
  if (*(ulong *)(param_1 + 0x598) < uVar22) {
    if (((long)uVar22 < 0) ||
       (lVar15 = (**(code **)(**(long **)(param_1 + 0x578) + 0x10))
                           (*(long **)(param_1 + 0x578),uVar22 << 1,*(undefined8 *)(param_1 + 0x580)
                           ), lVar15 == 0)) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x588);
      if (lVar12 != 0) {
        if (*(long *)(param_1 + 0x590) != 0) {
          uVar16 = 0;
          do {
            lVar12 = uVar16 * 2;
            uVar16 = uVar16 + 1;
            *(undefined2 *)(lVar15 + lVar12) = *(undefined2 *)(*(long *)(param_1 + 0x588) + lVar12);
          } while (uVar16 < *(ulong *)(param_1 + 0x590));
          lVar12 = *(long *)(param_1 + 0x588);
        }
        (**(code **)(**(long **)(param_1 + 0x578) + 0x18))(*(long **)(param_1 + 0x578),lVar12);
      }
      *(long *)(param_1 + 0x588) = lVar15;
      *(ulong *)(param_1 + 0x598) = uVar22;
    }
  }
  *(undefined4 *)(param_1 + 0x5b0) = 1;
  *(undefined4 *)(param_1 + 0x5b4) = 1;
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)((long)param_3 + 4);
  uVar22 = (ulong)*(byte *)((long)param_3 + 0x1c);
  *(uint *)(param_1 + 0x4b8) = (uint)*(byte *)((long)param_3 + 0x1c);
  if (*(char *)((long)param_3 + 0x1c) != '\0') {
    uVar16 = 0;
    do {
      *(undefined2 *)(param_1 + 0x5a0 + uVar16 * 2) = 0;
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(byte *)((long)param_3 + 0x1c));
  }
  uVar18 = param_3[2];
  pMVar1 = (MutexType *)(param_1 + 0x518);
  uVar16 = (long)(*(float *)(param_2 + 3) * (float)uVar18);
  if (uVar18 <= (ulong)(long)(*(float *)(param_2 + 3) * (float)uVar18)) {
    uVar16 = uVar18;
  }
  uVar18 = 0;
  if (uVar22 != 0) {
    uVar18 = uVar16 / uVar22;
  }
  uVar16 = uVar18 * uVar22;
  if (uVar18 * uVar22 <= (ulong)*(ushort *)((long)param_3 + 0xe)) {
    uVar16 = (ulong)*(ushort *)((long)param_3 + 0xe);
  }
  *(ulong *)(param_1 + 0x510) = uVar16;
  *(undefined8 *)(param_1 + 0x4cc) = 0x447a000038d1b717;
  *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_3 + 4);
  iVar6 = *(int *)(param_3 + 1);
  nn::os::LockMutex(pMVar1);
  uVar14 = (uint)(*(int *)(param_1 + 0x508) * iVar6) / 1000;
  *(uint *)(param_1 + 0x504) = uVar14;
  *(uint *)(param_1 + 0x500) = uVar14;
  nn::os::UnlockMutex(pMVar1);
  bVar7 = *(byte *)((long)param_3 + 0xc);
  nn::os::LockMutex(pMVar1);
  *(uint *)(param_1 + 0x4f8) = (uint)bVar7;
  fVar23 = (float)bVar7 / 100.0;
  if (fVar23 == 0.0) {
    uVar13 = 0;
  }
  else {
    fVar23 = expf(fVar23 * 4.65);
    uVar13 = (undefined2)(int)(fVar23 * 0.0095616 * 128.0);
  }
  *(undefined2 *)(param_1 + 0x4fc) = uVar13;
  nn::os::UnlockMutex(pMVar1);
  uVar22 = *(ulong *)(param_1 + 0x4e0);
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x508));
  fVar24 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x50c));
  fVar23 = fVar23 / fVar24;
  *(float *)(param_1 + 0x4c4) = fVar23;
  *(float *)(param_1 + 0x4c8) = fVar23;
  puVar9 = PTR_DAT_04bdf328;
  if (uVar22 == 0x10) {
    pfVar21 = *(float **)(param_1 + 0x4e8);
  }
  else {
    pfVar21 = (float *)(**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                                 (*(long **)PTR_DAT_04bdf328,0x40,0);
    uVar16 = uVar22;
    if (0xf < uVar22) {
      uVar16 = 0x10;
    }
    if (uVar16 != 0) {
      lVar12 = *(long *)(param_1 + 0x4e8);
      lVar15 = 0;
      do {
        *(undefined4 *)((long)pfVar21 + lVar15) = *(undefined4 *)(lVar12 + lVar15);
        lVar12 = *(long *)(param_1 + 0x4e8);
        pfVar8 = (float *)(lVar12 + lVar15);
        lVar15 = lVar15 + 4;
        *(float *)(param_1 + 0x4f0) = *pfVar8 + *(float *)(param_1 + 0x4f0);
      } while (uVar16 * 4 != lVar15);
    }
    if (uVar22 < 0x10) {
      uVar16 = uVar22;
      if ((uVar22 & 1) != 0) {
        pfVar21[uVar22] = fVar23;
        *(float *)(param_1 + 0x4f0) = fVar23 + *(float *)(param_1 + 0x4f0);
        uVar16 = uVar22 + 1;
      }
      if (uVar22 != 0xf) {
        do {
          pfVar8 = pfVar21 + uVar16;
          uVar16 = uVar16 + 2;
          *pfVar8 = fVar23;
          *(float *)(param_1 + 0x4f0) = fVar23 + *(float *)(param_1 + 0x4f0);
          pfVar8[1] = fVar23;
          *(float *)(param_1 + 0x4f0) = fVar23 + *(float *)(param_1 + 0x4f0);
        } while (uVar16 != 0x10);
      }
    }
    (**(code **)(**(long **)puVar9 + 0x18))(*(long **)puVar9,*(undefined8 *)(param_1 + 0x4e8));
    fVar23 = *(float *)(param_1 + 0x4c8);
    *(float **)(param_1 + 0x4e8) = pfVar21;
    *(undefined8 *)(param_1 + 0x4e0) = 0x10;
  }
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *pfVar21 = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 4) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 8) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0xc) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x10) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x14) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x18) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x1c) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x20) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x24) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x28) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x2c) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x30) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x34) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x38) = fVar23;
  *(float *)(*(long *)(param_1 + 0x4e8) + 0x3c) = fVar23;
  *(float *)(param_1 + 0x4f0) = fVar23 * 16.0;
  *(float *)(param_1 + 0x4f4) = fVar23;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  if (*(char *)((long)param_2 + 0x24) != '\0') {
    uVar18 = *(ulong *)(param_1 + 0x538);
    lVar15 = *(long *)(param_1 + 0x570);
    uVar22 = (uVar18 - *(long *)(param_1 + 0x568)) + lVar15;
    uVar16 = 0;
    if (uVar18 <= uVar22) {
      uVar16 = uVar18;
    }
    for (uVar22 = uVar22 - uVar16; uVar22 < 0x100; uVar22 = uVar22 - uVar16) {
      *(undefined2 *)(*(long *)(param_1 + 0x550) + lVar15 * 2) =
           *(undefined2 *)((long)param_2 + 0x26);
      uVar18 = *(ulong *)(param_1 + 0x538);
      uVar22 = *(long *)(param_1 + 0x570) + 1;
      uVar16 = 0;
      if (uVar18 <= uVar22) {
        uVar16 = uVar18;
      }
      lVar15 = uVar22 - uVar16;
      *(long *)(param_1 + 0x570) = lVar15;
      uVar22 = (uVar18 - *(long *)(param_1 + 0x568)) + lVar15;
      uVar16 = 0;
      if (uVar18 <= uVar22) {
        uVar16 = uVar18;
      }
    }
    uVar14 = 0;
    if (*(uint *)(param_1 + 0x4b8) != 0) {
      uVar14 = 0x100 / *(uint *)(param_1 + 0x4b8);
    }
    *(uint *)(param_1 + 0x4c0) = uVar14 << 0xc;
  }
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  uStack_58 = param_3[5];
  local_70 = "NX Sound Thread";
  uStack_68 = 0;
  local_60 = 0x7fffffff00000004;
  uVar22 = FUN_04002aec(param_1 + 0x1e8,FUN_03ffda80,param_1,&local_70,0);
  if ((uVar22 >> 0x1e & 3) != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  nn::os::StartThread((ThreadType *)(param_1 + 0x230));
  *(undefined4 *)(param_1 + 0x448) = 2;
  return 1;
}

