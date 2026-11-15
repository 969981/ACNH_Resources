
void FUN_01dfe830(long param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  void *pvVar21;
  undefined8 uVar22;
  
  if (param_2 == 1) {
    puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar7 ^ *puVar7 << 0xb;
    uVar5 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar6 = uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    *(undefined4 *)(param_1 + 0x180) = 0;
    if (0xfffffffd < uVar6) {
      uVar6 = 0xfffffffe;
    }
    *(uint *)(param_1 + 0x168) = uVar6;
    if (0 < *(int *)(param_1 + 0x184)) {
      iVar10 = *(int *)(param_1 + 0x1a0);
      if (iVar10 == 0) {
        uVar6 = 0;
      }
      else {
        do {
          if (iVar10 < 1) {
            uVar22 = 0;
          }
          else {
            puVar8 = *(undefined8 **)(param_1 + 0x1a8);
            uVar22 = *puVar8;
            memmove(puVar8,puVar8 + 1,(long)(iVar10 * 8 + -8));
            *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + -1;
          }
          uVar9 = (*(code *)**(undefined8 **)(param_1 + 0x120))(param_1 + 0x120,uVar22);
          uVar6 = *(uint *)(param_1 + 0x180);
          iVar10 = *(int *)(param_1 + 0x184);
          if (((uVar9 & 1) != 0) && ((int)uVar6 < iVar10)) {
            *(undefined8 *)(*(long *)(param_1 + 0x188) + (long)(int)uVar6 * 8) = uVar22;
            uVar6 = *(int *)(param_1 + 0x180) + 1;
            iVar10 = *(int *)(param_1 + 0x184);
            *(uint *)(param_1 + 0x180) = uVar6;
          }
          if (iVar10 <= (int)uVar6) goto LAB_01dff2b8;
          iVar10 = *(int *)(param_1 + 0x1a0);
        } while (iVar10 != 0);
      }
      if (*(int *)(param_1 + 0x140) != 0) {
        plVar11 = *(long **)(param_1 + 0x148);
        iVar10 = 0;
        plVar2 = plVar11 + *(int *)(param_1 + 0x140);
        do {
          lVar16 = *plVar11;
          if (*(int *)(param_1 + 0x180) != 0) {
            plVar18 = *(long **)(param_1 + 0x188);
            lVar19 = (long)*(int *)(param_1 + 0x180) << 3;
            do {
              if (*plVar18 == lVar16) goto LAB_01dfef80;
              plVar18 = plVar18 + 1;
              lVar19 = lVar19 + -8;
            } while (lVar19 != 0);
          }
          if (*(char *)(lVar16 + 0x50) == '\x01' && iVar10 < *(int *)(param_1 + 0x1a4)) {
            *(long *)(*(long *)(param_1 + 0x1a8) + (long)iVar10 * 8) = lVar16;
            iVar10 = *(int *)(param_1 + 0x1a0) + 1;
            *(int *)(param_1 + 0x1a0) = iVar10;
          }
LAB_01dfef80:
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar2);
      }
      uVar5 = nn::os::GetSystemTick();
      if (1 < (int)*(uint *)(param_1 + 0x1a0)) {
        uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
        uVar17 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
        uVar14 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
        uVar15 = (ulong)((uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4);
        uVar9 = (ulong)*(uint *)(param_1 + 0x1a0);
        do {
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar13 = (uint)uVar15;
          lVar16 = *(long *)(param_1 + 0x1a8);
          uVar15 = (ulong)(uVar13 >> 0x13 ^ uVar5 >> 8 ^ uVar13 ^ uVar5);
          lVar19 = (uVar9 - 1 & 0xffffffff) * 8;
          uVar22 = *(undefined8 *)(lVar16 + lVar19);
          uVar20 = uVar9 * uVar15 >> 0x1d & 0x7fffffff8;
          *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar16 + uVar20);
          *(undefined8 *)(*(long *)(param_1 + 0x1a8) + uVar20) = uVar22;
          bVar1 = 2 < uVar9;
          uVar9 = uVar9 - 1;
          uVar5 = uVar17;
          uVar17 = uVar14;
          uVar14 = uVar13;
        } while (bVar1);
      }
      iVar10 = *(int *)(param_1 + 0x180);
LAB_01dff0a4:
      iVar12 = *(int *)(param_1 + 0x184);
LAB_01dff0a8:
      do {
        if ((iVar12 <= iVar10) || (iVar3 = *(int *)(param_1 + 0x1a0), iVar3 == 0)) {
          if (0 < (int)uVar6) {
            uVar9 = 0;
            do {
              if (uVar9 < *(uint *)(param_1 + 0x180)) {
                uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x188) + uVar9 * 8);
              }
              else {
                uVar22 = 0;
              }
              if (*(int *)(param_1 + 0x1a0) < *(int *)(param_1 + 0x1a4)) {
                *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (long)*(int *)(param_1 + 0x1a0) * 8) =
                     uVar22;
                *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
              }
              uVar9 = uVar9 + 1;
            } while (uVar6 != uVar9);
          }
          uVar6 = nn::os::GetSystemTick();
          if (1 < (int)*(uint *)(param_1 + 0x180)) {
            uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
            uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
            uVar17 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
            uVar15 = (ulong)((uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4);
            uVar9 = (ulong)*(uint *)(param_1 + 0x180);
            do {
              uVar6 = uVar6 ^ uVar6 << 0xb;
              uVar14 = (uint)uVar15;
              lVar16 = *(long *)(param_1 + 0x188);
              uVar15 = (ulong)(uVar14 >> 0x13 ^ uVar6 >> 8 ^ uVar14 ^ uVar6);
              lVar19 = (uVar9 - 1 & 0xffffffff) * 8;
              uVar22 = *(undefined8 *)(lVar16 + lVar19);
              uVar20 = uVar9 * uVar15 >> 0x1d & 0x7fffffff8;
              *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar16 + uVar20);
              *(undefined8 *)(*(long *)(param_1 + 0x188) + uVar20) = uVar22;
              bVar1 = 2 < uVar9;
              uVar9 = uVar9 - 1;
              uVar6 = uVar5;
              uVar5 = uVar17;
              uVar17 = uVar14;
            } while (bVar1);
          }
          uVar6 = nn::os::GetSystemTick();
          if (1 < (int)*(uint *)(param_1 + 0x1a0)) {
            uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
            uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
            uVar17 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
            uVar15 = (ulong)((uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4);
            uVar9 = (ulong)*(uint *)(param_1 + 0x1a0);
            do {
              uVar6 = uVar6 ^ uVar6 << 0xb;
              uVar14 = (uint)uVar15;
              lVar16 = *(long *)(param_1 + 0x1a8);
              uVar15 = (ulong)(uVar14 >> 0x13 ^ uVar6 >> 8 ^ uVar14 ^ uVar6);
              lVar19 = (uVar9 - 1 & 0xffffffff) * 8;
              uVar22 = *(undefined8 *)(lVar16 + lVar19);
              uVar20 = uVar9 * uVar15 >> 0x1d & 0x7fffffff8;
              *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar16 + uVar20);
              *(undefined8 *)(*(long *)(param_1 + 0x1a8) + uVar20) = uVar22;
              bVar1 = 2 < uVar9;
              uVar9 = uVar9 - 1;
              uVar6 = uVar5;
              uVar5 = uVar17;
              uVar17 = uVar14;
            } while (bVar1);
          }
          goto LAB_01dff2b8;
        }
        if (iVar3 < 1) goto LAB_01dff100;
        puVar8 = *(undefined8 **)(param_1 + 0x1a8);
        uVar22 = *puVar8;
        memmove(puVar8,puVar8 + 1,(long)(iVar3 * 8 + -8));
        iVar12 = *(int *)(param_1 + 0x184);
        *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + -1;
        iVar10 = *(int *)(param_1 + 0x180);
      } while (iVar12 <= iVar10);
      goto LAB_01dff090;
    }
