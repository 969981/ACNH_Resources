
/* WARNING: Removing unreachable block (ram,0x03c3d380) */
/* WARNING: Removing unreachable block (ram,0x03c3d368) */
/* WARNING: Removing unreachable block (ram,0x03c3d398) */

void FUN_03c3d310(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  uint uVar21;
  
  lVar18 = param_1[0x1f];
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_03eb82fc(lVar18,2);
  lVar19 = 1;
  *(undefined1 *)(lVar18 + 0x3db) = 1;
  *(undefined8 *)(lVar18 + 0x438) = 0;
  uVar13 = nn::os::GetSystemTick();
  *(undefined8 *)(lVar18 + 0x3f8) = uVar13;
  lVar18 = param_1[0x1a];
  if (lVar18 != 0) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)(lVar14 + 0xa8);
    *(long *)(lVar14 + 0xa8) = lVar18;
  }
  lVar14 = *(long *)PTR_DAT_04bb2738;
  lVar18 = *(long *)(lVar14 + 0x7e0);
  if (lVar18 != 0) {
    *(undefined1 **)(lVar18 + 8) = &DAT_3f8000003f800000;
    *(undefined8 *)(lVar18 + 0x10) = 0x3f800000;
  }
  puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar14 + 0x388) + 0xf0))(lVar14 + 0x388);
  *(undefined4 *)(lVar14 + 0x7e8) = *puVar15;
  (**(code **)(*param_1 + 0x18))(param_1);
  puVar11 = PTR_DAT_04bbdca0;
  puVar10 = PTR_DAT_04bbdc98;
  puVar9 = PTR_DAT_04bbdb78;
  puVar8 = PTR_DAT_04bbdb38;
  puVar7 = PTR_DAT_04bbdb30;
  puVar6 = PTR_DAT_04bbdb10;
  puVar5 = PTR_DAT_04bbdb08;
  uVar21 = 0;
  puVar1 = PTR_DAT_04bbdb18 + 0x10;
  puVar2 = PTR_DAT_04bbdb40 + 0x10;
  puVar3 = PTR_DAT_04bbdb58 + 0x10;
  do {
    uVar4 = uVar21;
    if (*(uint *)(*(long *)puVar9 + 0x20) <= uVar21) {
      uVar4 = 0;
    }
    plVar20 = *(long **)(*(long *)(*(long *)puVar9 + 0x28) + (ulong)uVar4 * 8);
    if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
      *(undefined **)puVar5 = puVar1;
      __cxa_guard_release(puVar6);
    }
    if ((plVar20 != (long *)0x0) &&
       (uVar16 = (**(code **)(*plVar20 + 0x10))(plVar20,puVar5), (uVar16 & 1) != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        *(undefined **)puVar7 = puVar2;
        __cxa_guard_release(puVar8);
      }
      uVar16 = (**(code **)(*plVar20 + 0x10))(plVar20,puVar7);
      if ((uVar16 & 1) == 0) {
        if (((*puVar11 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar11), iVar12 != 0)) {
          *(undefined **)puVar10 = puVar3;
          __cxa_guard_release(puVar11);
        }
        uVar16 = (**(code **)(*plVar20 + 0x10))(plVar20,puVar10);
        if ((uVar16 & 1) != 0) {
          if (((*puVar11 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar11), iVar12 != 0)) {
            *(undefined **)puVar10 = PTR_DAT_04bbdb58 + 0x10;
            __cxa_guard_release(puVar11);
          }
          uVar16 = (**(code **)(*plVar20 + 0x10))(plVar20,puVar10);
          plVar17 = plVar20;
          if ((uVar16 & 1) == 0) {
            plVar17 = (long *)0x0;
          }
          if (plVar17 != (long *)0x0) {
            plVar17 = plVar17 + 0x196;
            goto LAB_03c3d568;
          }
        }
      }
      else {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          *(undefined **)puVar7 = PTR_DAT_04bbdb40 + 0x10;
          __cxa_guard_release(puVar8);
        }
        uVar16 = (**(code **)(*plVar20 + 0x10))(plVar20,puVar7);
        plVar17 = plVar20;
        if ((uVar16 & 1) == 0) {
          plVar17 = (long *)0x0;
        }
        if (plVar17 != (long *)0x0) {
          plVar17 = plVar17 + 0x1a4;
LAB_03c3d568:
          uVar16 = (**(code **)(*plVar17 + 8))();
          if (((uVar16 & 1) != 0) && ((*(ushort *)(plVar20 + 0x11) >> 1 & 1) == 0)) {
            nn::os::LockMutex((MutexType *)(plVar20[4] + 0x4f8));
            *(ushort *)(plVar20 + 0x11) = *(ushort *)(plVar20 + 0x11) | 0x22;
            nn::os::UnlockMutex((MutexType *)(plVar20[4] + 0x4f8));
          }
        }
      }
    }
    uVar21 = uVar21 + 1;
    if (uVar21 == 0x1d) {
      if (param_1[0x1d] != 0) {
        *(undefined1 *)(param_1[0x1d] + 0x160) = 1;
      }
      FUN_03eb84a8(param_1[0x1f]);
      if (lVar19 != 1) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        *(long *)(lVar18 + 0xa8) = lVar19;
      }
      return;
    }
  } while( true );
}

