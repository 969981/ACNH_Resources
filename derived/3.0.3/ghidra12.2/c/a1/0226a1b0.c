
/* WARNING: Removing unreachable block (ram,0x0226a708) */
/* WARNING: Removing unreachable block (ram,0x0226aa6c) */
/* WARNING: Removing unreachable block (ram,0x0226aa78) */
/* WARNING: Removing unreachable block (ram,0x0226a2a0) */
/* WARNING: Removing unreachable block (ram,0x0226a3e4) */
/* WARNING: Removing unreachable block (ram,0x0226aa5c) */
/* WARNING: Removing unreachable block (ram,0x0226a7fc) */
/* WARNING: Removing unreachable block (ram,0x0226a740) */

undefined8 FUN_0226a1b0(long *param_1,int *param_2,long param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_34;
  
  puVar16 = *(undefined8 **)(param_3 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_5c = 0;
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  puVar7 = PTR_DAT_04bb27c0;
  if ((char *)param_1[1] == "PgePourCoffee") {
LAB_0226a270:
    if (*param_2 == 0) {
      local_34 = 0;
      lVar14 = *(long *)PTR_DAT_04bb27c0;
      if (lVar14 != 0) {
        uVar18 = *(uint *)(*(long *)PTR_DAT_04bb4128 + 0x348);
        if ((((uVar18 == 0) ||
             (plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                  ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
            ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar18)) {
          plVar17 = (long *)0x0;
        }
        if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
          plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar14 = *(long *)puVar7;
          iVar10 = (**(code **)(*plVar12 + 0x60))();
          if (iVar10 < 0x11) {
            uVar18 = 1;
          }
          else {
            if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0226a4f8;
            uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0226a4f8:
          uVar18 = 0;
        }
        if (plVar17 != (long *)0x0) {
          iVar10 = (int)plVar17[0x2a];
          if (((*PTR_DAT_04bb4160 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar11 != 0)) {
            *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
LAB_0226ab68:
            __cxa_guard_release(PTR_DAT_04bb4160);
          }
LAB_0226a57c:
          uVar15 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb4158);
          uVar19 = 0;
          if (iVar10 == 1) {
            uVar19 = uVar18;
          }
          if (((uVar15 & 1) != 0) && (uVar19 != 0)) {
            *(uint *)(plVar17 + 0x83) = *(uint *)(plVar17 + 0x83) | 0x1000;
          }
        }
      }
    }
LAB_0226a5b0:
    local_5c = 3;
  }
  else {
    uVar15 = 0;
    bVar9 = true;
    do {
      cVar6 = ((char *)param_1[1])[uVar15];
      if (cVar6 != "PgePourCoffee"[uVar15]) break;
      if (cVar6 == '\0') {
        if (bVar9) goto LAB_0226a270;
        break;
      }
      bVar9 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    puVar7 = PTR_DAT_04bb27c0;
    if ((char *)param_1[1] == "PgePourTakeAwayCoffee") {
LAB_0226a3b0:
      if (*param_2 == 0) {
        local_34 = 5;
        lVar14 = *(long *)PTR_DAT_04bb27c0;
        if (lVar14 != 0) {
          uVar18 = *(uint *)(*(long *)PTR_DAT_04bb4128 + 0x370);
          if ((((uVar18 == 0) ||
               (plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                    ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
              ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar18))
          {
            plVar17 = (long *)0x0;
          }
          if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
            plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar14 = *(long *)puVar7;
            iVar10 = (**(code **)(*plVar12 + 0x60))();
            if (iVar10 < 0x11) {
              uVar18 = 1;
            }
            else {
              if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0226a554;
              uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_0226a554:
            uVar18 = 0;
          }
          if (plVar17 != (long *)0x0) {
            iVar10 = (int)plVar17[0x2a];
            if (((*PTR_DAT_04bb4160 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar11 != 0)) {
              *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
              goto LAB_0226ab68;
            }
            goto LAB_0226a57c;
          }
        }
      }
      goto LAB_0226a5b0;
    }
    uVar15 = 0;
    bVar9 = true;
    do {
      cVar6 = ((char *)param_1[1])[uVar15];
      if (cVar6 != "PgePourTakeAwayCoffee"[uVar15]) break;
      if (cVar6 == '\0') {
        if (bVar9) goto LAB_0226a3b0;
        break;
      }
      bVar9 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((char *)param_1[1] == "PgePourMilk") {
LAB_0226a4f0:
      local_5c = 4;
    }
    else {
      uVar15 = 0;
      bVar9 = true;
      do {
        cVar6 = ((char *)param_1[1])[uVar15];
        if (cVar6 != "PgePourMilk"[uVar15]) break;
        if (cVar6 == '\0') {
          if (bVar9) goto LAB_0226a4f0;
          break;
        }
        bVar9 = uVar15 < 0x80000;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x80001);
    }
  }
  if (local_5c != 0) {
    local_34 = 0x2d;
    uVar15 = 0;
    if (puVar16[0x227] != 0) {
      uVar15 = FUN_03850a90(puVar16[0x227],0x2d,0,0);
    }
    uVar18 = local_5c;
    puVar8 = PTR_DAT_04bb4128;
    puVar7 = PTR_DAT_04bb27c0;
    piVar1 = (int *)(*(long *)PTR_DAT_04bb4128 + 0x344);
    piVar4 = piVar1 + (ulong)local_5c * 2;
    if (6 < local_5c) {
      piVar4 = piVar1;
    }
    if ((uVar15 & 1) == 0) {
      if (*piVar4 == 2) {
        FUN_0226ab74(&local_5c);
      }
    }
    else if (*piVar4 != 2) {
      piVar4 = piVar1 + (ulong)local_5c * 2;
      if (6 < local_5c) {
        piVar4 = piVar1;
      }
      lVar14 = *(long *)PTR_DAT_04bb27c0;
      if (lVar14 != 0) {
        uVar19 = piVar4[1];
        if ((((uVar19 == 0) ||
             (plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                  ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
            ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar19)) {
          plVar17 = (long *)0x0;
        }
        if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
          plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar14 = *(long *)puVar7;
          iVar10 = (**(code **)(*plVar12 + 0x60))();
          if (iVar10 < 0x11) {
            uVar19 = 1;
          }
          else {
            if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0226a8a8;
            uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0226a8a8:
          uVar19 = 0;
        }
        if (plVar17 != (long *)0x0) {
          lVar14 = plVar17[0x2a];
          if (((*PTR_DAT_04bb4160 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar10 != 0)) {
            *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb4160);
          }
          uVar15 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb4158);
          uVar3 = 0;
          if ((int)lVar14 == 1) {
            uVar3 = uVar19;
          }
          if (((uVar15 & 1) != 0) && (uVar3 != 0)) {
            if (uVar18 == 4) {
              *(undefined8 *)((long)plVar17 + 0x48c) = 0;
              *(undefined8 *)((long)plVar17 + 0x494) = 0;
              *(uint *)(plVar17 + 0x83) = *(uint *)(plVar17 + 0x83) | 0x100;
              local_34 = 0;
              puVar2 = (undefined4 *)(*(long *)puVar8 + 0x344);
              puVar5 = puVar2 + (ulong)(local_5c & 0xff) * 2;
              if (6 < (local_5c & 0xff)) {
                puVar5 = puVar2;
              }
              local_58 = *puVar5;
              local_54 = local_58;
                    /* WARNING: Could not recover jumptable at 0x0226a9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar13 = (*(code *)(&UNK_0226aa44 + (ulong)DAT_04179f56 * 4))();
              return uVar13;
            }
            *(uint *)(plVar17 + 0x83) = *(uint *)(plVar17 + 0x83) | 4;
            local_34 = 2;
            puVar2 = (undefined4 *)(*(long *)puVar8 + 0x344);
            puVar5 = puVar2 + (ulong)(local_5c & 0xff) * 2;
            if (6 < (local_5c & 0xff)) {
              puVar5 = puVar2;
            }
            local_58 = *puVar5;
            local_54 = local_58;
                    /* WARNING: Could not recover jumptable at 0x0226aa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar13 = (*(code *)(&UNK_0226aa44 + (ulong)DAT_04179f54 * 4))();
            return uVar13;
          }
        }
      }
    }
  }
  puVar7 = PTR_DAT_04bb4128;
  if (*param_2 != 0) {
    if (*param_2 != 1) {
      return 1;
    }
    lVar14 = *(long *)PTR_DAT_04bb4128;
    if (*(int *)(lVar14 + 0x35c) == 2) {
      local_34 = 3;
      FUN_0226ab74(&local_34);
      lVar14 = *(long *)puVar7;
    }
    if (*(int *)(lVar14 + 0x364) == 2) {
      local_34 = 4;
      FUN_0226ab74(&local_34);
      return 1;
    }
    return 1;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  puVar7 = PTR_DAT_04bb27c0;
  if ((char *)param_1[1] != "PgeOffer") {
    uVar15 = 0;
    bVar9 = true;
    while( true ) {
      cVar6 = ((char *)param_1[1])[uVar15];
      if (cVar6 != "PgeOffer"[uVar15]) {
        return 1;
      }
      if (cVar6 == '\0') break;
      bVar9 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
      if (uVar15 == 0x80001) {
        return 1;
      }
    }
    if (!bVar9) {
      return 1;
    }
  }
  local_34 = 0;
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return 1;
  }
  uVar18 = *(uint *)(*(long *)PTR_DAT_04bb4128 + 0x348);
  if ((((uVar18 == 0) ||
       (plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
      ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar18)) {
    plVar17 = (long *)0x0;
  }
  if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar7;
    iVar10 = (**(code **)(*plVar12 + 0x60))();
    if (iVar10 < 0x11) {
      uVar18 = 1;
      goto joined_r0x0226a8a0;
    }
    if (*(uint *)(lVar14 + 0x5e8) < 5) {
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0226a8a0;
    }
  }
  uVar18 = 0;
joined_r0x0226a8a0:
  if (plVar17 != (long *)0x0) {
    lVar14 = plVar17[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar15 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb4158);
    uVar19 = 0;
    if ((int)lVar14 == 1) {
      uVar19 = uVar18;
    }
    if (((uVar15 & 1) != 0) && (uVar19 != 0)) {
      *(uint *)(plVar17 + 0x83) = *(uint *)(plVar17 + 0x83) | 0x4000;
    }
  }
  return 1;
}

