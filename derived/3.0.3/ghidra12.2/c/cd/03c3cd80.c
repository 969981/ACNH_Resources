
/* WARNING: Removing unreachable block (ram,0x03c3d1e0) */
/* WARNING: Removing unreachable block (ram,0x03c3ce00) */
/* WARNING: Removing unreachable block (ram,0x03c3cdd0) */
/* WARNING: Removing unreachable block (ram,0x03c3cdec) */
/* WARNING: Removing unreachable block (ram,0x03c3d1c8) */
/* WARNING: Removing unreachable block (ram,0x03c3d1f8) */

void FUN_03c3cd80(long *param_1)

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
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  
  lVar21 = 1;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_03eb82fc(param_1[0x1f],0);
  lVar15 = param_1[0x1f];
  *(undefined1 *)(lVar15 + 0x3d9) = 1;
  *(undefined8 *)(lVar15 + 0x428) = 0;
  uVar12 = nn::os::GetSystemTick();
  *(undefined8 *)(lVar15 + 1000) = uVar12;
  lVar15 = param_1[0x1a];
  if (lVar15 != 0) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)(lVar13 + 0xa8);
    *(long *)(lVar13 + 0xa8) = lVar15;
  }
  if (*(long *)PTR_DAT_04bb2730 != 0) {
    FUN_03c208c4();
  }
  *(long **)((long)param_1 + 0x54) = param_1;
  *(undefined1 **)((long)param_1 + 0xbc) = &LAB_03c3d264;
  *(undefined1 **)((long)param_1 + 0x5c) = &LAB_03c3d248;
  *(undefined ***)((long)param_1 + 0x4c) = &PTR_LAB_04b7f0f0;
  param_1[7] = (long)"SysSceneDraw2D";
  *(undefined ***)((long)param_1 + 0xac) = &PTR_LAB_04b7f0f0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  *(long **)((long)param_1 + 0xb4) = param_1;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  param_1[0x13] = (long)"SysSceneDraw3D";
  *(undefined4 *)(param_1 + 0x14) = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  if (param_1[0x1e] != 0) {
    FUN_03c3dd30();
  }
  puVar10 = PTR_DAT_04bbdc98;
  puVar9 = PTR_DAT_04bbdb78;
  puVar8 = PTR_DAT_04bbdb38;
  puVar7 = PTR_DAT_04bbdb30;
  puVar6 = PTR_DAT_04bbdb10;
  puVar5 = PTR_DAT_04bbdb08;
  uVar23 = 0;
  puVar1 = PTR_DAT_04bbdb18 + 0x10;
  puVar2 = PTR_DAT_04bbdb40 + 0x10;
  puVar3 = PTR_DAT_04bbdb58 + 0x10;
  do {
    uVar4 = uVar23;
    if (*(uint *)(*(long *)puVar9 + 0x20) <= uVar23) {
      uVar4 = 0;
    }
    plVar22 = *(long **)(*(long *)(*(long *)puVar9 + 0x28) + (ulong)uVar4 * 8);
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
      *(undefined **)puVar5 = puVar1;
      __cxa_guard_release(puVar6);
    }
    if ((plVar22 != (long *)0x0) &&
       (uVar14 = (**(code **)(*plVar22 + 0x10))(plVar22,puVar5), (uVar14 & 1) != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        *(undefined **)puVar7 = puVar2;
        __cxa_guard_release(puVar8);
      }
      uVar14 = (**(code **)(*plVar22 + 0x10))(plVar22,puVar7);
      if ((uVar14 & 1) == 0) {
LAB_03c3cfe4:
        if (((*PTR_DAT_04bbdca0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04bbdca0), iVar11 != 0)) {
          *(undefined **)puVar10 = puVar3;
          __cxa_guard_release(PTR_DAT_04bbdca0);
        }
        uVar14 = (**(code **)(*plVar22 + 0x10))(plVar22,puVar10);
        if ((uVar14 & 1) != 0) {
          if (((*PTR_DAT_04bbdca0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bbdca0), iVar11 != 0)) {
            *(undefined **)puVar10 = PTR_DAT_04bbdb58 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbdca0);
          }
          uVar14 = (**(code **)(*plVar22 + 0x10))(plVar22,puVar10);
          plVar16 = plVar22;
          if ((uVar14 & 1) == 0) {
            plVar16 = (long *)0x0;
          }
          uVar14 = (**(code **)plVar16[0x196])(plVar16 + 0x196);
          plVar16 = param_1 + 2;
          if ((uVar14 & 1) != 0) goto LAB_03c3d050;
        }
      }
      else {
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          *(undefined **)puVar7 = PTR_DAT_04bbdb40 + 0x10;
          __cxa_guard_release(puVar8);
        }
        uVar14 = (**(code **)(*plVar22 + 0x10))(plVar22,puVar7);
        plVar16 = plVar22;
        if ((uVar14 & 1) == 0) {
          plVar16 = (long *)0x0;
        }
        uVar14 = (**(code **)plVar16[0x1a4])(plVar16 + 0x1a4);
        plVar16 = param_1 + 0xe;
        if ((uVar14 & 1) == 0) goto LAB_03c3cfe4;
LAB_03c3d050:
        uVar4 = *(uint *)(plVar22 + 0x16);
        if (uVar4 != 0) {
          uVar17 = 0;
          do {
            lVar15 = (long)(int)uVar17;
            if (*(uint *)(plVar22 + 0x16) <= uVar17) {
              lVar15 = 0;
            }
            lVar13 = plVar22[0x17] + lVar15 * 0x820;
            piVar18 = (int *)(lVar13 + 8);
            iVar11 = *piVar18;
            puVar19 = *(undefined8 **)(lVar13 + 0x10);
            if (iVar11 != 0) {
              lVar13 = (long)iVar11 << 3;
              puVar20 = puVar19;
              do {
                if ((long *)*puVar20 == plVar16) goto LAB_03c3d064;
                puVar20 = puVar20 + 1;
                lVar13 = lVar13 + -8;
              } while (lVar13 != 0);
            }
            if (iVar11 < *(int *)(plVar22[0x17] + lVar15 * 0x820 + 0xc)) {
              puVar19[iVar11] = plVar16;
              *piVar18 = *piVar18 + 1;
            }
LAB_03c3d064:
            uVar17 = uVar17 + 1;
          } while (uVar4 != uVar17);
        }
      }
    }
    uVar23 = uVar23 + 1;
    if (uVar23 == 0x20) {
      lVar15 = param_1[0x1f];
      FUN_03eb82fc(lVar15,1);
      *(undefined1 *)(lVar15 + 0x3da) = 1;
      *(undefined8 *)(lVar15 + 0x430) = 0;
      uVar12 = nn::os::GetSystemTick();
      *(undefined8 *)(lVar15 + 0x3f0) = uVar12;
      if (lVar21 != 1) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        *(long *)(lVar15 + 0xa8) = lVar21;
      }
      return;
    }
  } while( true );
}

