
/* WARNING: Removing unreachable block (ram,0x0095d9ac) */

void FUN_0095d960(long param_1,ulong param_2)

{
  int *piVar1;
  size_t sVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  uint *puVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  bool bVar21;
  int *piVar22;
  ulong *puVar23;
  ulong uVar24;
  char cVar25;
  void *pvVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  puVar11 = PTR_DAT_04bb37e0;
  if (*(long *)(param_1 + 0xe00) == 0) {
    return;
  }
  lVar18 = *(long *)PTR_DAT_04bc0500;
  uVar29 = *(uint *)(lVar18 + 0xc4);
  if ((param_2 & 1) != 0) {
    if (uVar29 == 0) {
      return;
    }
    uVar30 = 0;
    do {
      if (((*(int *)(lVar18 + 0xc0) == 0) || ((int)uVar30 < 0)) ||
         (*(int *)(lVar18 + 0xc4) <= (int)uVar30)) {
        local_68 = *(undefined2 *)puVar11;
        local_76 = puVar11[2];
        local_75 = puVar11[3];
        local_66 = *(undefined2 *)(puVar11 + 2);
        local_64 = *(undefined4 *)(puVar11 + 4);
      }
      else {
        local_66 = 0;
        local_64 = 0;
        local_68 = (undefined2)**(undefined4 **)(*(long *)(lVar18 + 200) + uVar30 * 8);
        FUN_0277d4ac(&local_68);
        local_76 = (undefined1)local_66;
        local_75 = local_66._1_1_;
      }
      lVar27 = *(long *)puVar3;
      local_70 = 0;
      local_78 = local_68;
      local_74 = local_64;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar3 == 0) {
LAB_0095dc10:
        iVar13 = FUN_0277d6c4(&local_68);
      }
      else {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((*(uint *)(lVar27 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0095dc10;
        lVar27 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((*(uint *)(lVar27 + 0x1d8) <= uVar12) ||
           (puVar28 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar12 * 8),
           puVar28 == (uint *)0x0)) goto LAB_0095dc10;
        iVar13 = FUN_0277d6c4(&local_68);
        uVar12 = *puVar28;
        if (uVar12 != 0) {
          cVar25 = *PTR_DAT_04bbfe88;
LAB_0095db24:
          if (cVar25 == '\0') {
            *PTR_DAT_04bbfe88 = 1;
            memset(PTR_DAT_04bbfe90,0xff,0x1ac);
            uVar12 = *puVar28;
            cVar25 = '\x01';
joined_r0x0095db74:
            puVar10 = (uint *)(ulong)uVar12;
            if ((puVar10 != (uint *)0x0) && (puVar28 != puVar10)) {
              lVar27 = 0xc;
              if (*(char *)((long)puVar28 + (10 - (long)puVar10)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar28 + (lVar27 - (long)puVar10);
              if (lVar27 != 0) {
                uVar19 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar10));
                *(undefined4 *)(PTR_DAT_04bbfe90 + 0x170) = 0xfffffffe;
                if (uVar19 != 0) goto code_r0x0095dbb8;
              }
            }
          }
          else {
            uVar14 = *(uint *)(PTR_DAT_04bbfe90 + 0x170);
            if ((int)uVar14 < 0) {
              if (uVar14 == 0xffffffff) goto joined_r0x0095db74;
            }
            else if ((char *)((ulong)uVar14 + (long)puVar28) != (char *)0x0) {
              uVar12 = *(uint *)(param_1 + 0xdb8);
              uVar19 = (ulong)uVar12;
              if (*(char *)((ulong)uVar14 + (long)puVar28) != '\0') {
                if (0 < (int)uVar12) {
                  if (uVar19 < 4) {
                    lVar27 = 0;
                    bVar21 = false;
                  }
                  else {
                    lVar27 = 0;
                    bVar21 = false;
                    piVar22 = (int *)(*(long *)(param_1 + 0xdc0) + 8);
                    do {
                      iVar5 = *piVar22;
                      piVar6 = piVar22 + 1;
                      lVar27 = lVar27 + -4;
                      piVar1 = piVar22 + -2;
                      piVar7 = piVar22 + -1;
                      piVar22 = piVar22 + 4;
                      bVar21 = (bool)((((*piVar6 == iVar13 || iVar5 == iVar13) || *piVar7 == iVar13)
                                      || *piVar1 == iVar13) | bVar21);
                    } while (-lVar27 != (uVar19 & 0xfffffffc));
                    lVar27 = -lVar27;
                  }
                  uVar19 = uVar19 & 3;
                  if ((uVar12 & 3) != 0) {
                    piVar22 = (int *)(*(long *)(param_1 + 0xdc0) + lVar27 * 4);
                    do {
                      uVar19 = uVar19 - 1;
                      bVar21 = (bool)(*piVar22 == iVar13 | bVar21);
                      piVar22 = piVar22 + 1;
                    } while (uVar19 != 0);
                  }
                  if (bVar21) goto LAB_0095d9f4;
                }
                break;
              }
              goto joined_r0x0095dcf4;
            }
          }
        }
      }
LAB_0095dc1c:
      uVar12 = *(uint *)(param_1 + 0xdb8);
      uVar19 = (ulong)uVar12;
joined_r0x0095dcf4:
      if (0 < (int)uVar12) {
        if (uVar19 - 1 < 3) {
          lVar27 = 0;
          bVar21 = false;
        }
        else {
          lVar27 = 0;
          bVar21 = false;
          piVar22 = (int *)(*(long *)(param_1 + 0xdc0) + 8);
          do {
            iVar5 = *piVar22;
            piVar6 = piVar22 + 1;
            lVar27 = lVar27 + -4;
            piVar1 = piVar22 + -2;
            piVar7 = piVar22 + -1;
            piVar22 = piVar22 + 4;
            bVar21 = (bool)((((*piVar6 == iVar13 || iVar5 == iVar13) || *piVar7 == iVar13) ||
                            *piVar1 == iVar13) | bVar21);
          } while (-lVar27 != (uVar19 & 0xfffffffc));
          lVar27 = -lVar27;
        }
        if ((uVar19 & 3) != 0) {
          uVar19 = uVar19 & 3;
          piVar22 = (int *)(*(long *)(param_1 + 0xdc0) + lVar27 * 4);
          do {
            uVar19 = uVar19 - 1;
            bVar21 = (bool)(*piVar22 == iVar13 | bVar21);
            piVar22 = piVar22 + 1;
          } while (uVar19 != 0);
        }
        if (bVar21) break;
      }
LAB_0095d9f4:
      uVar30 = uVar30 + 1;
      if (uVar30 == uVar29) {
        return;
      }
    } while( true );
  }
  puVar3 = PTR_DAT_04bb43c0;
  puVar11 = PTR_DAT_04bb37e0;
  if (uVar29 == 0) {
    uVar30 = 0;
  }
  else {
    uVar19 = 0;
    uVar30 = 0;
    do {
      if (((*(int *)(lVar18 + 0xc0) == 0) || ((int)uVar19 < 0)) ||
         (*(int *)(lVar18 + 0xc4) <= (int)uVar19)) {
        local_68 = *(undefined2 *)puVar11;
        local_76 = puVar11[2];
        local_75 = puVar11[3];
        local_66 = *(undefined2 *)(puVar11 + 2);
        local_64 = *(undefined4 *)(puVar11 + 4);
      }
      else {
        local_66 = 0;
        local_64 = 0;
        local_68 = (undefined2)**(undefined4 **)(*(long *)(lVar18 + 200) + uVar19 * 8);
        FUN_0277d4ac(&local_68);
        local_76 = (undefined1)local_66;
        local_75 = local_66._1_1_;
      }
      lVar27 = *(long *)puVar3;
      local_70 = 0;
      local_78 = local_68;
      local_74 = local_64;
      uVar14 = FUN_0277d6c4(&local_78);
      uVar12 = 0;
      if (*(long *)puVar3 != 0) {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if (uVar14 < *(uint *)(lVar27 + 0x1d8)) {
          uVar12 = 0;
          if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar14 * 8) == 0) goto LAB_0095dda4;
          lVar27 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_68);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar27 + 0x1d8)) &&
              (puVar28 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar12 * 8),
              puVar28 != (uint *)0x0)) && (uVar14 = *puVar28, uVar14 != 0)) {
            cVar25 = *PTR_DAT_04bbfe88;
            do {
              if (cVar25 == '\0') {
                cVar25 = '\x01';
                *PTR_DAT_04bbfe88 = 1;
                memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                uVar14 = *puVar28;
              }
              else {
                uVar8 = *(uint *)(PTR_DAT_04bbfe90 + 0x170);
                if (-1 < (int)uVar8) {
                  uVar12 = 0;
                  if ((char *)((ulong)uVar8 + (long)puVar28) != (char *)0x0) {
                    uVar12 = (uint)(*(char *)((ulong)uVar8 + (long)puVar28) != '\0');
                  }
                  goto LAB_0095dda4;
                }
                if (uVar8 != 0xffffffff) break;
              }
              puVar10 = (uint *)(ulong)uVar14;
              uVar12 = 0;
              if ((puVar10 == (uint *)0x0) || (uVar12 = 0, puVar28 == puVar10)) goto LAB_0095dda4;
              lVar27 = 0xc;
              if (*(char *)((long)puVar28 + (10 - (long)puVar10)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar28 + (lVar27 - (long)puVar10);
              if (lVar27 == 0) break;
              uVar24 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar10));
              *(undefined4 *)(PTR_DAT_04bbfe90 + 0x170) = 0xfffffffe;
              if (uVar24 == 0) break;
              piVar22 = (int *)(lVar27 + 4);
              while (piVar22[-1] != -0x5b24697b) {
                uVar12 = 0;
                piVar22 = piVar22 + 2;
                uVar24 = uVar24 - 1;
                if (uVar24 == 0) goto LAB_0095dda4;
              }
              uVar12 = 0;
              iVar13 = 0;
              if (*piVar22 != -1) {
                iVar13 = *piVar22;
              }
              *(int *)(PTR_DAT_04bbfe90 + 0x170) = iVar13;
              uVar14 = *puVar28;
              if (uVar14 == 0) goto LAB_0095dda4;
            } while( true );
          }
        }
        uVar12 = 0;
      }
