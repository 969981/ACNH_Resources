
void FUN_039210e0(float param_1,long param_2,long param_3,long param_4,uint param_5)

{
  ushort *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  uint uVar20;
  uint *puVar21;
  char *pcVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  long *plVar31;
  uint uVar32;
  float fVar33;
  long *local_b0;
  undefined *local_90;
  uint *local_88;
  undefined *local_80;
  uint *local_78;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x2b0));
  lVar26 = param_3;
  if (0.0 < param_1) {
    if (1.0 <= param_1) {
      param_3 = param_4;
    }
    lVar26 = param_4;
  }
  if (((DAT_05ae9038 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_05ae9038), iVar12 != 0)) {
    uVar4 = crc32b(0xffffffff,0x6e,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6d,0x4c11db7);
    uVar5 = crc32b(uVar4,0x65,0x4c11db7);
    DAT_05ae9030 = ~uVar5;
    __cxa_guard_release(&DAT_05ae9038);
  }
  if (((DAT_05ae9048 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_05ae9048), iVar12 != 0)) {
    uVar4 = crc32b(0xffffffff,0x67,0x4c11db7);
    uVar4 = crc32b(uVar4,0x72,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar4 = crc32b(uVar4,0x75,0x4c11db7);
    uVar5 = crc32b(uVar4,0x70,0x4c11db7);
    DAT_05ae9040 = ~uVar5;
    __cxa_guard_release(&DAT_05ae9048);
  }
  lVar16 = param_3 + (ulong)*(uint *)(param_3 + 0x14);
  uVar5 = *(uint *)(lVar16 + 0x34);
  if ((0xffff < uVar5) && (*(long *)(param_2 + 0xa8) != 0)) {
    uVar32 = 0;
    piVar27 = (int *)(lVar16 + 0x30 + ((ulong)uVar5 & 0xffff) * 4);
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar16 = *(long *)(param_2 + 0xa8);
      if (lVar16 != 0) {
        uVar29 = 0;
        do {
          if (*piVar27 == *(int *)(lVar16 + 0x28)) {
            uVar6 = piVar27[2];
            if (0xffff < uVar6) {
              uVar28 = 0;
              piVar30 = piVar27 + ((ulong)uVar6 & 0xffff);
              iVar12 = -1;
              goto LAB_03921270;
            }
            break;
          }
          lVar16 = *(long *)(lVar16 + 0x30);
          uVar29 = uVar29 + 1;
        } while (lVar16 != 0);
      }
LAB_039211d4:
      uVar32 = uVar32 + 1;
      piVar27 = piVar27 + 3;
    } while (uVar5 >> 0x10 != uVar32);
  }
  *(uint *)(param_2 + 0x260) = *(uint *)(param_2 + 0x260) | 1;
  *(ushort *)(param_2 + 0x8c) = *(ushort *)(param_2 + 0x8c) | 1;
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x2b0));
  return;