LAB_01dff2b8:
    puVar4 = PTR_DAT_04bb2698;
    if (*(int *)(param_1 + 0x140) != 0) {
      plVar11 = *(long **)(param_1 + 0x148);
      plVar2 = plVar11 + *(int *)(param_1 + 0x140);
      do {
        lVar16 = *plVar11;
        if (((*(char *)(lVar16 + 0xfb0) != '\0' && *(char *)(lVar16 + 0xfb1) != '\0') ||
            (*(char *)(lVar16 + 0xfc0) != '\0' && *(char *)(lVar16 + 0xfc1) != '\0')) ||
           (*(char *)(lVar16 + 0xfd0) != '\0' && *(char *)(lVar16 + 0xfd1) != '\0')) {
          if (0 < (int)*(uint *)(param_1 + 0x170)) {
            uVar9 = 0;
            do {
              if (*(long *)(*(long *)(param_1 + 0x178) + uVar9 * 8) == lVar16) {
                if (-1 < (int)uVar9) goto LAB_01dff2e4;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (*(uint *)(param_1 + 0x170) != uVar9);
          }
          if (0 < (int)*(uint *)(param_1 + 0x180)) {
            uVar9 = 0;
            do {
              if (*(long *)(*(long *)(param_1 + 0x188) + uVar9 * 8) == lVar16) {
                if (-1 < (int)uVar9) goto LAB_01dff2e4;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (*(uint *)(param_1 + 0x180) != uVar9);
          }
          pvVar21 = *(void **)(lVar16 + 0xfa8);
          if (pvVar21 != (void *)0x0) {
            if (*(long *)puVar4 == 0) {
              free(pvVar21);
            }
            else {
              plVar18 = (long *)FUN_038cb610(*(long *)puVar4,pvVar21);
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x38))(plVar18,pvVar21);
              }
            }
          }
          pvVar21 = *(void **)(lVar16 + 0xfb8);
          *(undefined1 *)(lVar16 + 0xfb0) = 0;
          *(undefined8 *)(lVar16 + 0xfa8) = 0;
          if (pvVar21 != (void *)0x0) {
            if (*(long *)puVar4 == 0) {
              free(pvVar21);
            }
            else {
              plVar18 = (long *)FUN_038cb610(*(long *)puVar4,pvVar21);
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x38))(plVar18,pvVar21);
              }
            }
          }
          pvVar21 = *(void **)(lVar16 + 0xfc8);
          *(undefined1 *)(lVar16 + 0xfc0) = 0;
          *(undefined8 *)(lVar16 + 0xfb8) = 0;
          if (pvVar21 != (void *)0x0) {
            if (*(long *)puVar4 == 0) {
              free(pvVar21);
            }
            else {
              plVar18 = (long *)FUN_038cb610(*(long *)puVar4,pvVar21);
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x38))(plVar18,pvVar21);
              }
            }
          }
          *(undefined1 *)(lVar16 + 0xfd0) = 0;
          *(undefined8 *)(lVar16 + 0xfc8) = 0;
        }
