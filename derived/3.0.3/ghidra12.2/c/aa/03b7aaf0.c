
void FUN_03b7aaf0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  void *__ptr;
  void *pvVar15;
  int iVar16;
  void *pvVar17;
  int iVar18;
  void *pvVar19;
  long lVar20;
  int local_84;
  
  puVar5 = PTR_DAT_04bb2698;
  if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
    if (*(int *)PTR_DAT_04bd0f28 == 0) {
      iVar16 = 0;
      iVar18 = 0;
      local_84 = 0;
    }
    else {
      local_84 = 0;
      uVar14 = 0;
      iVar18 = 0;
      iVar16 = 0;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      puVar2 = PTR_DAT_04bb2028 + 0x10;
      do {
        nn::os::LockMutex((MutexType *)(param_1 + 0x268));
        lVar10 = *(long *)(param_1 + 0x1a0) + uVar14 * 0x18;
        if (*(long *)(lVar10 + 8) != lVar10) {
          lVar13 = (long)*(int *)(lVar10 + 0x14);
          __ptr = (void *)(*(long *)(lVar10 + 8) - lVar13);
          lVar20 = (long)__ptr + lVar13;
          do {
            if (*(char *)((long)__ptr + 0x101) == '\0') {
              if (*(char *)((long)__ptr + 0x102) == '\0') {
                local_84 = local_84 + 1;
              }
              else {
                iVar16 = iVar16 + 1;
              }
            }
            else {
              iVar18 = iVar18 + 1;
            }
            lVar20 = *(long *)(lVar20 + 8);
            if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x10) == 0)) goto LAB_03b7ac34;
            bVar4 = *(byte *)((long)__ptr + 0x30);
            if ((bVar4 & 0x12) != 0) {
              lVar11 = *(long *)puVar5;
              if (lVar11 == 0) {
                pvVar15 = malloc(0x1b0);
joined_r0x03b7ae34:
                if (pvVar15 == (void *)0x0) goto LAB_03b7ae38;
                memset(pvVar15,0,0x1b0);
                *(undefined8 *)((long)pvVar15 + 0x1a0) = 0;
                *(undefined4 *)((long)pvVar15 + 0x48) = 0x40;
                *(undefined4 *)((long)pvVar15 + 0xa0) = 0x20;
                *(undefined4 *)((long)pvVar15 + 0xd8) = 0x20;
                *(undefined4 *)((long)pvVar15 + 0x1a8) = 0;
                *(undefined8 *)((long)pvVar15 + 0x100) = 0;
                *(undefined8 *)((long)pvVar15 + 0x108) = 0;
                *(undefined8 *)((long)pvVar15 + 0x110) = 0;
                *(undefined8 *)((long)pvVar15 + 0x118) = 0;
                *(undefined **)((long)pvVar15 + 0x38) = puVar1;
                *(long *)((long)pvVar15 + 0x40) = (long)pvVar15 + 0x4c;
                *(undefined **)((long)pvVar15 + 0x90) = puVar2;
                *(long *)((long)pvVar15 + 0x98) = (long)pvVar15 + 0xa4;
                *(undefined **)((long)pvVar15 + 200) = puVar2;
                *(long *)((long)pvVar15 + 0xd0) = (long)pvVar15 + 0xdc;
                *(undefined8 *)((long)pvVar15 + 0x120) = 0;
                *(undefined8 *)((long)pvVar15 + 0x128) = 0;
                *(undefined8 *)((long)pvVar15 + 0x130) = 0;
                *(undefined8 *)((long)pvVar15 + 0x138) = 0;
                *(undefined8 *)((long)pvVar15 + 0x140) = 0;
                *(undefined8 *)((long)pvVar15 + 0x148) = 0;
                *(undefined8 *)((long)pvVar15 + 0x150) = 0;
                *(undefined8 *)((long)pvVar15 + 0x158) = 0;
                *(undefined8 *)((long)pvVar15 + 0x160) = 0;
                *(undefined8 *)((long)pvVar15 + 0x168) = 0;
                *(undefined8 *)((long)pvVar15 + 0x170) = 0;
                *(undefined8 *)((long)pvVar15 + 0x178) = 0;
                *(undefined8 *)((long)pvVar15 + 0x180) = 0;
                *(undefined8 *)((long)pvVar15 + 0x188) = 0;
                *(undefined8 *)((long)pvVar15 + 400) = 0;
                *(undefined8 *)((long)pvVar15 + 0x198) = 0;
                *(undefined8 *)((long)pvVar15 + 0x10) = *(undefined8 *)((long)__ptr + 0x10);
                lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
                if (lVar11 == 0) {
                  iVar6 = nn::os::GetCurrentCoreNumber();
                }
                else {
                  iVar6 = (int)lVar11 + -1;
                }
                *(int *)((long)pvVar15 + 0x18) = iVar6;
                *(undefined4 *)((long)pvVar15 + 0x28) = *(undefined4 *)((long)__ptr + 0x28);
                *(undefined4 *)((long)pvVar15 + 0x2c) = *(undefined4 *)((long)__ptr + 0x2c);
                *(undefined4 *)((long)pvVar15 + 0x34) = *(undefined4 *)((long)__ptr + 0x34);
                *(undefined1 *)((long)pvVar15 + 0x100) = *(undefined1 *)((long)__ptr + 0x100);
                *(undefined1 *)((long)pvVar15 + 0x101) = *(undefined1 *)((long)__ptr + 0x101);
                *(undefined1 *)((long)pvVar15 + 0x102) = *(undefined1 *)((long)__ptr + 0x102);
                *(undefined1 *)((long)pvVar15 + 0x103) = *(undefined1 *)((long)__ptr + 0x103);
                *(undefined4 *)((long)pvVar15 + 0x104) = *(undefined4 *)((long)__ptr + 0x104);
                *(undefined4 *)((long)pvVar15 + 0x108) = *(undefined4 *)((long)__ptr + 0x108);
                *(undefined4 *)((long)pvVar15 + 0x10c) = *(undefined4 *)((long)__ptr + 0x10c);
                *(undefined4 *)((long)pvVar15 + 0x110) = *(undefined4 *)((long)__ptr + 0x110);
                **(undefined1 **)((long)pvVar15 + 0x40) = 0;
                plVar7 = (long *)((long)__ptr + 0x38);
                pvVar17 = *(void **)((long)pvVar15 + 0x40);
                (**(code **)(*plVar7 + 0x18))(plVar7);
                pvVar19 = *(void **)((long)__ptr + 0x40);
                if (pvVar17 != pvVar19) {
                  (**(code **)(*(long *)((long)__ptr + 0x38) + 0x18))(plVar7);
                  lVar11 = 0;
                  do {
                    if (*(char *)(*(long *)((long)__ptr + 0x40) + lVar11) == '\0')
                    goto LAB_03b7af30;
                    lVar8 = *(long *)((long)__ptr + 0x40) + lVar11;
                    if (*(char *)(lVar8 + 1) == '\0') {
                      lVar11 = lVar11 + 1;
                      goto LAB_03b7af30;
                    }
                    if (*(char *)(lVar8 + 2) == '\0') {
                      lVar11 = lVar11 + 2;
                      goto LAB_03b7af30;
                    }
                    lVar11 = lVar11 + 3;
                  } while (lVar11 != 0x80001);
                  lVar11 = 0;
LAB_03b7af30:
                  iVar6 = (int)lVar11;
                  if (*(int *)((long)pvVar15 + 0x48) <= (int)lVar11) {
                    iVar6 = *(int *)((long)pvVar15 + 0x48) + -1;
                  }
                  memcpy(pvVar17,pvVar19,(long)iVar6);
                  *(undefined1 *)((long)pvVar17 + (long)iVar6) = 0;
                }
                **(undefined1 **)((long)pvVar15 + 0x98) = 0;
                plVar7 = (long *)((long)__ptr + 0x90);
                pvVar17 = *(void **)((long)pvVar15 + 0x98);
                (**(code **)(*plVar7 + 0x18))(plVar7);
                pvVar19 = *(void **)((long)__ptr + 0x98);
                if (pvVar17 != pvVar19) {
                  (**(code **)(*(long *)((long)__ptr + 0x90) + 0x18))(plVar7);
                  lVar11 = 0;
                  do {
                    if (*(char *)(*(long *)((long)__ptr + 0x98) + lVar11) == '\0')
                    goto LAB_03b7afe0;
                    lVar8 = *(long *)((long)__ptr + 0x98) + lVar11;
                    if (*(char *)(lVar8 + 1) == '\0') {
                      lVar11 = lVar11 + 1;
                      goto LAB_03b7afe0;
                    }
                    if (*(char *)(lVar8 + 2) == '\0') {
                      lVar11 = lVar11 + 2;
                      goto LAB_03b7afe0;
                    }
                    lVar11 = lVar11 + 3;
                  } while (lVar11 != 0x80001);
                  lVar11 = 0;
LAB_03b7afe0:
                  iVar6 = (int)lVar11;
                  if (*(int *)((long)pvVar15 + 0xa0) <= (int)lVar11) {
                    iVar6 = *(int *)((long)pvVar15 + 0xa0) + -1;
                  }
                  memcpy(pvVar17,pvVar19,(long)iVar6);
                  *(undefined1 *)((long)pvVar17 + (long)iVar6) = 0;
                }
                *(undefined4 *)((long)pvVar15 + 0x1a8) = *(undefined4 *)((long)__ptr + 0x1a8);
                *(undefined4 *)((long)pvVar15 + 0x114) = *(undefined4 *)((long)__ptr + 0x114);
                *(undefined4 *)((long)pvVar15 + 0x118) = *(undefined4 *)((long)__ptr + 0x118);
                *(undefined4 *)((long)pvVar15 + 0x11c) = *(undefined4 *)((long)__ptr + 0x11c);
                *(undefined4 *)((long)pvVar15 + 0x120) = *(undefined4 *)((long)__ptr + 0x120);
                *(undefined4 *)((long)pvVar15 + 0x124) = *(undefined4 *)((long)__ptr + 0x124);
                *(undefined4 *)((long)pvVar15 + 0x128) = *(undefined4 *)((long)__ptr + 0x128);
                *(undefined4 *)((long)pvVar15 + 300) = *(undefined4 *)((long)__ptr + 300);
                *(undefined4 *)((long)pvVar15 + 0x130) = *(undefined4 *)((long)__ptr + 0x130);
                *(undefined4 *)((long)pvVar15 + 0x134) = *(undefined4 *)((long)__ptr + 0x134);
                *(undefined4 *)((long)pvVar15 + 0x138) = *(undefined4 *)((long)__ptr + 0x138);
                *(undefined4 *)((long)pvVar15 + 0x13c) = *(undefined4 *)((long)__ptr + 0x13c);
                *(undefined4 *)((long)pvVar15 + 0x140) = *(undefined4 *)((long)__ptr + 0x140);
                *(undefined4 *)((long)pvVar15 + 0x144) = *(undefined4 *)((long)__ptr + 0x144);
                *(undefined4 *)((long)pvVar15 + 0x148) = *(undefined4 *)((long)__ptr + 0x148);
                *(undefined4 *)((long)pvVar15 + 0x14c) = *(undefined4 *)((long)__ptr + 0x14c);
                *(undefined4 *)((long)pvVar15 + 0x150) = *(undefined4 *)((long)__ptr + 0x150);
                *(undefined4 *)((long)pvVar15 + 0x154) = *(undefined4 *)((long)__ptr + 0x154);
                *(undefined4 *)((long)pvVar15 + 0x158) = *(undefined4 *)((long)__ptr + 0x158);
                *(undefined4 *)((long)pvVar15 + 0x15c) = *(undefined4 *)((long)__ptr + 0x15c);
                *(undefined4 *)((long)pvVar15 + 0x160) = *(undefined4 *)((long)__ptr + 0x160);
                *(undefined4 *)((long)pvVar15 + 0x164) = *(undefined4 *)((long)__ptr + 0x164);
                *(undefined4 *)((long)pvVar15 + 0x168) = *(undefined4 *)((long)__ptr + 0x168);
                *(undefined4 *)((long)pvVar15 + 0x16c) = *(undefined4 *)((long)__ptr + 0x16c);
                *(undefined4 *)((long)pvVar15 + 0x170) = *(undefined4 *)((long)__ptr + 0x170);
                *(undefined4 *)((long)pvVar15 + 0x174) = *(undefined4 *)((long)__ptr + 0x174);
                *(undefined4 *)((long)pvVar15 + 0x178) = *(undefined4 *)((long)__ptr + 0x178);
                *(undefined4 *)((long)pvVar15 + 0x17c) = *(undefined4 *)((long)__ptr + 0x17c);
                *(undefined4 *)((long)pvVar15 + 0x180) = *(undefined4 *)((long)__ptr + 0x180);
                *(undefined4 *)((long)pvVar15 + 0x184) = *(undefined4 *)((long)__ptr + 0x184);
                *(undefined4 *)((long)pvVar15 + 0x188) = *(undefined4 *)((long)__ptr + 0x188);
                *(undefined4 *)((long)pvVar15 + 0x18c) = *(undefined4 *)((long)__ptr + 0x18c);
                *(undefined4 *)((long)pvVar15 + 400) = *(undefined4 *)((long)__ptr + 400);
                *(undefined4 *)((long)pvVar15 + 0x194) = *(undefined4 *)((long)__ptr + 0x194);
                *(undefined4 *)((long)pvVar15 + 0x198) = *(undefined4 *)((long)__ptr + 0x198);
                *(undefined4 *)((long)pvVar15 + 0x19c) = *(undefined4 *)((long)__ptr + 0x19c);
                *(undefined4 *)((long)pvVar15 + 0x1a0) = *(undefined4 *)((long)__ptr + 0x1a0);
                uVar9 = 1;
                if ((*(byte *)((long)__ptr + 0x30) & 2) == 0) {
                  uVar9 = 2;
                }
                *(undefined4 *)((long)pvVar15 + 0x1ac) = uVar9;
                *(undefined4 *)((long)pvVar15 + 0x1c) =
                     *(undefined4 *)(*(long *)PTR_DAT_04bc3ee8 + 200);
                FUN_038e9970((long)pvVar15 + 0x20);
                puVar3 = (undefined8 *)((long)*(int *)(param_1 + 0x19c) + (long)pvVar15);
                puVar12 = *(undefined8 **)(param_1 + 400);
                *(undefined8 **)(param_1 + 400) = puVar3;
                *puVar3 = (undefined8 *)(param_1 + 0x188);
                puVar3[1] = puVar12;
                if (puVar12 != (undefined8 *)0x0) {
                  *puVar12 = puVar3;
                }
                iVar6 = *(int *)(param_1 + 0x198) + 1;
                *(int *)(param_1 + 0x198) = iVar6;
              }
              else {
                plVar7 = *(long **)(param_1 + 0x148);
                if (plVar7 != (long *)0x0) {
LAB_03b7acfc:
                  pvVar15 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1b0,8);
                  goto joined_r0x03b7ae34;
                }
                lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar7 = (long *)(lVar11 + 8);
                if (lVar8 != 0) {
                  plVar7 = (long *)(lVar8 + 0xa8);
                }
                plVar7 = (long *)*plVar7;
                if (plVar7 != (long *)0x0) goto LAB_03b7acfc;
LAB_03b7ae38:
                iVar6 = *(int *)(param_1 + 0x198);
              }
              while (*(int *)(param_1 + 0x90) < iVar6) {
                if (iVar6 < 1) {
LAB_03b7b1a0:
                  iVar6 = *(int *)(param_1 + 0x198);
                }
                else {
                  plVar7 = *(long **)(param_1 + 0x188);
                  if (*plVar7 != 0) {
                    *(long *)(*plVar7 + 8) = plVar7[1];
                  }
                  if ((long *)plVar7[1] != (long *)0x0) {
                    *(long *)plVar7[1] = *plVar7;
                  }
                  *plVar7 = 0;
                  plVar7[1] = 0;
                  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + -1;
                  if ((plVar7 == (long *)0x0) ||
                     (pvVar15 = (void *)((long)plVar7 - (long)*(int *)(param_1 + 0x19c)),
                     pvVar15 == (void *)0x0)) goto LAB_03b7b1a0;
                  if (*(long *)puVar5 != 0) {
                    plVar7 = (long *)FUN_038cb610(*(long *)puVar5,pvVar15);
                    if (plVar7 != (long *)0x0) {
                      (**(code **)(*plVar7 + 0x38))(plVar7,pvVar15);
                    }
                    goto LAB_03b7b1a0;
                  }
                  free(pvVar15);
                  iVar6 = *(int *)(param_1 + 0x198);
                }
              }
              bVar4 = *(byte *)((long)__ptr + 0x30);
            }
            if (bVar4 != 0) {
              if (*(long *)((long)__ptr + 0x10) == 0) {
                if ((bVar4 >> 2 & 1) == 0) goto LAB_03b7b26c;
              }
              else if (((bVar4 >> 2 & 1) == 0) &&
                      (*(int *)((long)__ptr + 0x2c) ==
                       *(int *)(*(long *)((long)__ptr + 0x10) + 0x10))) {
LAB_03b7b26c:
                *(undefined1 *)((long)__ptr + 0x30) = 0;
                goto LAB_03b7abd8;
              }
LAB_03b7ac34:
              lVar11 = *(long *)(param_1 + 0x1a0);
              plVar7 = (long *)((long)__ptr + (long)*(int *)(lVar11 + uVar14 * 0x18 + 0x14));
              if (*plVar7 != 0) {
                *(long *)(*plVar7 + 8) = plVar7[1];
              }
              if ((long *)plVar7[1] != (long *)0x0) {
                *(long *)plVar7[1] = *plVar7;
              }
              lVar11 = lVar11 + uVar14 * 0x18;
              *plVar7 = 0;
              plVar7[1] = 0;
              *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
              pvVar15 = *(void **)((long)__ptr + 0x1b0);
              if (pvVar15 != (void *)0x0) {
                if (*(long *)puVar5 == 0) {
                  free(pvVar15);
                }
                else {
                  plVar7 = (long *)FUN_038cb610(*(long *)puVar5,pvVar15);
                  if (plVar7 != (long *)0x0) {
                    (**(code **)(*plVar7 + 0x38))(plVar7,pvVar15);
                  }
                }
                *(undefined8 *)((long)__ptr + 0x1b0) = 0;
              }
              pvVar15 = *(void **)((long)__ptr + 0x1c0);
              if (pvVar15 == (void *)0x0) {
LAB_03b7adec:
                lVar11 = *(long *)puVar5;
              }
              else {
                if (*(long *)puVar5 != 0) {
                  plVar7 = (long *)FUN_038cb610(*(long *)puVar5,pvVar15);
                  if (plVar7 != (long *)0x0) {
                    (**(code **)(*plVar7 + 0x38))(plVar7,pvVar15);
                  }
                  goto LAB_03b7adec;
                }
                free(pvVar15);
                lVar11 = *(long *)puVar5;
              }
              if (lVar11 == 0) {
                free(__ptr);
              }
              else {
                plVar7 = (long *)FUN_038cb610(lVar11,__ptr);
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
                }
              }
            }
LAB_03b7abd8:
            __ptr = (void *)(lVar20 - lVar13);
          } while (__ptr != (void *)(lVar10 - lVar13));
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x268));
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)PTR_DAT_04bd0f28);
    }
    *(int *)(param_1 + 0x1dc) = iVar18;
    *(int *)(param_1 + 0x1e0) = iVar16;
    *(int *)(param_1 + 0x1d8) = local_84;
  }
  return;
}

