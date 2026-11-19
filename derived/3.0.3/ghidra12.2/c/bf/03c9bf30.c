
/* WARNING: Type propagation algorithm not settling */

long * FUN_03c9bf30(long param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined *puVar20;
  uint uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  undefined *local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [32];
  undefined *local_70;
  char *local_68;
  
  puVar20 = PTR_DAT_04bb2020;
  pcVar7 = (char *)param_2[1];
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = pcVar7;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar11 = 0;
  do {
    if (*(char *)(param_2[1] + lVar11) == '\0') {
LAB_03c9bfc0:
      iVar10 = (int)lVar11;
joined_r0x03c9bfc4:
      if (0 < iVar10) {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar12 = (char *)param_2[1];
        lVar11 = 0;
        goto LAB_03c9bff0;
      }
      break;
    }
    lVar8 = param_2[1] + lVar11;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_03c9bfc0;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      iVar10 = (int)lVar11 + 2;
      goto joined_r0x03c9bfc4;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  goto LAB_03c9c150;
  while( true ) {
    if (pcVar12[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_03c9c028;
    }
    if (pcVar12[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_03c9c028;
    }
    lVar11 = lVar11 + 3;
    if (lVar11 == 0x80001) break;
LAB_03c9bff0:
    if (pcVar12[lVar11] == '\0') {
LAB_03c9c028:
      if ((int)lVar11 < 0) {
        pcVar12 = PTR_DAT_04bb2120;
      }
      break;
    }
  }
  if (*pcVar12 == '*') {
    lVar14 = *(long *)(param_1 + 0xb8);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar8 + lVar11) == '\0') {
LAB_03c9c094:
        iVar10 = (int)lVar11;
joined_r0x03c9c098:
        if (0 < iVar10) {
          lVar8 = lVar8 + 1;
          goto joined_r0x03c9c0a0;
        }
        break;
      }
      if (*(char *)(lVar8 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03c9c094;
      }
      if (*(char *)(lVar8 + lVar11 + 2) == '\0') {
        iVar10 = (int)lVar11 + 2;
        goto joined_r0x03c9c098;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar8 = *(long *)(PTR_PTR_04bb2238 + 8);
joined_r0x03c9c0a0:
    if (((lVar14 == 0) ||
        (pcVar7 = (char *)FUN_00364e30((long *)(param_1 + 0xb8),lVar8), pcVar7 == (char *)0x0)) ||
       (*pcVar7 == '\0')) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = param_2[1];
      lVar11 = 0;
      do {
        if (*(char *)(lVar8 + lVar11) == '\0') {
LAB_03c9c124:
          iVar10 = (int)lVar11;
joined_r0x03c9c128:
          if (0 < iVar10) {
            pcVar7 = (char *)(lVar8 + 1);
            goto LAB_03c9c14c;
          }
          break;
        }
        if (*(char *)(lVar8 + lVar11 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_03c9c124;
        }
        if (*(char *)(lVar8 + lVar11 + 2) == '\0') {
          iVar10 = (int)lVar11 + 2;
          goto joined_r0x03c9c128;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      pcVar7 = *(char **)(PTR_PTR_04bb2238 + 8);
    }
LAB_03c9c14c:
    local_68 = pcVar7;
  }
LAB_03c9c150:
  lVar11 = FUN_00369da0(param_1,pcVar7);
  if (lVar11 == 0) {
    return (long *)0x0;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  FUN_00360020(auStack_90,lVar11);
  if (param_4 == 0) {
    lVar11 = 0;
  }
  else {
    sVar3 = FUN_0036013c(auStack_90);
    if (sVar3 == 0) {
      return (long *)0x0;
    }
    uVar16 = 0;
    lVar11 = 2;
    while( true ) {
      lVar8 = FUN_00360154(auStack_90);
      lVar14 = *(long *)(param_4 + 0x28);
      if (lVar8 + uVar16 * 0x24 == lVar14) break;
      uVar15 = 0;
      bVar1 = true;
      do {
        lVar25 = lVar8 + lVar11 + uVar15;
        cVar2 = *(char *)(lVar25 + -2);
        if (cVar2 != *(char *)(lVar14 + uVar15)) break;
        if (cVar2 == '\0') {
          if (bVar1) goto LAB_03c9c24c;
          break;
        }
        cVar2 = *(char *)(lVar25 + -1);
        if (cVar2 != *(char *)(lVar14 + uVar15 + 1)) break;
        if (cVar2 == '\0') goto LAB_03c9c24c;
        cVar2 = *(char *)(lVar8 + lVar11 + uVar15);
        if (cVar2 != *(char *)(lVar14 + uVar15 + 2)) break;
        if (cVar2 == '\0') goto LAB_03c9c24c;
        bVar1 = uVar15 < 0x7fffe;
        uVar15 = uVar15 + 3;
      } while (uVar15 != 0x80001);
      uVar16 = uVar16 + 1;
      uVar4 = FUN_0036013c(auStack_90);
      lVar11 = lVar11 + 0x24;
      if (uVar4 <= uVar16) {
        return (long *)0x0;
      }
    }
LAB_03c9c24c:
    lVar11 = FUN_00367720(uVar13);
    if (lVar11 == 0) {
      return (long *)0x0;
    }
  }
  lVar8 = param_1 + 0x100;
  if (*(long *)(param_1 + 0x108) != lVar8) {
    lVar14 = (long)*(int *)(param_1 + 0x114);
    plVar18 = (long *)(*(long *)(param_1 + 0x108) - lVar14);
    do {
      if ((plVar18[0xf] == param_3) && (plVar18[0x10] == lVar11)) {
        local_a0 = (char *)(plVar18[0xc] + (ulong)*(uint *)(plVar18[0xc] + 0xc));
        local_a8 = puVar20 + 0x10;
        (**(code **)(local_70 + 0x18))(&local_70);
        (**(code **)(local_70 + 0x18))(&local_70);
        pcVar7 = local_68;
        (**(code **)(local_a8 + 0x18))(&local_a8);
        if (pcVar7 == local_a0) {
          return plVar18;
        }
        uVar16 = 0;
        bVar1 = true;
        do {
          if (local_68[uVar16] != local_a0[uVar16]) break;
          if (local_68[uVar16] == '\0') {
            if (bVar1) {
LAB_03c9c38c:
              if (plVar18 != (long *)0x0) {
                return plVar18;
              }
              goto LAB_03c9c390;
            }
            break;
          }
          if (local_68[uVar16 + 1] != local_a0[uVar16 + 1]) break;
          if (local_68[uVar16 + 1] == '\0') goto LAB_03c9c38c;
          if (local_68[uVar16 + 2] != local_a0[uVar16 + 2]) break;
          if (local_68[uVar16 + 2] == '\0') goto LAB_03c9c38c;
          bVar1 = uVar16 < 0x7fffe;
          uVar16 = uVar16 + 3;
        } while (uVar16 != 0x80001);
      }
      plVar18 = (long *)(*(long *)((long)plVar18 + lVar14 + 8) - lVar14);
    } while (plVar18 != (long *)(lVar8 - lVar14));
  }
LAB_03c9c390:
  lVar14 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x118) + 0x28) + 0x40) + 0x78))();
  puVar20 = PTR_DAT_04bd44e8;
  local_a8 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x118) + 0x28) + 0x40);
  local_a0 = (char *)0x0;
  nn::os::LockMutex((MutexType *)(PTR_DAT_04bd44e8 + 0x20));
  puVar24 = (undefined8 *)PTR_DAT_04bd44c8;
  local_98 = *(undefined8 *)PTR_DAT_04bd44c8;
  *(undefined ***)PTR_DAT_04bd44c8 = &local_a8;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  if (lVar11 == 0) {
    sVar3 = FUN_0036013c(auStack_90);
    if (sVar3 == 0) {
      plVar18 = (long *)0x0;
      goto LAB_03c9c700;
    }
    plVar18 = (long *)0x0;
    uVar16 = 0;
    do {
      lVar11 = FUN_00360154(auStack_90);
      lVar11 = FUN_00367720(uVar13,lVar11 + uVar16 * 0x24);
      if (lVar11 != 0) {
        for (lVar25 = *(long *)(lVar11 + 0x20); lVar25 != lVar11 + 0x18;
            lVar25 = *(long *)(lVar25 + 8)) {
          plVar22 = *(long **)(lVar25 + 0x10);
          plVar23 = *(long **)((long)plVar22 + 0xc9);
          lVar9 = (**(code **)(*plVar23 + 0x18))(plVar23);
          if (*(long *)(lVar9 + 0x18) != 0) {
            plVar23 = *(long **)(*(long *)(lVar9 + 0x18) + 0xc9);
          }
          if (plVar23[1] == param_3) {
            if (plVar18 == (long *)0x0) {
              uVar5 = FUN_03c9bc70(param_1,auStack_90,param_3);
              (**(code **)(local_70 + 0x18))(&local_70);
              plVar18 = (long *)FUN_03c9bd90(param_1,local_68,uVar5);
            }
            uVar15 = (ulong)*(ushort *)((long)plVar18 + *(long *)PTR_DAT_04bd40b8);
            if (uVar15 != 0) {
              uVar26 = 0;
              bVar1 = true;
              lVar9 = *(long *)((long)plVar18 + *(long *)PTR_DAT_04bd40b0);
              while (plVar23 = (long *)(lVar9 + uVar26 * 0x10), (long *)*plVar23 != plVar22) {
                cVar2 = (**(code **)(*plVar22 + 0x50))(plVar22);
                if (cVar2 != '\0') {
                  uVar21 = 0;
                  do {
                    lVar19 = *plVar23;
                    lVar17 = (**(code **)(*plVar22 + 0x58))(plVar22,uVar21);
                    if (lVar19 == lVar17) goto LAB_03c9c670;
                    uVar21 = uVar21 + 1;
                    uVar6 = (**(code **)(*plVar22 + 0x50))(plVar22);
                  } while (uVar21 < (uVar6 & 0xff));
                }
                uVar26 = uVar26 + 1;
                bVar1 = uVar26 < uVar15;
                if (uVar26 == uVar15) break;
              }
LAB_03c9c670:
              if (bVar1) goto LAB_03c9c548;
            }
            (**(code **)(*plVar18 + 0x50))(plVar18,plVar22,0);
          }
LAB_03c9c548:
        }
      }
      uVar16 = uVar16 + 1;
      uVar4 = FUN_0036013c(auStack_90);
    } while (uVar16 < uVar4);
  }
  else {
    lVar25 = *(long *)(lVar11 + 0x20);
    if (lVar25 == lVar11 + 0x18) {
      plVar18 = (long *)0x0;
      puVar20 = PTR_DAT_04bd44e8;
      goto LAB_03c9c700;
    }
    plVar18 = (long *)0x0;
    do {
      lVar17 = *(long *)(lVar25 + 0x10);
      plVar22 = *(long **)(lVar17 + 0xc9);
      lVar9 = (**(code **)(*plVar22 + 0x18))(plVar22);
      if (*(long *)(lVar9 + 0x18) != 0) {
        plVar22 = *(long **)(*(long *)(lVar9 + 0x18) + 0xc9);
      }
      if (plVar22[1] == param_3) {
        if (plVar18 == (long *)0x0) {
          uVar5 = FUN_03c9bc70(param_1,auStack_90,param_3);
          (**(code **)(local_70 + 0x18))(&local_70);
          plVar18 = (long *)FUN_03c9bd90(param_1,local_68,uVar5);
          plVar18[0x10] = lVar11;
        }
        (**(code **)(*plVar18 + 0x50))(plVar18,lVar17,0);
      }
      lVar25 = *(long *)(lVar25 + 8);
    } while (lVar25 != lVar11 + 0x18);
  }
  if (plVar18 == (long *)0x0) {
    puVar20 = PTR_DAT_04bd44e8;
    puVar24 = (undefined8 *)PTR_DAT_04bd44c8;
  }
  else {
    plVar18[0xf] = param_3;
    lVar11 = *(long *)(param_1 + 0x100);
    plVar22 = (long *)((long)*(int *)(param_1 + 0x114) + (long)plVar18);
    *(long **)(param_1 + 0x100) = plVar22;
    *plVar22 = lVar11;
    plVar22[1] = lVar8;
    puVar20 = PTR_DAT_04bd44e8;
    puVar24 = (undefined8 *)PTR_DAT_04bd44c8;
    if (lVar11 != 0) {
      *(long **)(lVar11 + 8) = plVar22;
    }
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  }
LAB_03c9c700:
  *puVar24 = local_98;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  nn::os::UnlockMutex((MutexType *)(puVar20 + 0x20));
  lVar11 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x118) + 0x28) + 0x40) + 0x78))();
  *(long *)(param_1 + 0x160) = (lVar14 - lVar11) + *(long *)(param_1 + 0x160);
  return plVar18;
}

