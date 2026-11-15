
void FUN_02016c50(long param_1,short *param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined *local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_84;
  undefined *local_80;
  short local_78;
  short local_76;
  undefined4 local_74;
  uint *local_70;
  uint local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_78 = *param_2;
  if (local_78 == -2) {
    return;
  }
  local_76 = param_2[1];
  local_70 = (uint *)0x0;
  local_74 = *(undefined4 *)(param_2 + 2);
  local_80 = PTR_DAT_04bc0510 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar11 != (uint *)0x0)) {
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0xa2);
        uVar5 = *puVar11;
        if (uVar5 == 0 || puVar11 == (uint *)(ulong)uVar5) {
LAB_02016d5c:
          local_64 = 0;
        }
        else {
          puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
          local_64 = 0;
          if (*puVar13 != 0) {
            uVar5 = puVar13[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar14 != 0) {
                uVar17 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar17 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar5);
                }
                if (*puVar13 <= uVar17) {
                  uVar17 = 0xffffffff;
                }
                if ((uVar17 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_64 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2),
                   local_64 < 0xbd)) goto LAB_02016ffc;
              }
            }
            goto LAB_02016d5c;
          }
        }
LAB_02016ffc:
        bVar4 = local_64 == 0xa2;
        uVar5 = *puVar11;
        local_84 = 0;
        local_70 = puVar11;
        if ((uVar5 != 0) && (puVar11 != (uint *)(ulong)uVar5)) {
          puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
          local_84 = 0;
          if (*puVar13 != 0) {
            uVar5 = puVar13[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar14 != 0) {
                uVar17 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar17 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar5);
                }
                if (*puVar13 <= uVar17) {
                  uVar17 = 0xffffffff;
                }
                if ((uVar17 < *(uint *)PTR_DAT_04bc01a0) &&
                   (local_84 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc01a0 + 8) + (long)(int)uVar17 * 2),
                   local_84 < 0x15)) goto LAB_02016d88;
              }
            }
            local_84 = 0;
          }
        }
        goto LAB_02016d88;
      }
    }
  }
  local_84 = 0;
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0xa2);
  local_64 = 0xbc;
  bVar4 = false;
LAB_02016d88:
  puVar3 = PTR_DAT_04bbdf58;
  if (local_84 != 0) {
    if (local_84 < 0x15) {
      pcStack_b8 = *(char **)(PTR_DAT_04bbdf58 + (ulong)local_84 * 8 + 0xb0);
    }
    else {
      pcStack_b8 = "";
    }
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    uVar5 = 0;
    do {
      pcVar18 = "";
      if (uVar5 < 0x15) {
        pcVar18 = *(char **)(puVar3 + (ulong)uVar5 * 8 + 0xb0);
      }
      (**(code **)(local_c0 + 0x18))(&local_c0);
      if (pcVar18 == pcStack_b8) {
LAB_02016e8c:
        local_64 = uVar5;
        if ((uVar5 != 0) && (uVar5 < *(uint *)(param_1 + 0x18f0))) {
          lVar14 = *(long *)(*(long *)(param_1 + 0x18f8) + (long)(int)uVar5 * 8);
          goto LAB_02016eb8;
        }
        break;
      }
      if (*pcVar18 == *pcStack_b8) {
        if (*pcVar18 == '\0') goto LAB_02016e8c;
        lVar14 = 0x7fffe;
        pcVar12 = pcStack_b8;
        while( true ) {
          if (pcVar18[1] != pcVar12[1]) break;
          if (pcVar18[1] == '\0') goto LAB_02016e8c;
          if (pcVar18[2] != pcVar12[2]) break;
          if (pcVar18[2] == '\0') goto LAB_02016e8c;
          if ((lVar14 == 0) || (cVar1 = pcVar18[3], cVar1 != pcVar12[3])) break;
          lVar14 = lVar14 + -3;
          pcVar12 = pcVar12 + 3;
          pcVar18 = pcVar18 + 3;
          if (cVar1 == '\0') goto LAB_02016e8c;
        }
      }
      uVar17 = 0x15;
      if ((int)uVar5 < 0x15) {
        uVar17 = uVar5 + 1;
      }
      uVar5 = uVar17;
    } while (uVar17 != 0x15);
  }
  lVar14 = 0;
