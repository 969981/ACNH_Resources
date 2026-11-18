
void FUN_03695410(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  byte *pbVar19;
  
  puVar5 = PTR_DAT_04bb34e8;
  puVar4 = PTR_DAT_04bb34e0;
  uVar18 = 0;
  puVar1 = PTR_DAT_04bb3750 + 0x10;
  puVar2 = PTR_DAT_04bb2e38 + 0x10;
  bVar3 = *(byte *)(param_1 + 0x2734);
  plVar15 = (long *)PTR_DAT_04bb27c0;
  plVar17 = (long *)PTR_DAT_04bb3350;
  pbVar19 = PTR_DAT_04bb3748;
  do {
    if ((long)uVar18 < (long)(int)*(uint *)(param_1 + 0x278)) {
      if (uVar18 < *(uint *)(param_1 + 0x278)) {
        lVar13 = *(long *)(*(long *)(param_1 + 0x280) + uVar18 * 8);
        lVar12 = *plVar15;
      }
      else {
        lVar13 = 0;
        lVar12 = *plVar15;
      }
      if (lVar12 != 0) {
        uVar14 = *(uint *)(lVar13 + 0x40);
        if ((((uVar14 == 0) ||
             (plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                  ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
            ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar14)) {
          plVar16 = (long *)0x0;
        }
        if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
          plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*plVar17 + 0x68));
          lVar13 = *plVar15;
          iVar7 = (**(code **)(*plVar10 + 0x60))();
          if (iVar7 < 0x11) {
            uVar14 = 1;
          }
          else {
            if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_036955e8;
            uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_036955e8:
          uVar14 = 0;
        }
        if (plVar16 != (long *)0x0) {
          if (((*pbVar19 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar19), iVar7 != 0)) {
            *(undefined **)PTR_DAT_04bb3740 = puVar1;
            __cxa_guard_release(pbVar19);
          }
          uVar8 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3740);
          if ((uVar14 & uVar8) == 1) {
            lVar13 = (long)*(int *)((long)plVar16 + 0xbc);
            plVar17 = (long *)(plVar16[0x16] - lVar13);
            plVar15 = (long *)((long)plVar16 + (0xa8 - lVar13));
            bVar6 = plVar17 != plVar15;
            if ((bVar3 >> (ulong)((uint)uVar18 & 0x1f) & 1) == 0) {
              while (bVar6) {
                if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
                  *(undefined **)puVar4 = puVar2;
                  __cxa_guard_release(puVar5);
                }
                if ((plVar17 != (long *)0x0) &&
                   (uVar11 = (**(code **)(*plVar17 + 0x10))(plVar17,puVar4), (uVar11 & 1) != 0)) {
                  plVar17[0x6d] = 0x1040000000;
                  break;
                }
                plVar17 = (long *)(*(long *)((long)plVar17 + lVar13 + 8) + -lVar13);
                bVar6 = plVar17 != plVar15;
              }
              puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar8 = puVar9[3];
              uVar14 = *puVar9 ^ *puVar9 << 0xb;
              *puVar9 = puVar9[1];
              puVar9[1] = puVar9[2];
              uVar14 = uVar14 >> 8 ^ uVar8 >> 0x13 ^ uVar14 ^ uVar8;
              puVar9[2] = uVar8;
              puVar9[3] = uVar14;
              *(undefined2 *)((long)plVar16 + 0x424) = 0x100;
              plVar16[0x83] = 0;
              *(int *)(plVar16 + 0x84) = (int)((ulong)uVar14 * 0xf >> 0x20);
              plVar15 = (long *)PTR_DAT_04bb27c0;
              plVar17 = (long *)PTR_DAT_04bb3350;
              pbVar19 = PTR_DAT_04bb3748;
            }
            else {
              while (bVar6) {
                if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
                  *(undefined **)puVar4 = PTR_DAT_04bb2e38 + 0x10;
                  __cxa_guard_release(puVar5);
                }
                if ((plVar17 != (long *)0x0) &&
                   (uVar11 = (**(code **)(*plVar17 + 0x10))(plVar17,puVar4), (uVar11 & 1) != 0)) {
                  plVar17[0x6d] = 0x1040000000;
                  break;
                }
                plVar17 = (long *)(*(long *)((long)plVar17 + lVar13 + 8) + -lVar13);
                bVar6 = plVar17 != plVar15;
              }
              plVar16[0x83] = 0;
              *(undefined8 *)((long)plVar16 + 0x41d) = 0;
              *(undefined1 *)((long)plVar16 + 0x425) = 1;
              pbVar19 = PTR_DAT_04bb3748;
              plVar17 = (long *)PTR_DAT_04bb3350;
              plVar15 = (long *)PTR_DAT_04bb27c0;
              lVar13 = plVar16[0xc];
              if (lVar13 != 0) {
                *(undefined4 *)(lVar13 + 0x12d0) = 0;
                *(undefined1 *)(lVar13 + 0x142d) = 0;
                **(undefined1 **)(lVar13 + 0x12e0) = 0;
                *(undefined4 *)(lVar13 + 0x1428) = 0;
                *(undefined8 *)(lVar13 + 0x1334) = 0;
                *(undefined8 *)(lVar13 + 0x133c) = 0;
                *(undefined4 *)(lVar13 + 0x1344) = 0;
                *(undefined4 *)(lVar13 + 0x1330) = 0xffffffff;
              }
            }
          }
        }
      }
    }
    uVar18 = uVar18 + 1;
    if (uVar18 == 0x297e8) {
      *(undefined4 *)(param_1 + 0x2730) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x272c) = 0;
      *(undefined1 *)(param_1 + 0x2734) = 0;
      return;
    }
  } while( true );
}

