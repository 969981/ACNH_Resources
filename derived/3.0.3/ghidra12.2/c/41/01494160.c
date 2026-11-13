
void FUN_01494160(long param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  long *plVar19;
  ulong uVar20;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined *local_a8;
  long lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 auStack_84 [4];
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  pMVar1 = (MutexType *)(param_1 + 0x300);
  nn::os::LockMutex(pMVar1);
  pMVar2 = (MutexType *)(param_1 + 0x3b0);
  nn::os::LockMutex(pMVar2);
  puVar8 = PTR_DAT_04bb43c0;
  puVar7 = PTR_DAT_04bb27c0;
  if (*(long *)(param_1 + 0x380) != param_1 + 0x378) {
    lVar15 = (long)*(int *)(param_1 + 0x38c);
    puVar18 = (uint *)(*(long *)(param_1 + 0x380) - lVar15);
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    lVar17 = (long)puVar18 + lVar15;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    puVar5 = PTR_DAT_04bb3290 + 0x10;
    do {
      lVar17 = *(long *)(lVar17 + 8);
      lVar13 = *(long *)puVar7;
      if (lVar13 == 0) {
        plVar19 = (long *)0x0;
        uVar20 = 0;
      }
      else {
        uVar10 = *puVar18;
        if ((((uVar10 == 0) ||
             (plVar19 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                  ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
            ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar10)) {
          plVar19 = (long *)0x0;
        }
        if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar13 = *(long *)puVar7;
          iVar9 = (**(code **)(*plVar11 + 0x60))();
          if (iVar9 < 0x11) {
            uVar20 = 1;
            uVar10 = 1;
          }
          else {
            uVar10 = *(uint *)(lVar13 + 0x5e8);
            if (4 < uVar10) goto LAB_01494310;
            uVar20 = 0x101000100 >> (((ulong)uVar10 & 7) << 3);
            uVar10 = (uint)uVar20;
          }
        }
        else {
LAB_01494310:
          uVar20 = 0;
          uVar10 = 0;
        }
        if (plVar19 != (long *)0x0) {
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = puVar5;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar20 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb5920);
          if ((uVar20 & 1) == 0) {
            uVar10 = 0;
          }
          uVar20 = (ulong)uVar10;
        }
      }
      uVar12 = FUN_015039ac(puVar18);
      if ((((uVar12 & 1) != 0) && (plVar19 != (long *)0x0)) && ((uVar20 & 0xff) != 0)) {
        FUN_01476a50(&local_68,plVar19);
        local_70 = 0;
        lVar13 = *(long *)puVar8;
        local_78 = local_68;
        uStack_74 = uStack_64;
        local_80 = puVar3;
        uVar10 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar8 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_68);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
               (((puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8),
                 puVar14 != (uint *)0x0 && (uVar10 = *puVar14, uVar10 != 0)) &&
                (puVar14 != (uint *)(ulong)uVar10)))) {
              puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar10);
              if (((*puVar16 != 0) && (uVar10 = puVar16[1], uVar10 != 0)) &&
                 ((ulong)(ushort)puVar16[2] != 0)) {
                lVar13 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar13 != 0) {
                  uVar6 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar6 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar10);
                  }
                  if (*puVar16 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                     (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2) == 0x15)) {
                    local_b0 = local_68;
                    uStack_ac = uStack_64;
                    lStack_a0 = plVar19[0x59];
                    local_98 = (undefined4)plVar19[0x5a];
                    uStack_94 = 1;
                    local_90 = 0xf;
                    local_a8 = puVar4;
                    nn::os::LockMutex(pMVar2);
                    plVar19 = (long *)((long)puVar18 + (long)*(int *)(param_1 + 0x38c));
                    if (*plVar19 != 0) {
                      *(long *)(*plVar19 + 8) = plVar19[1];
                    }
                    if ((long *)plVar19[1] != (long *)0x0) {
                      *(long *)plVar19[1] = *plVar19;
                    }
                    *plVar19 = 0;
                    plVar19[1] = 0;
                    *(int *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + -1;
                    nn::os::UnlockMutex(pMVar2);
                    nn::os::LockMutex(pMVar1);
                    plVar19 = (long *)((long)puVar18 + (long)*(int *)(param_1 + 0x2dc));
                    lVar13 = *(long *)(param_1 + 0x2c8);
                    *(long **)(param_1 + 0x2c8) = plVar19;
                    *plVar19 = lVar13;
                    plVar19[1] = param_1 + 0x2c8;
                    if (lVar13 != 0) {
                      *(long **)(lVar13 + 8) = plVar19;
                    }
                    *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + 1;
                    nn::os::UnlockMutex(pMVar1);
                    FUN_01492028(param_1,auStack_84,&local_b0);
                  }
                }
              }
            }
          }
        }
      }
      puVar18 = (uint *)(lVar17 - lVar15);
    } while (puVar18 != (uint *)((param_1 + 0x378) - lVar15));
  }
  nn::os::UnlockMutex(pMVar2);
  nn::os::UnlockMutex(pMVar1);
  return;
}