LAB_01dff2e4:
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar2);
    }
    if (((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0xc0) != 0)) &&
       (*(int *)(param_1 + 0x180) != 0)) {
      lVar16 = (long)*(int *)(param_1 + 0x180) << 3;
      puVar8 = *(undefined8 **)(param_1 + 0x188);
      do {
        FUN_01e08710(param_1,*puVar8);
        lVar16 = lVar16 + -8;
        puVar8 = puVar8 + 1;
      } while (lVar16 != 0);
    }
  }
  else if (param_2 == 0) {
    puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar7 ^ *puVar7 << 0xb;
    uVar5 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar6 = uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    *(undefined4 *)(param_1 + 0x170) = 0;
    if (0xfffffffd < uVar6) {
      uVar6 = 0xfffffffe;
    }
    *(uint *)(param_1 + 0x164) = uVar6;
    if (0 < *(int *)(param_1 + 0x174)) {
      iVar10 = *(int *)(param_1 + 400);
      if (iVar10 == 0) {
        uVar6 = 0;
      }
      else {
        do {
          if (iVar10 < 1) {
            uVar22 = 0;
          }
          else {
            puVar8 = *(undefined8 **)(param_1 + 0x198);
            uVar22 = *puVar8;
            memmove(puVar8,puVar8 + 1,(long)(iVar10 * 8 + -8));
            *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -1;
          }
          uVar9 = (*(code *)**(undefined8 **)(param_1 + 0x120))(param_1 + 0x120,uVar22);
          uVar6 = *(uint *)(param_1 + 0x170);
          iVar10 = *(int *)(param_1 + 0x174);
          if (((uVar9 & 1) != 0) && ((int)uVar6 < iVar10)) {
            *(undefined8 *)(*(long *)(param_1 + 0x178) + (long)(int)uVar6 * 8) = uVar22;
            uVar6 = *(int *)(param_1 + 0x170) + 1;
            iVar10 = *(int *)(param_1 + 0x174);
            *(uint *)(param_1 + 0x170) = uVar6;
          }
          if (iVar10 <= (int)uVar6) goto LAB_01dfed88;
          iVar10 = *(int *)(param_1 + 400);
        } while (iVar10 != 0);
      }
      if (*(int *)(param_1 + 0x140) != 0) {
        plVar11 = *(long **)(param_1 + 0x148);
        iVar10 = 0;
        plVar2 = plVar11 + *(int *)(param_1 + 0x140);
        do {
          lVar16 = *plVar11;
          if (*(int *)(param_1 + 0x170) != 0) {
            plVar18 = *(long **)(param_1 + 0x178);
            lVar19 = (long)*(int *)(param_1 + 0x170) << 3;
            do {
              if (*plVar18 == lVar16) goto LAB_01dfea70;
              plVar18 = plVar18 + 1;
              lVar19 = lVar19 + -8;
            } while (lVar19 != 0);
          }
          if (*(char *)(lVar16 + 0x50) == '\0' && iVar10 < *(int *)(param_1 + 0x194)) {
            *(long *)(*(long *)(param_1 + 0x198) + (long)iVar10 * 8) = lVar16;
            iVar10 = *(int *)(param_1 + 400) + 1;
            *(int *)(param_1 + 400) = iVar10;
          }
LAB_01dfea70:
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar2);
      }
      uVar5 = nn::os::GetSystemTick();
      if (1 < (int)*(uint *)(param_1 + 400)) {
        uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
        uVar17 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
        uVar14 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
        uVar15 = (ulong)((uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4);
        uVar9 = (ulong)*(uint *)(param_1 + 400);
        do {
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar13 = (uint)uVar15;
          lVar16 = *(long *)(param_1 + 0x198);
          uVar15 = (ulong)(uVar13 >> 0x13 ^ uVar5 >> 8 ^ uVar13 ^ uVar5);
          lVar19 = (uVar9 - 1 & 0xffffffff) * 8;
          uVar22 = *(undefined8 *)(lVar16 + lVar19);
          uVar20 = uVar9 * uVar15 >> 0x1d & 0x7fffffff8;
          *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar16 + uVar20);
          *(undefined8 *)(*(long *)(param_1 + 0x198) + uVar20) = uVar22;
          bVar1 = 2 < uVar9;
          uVar9 = uVar9 - 1;
          uVar5 = uVar17;
          uVar17 = uVar14;
          uVar14 = uVar13;
        } while (bVar1);
      }
      iVar10 = *(int *)(param_1 + 0x170);
LAB_01dfeb94:
      iVar12 = *(int *)(param_1 + 0x174);
LAB_01dfeb98:
      do {
        if ((iVar12 <= iVar10) || (iVar3 = *(int *)(param_1 + 400), iVar3 == 0)) {
          if (0 < (int)uVar6) {
            uVar9 = 0;
            do {
              if (uVar9 < *(uint *)(param_1 + 0x170)) {
                uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x178) + uVar9 * 8);
              }
              else {
                uVar22 = 0;
              }
              if (*(int *)(param_1 + 400) < *(int *)(param_1 + 0x194)) {
                *(undefined8 *)(*(long *)(param_1 + 0x198) + (long)*(int *)(param_1 + 400) * 8) =
                     uVar22;
                *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
              }
              uVar9 = uVar9 + 1;
            } while (uVar6 != uVar9);
          }
          uVar6 = nn::os::GetSystemTick();
          if (1 < (int)*(uint *)(param_1 + 0x170)) {
            uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
            uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
            uVar17 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
            uVar15 = (ulong)((uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4);
            uVar9 = (ulong)*(uint *)(param_1 + 0x170);
            do {
              uVar6 = uVar6 ^ uVar6 << 0xb;
              uVar14 = (uint)uVar15;
              lVar16 = *(long *)(param_1 + 0x178);
              uVar15 = (ulong)(uVar14 >> 0x13 ^ uVar6 >> 8 ^ uVar14 ^ uVar6);
              lVar19 = (uVar9 - 1 & 0xffffffff) * 8;
              uVar22 = *(undefined8 *)(lVar16 + lVar19);
              uVar20 = uVar9 * uVar15 >> 0x1d & 0x7fffffff8;
              *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar16 + uVar20);
              *(undefined8 *)(*(long *)(param_1 + 0x178) + uVar20) = uVar22;
              bVar1 = 2 < uVar9;
              uVar9 = uVar9 - 1;
              uVar6 = uVar5;
              uVar5 = uVar17;
              uVar17 = uVar14;
            } while (bVar1);
          }
          uVar6 = nn::os::GetSystemTick();
          if (1 < (int)*(uint *)(param_1 + 400)) {
            uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
            uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
            uVar17 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
            uVar15 = (ulong)((uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4);
            uVar9 = (ulong)*(uint *)(param_1 + 400);
            do {
              uVar6 = uVar6 ^ uVar6 << 0xb;
              uVar14 = (uint)uVar15;
              lVar16 = *(long *)(param_1 + 0x198);
              uVar15 = (ulong)(uVar14 >> 0x13 ^ uVar6 >> 8 ^ uVar14 ^ uVar6);
              lVar19 = (uVar9 - 1 & 0xffffffff) * 8;
              uVar22 = *(undefined8 *)(lVar16 + lVar19);
              uVar20 = uVar9 * uVar15 >> 0x1d & 0x7fffffff8;
              *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar16 + uVar20);
              *(undefined8 *)(*(long *)(param_1 + 0x198) + uVar20) = uVar22;
              bVar1 = 2 < uVar9;
              uVar9 = uVar9 - 1;
              uVar6 = uVar5;
              uVar5 = uVar17;
              uVar17 = uVar14;
            } while (bVar1);
          }
          goto LAB_01dfed88;
        }
        if (iVar3 < 1) goto LAB_01dfebf0;
        puVar8 = *(undefined8 **)(param_1 + 0x198);
        uVar22 = *puVar8;
        memmove(puVar8,puVar8 + 1,(long)(iVar3 * 8 + -8));
        iVar12 = *(int *)(param_1 + 0x174);
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -1;
        iVar10 = *(int *)(param_1 + 0x170);
      } while (iVar12 <= iVar10);
      goto LAB_01dfeb80;
    }