LAB_0095dda4:
      uVar19 = uVar19 + 1;
      uVar30 = (ulong)((int)uVar30 + uVar12);
    } while (uVar19 != uVar29);
  }
  *(undefined1 *)(param_1 + 0xdf0) = 1;
  FUN_0095a220(param_1);
  puVar11 = PTR_DAT_04bb2698;
  pvVar26 = *(void **)(param_1 + 0xdc0);
  if (pvVar26 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar26);
    }
    else {
      plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar26);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15,pvVar26);
      }
    }
    *(undefined8 *)(param_1 + 0xdc0) = 0;
    *(undefined4 *)(param_1 + 0xdb8) = 0;
  }
  lVar18 = *(long *)(param_1 + 0xe18);
  if (lVar18 != 0) {
    plVar15 = (long *)(lVar18 + -8);
    if (*plVar15 != 0) {
      lVar27 = *plVar15 * 0x28;
      do {
        lVar4 = lVar18 + lVar27;
        pvVar26 = *(void **)(lVar4 + -8);
        *(undefined ***)(lVar4 + -0x28) = &PTR_FUN_04929c28;
        if (pvVar26 != (void *)0x0) {
          if (*(long *)puVar11 == 0) {
            free(pvVar26);
          }
          else {
            plVar16 = (long *)FUN_038cb610(*(long *)puVar11,pvVar26);
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x38))(plVar16,pvVar26);
            }
          }
          *(undefined8 *)(lVar4 + -8) = 0;
        }
        lVar27 = lVar27 + -0x28;
      } while (lVar27 != 0);
    }
    if (*(long *)puVar11 == 0) {
      free(plVar15);
    }
    else {
      plVar16 = (long *)FUN_038cb610(*(long *)puVar11,plVar15);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,plVar15);
      }
    }
    *(undefined8 *)(param_1 + 0xe18) = 0;
    *(undefined4 *)(param_1 + 0xe10) = 0;
  }
  if (*(long *)(param_1 + 0xdd0) != 0) {
    pvVar26 = (void *)(*(long *)(param_1 + 0xdd0) + -8);
    if (*(long *)puVar11 == 0) {
      free(pvVar26);
    }
    else {
      plVar15 = (long *)FUN_038cb610(*(long *)puVar11,pvVar26);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15,pvVar26);
      }
    }
    *(undefined8 *)(param_1 + 0xdd0) = 0;
    *(undefined4 *)(param_1 + 0xdc8) = 0;
  }
  uVar29 = (uint)uVar30;
  if (uVar29 == 0) goto LAB_0095e47c;
  lVar18 = *(long *)puVar11;
  if (lVar18 == 0) {
    pvVar26 = malloc(uVar30 << 2);
joined_r0x0095e200:
    if (pvVar26 != (void *)0x0) {
      *(uint *)(param_1 + 0xdb8) = uVar29;
      *(void **)(param_1 + 0xdc0) = pvVar26;
    }
  }
  else {
    plVar15 = *(long **)(param_1 + 0xe00);
    if (plVar15 != (long *)0x0) {
LAB_0095e174:
      pvVar26 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar30 << 2,8);
      goto joined_r0x0095e200;
    }
    lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar15 = (long *)(lVar18 + 8);
    if (lVar27 != 0) {
      plVar15 = (long *)(lVar27 + 0xa8);
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 != (long *)0x0) goto LAB_0095e174;
  }
  lVar18 = *(long *)puVar11;
  sVar2 = uVar30 * 0x28 + 8;
  if (lVar18 == 0) {
    puVar17 = malloc(sVar2);
joined_r0x0095e210:
    if (puVar17 != (ulong *)0x0) {
      puVar23 = puVar17 + 1;
      *puVar17 = uVar30;
      uVar24 = uVar30 * 0x28 - 0x28;
      uVar12 = ((uint)(uVar24 / 0x28) & 0x7ffffff) + 1;
      uVar19 = (ulong)uVar12 & 3;
      puVar17 = puVar23;
      if ((uVar12 & 3) != 0) {
        do {
          puVar17[4] = 0;
          uVar19 = uVar19 - 1;
          puVar17[2] = 0;
          *(undefined4 *)(puVar17 + 3) = 0;
          *puVar17 = (ulong)&PTR_FUN_04929c28;
          puVar17[1] = 0;
          puVar17 = puVar17 + 5;
        } while (uVar19 != 0);
      }
      if (0x77 < uVar24) {
        do {
          *puVar17 = (ulong)&PTR_FUN_04929c28;
          puVar17[1] = 0;
          puVar17[2] = 0;
          *(undefined4 *)(puVar17 + 3) = 0;
          *(undefined4 *)(puVar17 + 8) = 0;
          *(undefined4 *)(puVar17 + 0xd) = 0;
          puVar17[0x13] = 0;
          *(undefined4 *)(puVar17 + 0x12) = 0;
          puVar17[4] = 0;
          puVar17[5] = (ulong)&PTR_FUN_04929c28;
          puVar17[6] = 0;
          puVar17[7] = 0;
          puVar17[9] = 0;
          puVar17[10] = (ulong)&PTR_FUN_04929c28;
          puVar17[0xb] = 0;
          puVar17[0xc] = 0;
          puVar17[0xe] = 0;
          puVar17[0xf] = (ulong)&PTR_FUN_04929c28;
          puVar17[0x10] = 0;
          puVar17[0x11] = 0;
          puVar17 = puVar17 + 0x14;
        } while (puVar17 != puVar23 + uVar30 * 5);
      }
      *(uint *)(param_1 + 0xe10) = uVar29;
      *(ulong **)(param_1 + 0xe18) = puVar23;
    }
  }
  else {
    plVar15 = *(long **)(param_1 + 0xe00);
    if (plVar15 != (long *)0x0) {
LAB_0095e1dc:
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,sVar2,8);
      goto joined_r0x0095e210;
    }
    lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar15 = (long *)(lVar18 + 8);
    if (lVar27 != 0) {
      plVar15 = (long *)(lVar27 + 0xa8);
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 != (long *)0x0) goto LAB_0095e1dc;
  }
  lVar18 = *(long *)puVar11;
  sVar2 = uVar30 * 0x98 + 8;
  if (lVar18 == 0) {
    puVar17 = malloc(sVar2);
joined_r0x0095e334:
    if (puVar17 != (ulong *)0x0) {
      puVar20 = puVar17 + 1;
      *puVar17 = uVar30;
      puVar3 = PTR_DAT_04bb2d88;
      uVar19 = uVar30 * 0x98 - 0x98;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar19;
      puVar23 = puVar20;
      if ((SUB164(auVar9 * ZEXT816(0xd79435e50d79435f),8) >> 7 & 1) == 0) {
        *(undefined1 *)((long)puVar17 + 0x1c) = 0;
        *(undefined4 *)(puVar17 + 3) = 0x80;
        puVar23 = puVar17 + 0x14;
        puVar17[2] = (ulong)((long)puVar17 + 0x1c);
        *(undefined1 *)((long)puVar17 + 0x9b) = 0;
        puVar17[1] = (ulong)(puVar3 + 0x10);
      }
      if (0x97 < uVar19) {
        puVar3 = puVar3 + 0x10;
        do {
          *(undefined4 *)(puVar23 + 2) = 0x80;
          *(undefined1 *)((long)puVar23 + 0x93) = 0;
          *(undefined1 *)((long)puVar23 + 0x14) = 0;
          *(undefined4 *)(puVar23 + 0x15) = 0x80;
          *(undefined1 *)((long)puVar23 + 299) = 0;
          *puVar23 = (ulong)puVar3;
          puVar23[1] = (ulong)((long)puVar23 + 0x14);
          *(undefined1 *)((long)puVar23 + 0xac) = 0;
          puVar23[0x13] = (ulong)puVar3;
          puVar23[0x14] = (ulong)((long)puVar23 + 0xac);
          puVar23 = puVar23 + 0x26;
        } while (puVar23 != puVar20 + uVar30 * 0x13);
      }
      *(uint *)(param_1 + 0xdc8) = uVar29;
      *(ulong **)(param_1 + 0xdd0) = puVar20;
    }
  }
  else {
    plVar15 = *(long **)(param_1 + 0xe00);
    if (plVar15 != (long *)0x0) {
LAB_0095e310:
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,sVar2,8);
      goto joined_r0x0095e334;
    }
    lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar15 = (long *)(lVar18 + 8);
    if (lVar27 != 0) {
      plVar15 = (long *)(lVar27 + 0xa8);
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 != (long *)0x0) goto LAB_0095e310;
  }
  uVar12 = 0;
  do {
    uVar14 = uVar12;
    if (*(uint *)(param_1 + 0xdb8) <= uVar12) {
      uVar14 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0xdc0) + (ulong)uVar14 * 4) = 0xfffe;
    uVar14 = uVar12;
    if (*(uint *)(param_1 + 0xdc8) <= uVar12) {
      uVar14 = 0;
    }
    **(undefined1 **)(*(long *)(param_1 + 0xdd0) + (ulong)uVar14 * 0x98 + 8) = 0;
    uVar14 = uVar12;
    if (*(uint *)(param_1 + 0xe10) <= uVar12) {
      uVar14 = 0;
    }
    puVar31 = (undefined8 *)(*(long *)(param_1 + 0xe18) + (ulong)uVar14 * 0x28 + 0x20);
    pvVar26 = (void *)*puVar31;
    if (pvVar26 != (void *)0x0) {
      if (*(long *)puVar11 == 0) {
        free(pvVar26);
      }
      else {
        plVar15 = (long *)FUN_038cb610(*(long *)puVar11,pvVar26);
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x38))(plVar15,pvVar26);
        }
      }
      *puVar31 = 0;
    }
    uVar12 = uVar12 + 1;
  } while (uVar29 != uVar12);
LAB_0095e47c:
  FUN_0095acb0(param_1,0);
  return;
code_r0x0095dbb8:
  piVar22 = (int *)(lVar27 + 4);
  while (piVar22[-1] != -0x5b24697b) {
    piVar22 = piVar22 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) goto LAB_0095dc1c;
  }
  iVar5 = 0;
  if (*piVar22 != -1) {
    iVar5 = *piVar22;
  }
  *(int *)(PTR_DAT_04bbfe90 + 0x170) = iVar5;
  uVar12 = *puVar28;
  if (uVar12 == 0) goto LAB_0095dc1c;
  goto LAB_0095db24;
}

