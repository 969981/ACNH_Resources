
void FUN_02d70520(long param_1,int *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined8 *******pppppppuVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  undefined2 local_9e8;
  undefined1 local_9e6;
  undefined1 local_9e5;
  undefined4 local_9e4;
  undefined *local_9e0;
  undefined2 local_9d8;
  undefined1 local_9d6;
  undefined1 local_9d5;
  undefined4 local_9d4;
  long local_9d0;
  undefined8 local_9c8;
  undefined1 *local_9c0;
  undefined8 *******local_9b8;
  undefined8 *******pppppppuStack_9b0;
  undefined8 *******local_9a8;
  undefined8 *******local_9a0;
  undefined8 *******local_998;
  undefined8 ******local_990;
  undefined8 *****local_988;
  undefined8 ****local_980;
  undefined8 ***local_978;
  undefined8 **local_970;
  undefined8 *local_968;
  undefined8 local_960;
  undefined1 auStack_958 [80];
  undefined *local_908;
  undefined1 auStack_900 [1876];
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 *******local_188;
  undefined8 *******local_180;
  undefined8 *******local_178 [2];
  undefined8 *******local_168 [2];
  undefined8 *******local_158 [2];
  undefined8 ******local_148 [2];
  undefined8 *****local_138 [2];
  undefined8 ****local_128 [2];
  undefined8 ***local_118 [2];
  undefined8 **local_108 [2];
  undefined8 *local_f8 [2];
  undefined8 local_e8 [2];
  undefined8 local_d8 [10];
  undefined **local_88;
  long local_80;
  long local_78;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar9 = FUN_0277d6c4();
  if (iVar9 != 0x373d) {
    local_190 = (undefined8 *)0x0;
    local_178[0] = local_168;
    local_168[0] = local_158;
    local_198 = 0;
    local_158[0] = local_148;
    local_188 = local_178;
    local_148[0] = local_138;
    local_138[0] = local_128;
    local_128[0] = local_118;
    local_118[0] = local_108;
    local_108[0] = local_f8;
    local_f8[0] = local_e8;
    local_e8[0] = 0;
    if (local_d8 != (undefined8 *)0x0) {
      local_198 = 0xa00000000;
      local_190 = local_d8;
    }
    local_908 = PTR_DAT_04bbfe60 + 0x10;
    local_180 = local_188;
    memset(auStack_900,0,0x754);
    uVar10 = nn::os::GetSystemTick();
    local_1ac = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
    local_1a8 = (local_1ac ^ local_1ac >> 0x1e) * 0x6c078965 + 2;
    local_1a4 = (local_1a8 ^ local_1a8 >> 0x1e) * 0x6c078965 + 3;
    local_1a0 = (local_1a4 ^ local_1a4 >> 0x1e) * 0x6c078965 + 4;
    pvVar12 = (void *)(**(code **)(local_908 + 0x18))(&local_908);
    memset(pvVar12,0,0x754);
    local_9c8 = 0;
    local_9c0 = (undefined1 *)0x0;
    local_9a8 = &local_9a0;
    local_9a0 = &local_998;
    local_9b8 = &local_9a8;
    local_998 = &local_990;
    local_990 = &local_988;
    local_988 = &local_980;
    local_980 = &local_978;
    local_978 = &local_970;
    local_970 = &local_968;
    local_968 = &local_960;
    local_960 = 0;
    if (auStack_958 != (undefined1 *)0x0) {
      local_9c8 = 0xa00000000;
      local_9c0 = auStack_958;
    }
    pppppppuStack_9b0 = local_9b8;
    pvVar12 = (void *)(**(code **)(local_908 + 0x18))(&local_908);
    memset(pvVar12,0,0x754);
    local_88 = &PTR_LAB_049ff9e8;
    local_80 = param_1;
    FUN_008a1ba0(&local_908,&local_88);
    lVar13 = (**(code **)(local_908 + 0x20))(&local_908);
    uVar25 = 0;
    do {
      if ((*(uint *)(lVar13 + (uVar25 >> 5) * 4) >> (ulong)((uint)uVar25 & 0x1f) & 1) != 0)
      goto LAB_02d707c0;
      uVar10 = (uint)uVar25 + 1;
      uVar25 = (ulong)uVar10;
    } while (uVar10 != 15000);
    uVar25 = 0;
LAB_02d707c0:
    lVar14 = (**(code **)(local_908 + 0x20))(&local_908);
    iVar9 = 15000;
    do {
      if ((*(uint *)(lVar14 + (ulong)(iVar9 - 1U >> 5) * 4) >> (ulong)(iVar9 - 1U & 0x1f) & 1) != 0)
      break;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    if (iVar9 != (int)uVar25) {
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      plVar22 = (long *)PTR_DAT_04bbfe58;
      plVar26 = (long *)PTR_DAT_04bb37e0;
LAB_02d70b10:
      puVar7 = PTR_DAT_04bb43c0;
      if ((int)local_198 < local_198._4_4_) {
        plVar2 = plVar22 + uVar25;
        if (0x752 < (uint)(uVar25 >> 3)) {
          plVar2 = plVar22;
        }
        plVar3 = plVar26;
        if ((uint)uVar25 < 0x3a99) {
          plVar3 = plVar2;
        }
        local_9d8 = (undefined2)*plVar3;
        local_9d6 = *(undefined1 *)((long)plVar3 + 2);
        local_9d5 = *(undefined1 *)((long)plVar3 + 3);
        local_9d4 = *(undefined4 *)((long)plVar3 + 4);
        local_88 = (undefined **)*plVar3;
        local_9d0 = 0;
        lVar14 = *(long *)PTR_DAT_04bb43c0;
        local_9e0 = puVar1;
        uVar10 = FUN_0277d6c4(&local_9d8);
        if (*(long *)puVar7 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_88);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (uVar10 < *(uint *)(lVar14 + 0x1d8)) {
              lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8);
              if (lVar14 != 0) {
                local_9d0 = lVar14;
              }
            }
          }
        }
        uVar20 = FUN_01b12cf0(&local_9e0);
        puVar7 = PTR_DAT_04bb43c0;
        if ((uVar20 & 1) != 0) {
          lVar14 = *plVar3;
          local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          uVar5 = *(undefined1 *)((long)plVar3 + 2);
          uVar6 = *(undefined1 *)((long)plVar3 + 3);
          uVar4 = *(undefined4 *)((long)plVar3 + 4);
          local_80 = *plVar3;
          lVar24 = *(long *)PTR_DAT_04bb43c0;
          local_78 = 0;
          local_9e8 = (short)lVar14;
          local_9e6 = uVar5;
          local_9e5 = uVar6;
          local_9e4 = uVar4;
          uVar10 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar7 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar24 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              lVar24 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(&local_9e8);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              if (uVar10 < *(uint *)(lVar24 + 0x1d8)) {
                lVar24 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8);
                if (lVar24 != 0) {
                  local_78 = lVar24;
                }
              }
            }
          }
          uVar11 = FUN_01b12ba0(&local_88);
          pppppppuVar8 = local_188;
          if ((int)local_198 < local_198._4_4_) {
            if (local_188 != (undefined8 *******)0x0) {
              local_188 = (undefined8 *******)*local_188;
            }
            *(short *)pppppppuVar8 = (short)lVar14;
            *(undefined1 *)((long)pppppppuVar8 + 2) = uVar5;
            *(undefined1 *)((long)pppppppuVar8 + 3) = uVar6;
            *(undefined4 *)((long)pppppppuVar8 + 4) = uVar4;
            *(undefined4 *)(pppppppuVar8 + 1) = uVar11;
            if ((int)local_198 < local_198._4_4_) {
              local_190[(int)local_198] = pppppppuVar8;
              local_198 = CONCAT44(local_198._4_4_,(int)local_198 + 1);
            }
          }
          plVar22 = (long *)PTR_DAT_04bbfe58;
          plVar26 = (long *)PTR_DAT_04bb37e0;
        }
        do {
          uVar10 = (int)uVar25 + 1;
          uVar25 = (ulong)uVar10;
          if (0x752 < uVar10 >> 3) {
            uVar10 = 0x3a95;
            goto LAB_02d70d80;
          }
        } while ((*(uint *)(lVar13 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) == 0);
        goto LAB_02d70b08;
      }
      goto LAB_02d70808;
    }
