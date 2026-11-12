
void FUN_0095e6c0(long param_1,ulong param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  ulong uVar17;
  int *piVar18;
  bool bVar19;
  ushort *puVar20;
  long lVar21;
  int iVar22;
  void *pvVar23;
  int iVar24;
  undefined8 *puVar25;
  
  puVar6 = PTR_DAT_04bb46d0;
  if (*(long *)(param_1 + 0xe00) == 0) {
    return;
  }
  if ((param_2 & 1) != 0) {
    iVar24 = *(int *)(*(long *)PTR_DAT_04bb46d0 + 0x1c8);
    if (iVar24 < 1) {
      lVar21 = *(long *)(*(long *)PTR_DAT_04bb46d0 + 0xb8);
      if (lVar21 == 0) {
        return;
      }
      piVar18 = *(int **)(lVar21 + 8);
      if (piVar18 == (int *)0x0) {
        return;
      }
      iVar24 = *piVar18;
      if (iVar24 < 1) {
        return;
      }
    }
    iVar22 = 0;
    do {
      uVar7 = FUN_017bfae0(*(undefined8 *)puVar6,iVar22);
      uVar10 = FUN_017c0910(*(undefined8 *)puVar6,uVar7);
      uVar9 = *(uint *)(param_1 + 0xde0);
      uVar17 = (ulong)uVar9;
      if ((uVar10 & 1) == 0) {
        if (0 < (int)uVar9) {
          if (uVar9 < 4) {
            lVar21 = 0;
            bVar19 = false;
          }
          else {
            lVar21 = 0;
            bVar19 = false;
            puVar20 = (ushort *)(*(long *)(param_1 + 0xde8) + 4);
            do {
              puVar1 = puVar20 + 1;
              uVar4 = uVar7 & 0xffff;
              lVar21 = lVar21 + -4;
              uVar5 = *puVar20;
              puVar2 = puVar20 + -1;
              puVar3 = puVar20 + -2;
              puVar20 = puVar20 + 4;
              bVar19 = (bool)((((*puVar1 == uVar4 || uVar5 == uVar4) || *puVar2 == uVar4) ||
                              *puVar3 == uVar4) | bVar19);
            } while (-lVar21 != (uVar17 & 0xfffffffc));
            lVar21 = -lVar21;
          }
          if ((uVar9 & 3) != 0) {
            uVar17 = uVar17 & 3;
            puVar20 = (ushort *)(*(long *)(param_1 + 0xde8) + lVar21 * 2);
            do {
              uVar17 = uVar17 - 1;
              bVar19 = (bool)((uint)*puVar20 == (uVar7 & 0xffff) | bVar19);
              puVar20 = puVar20 + 1;
            } while (uVar17 != 0);
          }
          if (bVar19) break;
        }
      }
      else {
        if ((int)uVar9 < 1) break;
        if (uVar9 < 4) {
          lVar21 = 0;
          bVar19 = false;
        }
        else {
          lVar21 = 0;
          bVar19 = false;
          puVar20 = (ushort *)(*(long *)(param_1 + 0xde8) + 4);
          do {
            puVar1 = puVar20 + 1;
            uVar4 = uVar7 & 0xffff;
            lVar21 = lVar21 + -4;
            uVar5 = *puVar20;
            puVar2 = puVar20 + -1;
            puVar3 = puVar20 + -2;
            puVar20 = puVar20 + 4;
            bVar19 = (bool)((((*puVar1 == uVar4 || uVar5 == uVar4) || *puVar2 == uVar4) ||
                            *puVar3 == uVar4) | bVar19);
          } while (-lVar21 != (uVar17 & 0xfffffffc));
          lVar21 = -lVar21;
        }
        if ((uVar9 & 3) != 0) {
          uVar17 = uVar17 & 3;
          puVar20 = (ushort *)(*(long *)(param_1 + 0xde8) + lVar21 * 2);
          do {
            uVar17 = uVar17 - 1;
            bVar19 = (bool)((uint)*puVar20 == (uVar7 & 0xffff) | bVar19);
            puVar20 = puVar20 + 1;
          } while (uVar17 != 0);
        }
        if (!bVar19) break;
      }
      iVar22 = iVar22 + 1;
      if (iVar22 == iVar24) {
        return;
      }
    } while( true );
  }
  iVar24 = *(int *)(*(long *)puVar6 + 0x1c8);
  if ((iVar24 < 1) &&
     (((lVar21 = *(long *)(*(long *)puVar6 + 0xb8), lVar21 == 0 ||
       (piVar18 = *(int **)(lVar21 + 8), piVar18 == (int *)0x0)) || (iVar24 = *piVar18, iVar24 < 1))
     )) {
    uVar17 = 0;
  }
  else {
    iVar22 = 0;
    uVar17 = 0;
    do {
      uVar8 = FUN_017bfae0(*(undefined8 *)puVar6,iVar22);
      uVar9 = FUN_017c0910(*(undefined8 *)puVar6,uVar8);
      iVar22 = iVar22 + 1;
      uVar17 = (ulong)((int)uVar17 + (uVar9 & 1));
    } while (iVar24 != iVar22);
  }
  *(undefined1 *)(param_1 + 0xdf0) = 1;
  FUN_0095a220(param_1);
  puVar6 = PTR_DAT_04bb2698;
  pvVar23 = *(void **)(param_1 + 0xde8);
  if (pvVar23 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar23);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar23);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar23);
      }
    }
    *(undefined8 *)(param_1 + 0xde8) = 0;
    *(undefined4 *)(param_1 + 0xde0) = 0;
  }
  lVar21 = *(long *)(param_1 + 0xe28);
  if (lVar21 != 0) {
    plVar11 = (long *)(lVar21 + -8);
    if (*plVar11 != 0) {
      lVar13 = *plVar11 * 0xf0;
      do {
        puVar25 = (undefined8 *)(lVar21 + -0x78 + lVar13);
        pvVar23 = (void *)puVar25[0xe];
        puVar25[10] = &PTR_FUN_04929c28;
        if (pvVar23 != (void *)0x0) {
          if (*(long *)puVar6 == 0) {
            free(pvVar23);
          }
          else {
            plVar12 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x38))(plVar12,pvVar23);
            }
          }
          puVar25[0xe] = 0;
        }
        pvVar23 = (void *)puVar25[9];
        puVar25[5] = &PTR_FUN_04929c28;
        if (pvVar23 != (void *)0x0) {
          if (*(long *)puVar6 == 0) {
            free(pvVar23);
          }
          else {
            plVar12 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x38))(plVar12,pvVar23);
            }
          }
          puVar25[9] = 0;
        }
        pvVar23 = (void *)puVar25[4];
        *puVar25 = &PTR_FUN_04929c28;
        if (pvVar23 != (void *)0x0) {
          if (*(long *)puVar6 == 0) {
            free(pvVar23);
          }
          else {
            plVar12 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x38))(plVar12,pvVar23);
            }
          }
          puVar25[4] = 0;
        }
        pvVar23 = (void *)puVar25[-1];
        puVar25[-5] = &PTR_FUN_04929c28;
        if (pvVar23 != (void *)0x0) {
          if (*(long *)puVar6 == 0) {
            free(pvVar23);
          }
          else {
            plVar12 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x38))(plVar12,pvVar23);
            }
          }
          puVar25[-1] = 0;
        }
        pvVar23 = (void *)puVar25[-6];
        puVar25[-10] = &PTR_FUN_04929c28;
        if (pvVar23 != (void *)0x0) {
          if (*(long *)puVar6 == 0) {
            free(pvVar23);
          }
          else {
            plVar12 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x38))(plVar12,pvVar23);
            }
          }
          puVar25[-6] = 0;
        }
        pvVar23 = (void *)puVar25[-0xb];
        puVar25[-0xf] = &PTR_FUN_04929c28;
        if (pvVar23 != (void *)0x0) {
          if (*(long *)puVar6 == 0) {
            free(pvVar23);
          }
          else {
            plVar12 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x38))(plVar12,pvVar23);
            }
          }
          puVar25[-0xb] = 0;
        }
        lVar13 = lVar13 + -0xf0;
      } while (lVar13 != 0);
    }
    if (*(long *)puVar6 == 0) {
      free(plVar11);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*(long *)puVar6,plVar11);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,plVar11);
      }
    }
    *(undefined8 *)(param_1 + 0xe28) = 0;
    *(undefined4 *)(param_1 + 0xe20) = 0;
  }
  uVar9 = (uint)uVar17;
  if (uVar9 == 0) goto LAB_0095ef00;
  lVar21 = *(long *)puVar6;
  if (lVar21 == 0) {
    pvVar23 = malloc((ulong)(uVar9 << 1));
joined_r0x0095ec58:
    if (pvVar23 != (void *)0x0) {
      *(uint *)(param_1 + 0xde0) = uVar9;
      *(void **)(param_1 + 0xde8) = pvVar23;
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0xe00);
    if (plVar11 != (long *)0x0) {
LAB_0095ebcc:
      pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,(ulong)(uVar9 << 1),8);
      goto joined_r0x0095ec58;
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar11 = (long *)(lVar21 + 8);
    if (lVar13 != 0) {
      plVar11 = (long *)(lVar13 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) goto LAB_0095ebcc;
  }
  lVar21 = *(long *)puVar6;
  uVar10 = uVar17 * 0xf0 | 8;
  if (lVar21 == 0) {
    puVar14 = malloc(uVar10);
joined_r0x0095ec68:
    if (puVar14 != (ulong *)0x0) {
      puVar15 = puVar14 + 1;
      *puVar14 = uVar17;
      puVar14 = puVar15;
      do {
        *puVar14 = (ulong)&PTR_FUN_04929c28;
        puVar14[1] = 0;
        puVar14[2] = 0;
        *(undefined4 *)(puVar14 + 3) = 0;
        *(undefined4 *)(puVar14 + 8) = 0;
        *(undefined4 *)(puVar14 + 0xd) = 0;
        *(undefined4 *)(puVar14 + 0x12) = 0;
        *(undefined4 *)(puVar14 + 0x17) = 0;
        puVar14[0x1d] = 0;
        *(undefined4 *)(puVar14 + 0x1c) = 0;
        puVar14[4] = 0;
        puVar14[5] = (ulong)&PTR_FUN_04929c28;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[9] = 0;
        puVar14[10] = (ulong)&PTR_FUN_04929c28;
        puVar14[0xb] = 0;
        puVar14[0xc] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = (ulong)&PTR_FUN_04929c28;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar14[0x13] = 0;
        puVar14[0x14] = (ulong)&PTR_FUN_04929c28;
        puVar14[0x15] = 0;
        puVar14[0x16] = 0;
        puVar14[0x18] = 0;
        puVar14[0x19] = (ulong)&PTR_FUN_04929c28;
        puVar14[0x1a] = 0;
        puVar14[0x1b] = 0;
        puVar14 = puVar14 + 0x1e;
      } while (puVar14 != puVar15 + uVar17 * 0x1e);
      *(uint *)(param_1 + 0xe20) = uVar9;
      *(ulong **)(param_1 + 0xe28) = puVar15;
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0xe00);
    if (plVar11 != (long *)0x0) {
LAB_0095ec34:
      puVar14 = (ulong *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar10,8);
      goto joined_r0x0095ec68;
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar11 = (long *)(lVar21 + 8);
    if (lVar13 != 0) {
      plVar11 = (long *)(lVar13 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) goto LAB_0095ec34;
  }
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    if (*(uint *)(param_1 + 0xde0) <= uVar7) {
      uVar4 = 0;
    }
    *(undefined2 *)(*(long *)(param_1 + 0xde8) + (ulong)uVar4 * 2) = 0xffff;
    uVar16 = *(uint *)(param_1 + 0xe20);
    lVar21 = *(long *)(param_1 + 0xe28);
    uVar4 = uVar7;
    if (uVar16 <= uVar7) {
      uVar4 = 0;
    }
    puVar25 = (undefined8 *)(lVar21 + (ulong)uVar4 * 0xf0 + 0x20);
    pvVar23 = (void *)*puVar25;
    if (pvVar23 != (void *)0x0) {
      if (*(long *)puVar6 == 0) {
        free(pvVar23);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar23);
        }
      }
      *puVar25 = 0;
      uVar16 = *(uint *)(param_1 + 0xe20);
      lVar21 = *(long *)(param_1 + 0xe28);
    }
    uVar4 = uVar7;
    if (uVar16 <= uVar7) {
      uVar4 = 0;
    }
    puVar25 = (undefined8 *)(lVar21 + (ulong)uVar4 * 0xf0 + 0x48);
    pvVar23 = (void *)*puVar25;
    if (pvVar23 != (void *)0x0) {
      if (*(long *)puVar6 == 0) {
        free(pvVar23);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar23);
        }
      }
      *puVar25 = 0;
      uVar16 = *(uint *)(param_1 + 0xe20);
      lVar21 = *(long *)(param_1 + 0xe28);
    }
    uVar4 = uVar7;
    if (uVar16 <= uVar7) {
      uVar4 = 0;
    }
    puVar25 = (undefined8 *)(lVar21 + (ulong)uVar4 * 0xf0 + 0x70);
    pvVar23 = (void *)*puVar25;
    if (pvVar23 != (void *)0x0) {
      if (*(long *)puVar6 == 0) {
        free(pvVar23);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar23);
        }
      }
      *puVar25 = 0;
      uVar16 = *(uint *)(param_1 + 0xe20);
      lVar21 = *(long *)(param_1 + 0xe28);
    }
    uVar4 = uVar7;
    if (uVar16 <= uVar7) {
      uVar4 = 0;
    }
    puVar25 = (undefined8 *)(lVar21 + (ulong)uVar4 * 0xf0 + 0x98);
    pvVar23 = (void *)*puVar25;
    if (pvVar23 != (void *)0x0) {
      if (*(long *)puVar6 == 0) {
        free(pvVar23);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar23);
        }
      }
      *puVar25 = 0;
      uVar16 = *(uint *)(param_1 + 0xe20);
      lVar21 = *(long *)(param_1 + 0xe28);
    }
    uVar4 = uVar7;
    if (uVar16 <= uVar7) {
      uVar4 = 0;
    }
    puVar25 = (undefined8 *)(lVar21 + (ulong)uVar4 * 0xf0 + 0xc0);
    pvVar23 = (void *)*puVar25;
    if (pvVar23 != (void *)0x0) {
      if (*(long *)puVar6 == 0) {
        free(pvVar23);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar23);
        }
      }
      *puVar25 = 0;
      uVar16 = *(uint *)(param_1 + 0xe20);
      lVar21 = *(long *)(param_1 + 0xe28);
    }
    uVar4 = uVar7;
    if (uVar16 <= uVar7) {
      uVar4 = 0;
    }
    puVar25 = (undefined8 *)(lVar21 + (ulong)uVar4 * 0xf0 + 0xe8);
    pvVar23 = (void *)*puVar25;
    if (pvVar23 != (void *)0x0) {
      if (*(long *)puVar6 == 0) {
        free(pvVar23);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*(long *)puVar6,pvVar23);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar23);
        }
      }
      *puVar25 = 0;
    }
    uVar7 = uVar7 + 1;
  } while (uVar9 != uVar7);
LAB_0095ef00:
  FUN_0095acb0(param_1,0);
  return;
}

