
void FUN_03ebb3e0(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined *puVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  
  plVar18 = (long *)param_2[2];
  uVar7 = (**(code **)(*plVar18 + 0x48))(plVar18);
  puVar5 = PTR_DAT_04bb2698;
  uVar21 = (uint)uVar7;
  uVar19 = (ulong)uVar21;
  if (uVar7 != 0) {
    lVar20 = *(long *)PTR_DAT_04bb2698;
    if (lVar20 == 0) {
      pvVar12 = malloc(uVar19 << 3);
joined_r0x03ebb4fc:
      if (pvVar12 != (void *)0x0) {
        *(uint *)(param_1 + 0x10) = uVar21;
        *(void **)(param_1 + 0x18) = pvVar12;
      }
    }
    else {
      plVar10 = (long *)*param_2;
      if (plVar10 != (long *)0x0) {
LAB_03ebb46c:
        pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19 << 3,8);
        goto joined_r0x03ebb4fc;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar20 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_03ebb46c;
    }
    if (0 < (int)param_2[8]) {
      lVar20 = *(long *)puVar5;
      if (lVar20 == 0) {
        puVar13 = malloc(uVar19 << 1);
      }
      else {
        plVar10 = (long *)*param_2;
        if (plVar10 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar10 = (long *)(lVar20 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_03ebb564;
        }
        puVar13 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19 << 1,8);
      }
      if (puVar13 != (undefined8 *)0x0) {
        uVar16 = uVar19 & 3;
        puVar15 = puVar13;
        if ((uVar7 & 3) != 0) {
          puVar14 = puVar13;
          do {
            uVar16 = uVar16 - 1;
            puVar15 = (undefined8 *)((long)puVar14 + 2);
            *(undefined2 *)puVar14 = 0xff;
            puVar14 = puVar15;
          } while (uVar16 != 0);
        }
        if (2 < (uVar19 - 1 & 0x7fffffffffffffff)) {
          do {
            puVar14 = puVar15 + 1;
            *puVar15 = 0xff00ff00ff00ff;
            puVar15 = puVar14;
          } while (puVar14 != (undefined8 *)((long)puVar13 + uVar19 * 2));
        }
        *(uint *)(param_1 + 0x60) = uVar21;
        *(undefined8 **)(param_1 + 0x68) = puVar13;
      }
    }
  }
LAB_03ebb564:
  uVar7 = (**(code **)(*plVar18 + 0x50))(plVar18);
  uVar21 = (uint)uVar7;
  uVar19 = (ulong)uVar21;
  if (uVar7 != 0) {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar12 = malloc(uVar19 << 2);
joined_r0x03ebb64c:
      if (pvVar12 != (void *)0x0) {
        *(uint *)(param_1 + 0x20) = uVar21;
        *(void **)(param_1 + 0x28) = pvVar12;
      }
    }
    else {
      plVar10 = (long *)*param_2;
      if (plVar10 != (long *)0x0) {
LAB_03ebb5bc:
        pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19 << 2,8);
        goto joined_r0x03ebb64c;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar20 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_03ebb5bc;
    }
    if (0 < (int)param_2[8]) {
      lVar20 = *(long *)puVar5;
      if (lVar20 == 0) {
        puVar13 = malloc(uVar19 << 1);
      }
      else {
        plVar10 = (long *)*param_2;
        if (plVar10 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar10 = (long *)(lVar20 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_03ebb6b4;
        }
        puVar13 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19 << 1,8);
      }
      if (puVar13 != (undefined8 *)0x0) {
        uVar16 = uVar19 & 3;
        puVar15 = puVar13;
        if ((uVar7 & 3) != 0) {
          puVar14 = puVar13;
          do {
            uVar16 = uVar16 - 1;
            puVar15 = (undefined8 *)((long)puVar14 + 2);
            *(undefined2 *)puVar14 = 0xff;
            puVar14 = puVar15;
          } while (uVar16 != 0);
        }
        if (2 < (uVar19 - 1 & 0x7fffffffffffffff)) {
          do {
            puVar14 = puVar15 + 1;
            *puVar15 = 0xff00ff00ff00ff;
            puVar15 = puVar14;
          } while (puVar14 != (undefined8 *)((long)puVar13 + uVar19 * 2));
        }
        *(uint *)(param_1 + 0x70) = uVar21;
        *(undefined8 **)(param_1 + 0x78) = puVar13;
      }
    }
  }