LAB_03921270:
  uVar7 = piVar30[1];
  if (0xffff < uVar7) {
    lVar16 = ((ulong)uVar7 & 0xffff) * 4;
    lVar24 = 0xffffffff;
    puVar3 = (uint *)(piVar30 + ((ulong)uVar7 & 0xffff));
    puVar21 = puVar3;
    uVar23 = (ulong)(uVar7 >> 0x10);
    do {
      if (*puVar21 == DAT_05ae9040) {
        if (lVar24 != 0) goto LAB_039212c8;
        break;
      }
      lVar24 = lVar24 + -1;
      puVar21 = puVar21 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    puVar21 = (uint *)0x0;
LAB_039212c8:
    lVar24 = 0;
    uVar23 = 0;
    do {
      if (*(uint *)((long)piVar30 + lVar16) == DAT_05ae9030) {
        if (((int)uVar23 != -1) && (puVar21 != (uint *)0x0)) {
          if (param_5 == 0xffffffff) goto LAB_03921440;
          local_78 = puVar21 + ((ulong)puVar21[1] & 0xffffff);
          local_80 = PTR_DAT_04bb2020 + 0x10;
          uVar7 = param_5;
          if (*(uint *)(param_2 + 0x50) <= param_5) {
            uVar7 = 0;
          }
          lVar16 = *(long *)(param_2 + 0x58) + (long)(int)uVar7 * 0x168;
          plVar31 = (long *)(lVar16 + 0x18);
          (**(code **)(*plVar31 + 0x18))(plVar31);
          (**(code **)(*plVar31 + 0x18))(plVar31);
          puVar21 = *(uint **)(lVar16 + 0x20);
          (**(code **)(local_80 + 0x18))(&local_80);
          if (puVar21 == local_78) goto LAB_03921440;
          pcVar22 = *(char **)(lVar16 + 0x20);
          if (*pcVar22 == (char)*local_78) {
            if (*pcVar22 == '\0') goto LAB_03921440;
            uVar23 = 0;
            goto LAB_039213d0;
          }
        }
        break;
      }
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 0x100000000;
      lVar16 = lVar16 + 8;
    } while (uVar7 >> 0x10 != uVar23);
  }
  goto LAB_03921260;
  while( true ) {
    if (pcVar22[uVar17 + 1] == '\0') goto LAB_03921824;
    if (pcVar22[uVar17 + 2] != *(char *)((long)local_78 + uVar17 + 2)) goto LAB_03921260;
    if (pcVar22[uVar17 + 2] == '\0') {
      uVar17 = uVar17 + 1;
      goto LAB_03921824;
    }
    if ((uVar17 == 0x7fffe) || (pcVar22[uVar17 + 3] != *(char *)((long)local_78 + uVar17 + 3)))
    goto LAB_03921260;
    uVar23 = uVar17 + 3;
    if (pcVar22[uVar17 + 3] == '\0') break;
LAB_039213d0:
    uVar17 = uVar23;
    if (pcVar22[uVar17 + 1] != *(char *)((long)local_78 + uVar17 + 1)) goto LAB_03921260;
  }
  uVar17 = uVar17 + 2;
LAB_03921824:
  if (uVar17 < 0x80000) {
LAB_03921440:
    uVar25 = *(uint *)(param_2 + 0x28);
    local_78 = (uint *)((long)puVar3 +
                       ((ulong)*(uint *)((long)puVar3 + (lVar24 >> 0x1d) + 4) & 0xffffff) * 4 +
                       (lVar24 >> 0x1d));
    uVar7 = uVar29;
    if (*(uint *)(param_2 + 0x18) <= uVar29) {
      uVar7 = 0;
    }
    puVar1 = (ushort *)(*(long *)(param_2 + 0x20) + (ulong)uVar7 * 4);
    uVar8 = *puVar1;
    uVar7 = (uint)puVar1[1] + (uint)uVar8;
    uVar20 = uVar25;
    if (uVar8 <= uVar25) {
      uVar20 = (uint)uVar8;
    }
    uVar23 = (ulong)uVar20;
    if (uVar7 <= uVar25) {
      uVar25 = uVar7;
    }
    local_80 = puVar2;
    if (uVar25 != uVar20) {
      lVar16 = *(long *)(param_2 + 0x30);
      local_b0 = (long *)0x0;
      uVar17 = (ulong)uVar20;
      do {
        plVar31 = *(long **)(lVar16 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
        if ((*(byte *)((long)plVar31 + 0xb2) & 1) != 0) {
          if (local_b0 == (long *)0x0) {
            if ((int)uVar17 <= iVar12) {
LAB_039215f0:
              local_b0 = (long *)0x0;
              goto LAB_039215f4;
            }
            plVar13 = (long *)(**(code **)(*plVar31 + 0x88))(plVar31);
            if (((DAT_05ae90e0 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_05ae90e0), iVar11 != 0)) {
              DAT_05ae90d0 = PTR_DAT_04bb2020 + 0x10;
              DAT_05ae90d8 = "default";
              __cxa_guard_release(&DAT_05ae90e0);
            }
            (**(code **)(*plVar13 + 0x18))(plVar13);
            (**(code **)(*plVar13 + 0x18))(plVar13);
            pcVar22 = (char *)plVar13[1];
            (**(code **)(DAT_05ae90d0 + 0x18))();
            if (pcVar22 != DAT_05ae90d8) {
              uVar19 = 0;
              bVar10 = true;
              do {
                lVar24 = plVar13[1] + 2 + uVar19;
                cVar9 = *(char *)(lVar24 + -2);
                if (cVar9 != DAT_05ae90d8[uVar19]) break;
                if (cVar9 == '\0') {
                  if (bVar10) goto LAB_039215e8;
                  break;
                }
                cVar9 = *(char *)(lVar24 + -1);
                if (cVar9 != DAT_05ae90d8[uVar19 + 1]) break;
                if (cVar9 == '\0') goto LAB_039215e8;
                cVar9 = *(char *)(plVar13[1] + 2 + uVar19);
                if (cVar9 != DAT_05ae90d8[uVar19 + 2]) break;
                if (cVar9 == '\0') goto LAB_039215e8;
                bVar10 = uVar19 < 0x7fffe;
                uVar19 = uVar19 + 3;
              } while (uVar19 != 0x80001);
              goto LAB_039215f0;
            }
LAB_039215e8:
            local_b0 = plVar31;
            iVar12 = (int)uVar17;
          }
          else {
LAB_039215f4:
          }
          plVar13 = (long *)(**(code **)(*plVar31 + 0x80))(plVar31);
          (**(code **)(*plVar13 + 0x18))();
          (**(code **)(*plVar13 + 0x18))(plVar13);
          puVar21 = (uint *)plVar13[1];
          (**(code **)(local_80 + 0x18))(&local_80);
          if (puVar21 == local_78) goto LAB_03921754;
          uVar17 = 0;
          bVar10 = true;
          do {
            lVar24 = plVar13[1] + 2 + uVar17;
            cVar9 = *(char *)(lVar24 + -2);
            if (cVar9 != *(char *)((long)local_78 + uVar17)) break;
            if (cVar9 == '\0') {
              if (bVar10) goto LAB_0392174c;
              break;
            }
            cVar9 = *(char *)(lVar24 + -1);
            if (cVar9 != *(char *)((long)local_78 + uVar17 + 1)) break;
            if (cVar9 == '\0') goto LAB_0392174c;
            cVar9 = *(char *)(plVar13[1] + 2 + uVar17);
            if (cVar9 != *(char *)((long)local_78 + uVar17 + 2)) break;
            if (cVar9 == '\0') goto LAB_0392174c;
            bVar10 = uVar17 < 0x7fffe;
            uVar17 = uVar17 + 3;
          } while (uVar17 != 0x80001);
        }
        uVar17 = uVar23 + 1;
        uVar23 = uVar17 & 0xffffffff;
        plVar31 = local_b0;
      } while (uVar25 != (uint)uVar17);
LAB_0392174c:
      if (plVar31 != (long *)0x0) {
LAB_03921754:
        if (param_3 != lVar26) {
          lVar16 = lVar26 + 0x30 + (ulong)*(uint *)(lVar26 + 0x14);
          uVar7 = *(uint *)(lVar16 + 4);
          if (0xffff < uVar7) {
            uVar25 = uVar7 >> 0x10;
            piVar18 = (int *)(lVar16 + ((ulong)uVar7 & 0xffff) * 4);
            do {
              if (*piVar27 == *piVar18) {
                uVar7 = piVar18[2];
                if (uVar7 < 0x10000) goto LAB_03921260;
                uVar25 = 0;
                piVar18 = piVar18 + ((ulong)uVar7 & 0xffff);
                goto LAB_03921854;
              }
              piVar18 = piVar18 + 3;
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
        }
        FUN_03956720(0,plVar31,0,piVar30,0,0);
      }
    }
  }
  goto LAB_03921260;
LAB_03921854:
  do {
    uVar20 = piVar18[1];
    if (uVar20 >> 0x10 == 0) {
      uVar19 = ((ulong)uVar20 & 0xffff) << 2;
    }
    else {
      uVar19 = (ulong)((uVar20 & 0xffff) << 2);
      uVar23 = 0;
      uVar17 = uVar19;
      do {
        if (*(uint *)((long)piVar18 + uVar17) == DAT_05ae9030) goto LAB_039218a0;
        uVar23 = uVar23 + 1;
        uVar17 = uVar17 + 8;
      } while (uVar20 >> 0x10 != uVar23);
    }
    uVar23 = 0xffffffff;
LAB_039218a0:
    lVar16 = (long)(int)uVar23 * 8 + uVar19;
    local_88 = (uint *)((long)piVar18 +
                       ((ulong)*(uint *)((long)piVar18 + lVar16 + 4) & 0xffffff) * 4 + lVar16);
    local_90 = PTR_DAT_04bb2020 + 0x10;
    (**(code **)(local_80 + 0x18))(&local_80);
    (**(code **)(local_80 + 0x18))(&local_80);
    puVar21 = local_78;
    (**(code **)(local_90 + 0x18))(&local_90);
    if (puVar21 == local_88) {
code_r0x03921990:
      if (param_1 <= 0.0) {
        FUN_03956720(0,plVar31,0,piVar30,0,0);
      }
      else {
        if (1.0 <= param_1) {
          fVar33 = 0.0;
          piVar15 = (int *)0x0;
          piVar14 = piVar18;
        }
        else {
          piVar14 = piVar30;
          piVar15 = piVar18;
          fVar33 = param_1;
        }
        FUN_03956720(fVar33,plVar31,1.0 > param_1,piVar14,piVar15,0);
      }
      goto LAB_03921260;
    }
    uVar23 = 0;
    bVar10 = true;
    do {
      if (*(char *)((long)local_78 + uVar23) != *(char *)((long)local_88 + uVar23)) break;
      if (*(char *)((long)local_78 + uVar23) == '\0') {
        if (bVar10) goto code_r0x03921990;
        break;
      }
      cVar9 = *(char *)((long)local_78 + uVar23 + 1);
      if (cVar9 != *(char *)((long)local_88 + uVar23 + 1)) break;
      if (cVar9 == '\0') goto code_r0x03921990;
      cVar9 = *(char *)((long)local_78 + uVar23 + 2);
      if (cVar9 != *(char *)((long)local_88 + uVar23 + 2)) break;
      if (cVar9 == '\0') goto code_r0x03921990;
      bVar10 = uVar23 < 0x7fffe;
      uVar23 = uVar23 + 3;
    } while (uVar23 != 0x80001);
    uVar25 = uVar25 + 1;
    piVar18 = piVar18 + 2;
  } while (uVar7 >> 0x10 != uVar25);
LAB_03921260:
  uVar28 = uVar28 + 1;
  piVar30 = piVar30 + 2;
  if (uVar6 >> 0x10 == uVar28) goto LAB_039211d4;
  goto LAB_03921270;
}

