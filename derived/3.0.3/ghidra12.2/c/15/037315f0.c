
undefined8 FUN_037315f0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  undefined2 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined2 local_64 [2];
  
  puVar4 = PTR_DAT_04bc3a48;
  puVar3 = PTR_DAT_04bb27f8;
  if (*(int *)(param_1 + 0xe0) == 0) {
    return 1;
  }
  lVar18 = (long)*(int *)(param_1 + 0xe0) << 3;
  plVar16 = *(long **)(param_1 + 0xe8);
  puVar1 = PTR_DAT_04bb3750 + 0x10;
  do {
    lVar11 = *plVar16;
    if ((*(ushort *)(lVar11 + 0x114) & 0x21) == 0) {
      lVar13 = *(long *)puVar3;
      if (lVar13 != 0) {
        if ((((*(ushort **)puVar4 == (ushort *)0x0) || ((**(ushort **)puVar4 & 1) == 0)) ||
            (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar17 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar17 == 0)) {
          uVar14 = *(undefined2 *)(lVar13 + 0x2a);
        }
        else if ((*(long **)(lVar17 + 0x60) == (long *)0x0) ||
                (puVar8 = (undefined8 *)**(long **)(lVar17 + 0x60), puVar8 == (undefined8 *)0x0)) {
          uVar14 = *(undefined2 *)(*(long *)(lVar17 + 0x48) + *(long *)(lVar17 + 0x40) + 2);
        }
        else {
          uVar9 = (**(code **)*puVar8)();
          uVar14 = *(undefined2 *)(*(long *)(lVar17 + 0x48) + *(long *)(lVar17 + 0x40) + 2);
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar17 + 0x60) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar17 + 0x60) + 8), puVar8 != (undefined8 *)0x0))
          {
            (**(code **)*puVar8)();
          }
        }
        local_64[0] = uVar14;
        uVar5 = FUN_03770770(local_64,0);
        if ((((*(ushort **)puVar4 == (ushort *)0x0) || ((**(ushort **)puVar4 & 1) == 0)) ||
            (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar17 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar17 == 0)) {
          sVar12 = *(short *)(lVar13 + 0x2a);
        }
        else if ((*(long **)(lVar17 + 0x60) == (long *)0x0) ||
                (puVar8 = (undefined8 *)**(long **)(lVar17 + 0x60), puVar8 == (undefined8 *)0x0)) {
          sVar12 = *(short *)(*(long *)(lVar17 + 0x48) + *(long *)(lVar17 + 0x40) + 2);
        }
        else {
          uVar9 = (**(code **)*puVar8)();
          sVar12 = *(short *)(*(long *)(lVar17 + 0x48) + *(long *)(lVar17 + 0x40) + 2);
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar17 + 0x60) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar17 + 0x60) + 8), puVar8 != (undefined8 *)0x0))
          {
            (**(code **)*puVar8)();
          }
        }
        if ((uVar5 & 1) == 0 && sVar12 != *(short *)(lVar11 + 0x38)) {
          if (((*(ushort **)puVar4 == (ushort *)0x0) || ((**(ushort **)puVar4 & 1) == 0)) ||
             (*(long *)PTR_DAT_04bc1530 == 0)) {
            if ((*(ushort *)(lVar13 + 0x28) >> 7 & 1) != 0) goto LAB_03731900;
            sVar12 = *(short *)(lVar13 + 0x2c);
          }
          else {
            lVar17 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
            if ((*(long **)(lVar17 + 0x11b0) == (long *)0x0) ||
               (puVar8 = (undefined8 *)**(long **)(lVar17 + 0x11b0), puVar8 == (undefined8 *)0x0)) {
              sVar12 = *(short *)(*(long *)(lVar17 + 0x1198) + *(long *)(lVar17 + 0x1190) + 2);
            }
            else {
              uVar9 = (**(code **)*puVar8)();
              sVar12 = *(short *)(*(long *)(lVar17 + 0x1198) + *(long *)(lVar17 + 0x1190) + 2);
              if ((((uVar9 & 1) != 0) && (*(long *)(lVar17 + 0x11b0) != 0)) &&
                 (puVar8 = *(undefined8 **)(*(long *)(lVar17 + 0x11b0) + 8),
                 puVar8 != (undefined8 *)0x0)) {
                (**(code **)*puVar8)();
              }
            }
          }
          if (sVar12 != -1) {
            if (((*(ushort **)puVar4 == (ushort *)0x0) || ((**(ushort **)puVar4 & 1) == 0)) ||
               (*(long *)PTR_DAT_04bc1530 == 0)) {
              sVar12 = *(short *)(lVar13 + 0x2c);
              if ((*(ushort *)(lVar13 + 0x28) & 0x80) != 0) {
                sVar12 = -1;
              }
            }
            else {
              lVar13 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
              if ((*(long **)(lVar13 + 0x11b0) == (long *)0x0) ||
                 (puVar8 = (undefined8 *)**(long **)(lVar13 + 0x11b0), puVar8 == (undefined8 *)0x0))
              {
                sVar12 = *(short *)(*(long *)(lVar13 + 0x1198) + *(long *)(lVar13 + 0x1190) + 2);
              }
              else {
                uVar9 = (**(code **)*puVar8)();
                sVar12 = *(short *)(*(long *)(lVar13 + 0x1198) + *(long *)(lVar13 + 0x1190) + 2);
                if ((((uVar9 & 1) != 0) && (*(long *)(lVar13 + 0x11b0) != 0)) &&
                   (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x11b0) + 8),
                   puVar8 != (undefined8 *)0x0)) {
                  (**(code **)*puVar8)();
                }
              }
            }
            if (*(short *)(lVar11 + 0x38) == sVar12) goto LAB_03731650;
          }
        }
        else if (((uVar5 & 1) == 0) || (sVar12 == *(short *)(lVar11 + 0x38))) goto LAB_03731650;
      }
LAB_03731900:
      uVar5 = *(uint *)(lVar11 + 8);
      if (uVar5 != 0) {
        lVar11 = *(long *)PTR_DAT_04bb27c0;
        if (lVar11 == 0) {
          return 0;
        }
        plVar15 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar5 >> 0x11) & 0x7ff8));
        if (((plVar15 == (long *)0x0) || ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar15 + 0x46) != uVar5)) {
          plVar15 = (long *)0x0;
        }
        if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
          plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar11 = *(long *)PTR_DAT_04bb27c0;
          iVar6 = (**(code **)(*plVar10 + 0x60))();
          if (iVar6 < 0x11) {
            uVar5 = 1;
          }
          else {
            if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_037319ac;
            uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_037319ac:
          uVar5 = 0;
        }
        if (plVar15 == (long *)0x0) {
          return 0;
        }
        lVar11 = plVar15[0x2a];
        uVar2 = *(uint *)(plVar15 + 0x49);
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar7 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
        if ((int)lVar11 != 1) {
          return 0;
        }
        if ((uVar7 & uVar5) == 0) {
          return 0;
        }
        if ((uVar2 >> 4 & 1) == 0) {
          return 0;
        }
      }
    }
LAB_03731650:
    plVar16 = plVar16 + 1;
    lVar18 = lVar18 + -8;
    if (lVar18 == 0) {
      return 1;
    }
  } while( true );
}