LAB_02016eb8:
  uVar5 = *(uint *)(*(long *)(param_1 + 0x60b0) +
                    ((ulong)*(uint *)(*(long *)(param_1 + 0x60b0) + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar5 != 0) && (*(long *)PTR_DAT_04bb27c0 != 0)) &&
      (plVar15 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar15 != (long *)0x0)) &&
     (((*(uint *)(plVar15 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar15 + 0x46) == uVar5)))) {
    lVar2 = plVar15[0x2a];
    if (((*PTR_DAT_04bc2530 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc2530), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc2528 = PTR_DAT_04bbe058 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2530);
    }
    uVar7 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bc2528);
    if (((uVar7 & 1) != 0) && ((int)lVar2 == 1)) {
      plVar16 = (long *)plVar15[0xd];
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
      }
      else {
        if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2f68);
        }
        uVar7 = (**(code **)(*plVar16 + 0x10))(plVar16,PTR_DAT_04bb2f60);
        if ((uVar7 & 1) == 0) {
          plVar16 = (long *)0x0;
        }
      }
      plVar15 = (long *)plVar15[0xc];
      if (plVar15 != (long *)0x0) {
        if (((*PTR_DAT_04bb2eb0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb2eb0), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb2ea8 = PTR_DAT_04bb2e38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2eb0);
        }
        (**(code **)(*plVar15 + 0x10))(plVar15,PTR_DAT_04bb2ea8);
      }
      if ((plVar16 != (long *)0x0) && (!(bool)(lVar14 == 0 & (bVar4 ^ 1U)))) {
        if (bVar4) {
          uVar19 = 0x3f800000;
          local_c0 = (undefined *)0x3f800000b33bbd2e;
          pcStack_b8 = (char *)0x333bbd2e;
          uVar20 = 0x3f800000;
          local_b0 = 0xb33bbd2e80000000;
          uStack_a8 = 0x3f800000;
          uVar21 = 0x3f800000;
          local_a0 = 0x333bbd2e3f800000;
          uStack_98 = 0x2709aded;
        }
        else if (lVar14 == 0) {
          uVar19 = 0x3f800000;
          uVar20 = 0x3f800000;
          uVar21 = 0x3f800000;
        }
        else {
          uVar8 = (**(code **)(*(long *)(lVar14 + 0xa0) + 0xf0))();
          uVar9 = (**(code **)(*(long *)(lVar14 + 0x68) + 0xf0))();
          puVar10 = (undefined4 *)
                    (**(code **)(*(long *)(lVar14 + 0x30) + 0xf0))((long *)(lVar14 + 0x30));
          uVar21 = *puVar10;
          uVar20 = puVar10[1];
          uVar19 = puVar10[2];
          FUN_02018b44(&local_c0,uVar9,uVar8);
        }
        *(undefined4 *)((long)plVar16 + 0x3a4) = uVar21;
        *(undefined4 *)(plVar16 + 0x75) = uVar20;
        *(undefined4 *)((long)plVar16 + 0x3ac) = uVar19;
        *(char **)((long)plVar16 + 0x34c) = pcStack_b8;
        *(undefined **)((long)plVar16 + 0x344) = local_c0;
        *(undefined8 *)((long)plVar16 + 0x35c) = uStack_a8;
        *(undefined8 *)((long)plVar16 + 0x354) = local_b0;
        *(undefined8 *)((long)plVar16 + 0x36c) = uStack_98;
        *(undefined8 *)((long)plVar16 + 0x364) = local_a0;
        lVar14 = *(long *)(param_1 + 0x1160);
        if ((lVar14 != 0) && (*(uint **)(param_1 + 0x1190) != (uint *)0x0)) {
          uVar5 = **(uint **)(param_1 + 0x1190);
          if ((uVar5 < 0xffff0000) && ((uVar5 & 0xffff) != 0xffff)) {
            plVar15 = (long *)**(undefined8 **)
                                (*(long *)(lVar14 + 0x38) +
                                (-((ulong)(uVar5 >> 0xf) & 1) & 0xfffffffffff80000 |
                                ((ulong)uVar5 & 0xffff) << 3));
            (**(code **)(*plVar15 + 0x1c8))(plVar15,(int)uVar5 >> 0x10,0);
            lVar14 = *(long *)(param_1 + 0x1160);
            if (lVar14 == 0) {
              return;
            }
          }
          if (*(long *)(param_1 + 0x1190) != 0) {
            uVar5 = *(uint *)(*(long *)(param_1 + 0x1190) +
                             (ulong)(1 < *(uint *)(param_1 + 0x1188)) * 4);
            if ((uVar5 < 0xffff0000) && ((uVar5 & 0xffff) != 0xffff)) {
              plVar15 = (long *)**(undefined8 **)
                                  (*(long *)(lVar14 + 0x38) +
                                  (-((ulong)(uVar5 >> 0xf) & 1) & 0xfffffffffff80000 |
                                  ((ulong)uVar5 & 0xffff) << 3));
              (**(code **)(*plVar15 + 0x1c8))(plVar15,(int)uVar5 >> 0x10,0);
            }
          }
        }
      }
    }
  }
  return;
}