LAB_02d70804:
LAB_02d70808:
    uVar10 = (int)local_198 - 1;
    if (uVar10 != 0 && 0 < (int)local_198) {
      uVar19 = 0;
      do {
        if ((int)uVar10 <= (int)uVar19) break;
        lVar13 = local_190[uVar19];
        uVar25 = (ulong)uVar19;
        if ((uVar10 - uVar19 & 1) == 0) {
          lVar14 = lVar13;
          uVar20 = uVar25;
        }
        else {
          uVar20 = uVar25 + 1;
          lVar14 = local_190[uVar20];
          if (*(int *)(lVar14 + 8) < *(int *)(lVar13 + 8)) {
            local_190[uVar20] = lVar13;
            local_190[uVar25] = lVar14;
            lVar14 = lVar13;
          }
        }
        uVar21 = (ulong)uVar10;
        uVar10 = uVar19;
        if (~uVar25 + uVar21 != 0) {
          plVar22 = local_190 + uVar20 + 1;
          do {
            lVar13 = *plVar22;
            if (*(int *)(lVar13 + 8) < *(int *)(lVar14 + 8)) {
              plVar22[-1] = lVar13;
              *plVar22 = lVar14;
              uVar10 = (uint)uVar20;
            }
            else {
              lVar14 = lVar13;
            }
            lVar13 = plVar22[1];
            if (*(int *)(lVar13 + 8) < *(int *)(lVar14 + 8)) {
              uVar10 = (uint)uVar20 + 1;
              *plVar22 = lVar13;
              plVar22[1] = lVar14;
            }
            else {
              lVar14 = lVar13;
            }
            uVar20 = uVar20 + 2;
            plVar22 = plVar22 + 2;
          } while (uVar21 != uVar20);
        }
        if ((int)uVar10 <= (int)uVar19) break;
        lVar13 = local_190[uVar10];
        uVar20 = (ulong)uVar10;
        uVar19 = uVar10;
        do {
          lVar14 = local_190[uVar20 - 1];
          if (*(int *)(lVar13 + 8) < *(int *)(lVar14 + 8)) {
            uVar19 = (uint)uVar20;
            local_190[uVar20 - 1] = lVar13;
            local_190[uVar20] = lVar14;
          }
          else {
            lVar13 = lVar14;
          }
          uVar20 = uVar20 - 1;
        } while ((long)uVar25 < (long)uVar20);
      } while (uVar19 != uVar10);
    }
    if (0 < *param_2) {
      lVar13 = 0;
      puVar23 = *(undefined8 **)(param_2 + 4);
      do {
        puVar17 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar13 * 8);
        lVar13 = lVar13 + 1;
        *puVar17 = puVar23;
        *(undefined8 **)(param_2 + 4) = puVar17;
        puVar23 = puVar17;
      } while (lVar13 < *param_2);
    }
    *param_2 = 0;
    if (((int)local_198 != 0) && (0 < param_2[1])) {
      iVar9 = 0;
      lVar13 = (long)(int)local_198 << 3;
      puVar23 = local_190;
      do {
        if (iVar9 < param_2[1]) {
          puVar18 = (undefined2 *)*puVar23;
          puVar17 = *(undefined8 **)(param_2 + 4);
          if (puVar17 != (undefined8 *)0x0) {
            *(undefined8 *)(param_2 + 4) = *puVar17;
          }
          *(undefined2 *)puVar17 = *puVar18;
          *(undefined1 *)((long)puVar17 + 2) = *(undefined1 *)(puVar18 + 1);
          *(undefined1 *)((long)puVar17 + 3) = *(undefined1 *)((long)puVar18 + 3);
          *(undefined4 *)((long)puVar17 + 4) = *(undefined4 *)(puVar18 + 2);
          iVar9 = *param_2;
          if (iVar9 < param_2[1]) {
            *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar9 * 8) = puVar17;
            iVar9 = *param_2 + 1;
            *param_2 = iVar9;
          }
        }
        puVar23 = puVar23 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
    if (((DAT_05684210 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_05684210), iVar9 != 0)) {
      DAT_056841dc = 0xd25;
      FUN_0277d4ac(&DAT_056841dc);
      DAT_056841e4 = 0xd35;
      FUN_0277d4ac();
      DAT_056841ec = 0xd2a;
      FUN_0277d4ac();
      DAT_056841f4 = 0xd2f;
      FUN_0277d4ac();
      DAT_056841fc = 0xd20;
      FUN_0277d4ac();
      DAT_05684204 = 0x114a;
      FUN_0277d4ac(&DAT_05684204);
      __cxa_guard_release(&DAT_05684210);
    }
    lVar13 = (**(code **)(local_908 + 0x20))(&local_908);
    uVar10 = FUN_0277d6c4(&DAT_056841dc);
    if ((0x752 < (uVar10 >> 3 & 0x1fff)) ||
       ((*(uint *)(lVar13 + (ulong)((uVar10 & 0xffff) >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) == 0
       )) {
      lVar13 = (**(code **)(local_908 + 0x20))(&local_908);
      uVar10 = FUN_0277d6c4(&DAT_056841e4);
      if ((0x752 < (uVar10 >> 3 & 0x1fff)) ||
         ((*(uint *)(lVar13 + (ulong)((uVar10 & 0xffff) >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) ==
          0)) {
        lVar13 = (**(code **)(local_908 + 0x20))(&local_908);
        uVar10 = FUN_0277d6c4(&DAT_056841ec);
        if ((0x752 < (uVar10 >> 3 & 0x1fff)) ||
           ((*(uint *)(lVar13 + (ulong)((uVar10 & 0xffff) >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1)
            == 0)) {
          lVar13 = (**(code **)(local_908 + 0x20))(&local_908);
          uVar10 = FUN_0277d6c4(&DAT_056841f4);
          if (((0x752 < (uVar10 >> 3 & 0x1fff)) ||
              ((*(uint *)(lVar13 + (ulong)((uVar10 & 0xffff) >> 5) * 4) >> (ulong)(uVar10 & 0x1f) &
               1) == 0)) &&
             ((uVar25 = FUN_01a44f9c(&local_908,&DAT_056841fc), (uVar25 & 1) == 0 &&
              (uVar25 = FUN_01a44f9c(&local_908,&DAT_05684204), (uVar25 & 1) == 0)))) {
            return;
          }
        }
      }
    }
    if (param_2[1] <= *param_2) {
      return;
    }
    puVar23 = *(undefined8 **)(param_2 + 4);
    if (puVar23 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 4) = *puVar23;
    }
    uVar16 = 0x3739;
    goto LAB_02d70a3c;
  }
  iVar9 = *param_2;
  iVar15 = param_2[1];
  if (iVar9 < iVar15) {
    puVar23 = *(undefined8 **)(param_2 + 4);
    if (puVar23 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 4) = *puVar23;
    }
    *puVar23 = 0x141f;
    FUN_0277d4ac(puVar23);
    iVar9 = *param_2;
    iVar15 = param_2[1];
    if (iVar9 < iVar15) {
      *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar9 * 8) = puVar23;
      iVar15 = param_2[1];
      iVar9 = *param_2 + 1;
      *param_2 = iVar9;
    }
  }
  if (iVar9 < iVar15) {
    puVar23 = *(undefined8 **)(param_2 + 4);
    if (puVar23 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 4) = *puVar23;
    }
    *puVar23 = 0xaf2;
    FUN_0277d4ac(puVar23);
    iVar9 = *param_2;
    iVar15 = param_2[1];
    if (iVar15 <= iVar9) {
      if (iVar9 < iVar15) goto LAB_02d70f18;
      goto LAB_02d705bc;
    }
    *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar9 * 8) = puVar23;
    iVar15 = param_2[1];
    iVar9 = *param_2 + 1;
    *param_2 = iVar9;
    if (iVar15 <= iVar9) goto LAB_02d705bc;
LAB_02d70f18:
    puVar23 = *(undefined8 **)(param_2 + 4);
    if (puVar23 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 4) = *puVar23;
    }
    *puVar23 = 0xaf3;
    FUN_0277d4ac(puVar23);
    iVar9 = *param_2;
    iVar15 = param_2[1];
    if (iVar15 <= iVar9) {
      if (iVar9 < iVar15) goto LAB_02d70f70;
      goto LAB_02d705c4;
    }
    *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar9 * 8) = puVar23;
    iVar15 = param_2[1];
    iVar9 = *param_2 + 1;
    *param_2 = iVar9;
    if (iVar15 <= iVar9) goto LAB_02d705c4;