LAB_03ebb6b4:
  uVar7 = (**(code **)(*plVar18 + 0x58))(plVar18);
  uVar21 = (uint)uVar7;
  uVar19 = (ulong)uVar21;
  if (uVar7 != 0) {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar12 = malloc(uVar19 << 2);
joined_r0x03ebb79c:
      if (pvVar12 != (void *)0x0) {
        *(uint *)(param_1 + 0x30) = uVar21;
        *(void **)(param_1 + 0x38) = pvVar12;
      }
    }
    else {
      plVar10 = (long *)*param_2;
      if (plVar10 != (long *)0x0) {
LAB_03ebb70c:
        pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19 << 2,8);
        goto joined_r0x03ebb79c;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar20 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_03ebb70c;
    }
    if (0 < (int)param_2[8]) {
      lVar20 = *(long *)puVar5;
      if (lVar20 == 0) {
        puVar13 = malloc(uVar19 << 1);
      }
      else {
        plVar10 = (long *)*param_2;
        if (plVar10 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar10 = (long *)(lVar20 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_03ebb804;
        }
        puVar13 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19 << 1,8);
      }
      if (puVar13 != (undefined8 *)0x0) {
        uVar16 = uVar19 & 3;
        puVar15 = puVar13;
        if ((uVar7 & 3) != 0) {
          puVar14 = puVar13;
          do {
            uVar16 = uVar16 - 1;
            puVar15 = (undefined8 *)((long)puVar14 + 2);
            *(undefined2 *)puVar14 = 0xff;
            puVar14 = puVar15;
          } while (uVar16 != 0);
        }
        if (2 < (uVar19 - 1 & 0x7fffffffffffffff)) {
          do {
            puVar14 = puVar15 + 1;
            *puVar15 = 0xff00ff00ff00ff;
            puVar15 = puVar14;
          } while (puVar14 != (undefined8 *)((long)puVar13 + uVar19 * 2));
        }
        *(uint *)(param_1 + 0x80) = uVar21;
        *(undefined8 **)(param_1 + 0x88) = puVar13;
      }
    }
  }
LAB_03ebb804:
  uVar7 = (**(code **)(*plVar18 + 0x60))(plVar18);
  uVar21 = (uint)uVar7;
  uVar19 = (ulong)uVar21;
  if (uVar7 != 0) {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      pvVar12 = malloc(uVar19);
joined_r0x03ebb8e8:
      if (pvVar12 != (void *)0x0) {
        *(uint *)(param_1 + 0x40) = uVar21;
        *(void **)(param_1 + 0x48) = pvVar12;
      }
    }
    else {
      plVar10 = (long *)*param_2;
      if (plVar10 != (long *)0x0) {
LAB_03ebb858:
        pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19,8);
        goto joined_r0x03ebb8e8;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar20 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_03ebb858;
    }
    if (0 < (int)param_2[8]) {
      lVar20 = *(long *)puVar5;
      if (lVar20 == 0) {
        puVar13 = malloc(uVar19 << 1);
      }
      else {
        plVar10 = (long *)*param_2;
        if (plVar10 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar10 = (long *)(lVar20 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_03ebb954;
        }
        puVar13 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19 << 1,8);
      }
      if (puVar13 != (undefined8 *)0x0) {
        uVar16 = uVar19 & 3;
        puVar15 = puVar13;
        if ((uVar7 & 3) != 0) {
          puVar14 = puVar13;
          do {
            uVar16 = uVar16 - 1;
            puVar15 = (undefined8 *)((long)puVar14 + 2);
            *(undefined2 *)puVar14 = 0xff;
            puVar14 = puVar15;
          } while (uVar16 != 0);
        }
        if (2 < (uVar19 - 1 & 0x7fffffffffffffff)) {
          do {
            puVar14 = puVar15 + 1;
            *puVar15 = 0xff00ff00ff00ff;
            puVar15 = puVar14;
          } while (puVar14 != (undefined8 *)((long)puVar13 + uVar19 * 2));
        }
        *(uint *)(param_1 + 0x90) = uVar21;
        *(undefined8 **)(param_1 + 0x98) = puVar13;
      }
    }
  }