LAB_01dfed88:
    puVar4 = PTR_DAT_04bb2698;
    if (*(int *)(param_1 + 0x140) != 0) {
      plVar11 = *(long **)(param_1 + 0x148);
      plVar2 = plVar11 + *(int *)(param_1 + 0x140);
      do {
        lVar16 = *plVar11;
        if (((*(char *)(lVar16 + 0xfb0) != '\0' && *(char *)(lVar16 + 0xfb1) != '\0') ||
            (*(char *)(lVar16 + 0xfc0) != '\0' && *(char *)(lVar16 + 0xfc1) != '\0')) ||
           (*(char *)(lVar16 + 0xfd0) != '\0' && *(char *)(lVar16 + 0xfd1) != '\0')) {
          if (0 < (int)*(uint *)(param_1 + 0x170)) {
            uVar9 = 0;
            do {
              if (*(long *)(*(long *)(param_1 + 0x178) + uVar9 * 8) == lVar16) {
                if (-1 < (int)uVar9) goto LAB_01dfedb4;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (*(uint *)(param_1 + 0x170) != uVar9);
          }
          if (0 < (int)*(uint *)(param_1 + 0x180)) {
            uVar9 = 0;
            do {
              if (*(long *)(*(long *)(param_1 + 0x188) + uVar9 * 8) == lVar16) {
                if (-1 < (int)uVar9) goto LAB_01dfedb4;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (*(uint *)(param_1 + 0x180) != uVar9);
          }
          pvVar21 = *(void **)(lVar16 + 0xfa8);
          if (pvVar21 != (void *)0x0) {
            if (*(long *)puVar4 == 0) {
              free(pvVar21);
            }
            else {
              plVar18 = (long *)FUN_038cb610(*(long *)puVar4,pvVar21);
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x38))(plVar18,pvVar21);
              }
            }
          }
          pvVar21 = *(void **)(lVar16 + 0xfb8);
          *(undefined1 *)(lVar16 + 0xfb0) = 0;
          *(undefined8 *)(lVar16 + 0xfa8) = 0;
          if (pvVar21 != (void *)0x0) {
            if (*(long *)puVar4 == 0) {
              free(pvVar21);
            }
            else {
              plVar18 = (long *)FUN_038cb610(*(long *)puVar4,pvVar21);
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x38))(plVar18,pvVar21);
              }
            }
          }
          pvVar21 = *(void **)(lVar16 + 0xfc8);
          *(undefined1 *)(lVar16 + 0xfc0) = 0;
          *(undefined8 *)(lVar16 + 0xfb8) = 0;
          if (pvVar21 != (void *)0x0) {
            if (*(long *)puVar4 == 0) {
              free(pvVar21);
            }
            else {
              plVar18 = (long *)FUN_038cb610(*(long *)puVar4,pvVar21);
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x38))(plVar18,pvVar21);
              }
            }
          }
          *(undefined1 *)(lVar16 + 0xfd0) = 0;
          *(undefined8 *)(lVar16 + 0xfc8) = 0;
        }
