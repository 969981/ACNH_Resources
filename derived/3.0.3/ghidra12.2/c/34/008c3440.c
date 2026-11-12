
void FUN_008c3440(long param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  void *pvVar21;
  undefined8 *puVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined *local_158;
  undefined1 *local_150;
  int local_148;
  undefined1 local_144 [31];
  undefined1 local_125;
  undefined *local_120;
  undefined1 *local_118;
  int local_110;
  undefined1 local_10c [31];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  int local_d8;
  undefined1 local_d4 [31];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [31];
  undefined1 local_7d;
  undefined8 local_78;
  undefined4 local_70;
  
  piVar16 = (int *)(param_1 + 0x31080);
  if (*(char *)(param_1 + 0x37fbe) != '\0' || *(char *)(param_1 + 0x37fc0) != '\0')
  goto LAB_008c35f0;
  local_78 = *(undefined8 *)(param_1 + 0x2a8);
  local_70 = *(undefined4 *)(param_1 + 0x2b0);
  puVar10 = (undefined4 *)FUN_0252d9bc(0);
  if (puVar10 != (undefined4 *)0x0) {
    local_70 = puVar10[2];
    local_78 = CONCAT44((float)puVar10[1] + 0.1,*puVar10);
  }
  uVar7 = FUN_008ce890(&local_78);
  puVar2 = PTR_DAT_04bb27c0;
  if (uVar7 == 0) goto LAB_008c35f0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 != 0) {
    plVar18 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) + (ulong)(uVar7 >> 0x14) * 8);
    if (((plVar18 == (long *)0x0) || ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar18 + 0x46) != uVar7)) {
      plVar18 = (long *)0x0;
    }
    if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)puVar2;
      iVar8 = (**(code **)(*plVar11 + 0x60))();
      if (iVar8 < 0x11) {
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_008c3570;
        uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_008c3570:
      uVar7 = 0;
    }
    if (plVar18 != (long *)0x0) {
      lVar13 = plVar18[0x2a];
      uVar3 = *(uint *)(plVar18 + 0x49);
      if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32b0);
      }
      uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb32a8);
      param_2 = 0x21;
      if (((int)lVar13 == 1) && ((uVar7 & uVar9) != 0)) {
        if (((uVar3 >> 4 & 1) != 0) && (uVar17 = FUN_00906834(plVar18), (uVar17 & 1) != 0)) {
          plVar18[0x58] = 0x1400000001;
        }
        goto LAB_008c35f0;
      }
    }
  }
  param_2 = 0x21;