LAB_03ebb954:
  uVar7 = (**(code **)(*plVar18 + 0x68))(plVar18);
  uVar21 = (uint)uVar7;
  uVar19 = (ulong)uVar21;
  if (uVar7 == 0) goto LAB_03ebbaa4;
  lVar20 = *(long *)puVar5;
  if (lVar20 == 0) {
    pvVar12 = malloc(uVar19 * 0xc);
joined_r0x03ebba40:
    if (pvVar12 != (void *)0x0) {
      *(uint *)(param_1 + 0x50) = uVar21;
      *(void **)(param_1 + 0x58) = pvVar12;
    }
  }
  else {
    plVar18 = (long *)*param_2;
    if (plVar18 != (long *)0x0) {
LAB_03ebb9b0:
      pvVar12 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,uVar19 * 0xc,8);
      goto joined_r0x03ebba40;
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar18 = (long *)(lVar20 + 8);
    if (lVar11 != 0) {
      plVar18 = (long *)(lVar11 + 0xa8);
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 != (long *)0x0) goto LAB_03ebb9b0;
  }
  if (0 < (int)param_2[8]) {
    lVar20 = *(long *)puVar5;
    if (lVar20 == 0) {
      puVar13 = malloc(uVar19 << 1);
    }
    else {
      plVar18 = (long *)*param_2;
      if (plVar18 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar18 = (long *)(lVar20 + 8);
        if (lVar11 != 0) {
          plVar18 = (long *)(lVar11 + 0xa8);
        }
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) goto LAB_03ebbaa4;
      }
      puVar13 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,uVar19 << 1,8);
    }
    if (puVar13 != (undefined8 *)0x0) {
      uVar16 = uVar19 & 3;
      puVar15 = puVar13;
      if ((uVar7 & 3) != 0) {
        puVar14 = puVar13;
        do {
          uVar16 = uVar16 - 1;
          puVar15 = (undefined8 *)((long)puVar14 + 2);
          *(undefined2 *)puVar14 = 0xff;
          puVar14 = puVar15;
        } while (uVar16 != 0);
      }
      if (2 < (uVar19 - 1 & 0x7fffffffffffffff)) {
        do {
          puVar14 = puVar15 + 1;
          *puVar15 = 0xff00ff00ff00ff;
          puVar15 = puVar14;
        } while (puVar14 != (undefined8 *)((long)puVar13 + uVar19 * 2));
      }
      *(uint *)(param_1 + 0xa0) = uVar21;
      *(undefined8 **)(param_1 + 0xa8) = puVar13;
    }
  }