LAB_01dfedb4:
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar2);
    }
    if (((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0xc0) != 0)) &&
       (*(int *)(param_1 + 0x170) != 0)) {
      lVar16 = (long)*(int *)(param_1 + 0x170) << 3;
      puVar8 = *(undefined8 **)(param_1 + 0x178);
      do {
        FUN_01e08710(param_1,*puVar8);
        lVar16 = lVar16 + -8;
        puVar8 = puVar8 + 1;
      } while (lVar16 != 0);
    }
  }
  return;
LAB_01dff100:
  uVar22 = 0;
  if (iVar10 < iVar12) goto LAB_01dff090;
  goto LAB_01dff0a8;
LAB_01dff090:
  *(undefined8 *)(*(long *)(param_1 + 0x188) + (long)iVar10 * 8) = uVar22;
  iVar10 = *(int *)(param_1 + 0x180) + 1;
  *(int *)(param_1 + 0x180) = iVar10;
  goto LAB_01dff0a4;
LAB_01dfebf0:
  uVar22 = 0;
  if (iVar10 < iVar12) goto LAB_01dfeb80;
  goto LAB_01dfeb98;
LAB_01dfeb80:
  *(undefined8 *)(*(long *)(param_1 + 0x178) + (long)iVar10 * 8) = uVar22;
  iVar10 = *(int *)(param_1 + 0x170) + 1;
  *(int *)(param_1 + 0x170) = iVar10;
  goto LAB_01dfeb94;
}

