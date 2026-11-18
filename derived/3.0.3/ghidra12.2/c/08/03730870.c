
void FUN_03730870(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 uVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined2 local_64 [2];
  
  puVar3 = PTR_DAT_04bc3a48;
  if (*(int *)(param_1 + 0xe0) != 0) {
    lVar17 = (long)*(int *)(param_1 + 0xe0) << 3;
    plVar15 = *(long **)(param_1 + 0xe8);
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    do {
      lVar14 = *plVar15;
      if ((*(ushort *)(lVar14 + 0x114) & 0x21) == 0) {
        lVar16 = *(long *)PTR_DAT_04bb27f8;
        if (lVar16 != 0) {
          if ((((*(ushort **)puVar3 == (ushort *)0x0) || ((**(ushort **)puVar3 & 1) == 0)) ||
              (*(long *)PTR_DAT_04bc1530 == 0)) ||
             (lVar13 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar13 == 0)) {
            uVar10 = *(undefined2 *)(lVar16 + 0x2a);
          }
          else if ((*(long **)(lVar13 + 0x60) == (long *)0x0) ||
                  (puVar7 = (undefined8 *)**(long **)(lVar13 + 0x60), puVar7 == (undefined8 *)0x0))
          {
            uVar10 = *(undefined2 *)(*(long *)(lVar13 + 0x48) + *(long *)(lVar13 + 0x40) + 2);
          }
          else {
            uVar8 = (**(code **)*puVar7)();
            uVar10 = *(undefined2 *)(*(long *)(lVar13 + 0x48) + *(long *)(lVar13 + 0x40) + 2);
            if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x60) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x60) + 8), puVar7 != (undefined8 *)0x0
               )) {
              (**(code **)*puVar7)();
            }
          }
          local_64[0] = uVar10;
          uVar4 = FUN_03770770(local_64,0);
          if ((((*(ushort **)puVar3 == (ushort *)0x0) || ((**(ushort **)puVar3 & 1) == 0)) ||
              (*(long *)PTR_DAT_04bc1530 == 0)) ||
             (lVar13 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar13 == 0)) {
            sVar11 = *(short *)(lVar16 + 0x2a);
          }
          else if ((*(long **)(lVar13 + 0x60) == (long *)0x0) ||
                  (puVar7 = (undefined8 *)**(long **)(lVar13 + 0x60), puVar7 == (undefined8 *)0x0))
          {
            sVar11 = *(short *)(*(long *)(lVar13 + 0x48) + *(long *)(lVar13 + 0x40) + 2);
          }
          else {
            uVar8 = (**(code **)*puVar7)();
            sVar11 = *(short *)(*(long *)(lVar13 + 0x48) + *(long *)(lVar13 + 0x40) + 2);
            if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x60) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x60) + 8), puVar7 != (undefined8 *)0x0
               )) {
              (**(code **)*puVar7)();
            }
          }
          if ((uVar4 & 1) == 0 && sVar11 != *(short *)(lVar14 + 0x38)) {
            if (((*(ushort **)puVar3 == (ushort *)0x0) || ((**(ushort **)puVar3 & 1) == 0)) ||
               (*(long *)PTR_DAT_04bc1530 == 0)) {
              if ((*(ushort *)(lVar16 + 0x28) >> 7 & 1) != 0) goto LAB_03730b80;
              sVar11 = *(short *)(lVar16 + 0x2c);
            }
            else {
              lVar13 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
              if ((*(long **)(lVar13 + 0x11b0) == (long *)0x0) ||
                 (puVar7 = (undefined8 *)**(long **)(lVar13 + 0x11b0), puVar7 == (undefined8 *)0x0))
              {
                sVar11 = *(short *)(*(long *)(lVar13 + 0x1198) + *(long *)(lVar13 + 0x1190) + 2);
              }
              else {
                uVar8 = (**(code **)*puVar7)();
                sVar11 = *(short *)(*(long *)(lVar13 + 0x1198) + *(long *)(lVar13 + 0x1190) + 2);
                if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x11b0) != 0)) &&
                   (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x11b0) + 8),
                   puVar7 != (undefined8 *)0x0)) {
                  (**(code **)*puVar7)();
                }
              }
            }
            if (sVar11 != -1) {
              if (((*(ushort **)puVar3 == (ushort *)0x0) || ((**(ushort **)puVar3 & 1) == 0)) ||
                 (*(long *)PTR_DAT_04bc1530 == 0)) {
                sVar11 = *(short *)(lVar16 + 0x2c);
                if ((*(ushort *)(lVar16 + 0x28) & 0x80) != 0) {
                  sVar11 = -1;
                }
              }
              else {
                lVar16 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
                if ((*(long **)(lVar16 + 0x11b0) == (long *)0x0) ||
                   (puVar7 = (undefined8 *)**(long **)(lVar16 + 0x11b0), puVar7 == (undefined8 *)0x0
                   )) {
                  sVar11 = *(short *)(*(long *)(lVar16 + 0x1198) + *(long *)(lVar16 + 0x1190) + 2);
                }
                else {
                  uVar8 = (**(code **)*puVar7)();
                  sVar11 = *(short *)(*(long *)(lVar16 + 0x1198) + *(long *)(lVar16 + 0x1190) + 2);
                  if ((((uVar8 & 1) != 0) && (*(long *)(lVar16 + 0x11b0) != 0)) &&
                     (puVar7 = *(undefined8 **)(*(long *)(lVar16 + 0x11b0) + 8),
                     puVar7 != (undefined8 *)0x0)) {
                    (**(code **)*puVar7)();
                  }
                }
              }
              if (*(short *)(lVar14 + 0x38) == sVar11) goto LAB_037308d4;
            }
          }
          else if (((uVar4 & 1) == 0) || (sVar11 == *(short *)(lVar14 + 0x38))) goto LAB_037308d4;
        }
LAB_03730b80:
        uVar4 = *(uint *)(lVar14 + 8);
        if (uVar4 != 0) {
          lVar16 = *(long *)PTR_DAT_04bb27c0;
          if (lVar16 != 0) {
            plVar12 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                ((ulong)(uVar4 >> 0x11) & 0x7ff8));
            if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar12 + 0x46) != uVar4)) {
              plVar12 = (long *)0x0;
            }
            if (*(int *)(lVar16 + 0x288) == 1 || *(int *)(lVar16 + 0x288) == -1) {
              plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar16 = *(long *)PTR_DAT_04bb27c0;
              iVar5 = (**(code **)(*plVar9 + 0x60))();
              if (iVar5 < 0x11) {
                uVar4 = 1;
              }
              else {
                if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_03730c2c;
                uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_03730c2c:
              uVar4 = 0;
            }
            if (plVar12 != (long *)0x0) {
              lVar16 = plVar12[0x2a];
              uVar2 = *(uint *)(plVar12 + 0x49);
              if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
                *(undefined **)PTR_DAT_04bb37d0 = puVar1;
                __cxa_guard_release(PTR_DAT_04bb37d8);
              }
              uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
              if ((((int)lVar16 == 1) && ((uVar6 & uVar4) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
                FUN_006fb3d0(plVar12);
              }
            }
          }
          *(undefined4 *)(lVar14 + 8) = *(undefined4 *)PTR_DAT_04bb3238;
        }
      }
LAB_037308d4:
      plVar15 = plVar15 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) & 0xffff7fff;
  FUN_0372a5e4(param_1,1);
  return;
}