LAB_008c35f0:
  if (*piVar16 < *(int *)(param_1 + 0x31084)) {
    puVar22 = *(undefined8 **)(param_1 + 0x31090);
    if (puVar22 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x31090) = *puVar22;
    }
    *(undefined4 *)puVar22 = param_2;
    piVar23 = (int *)(puVar22 + 1);
    piVar23[0] = 0;
    piVar23[1] = 0;
    *(undefined1 *)((long)puVar22 + 4) = 0;
    puVar22[2] = 0;
    puVar22[3] = 0;
    pvVar1 = (void *)((long)puVar22 + 0x5c);
    *(undefined4 *)(puVar22 + 6) = 0;
    *(undefined2 *)((long)puVar22 + 0x34) = 0xff;
    puVar22[4] = 0;
    puVar22[5] = 0;
    puVar22[7] = 0;
    puVar22[8] = 0;
    puVar2 = PTR_DAT_04bb2a08 + 0x10;
    *(undefined4 *)(puVar22 + 0xb) = 0x20;
    *(undefined1 *)((long)puVar22 + 0x7b) = 0;
    puVar6 = PTR_PTR_04bb2238;
    lVar13 = *(long *)PTR_PTR_04bb2238;
    puVar22[9] = puVar2;
    puVar22[10] = pvVar1;
    (**(code **)(lVar13 + 0x18))(puVar6);
    pvVar21 = *(void **)(puVar6 + 8);
    if (pvVar1 != pvVar21) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      lVar13 = 0;
      do {
        if (*(char *)(*(long *)(puVar6 + 8) + lVar13) == '\0') goto LAB_008c36dc;
        lVar14 = *(long *)(puVar6 + 8) + lVar13;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_008c36dc;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_008c36dc;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_008c36dc:
      iVar8 = (int)lVar13;
      if (*(int *)(puVar22 + 0xb) <= (int)lVar13) {
        iVar8 = *(int *)(puVar22 + 0xb) + -1;
      }
      memcpy(pvVar1,pvVar21,(long)iVar8);
      *(undefined1 *)((long)pvVar1 + (long)iVar8) = 0;
    }
    puVar5 = PTR_DAT_04bb2028;
    pvVar1 = (void *)((long)puVar22 + 0x94);
    *(undefined4 *)(puVar22 + 0x12) = 0x20;
    *(undefined1 *)((long)puVar22 + 0xb3) = 0;
    lVar13 = *(long *)puVar6;
    puVar22[0x10] = puVar2;
    puVar22[0x11] = pvVar1;
    puVar22[9] = puVar5 + 0x10;
    (**(code **)(lVar13 + 0x18))(puVar6);
    pvVar21 = *(void **)(puVar6 + 8);
    if (pvVar1 != pvVar21) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      lVar13 = 0;
      do {
        if (*(char *)(*(long *)(puVar6 + 8) + lVar13) == '\0') goto LAB_008c379c;
        lVar14 = *(long *)(puVar6 + 8) + lVar13;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_008c379c;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_008c379c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_008c379c:
      iVar8 = (int)lVar13;
      if (*(int *)(puVar22 + 0x12) <= (int)lVar13) {
        iVar8 = *(int *)(puVar22 + 0x12) + -1;
      }
      memcpy(pvVar1,pvVar21,(long)iVar8);
      *(undefined1 *)((long)pvVar1 + (long)iVar8) = 0;
    }
    puVar22[0x10] = puVar5 + 0x10;
    *(undefined4 *)(puVar22 + 0x19) = 0x20;
    pvVar1 = (void *)((long)puVar22 + 0xcc);
    *(undefined1 *)((long)puVar22 + 0xeb) = 0;
    puVar2 = PTR_DAT_04bb2a08 + 0x10;
    lVar13 = *(long *)puVar6;
    puVar22[0x17] = puVar2;
    puVar22[0x18] = pvVar1;
    (**(code **)(lVar13 + 0x18))(puVar6);
    pvVar21 = *(void **)(puVar6 + 8);
    if (pvVar1 != pvVar21) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      lVar13 = 0;
      do {
        if (*(char *)(*(long *)(puVar6 + 8) + lVar13) == '\0') goto LAB_008c385c;
        lVar14 = *(long *)(puVar6 + 8) + lVar13;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_008c385c;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_008c385c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_008c385c:
      iVar8 = (int)lVar13;
      if (*(int *)(puVar22 + 0x19) <= (int)lVar13) {
        iVar8 = *(int *)(puVar22 + 0x19) + -1;
      }
      memcpy(pvVar1,pvVar21,(long)iVar8);
      *(undefined1 *)((long)pvVar1 + (long)iVar8) = 0;
    }
    puVar5 = PTR_DAT_04bb2028;
    pvVar1 = (void *)((long)puVar22 + 0x104);
    *(undefined4 *)(puVar22 + 0x20) = 0x20;
    *(undefined1 *)((long)puVar22 + 0x123) = 0;
    puVar22[0x1e] = puVar2;
    puVar22[0x1f] = pvVar1;
    lVar13 = *(long *)puVar6;
    puVar22[0x17] = puVar5 + 0x10;
    (**(code **)(lVar13 + 0x18))(puVar6);
    pvVar21 = *(void **)(puVar6 + 8);
    if (pvVar1 != pvVar21) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      lVar13 = 0;
      do {
        if (*(char *)(*(long *)(puVar6 + 8) + lVar13) == '\0') goto LAB_008c391c;
        lVar14 = *(long *)(puVar6 + 8) + lVar13;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_008c391c;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_008c391c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_008c391c:
      iVar8 = (int)lVar13;
      if (*(int *)(puVar22 + 0x20) <= (int)lVar13) {
        iVar8 = *(int *)(puVar22 + 0x20) + -1;
      }
      memcpy(pvVar1,pvVar21,(long)iVar8);
      *(undefined1 *)((long)pvVar1 + (long)iVar8) = 0;
    }
    puVar22[0x1e] = puVar5 + 0x10;
    *(undefined1 *)(puVar22 + 0x25) = 0;
    *(undefined4 *)((long)puVar22 + 300) = 0;
    *(undefined2 *)(puVar22 + 0x26) = 0;
    iVar8 = *piVar16;
    if (iVar8 < *(int *)(param_1 + 0x31084)) {
      *(undefined8 **)(*(long *)(param_1 + 0x31088) + (long)iVar8 * 8) = puVar22;
      iVar8 = *piVar16 + 1;
      *piVar16 = iVar8;
    }
    puVar2 = PTR_DAT_04bb2a08;
    if (0 < iVar8) {
      lVar14 = *(long *)(param_1 + 0x309c8);
      lVar13 = param_1 + 0x309c0;
      if (lVar14 != lVar13) {
        do {
          if (*(int *)(lVar14 + -0x10) != 0) {
            lVar15 = *(long *)(param_1 + 0x309c8);
            piVar16 = piVar23;
            if (lVar15 != lVar13) {
              uVar17 = 0;
              do {
                if (lVar15 == lVar14) {
                  piVar16 = piVar23 + uVar17;
                  if (7 < (uint)uVar17) {
                    piVar16 = piVar23;
                  }
                  break;
                }
                lVar15 = *(long *)(lVar15 + 8);
                uVar17 = (ulong)((uint)uVar17 + 1);
              } while (lVar15 != lVar13);
            }
            *piVar16 = *(int *)(lVar14 + -0x10);
            *(ushort *)(puVar22 + 0x26) = *(ushort *)(puVar22 + 0x26) | 1;
          }
          lVar14 = *(long *)(lVar14 + 8);
        } while (lVar14 + -0x10 != param_1 + 0x309b0);
      }
      if (*(long **)(param_1 + 0x38030) != (long *)0x0) {
        puVar12 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x38030) + 0x20))();
        uVar24 = *(undefined4 *)(puVar12 + 1);
        puVar22[5] = *puVar12;
        *(undefined4 *)(puVar22 + 6) = uVar24;
        *(ushort *)(puVar22 + 0x26) = *(ushort *)(puVar22 + 0x26) | 2;
      }
      puVar6 = PTR_DAT_04bb2028;
      plVar18 = (long *)(param_1 + 0x30698);
      if (*(byte *)(param_1 + 0x309b8) < 8) {
        *(byte *)((long)puVar22 + 0x34) = *(byte *)(param_1 + 0x309b8);
        *(ushort *)(puVar22 + 0x26) = *(ushort *)(puVar22 + 0x26) | 4;
      }
      if (*(char *)(param_1 + 0x37fb4) != '\0') {
        uVar4 = *(ushort *)(puVar22 + 0x26);
        *(undefined1 *)((long)puVar22 + 0x35) = 1;
        *(ushort *)(puVar22 + 0x26) = uVar4 | 8;
        uVar24 = *(undefined4 *)(param_1 + 0x307bc);
        *(undefined8 *)((long)puVar22 + 0x3c) = *(undefined8 *)(param_1 + 0x307b4);
        *(undefined4 *)((long)puVar22 + 0x44) = uVar24;
        *(ushort *)(puVar22 + 0x26) = uVar4 | 0x28;
      }
      if (*(int *)(param_1 + 0x307b0) != 0) {
        *(int *)(puVar22 + 7) = *(int *)(param_1 + 0x307b0);
        *(ushort *)(puVar22 + 0x26) = *(ushort *)(puVar22 + 0x26) | 0x10;
      }
      local_7d = 0;
      local_a0 = 0x20;
      local_b0 = puVar2 + 0x10;
      local_a8 = local_9c;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puVar20 = *(undefined1 **)(param_1 + 0x306a0);
      if (local_9c != puVar20) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
        lVar13 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x306a0) + lVar13) == '\0') goto LAB_008c3b5c;
          lVar14 = *(long *)(param_1 + 0x306a0) + lVar13;
          if (*(char *)(lVar14 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_008c3b5c;
          }
          if (*(char *)(lVar14 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_008c3b5c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_008c3b5c:
        iVar8 = (int)lVar13;
        if (local_a0 <= (int)lVar13) {
          iVar8 = local_a0 + -1;
        }
        memcpy(local_9c,puVar20,(long)iVar8);
        local_9c[iVar8] = 0;
      }
      puVar20 = local_a8;
      local_b0 = puVar6 + 0x10;
      puVar19 = (undefined1 *)puVar22[10];
      local_a8[(long)local_a0 + -1] = 0;
      if (puVar19 != local_a8) {
        (**(code **)(puVar6 + 0x28))(&local_b0);
        lVar13 = 0;
        do {
          if (local_a8[lVar13] == '\0') goto LAB_008c3c00;
          if (local_a8[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_008c3c00;
          }
          if (local_a8[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_008c3c00;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_008c3c00:
        iVar8 = (int)lVar13;
        if (*(int *)(puVar22 + 0xb) <= (int)lVar13) {
          iVar8 = *(int *)(puVar22 + 0xb) + -1;
        }
        memcpy(puVar19,puVar20,(long)iVar8);
        puVar19[iVar8] = 0;
      }
      local_b5 = 0;
      local_d8 = 0x20;
      local_e8 = puVar2 + 0x10;
      *(ushort *)(puVar22 + 0x26) = *(ushort *)(puVar22 + 0x26) | 0x40;
      plVar18 = (long *)(param_1 + 0x306d0);
      local_e0 = local_d4;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puVar20 = *(undefined1 **)(param_1 + 0x306d8);
      if (local_d4 != puVar20) {
        (**(code **)(*(long *)(param_1 + 0x306d0) + 0x18))(plVar18);
        lVar13 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x306d8) + lVar13) == '\0') goto LAB_008c3ccc;
          lVar14 = *(long *)(param_1 + 0x306d8) + lVar13;
          if (*(char *)(lVar14 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_008c3ccc;
          }
          if (*(char *)(lVar14 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_008c3ccc;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_008c3ccc:
        iVar8 = (int)lVar13;
        if (local_d8 <= (int)lVar13) {
          iVar8 = local_d8 + -1;
        }
        memcpy(local_d4,puVar20,(long)iVar8);
        local_d4[iVar8] = 0;
      }
      puVar20 = local_e0;
      local_e8 = puVar6 + 0x10;
      puVar19 = (undefined1 *)puVar22[0x11];
      local_e0[(long)local_d8 + -1] = 0;
      if (puVar19 != local_e0) {
        (**(code **)(puVar6 + 0x28))(&local_e8);
        lVar13 = 0;
        do {
          if (local_e0[lVar13] == '\0') goto LAB_008c3d70;
          if (local_e0[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_008c3d70;
          }
          if (local_e0[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_008c3d70;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_008c3d70:
        iVar8 = (int)lVar13;
        if (*(int *)(puVar22 + 0x12) <= (int)lVar13) {
          iVar8 = *(int *)(puVar22 + 0x12) + -1;
        }
        memcpy(puVar19,puVar20,(long)iVar8);
        puVar19[iVar8] = 0;
      }
      local_ed = 0;
      local_110 = 0x20;
      local_120 = puVar2 + 0x10;
      *(ushort *)(puVar22 + 0x26) = *(ushort *)(puVar22 + 0x26) | 0x80;
      plVar18 = (long *)(param_1 + 0x30708);
      local_118 = local_10c;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puVar20 = *(undefined1 **)(param_1 + 0x30710);
      if (local_10c != puVar20) {
        (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))(plVar18);
        lVar13 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x30710) + lVar13) == '\0') goto LAB_008c3e3c;
          lVar14 = *(long *)(param_1 + 0x30710) + lVar13;
          if (*(char *)(lVar14 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_008c3e3c;
          }
          if (*(char *)(lVar14 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_008c3e3c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_008c3e3c:
        iVar8 = (int)lVar13;
        if (local_110 <= (int)lVar13) {
          iVar8 = local_110 + -1;
        }
        memcpy(local_10c,puVar20,(long)iVar8);
        local_10c[iVar8] = 0;
      }
      puVar20 = local_118;
      local_120 = puVar6 + 0x10;
      puVar19 = (undefined1 *)puVar22[0x18];
      local_118[(long)local_110 + -1] = 0;
      if (puVar19 != local_118) {
        (**(code **)(puVar6 + 0x28))(&local_120);
        lVar13 = 0;
        do {
          if (local_118[lVar13] == '\0') goto LAB_008c3ee0;
          if (local_118[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_008c3ee0;
          }
          if (local_118[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_008c3ee0;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_008c3ee0:
        iVar8 = (int)lVar13;
        if (*(int *)(puVar22 + 0x19) <= (int)lVar13) {
          iVar8 = *(int *)(puVar22 + 0x19) + -1;
        }
        memcpy(puVar19,puVar20,(long)iVar8);
        puVar19[iVar8] = 0;
      }
      local_125 = 0;
      local_148 = 0x20;
      local_158 = puVar2 + 0x10;
      *(ushort *)(puVar22 + 0x26) = *(ushort *)(puVar22 + 0x26) | 0x100;
      plVar18 = (long *)(param_1 + 0x30740);
      local_150 = local_144;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puVar20 = *(undefined1 **)(param_1 + 0x30748);
      if (local_144 != puVar20) {
        (**(code **)(*(long *)(param_1 + 0x30740) + 0x18))(plVar18);
        lVar13 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x30748) + lVar13) == '\0') goto LAB_008c3fac;
          lVar14 = *(long *)(param_1 + 0x30748) + lVar13;
          if (*(char *)(lVar14 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_008c3fac;
          }
          if (*(char *)(lVar14 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_008c3fac;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_008c3fac:
        iVar8 = (int)lVar13;
        if (local_148 <= (int)lVar13) {
          iVar8 = local_148 + -1;
        }
        memcpy(local_144,puVar20,(long)iVar8);
        local_144[iVar8] = 0;
      }
      puVar20 = local_150;
      local_158 = puVar6 + 0x10;
      puVar19 = (undefined1 *)puVar22[0x1f];
      local_150[(long)local_148 + -1] = 0;
      if (puVar19 != local_150) {
        (**(code **)(puVar6 + 0x28))(&local_158);
        lVar13 = 0;
        do {
          if (local_150[lVar13] == '\0') goto LAB_008c4050;
          if (local_150[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_008c4050;
          }
          if (local_150[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_008c4050;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_008c4050:
        iVar8 = (int)lVar13;
        if (*(int *)(puVar22 + 0x20) <= (int)lVar13) {
          iVar8 = *(int *)(puVar22 + 0x20) + -1;
        }
        memcpy(puVar19,puVar20,(long)iVar8);
        puVar19[iVar8] = 0;
      }
      uVar4 = *(ushort *)(puVar22 + 0x26);
      *(ushort *)(puVar22 + 0x26) = uVar4 | 0x200;
      *(undefined1 *)(puVar22 + 0x25) = *(undefined1 *)(param_1 + 0x37fb8);
      *(ushort *)(puVar22 + 0x26) = uVar4 | 0x600;
      uVar24 = *(undefined4 *)(param_1 + 0x307e4);
      *(ushort *)(puVar22 + 0x26) = uVar4 | 0xe00;
      *(undefined4 *)((long)puVar22 + 300) = uVar24;
    }
  }
  return;
}