LAB_02d70f70:
    puVar23 = *(undefined8 **)(param_2 + 4);
    if (puVar23 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 4) = *puVar23;
    }
    *puVar23 = 0xaf4;
    FUN_0277d4ac(puVar23);
    iVar9 = *param_2;
    iVar15 = param_2[1];
    if (iVar15 <= iVar9) {
      if (iVar9 < iVar15) goto LAB_02d70fc8;
      goto LAB_02d705cc;
    }
    *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar9 * 8) = puVar23;
    iVar15 = param_2[1];
    iVar9 = *param_2 + 1;
    *param_2 = iVar9;
    if (iVar15 <= iVar9) goto LAB_02d705cc;
LAB_02d70fc8:
    puVar23 = *(undefined8 **)(param_2 + 4);
    if (puVar23 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 4) = *puVar23;
    }
    *puVar23 = 0x373d;
    FUN_0277d4ac(puVar23);
    iVar9 = *param_2;
    if (iVar9 < param_2[1]) {
      *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar9 * 8) = puVar23;
      iVar9 = *param_2;
      *param_2 = iVar9 + 1;
      if (param_2[1] <= iVar9 + 1) {
        return;
      }
    }
    else if (param_2[1] <= iVar9) {
      return;
    }
  }
  else {
    if (iVar9 < iVar15) goto LAB_02d70f18;
LAB_02d705bc:
    if (iVar9 < iVar15) goto LAB_02d70f70;
LAB_02d705c4:
    if (iVar9 < iVar15) goto LAB_02d70fc8;
LAB_02d705cc:
    if (iVar15 <= iVar9) {
      return;
    }
  }
  puVar23 = *(undefined8 **)(param_2 + 4);
  if (puVar23 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 4) = *puVar23;
  }
  uVar16 = 0x373a;
LAB_02d70a3c:
  *puVar23 = uVar16;
  FUN_0277d4ac(puVar23);
  if (*param_2 < param_2[1]) {
    *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar23;
    *param_2 = *param_2 + 1;
  }
  return;
  while( true ) {
    uVar19 = uVar10 + 1;
    if ((*(uint *)(lVar13 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_02d70b00;
    if ((*(uint *)(lVar13 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) != 0)
    goto LAB_02d70b04;
    uVar10 = uVar10 - 3;
    if (uVar10 == 0xfffffffd) break;
LAB_02d70d80:
    uVar19 = uVar10 + 2;
    if ((*(uint *)(lVar13 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0) {
LAB_02d70b00:
      uVar10 = uVar19;
LAB_02d70b04:
      uVar25 = (ulong)(uVar10 + 1);
      goto LAB_02d70b08;
    }
  }
  uVar25 = 0;
LAB_02d70b08:
  if (iVar9 == (int)uVar25) goto LAB_02d70804;
  goto LAB_02d70b10;
}