LAB_03ebbaa4:
  (**(code **)(*(long *)param_2[2] + 0x98))();
  (**(code **)(*(long *)param_2[2] + 0xa0))();
  (**(code **)(*(long *)param_2[2] + 0xa8))();
  (**(code **)(*(long *)param_2[2] + 0xb0))();
  (**(code **)(*(long *)param_2[2] + 0xb8))();
  *(long *)(param_1 + 0xd0) = param_2[2];
  *(long *)(param_1 + 0xe0) = param_2[3];
  if (0 < (int)param_2[8]) {
    plVar18 = param_2 + 4;
    *(long *)(param_1 + 0xb0) = *plVar18;
    iVar8 = (int)param_2[8];
    if (1 < iVar8) {
      *(long *)(param_1 + 0xb8) = param_2[5];
      iVar8 = (int)param_2[8];
      if (2 < iVar8) {
        *(long *)(param_1 + 0xc0) = param_2[6];
        iVar8 = (int)param_2[8];
        if (3 < iVar8) {
          *(long *)(param_1 + 200) = param_2[7];
          iVar8 = (int)param_2[8];
          if (4 < iVar8) {
            lVar20 = 4;
            do {
              lVar20 = lVar20 + 1;
              *(long *)(param_1 + 0xb0) = param_2[4];
              iVar8 = (int)param_2[8];
            } while (lVar20 < iVar8);
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb2020;
    if (0 < iVar8) {
      uVar19 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar4 = (undefined1)uVar19;
        if (0 < *(int *)(param_1 + 0x10)) {
          uVar21 = 0;
          uVar16 = uVar19;
          if (3 < uVar19) {
            uVar16 = 0;
          }
          do {
            iVar8 = (**(code **)(*(long *)plVar18[uVar16] + 0x1b0))();
            if (0 < iVar8) {
              iVar8 = 0;
              do {
                local_68 = (**(code **)(**(long **)(param_1 + 0xd0) + 0xc0))
                                     (*(long **)(param_1 + 0xd0),uVar21);
                local_70 = puVar1;
                local_78 = (**(code **)(**(long **)(plVar18[uVar16] + 0xd0) + 0xc0))
                                     (*(long **)(plVar18[uVar16] + 0xd0),iVar8);
                local_80 = puVar1;
                (**(code **)(local_70 + 0x18))(&local_70);
                (**(code **)(local_70 + 0x18))(&local_70);
                lVar20 = local_68;
                (**(code **)(local_80 + 0x18))(&local_80);
                if (lVar20 == local_78) {
LAB_03ebbc50:
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0x60) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(undefined1 *)(*(long *)(param_1 + 0x68) + (ulong)uVar2 * 2) = uVar4;
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0x60) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(char *)(*(long *)(param_1 + 0x68) + (ulong)uVar2 * 2 + 1) = (char)iVar8;
                }
                else {
                  uVar17 = 0;
                  bVar6 = true;
                  do {
                    lVar20 = local_68 + 2 + uVar17;
                    cVar3 = *(char *)(lVar20 + -2);
                    if (cVar3 != *(char *)(local_78 + uVar17)) break;
                    if (cVar3 == '\0') {
                      if (bVar6) goto LAB_03ebbc50;
                      break;
                    }
                    cVar3 = *(char *)(lVar20 + -1);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 1)) break;
                    if (cVar3 == '\0') goto LAB_03ebbc50;
                    cVar3 = *(char *)(local_68 + 2 + uVar17);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 2)) break;
                    if (cVar3 == '\0') goto LAB_03ebbc50;
                    bVar6 = uVar17 < 0x7fffe;
                    uVar17 = uVar17 + 3;
                  } while (uVar17 != 0x80001);
                }
                iVar8 = iVar8 + 1;
                iVar9 = (**(code **)(*(long *)plVar18[uVar16] + 0x1b0))();
              } while (iVar8 < iVar9);
            }
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < *(int *)(param_1 + 0x10));
        }
        if (0 < *(int *)(param_1 + 0x20)) {
          uVar21 = 0;
          uVar16 = uVar19;
          if (3 < uVar19) {
            uVar16 = 0;
          }
          do {
            iVar8 = (**(code **)(*(long *)plVar18[uVar16] + 0x1b8))();
            if (0 < iVar8) {
              iVar8 = 0;
              do {
                local_68 = (**(code **)(**(long **)(param_1 + 0xd0) + 200))
                                     (*(long **)(param_1 + 0xd0),uVar21);
                local_70 = puVar5 + 0x10;
                local_78 = (**(code **)(**(long **)(plVar18[uVar16] + 0xd0) + 200))
                                     (*(long **)(plVar18[uVar16] + 0xd0),iVar8);
                local_80 = puVar5 + 0x10;
                (**(code **)(local_70 + 0x18))(&local_70);
                (**(code **)(local_70 + 0x18))(&local_70);
                lVar20 = local_68;
                (**(code **)(local_80 + 0x18))(&local_80);
                if (lVar20 == local_78) {
LAB_03ebbde4:
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0x70) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(undefined1 *)(*(long *)(param_1 + 0x78) + (ulong)uVar2 * 2) = uVar4;
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0x70) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(char *)(*(long *)(param_1 + 0x78) + (ulong)uVar2 * 2 + 1) = (char)iVar8;
                }
                else {
                  uVar17 = 0;
                  bVar6 = true;
                  do {
                    lVar20 = local_68 + 2 + uVar17;
                    cVar3 = *(char *)(lVar20 + -2);
                    if (cVar3 != *(char *)(local_78 + uVar17)) break;
                    if (cVar3 == '\0') {
                      if (bVar6) goto LAB_03ebbde4;
                      break;
                    }
                    cVar3 = *(char *)(lVar20 + -1);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 1)) break;
                    if (cVar3 == '\0') goto LAB_03ebbde4;
                    cVar3 = *(char *)(local_68 + 2 + uVar17);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 2)) break;
                    if (cVar3 == '\0') goto LAB_03ebbde4;
                    bVar6 = uVar17 < 0x7fffe;
                    uVar17 = uVar17 + 3;
                  } while (uVar17 != 0x80001);
                }
                iVar8 = iVar8 + 1;
                iVar9 = (**(code **)(*(long *)plVar18[uVar16] + 0x1b8))();
              } while (iVar8 < iVar9);
            }
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < *(int *)(param_1 + 0x20));
        }
        if (0 < *(int *)(param_1 + 0x30)) {
          uVar21 = 0;
          uVar16 = uVar19;
          if (3 < uVar19) {
            uVar16 = 0;
          }
          do {
            iVar8 = (**(code **)(*(long *)plVar18[uVar16] + 0x1c0))();
            if (0 < iVar8) {
              iVar8 = 0;
              do {
                local_68 = (**(code **)(**(long **)(param_1 + 0xd0) + 0xd0))
                                     (*(long **)(param_1 + 0xd0),uVar21);
                local_70 = puVar5 + 0x10;
                local_78 = (**(code **)(**(long **)(plVar18[uVar16] + 0xd0) + 0xd0))
                                     (*(long **)(plVar18[uVar16] + 0xd0),iVar8);
                local_80 = puVar5 + 0x10;
                (**(code **)(local_70 + 0x18))(&local_70);
                (**(code **)(local_70 + 0x18))(&local_70);
                lVar20 = local_68;
                (**(code **)(local_80 + 0x18))(&local_80);
                if (lVar20 == local_78) {
LAB_03ebbf80:
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0x80) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(undefined1 *)(*(long *)(param_1 + 0x88) + (ulong)uVar2 * 2) = uVar4;
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0x80) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(char *)(*(long *)(param_1 + 0x88) + (ulong)uVar2 * 2 + 1) = (char)iVar8;
                }
                else {
                  uVar17 = 0;
                  bVar6 = true;
                  do {
                    lVar20 = local_68 + 2 + uVar17;
                    cVar3 = *(char *)(lVar20 + -2);
                    if (cVar3 != *(char *)(local_78 + uVar17)) break;
                    if (cVar3 == '\0') {
                      if (bVar6) goto LAB_03ebbf80;
                      break;
                    }
                    cVar3 = *(char *)(lVar20 + -1);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 1)) break;
                    if (cVar3 == '\0') goto LAB_03ebbf80;
                    cVar3 = *(char *)(local_68 + 2 + uVar17);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 2)) break;
                    if (cVar3 == '\0') goto LAB_03ebbf80;
                    bVar6 = uVar17 < 0x7fffe;
                    uVar17 = uVar17 + 3;
                  } while (uVar17 != 0x80001);
                }
                iVar8 = iVar8 + 1;
                iVar9 = (**(code **)(*(long *)plVar18[uVar16] + 0x1c0))();
              } while (iVar8 < iVar9);
            }
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < *(int *)(param_1 + 0x30));
        }
        if (0 < *(int *)(param_1 + 0x40)) {
          uVar21 = 0;
          uVar16 = uVar19;
          if (3 < uVar19) {
            uVar16 = 0;
          }
          do {
            iVar8 = (**(code **)(*(long *)plVar18[uVar16] + 0x1c8))();
            if (0 < iVar8) {
              iVar8 = 0;
              do {
                local_68 = (**(code **)(**(long **)(param_1 + 0xd0) + 0xd8))
                                     (*(long **)(param_1 + 0xd0),uVar21);
                local_70 = puVar5 + 0x10;
                local_78 = (**(code **)(**(long **)(plVar18[uVar16] + 0xd0) + 0xd8))
                                     (*(long **)(plVar18[uVar16] + 0xd0),iVar8);
                local_80 = puVar5 + 0x10;
                (**(code **)(local_70 + 0x18))(&local_70);
                (**(code **)(local_70 + 0x18))(&local_70);
                lVar20 = local_68;
                (**(code **)(local_80 + 0x18))(&local_80);
                if (lVar20 == local_78) {
LAB_03ebc114:
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0x90) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(undefined1 *)(*(long *)(param_1 + 0x98) + (ulong)uVar2 * 2) = uVar4;
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0x90) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(char *)(*(long *)(param_1 + 0x98) + (ulong)uVar2 * 2 + 1) = (char)iVar8;
                }
                else {
                  uVar17 = 0;
                  bVar6 = true;
                  do {
                    lVar20 = local_68 + 2 + uVar17;
                    cVar3 = *(char *)(lVar20 + -2);
                    if (cVar3 != *(char *)(local_78 + uVar17)) break;
                    if (cVar3 == '\0') {
                      if (bVar6) goto LAB_03ebc114;
                      break;
                    }
                    cVar3 = *(char *)(lVar20 + -1);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 1)) break;
                    if (cVar3 == '\0') goto LAB_03ebc114;
                    cVar3 = *(char *)(local_68 + 2 + uVar17);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 2)) break;
                    if (cVar3 == '\0') goto LAB_03ebc114;
                    bVar6 = uVar17 < 0x7fffe;
                    uVar17 = uVar17 + 3;
                  } while (uVar17 != 0x80001);
                }
                iVar8 = iVar8 + 1;
                iVar9 = (**(code **)(*(long *)plVar18[uVar16] + 0x1c8))();
              } while (iVar8 < iVar9);
            }
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < *(int *)(param_1 + 0x40));
        }
        if (0 < *(int *)(param_1 + 0x50)) {
          uVar21 = 0;
          uVar16 = uVar19;
          if (3 < uVar19) {
            uVar16 = 0;
          }
          do {
            iVar8 = (**(code **)(*(long *)plVar18[uVar16] + 0x1d0))();
            if (0 < iVar8) {
              iVar8 = 0;
              do {
                local_68 = (**(code **)(**(long **)(param_1 + 0xd0) + 0xe0))
                                     (*(long **)(param_1 + 0xd0),uVar21);
                local_70 = puVar5 + 0x10;
                local_78 = (**(code **)(**(long **)(plVar18[uVar16] + 0xd0) + 0xe0))
                                     (*(long **)(plVar18[uVar16] + 0xd0),iVar8);
                local_80 = puVar5 + 0x10;
                (**(code **)(local_70 + 0x18))(&local_70);
                (**(code **)(local_70 + 0x18))(&local_70);
                lVar20 = local_68;
                (**(code **)(local_80 + 0x18))(&local_80);
                if (lVar20 == local_78) {
LAB_03ebc2b0:
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0xa0) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(undefined1 *)(*(long *)(param_1 + 0xa8) + (ulong)uVar2 * 2) = uVar4;
                  uVar2 = uVar21;
                  if (*(uint *)(param_1 + 0xa0) <= uVar21) {
                    uVar2 = 0;
                  }
                  *(char *)(*(long *)(param_1 + 0xa8) + (ulong)uVar2 * 2 + 1) = (char)iVar8;
                }
                else {
                  uVar17 = 0;
                  bVar6 = true;
                  do {
                    lVar20 = local_68 + 2 + uVar17;
                    cVar3 = *(char *)(lVar20 + -2);
                    if (cVar3 != *(char *)(local_78 + uVar17)) break;
                    if (cVar3 == '\0') {
                      if (bVar6) goto LAB_03ebc2b0;
                      break;
                    }
                    cVar3 = *(char *)(lVar20 + -1);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 1)) break;
                    if (cVar3 == '\0') goto LAB_03ebc2b0;
                    cVar3 = *(char *)(local_68 + 2 + uVar17);
                    if (cVar3 != *(char *)(local_78 + uVar17 + 2)) break;
                    if (cVar3 == '\0') goto LAB_03ebc2b0;
                    bVar6 = uVar17 < 0x7fffe;
                    uVar17 = uVar17 + 3;
                  } while (uVar17 != 0x80001);
                }
                iVar8 = iVar8 + 1;
                iVar9 = (**(code **)(*(long *)plVar18[uVar16] + 0x1d0))();
              } while (iVar8 < iVar9);
            }
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < *(int *)(param_1 + 0x50));
        }
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)param_2[8]);
    }
  }
  return;
}

