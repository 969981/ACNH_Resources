
undefined8 FUN_01fac690(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  uint local_265c;
  undefined *local_2658;
  undefined *puStack_2650;
  undefined8 local_2648;
  undefined *local_2640;
  undefined8 local_2638;
  undefined *local_2630;
  undefined2 local_2628;
  undefined1 local_2626;
  undefined1 local_2625;
  undefined4 local_2624;
  uint *local_2620;
  undefined8 local_2614;
  undefined4 local_260c;
  ulong local_2608;
  undefined8 *local_2600;
  long **local_25f8;
  long **local_25f0;
  long *local_25e8 [5];
  long alStack_25c0 [990];
  undefined8 local_6d0;
  undefined8 local_6a8 [201];
  
  lVar12 = 0xc6;
  local_25f8 = local_25e8;
  local_2608 = 0;
  local_2600 = (undefined8 *)0x0;
  local_25e8[0] = alStack_25c0;
  plVar10 = local_25e8[0];
  do {
    lVar12 = lVar12 + -2;
    *plVar10 = (long)(plVar10 + 5);
    plVar10[5] = (long)(plVar10 + 10);
    plVar10 = plVar10 + 10;
  } while (lVar12 != 0);
  local_6d0 = 0;
  if (local_6a8 != (undefined8 *)0x0) {
    local_2608 = 0xc800000000;
    local_2600 = local_6a8;
  }
  local_25f0 = local_25f8;
  FUN_01521078(&local_2608);
  if (0 < (int)local_2608) {
    uVar6 = nn::os::GetSystemTick();
    if (1 < (int)local_2608) {
      uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      uVar14 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
      uVar9 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
      uVar13 = (ulong)((uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4);
      uVar7 = local_2608 & 0xffffffff;
      do {
        uVar6 = uVar6 ^ uVar6 << 0xb;
        uVar11 = (uint)uVar13;
        uVar13 = (ulong)(uVar11 >> 0x13 ^ uVar6 >> 8 ^ uVar11 ^ uVar6);
        uVar16 = uVar7 - 1 & 0xffffffff;
        uVar17 = local_2600[uVar16];
        uVar15 = uVar7 * uVar13 >> 0x1d & 0x7fffffff8;
        local_2600[uVar16] = *(undefined8 *)((long)local_2600 + uVar15);
        *(undefined8 *)((long)local_2600 + uVar15) = uVar17;
        bVar1 = 2 < uVar7;
        uVar7 = uVar7 - 1;
        uVar6 = uVar14;
        uVar14 = uVar9;
        uVar9 = uVar11;
      } while (bVar1);
    }
    puVar5 = PTR_DAT_04bb43c0;
    if ((int)local_2608 != 0) {
      lVar12 = (long)(int)local_2608 << 3;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar4 = PTR_DAT_04bb2010 + 0x10;
      puVar19 = local_2600;
      do {
        puVar18 = (undefined2 *)*puVar19;
        local_2614 = 0;
        local_260c = 0;
        lVar20 = *(long *)puVar5;
        local_2628 = *puVar18;
        local_2626 = *(undefined1 *)(puVar18 + 1);
        local_2625 = *(undefined1 *)((long)puVar18 + 3);
        local_2624 = *(undefined4 *)(puVar18 + 2);
        local_2620 = (uint *)0x0;
        local_2630 = puVar2;
        uVar6 = FUN_0277d6c4(&local_2628);
        if (*(long *)puVar5 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(puVar18);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar20 + 0x1d8)) &&
               (puVar8 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar6 * 8),
               puVar8 != (uint *)0x0)) {
              local_2620 = puVar8;
            }
          }
        }
        local_2648 = 0;
        local_2638 = 0;
        local_2658 = puVar3;
        puStack_2650 = puVar4;
        local_2640 = puVar4;
        FUN_01afb480(&local_2630,&local_2658);
        local_2648 = CONCAT44(local_2648._4_4_ + *(int *)(puVar18 + 10),
                              (int)local_2648 + *(int *)(puVar18 + 8));
        local_2638 = CONCAT44(local_2638._4_4_ + *(int *)(puVar18 + 10),
                              (int)local_2638 + *(int *)(puVar18 + 8));
        if (local_2620 == (uint *)0x0) {
LAB_01fac9a0:
          local_265c = 0;
        }
        else {
          uVar6 = *local_2620;
          local_265c = 0;
          if ((uVar6 != 0) && (local_2620 != (uint *)(ulong)uVar6)) {
            puVar8 = (uint *)((long)local_2620 - (long)(ulong)uVar6);
            local_265c = 0;
            if (*puVar8 != 0) {
              uVar6 = puVar8[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar20 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar8 + lVar20 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar20 != 0) {
                  uVar14 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar14 = (uint)((ulong)((long)local_2620 - lVar20) / (ulong)uVar6);
                  }
                  if (*puVar8 <= uVar14) {
                    uVar14 = 0xffffffff;
                  }
                  if ((uVar14 < *(uint *)PTR_DAT_04bc0110) &&
                     (local_265c = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar14 * 2),
                     local_265c < 9)) goto LAB_01fac9a4;
                }
              }
              goto LAB_01fac9a0;
            }
          }
        }
LAB_01fac9a4:
        uVar7 = (**(code **)(*param_1 + 0x570))(param_1,&local_2614,puVar18,&local_265c,&local_2658)
        ;
        if ((uVar7 & 1) != 0) {
          FUN_01fa81ec(param_1,puVar18,&local_2658,&local_2614);
          *(undefined1 *)(param_1 + 0xf0f) = 1;
          return 1;
        }
        puVar19 = puVar19 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
  }
  return 0;
}

