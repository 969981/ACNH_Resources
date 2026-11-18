
undefined8 FUN_03425cc0(undefined2 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  void *pvVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_3b198;
  undefined1 auStack_3b190 [1876];
  uint uStack_3aa3c;
  uint uStack_3aa38;
  uint uStack_3aa34;
  int iStack_3aa30;
  undefined *puStack_3aa28;
  undefined8 uStack_3aa20;
  undefined1 *puStack_3aa18;
  long *plStack_3aa10;
  long *plStack_3aa08;
  long alStack_3aa00 [2];
  long lStack_3a9f0;
  long lStack_3a9e8;
  undefined1 auStack_3a9e0 [119968];
  undefined1 auStack_1d540 [120004];
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined **local_60;
  uint *local_58;
  
  puVar6 = PTR_DAT_04bb37e0;
  *param_1 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(param_1 + 1) = puVar6[2];
  uVar4 = *(undefined2 *)puVar6;
  uVar3 = puVar6[3];
  param_1[4] = uVar4;
  param_1[8] = uVar4;
  param_1[0xc] = uVar4;
  param_1[0x10] = uVar4;
  puVar7 = PTR_DAT_04bb43c0;
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  param_1[0x14] = uVar4;
  param_1[0x18] = uVar4;
  param_1[0x1c] = uVar4;
  uVar3 = puVar6[2];
  uVar2 = *(undefined4 *)(puVar6 + 4);
  *(undefined1 *)(param_1 + 5) = uVar3;
  *(undefined1 *)(param_1 + 9) = uVar3;
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)(param_1 + 0x11) = uVar3;
  *(undefined1 *)(param_1 + 0x15) = uVar3;
  *(undefined1 *)(param_1 + 0x19) = uVar3;
  *(undefined1 *)(param_1 + 0x1d) = uVar3;
  uVar3 = puVar6[3];
  *(undefined4 *)(param_1 + 2) = uVar2;
  uVar2 = *(undefined4 *)(puVar6 + 4);
  lVar17 = *(long *)puVar7;
  *(undefined1 *)((long)param_1 + 0xb) = uVar3;
  *(undefined1 *)((long)param_1 + 0x13) = uVar3;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar3;
  *(undefined1 *)((long)param_1 + 0x23) = uVar3;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar3;
  *(undefined1 *)((long)param_1 + 0x33) = uVar3;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)(param_1 + 10) = uVar2;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  uVar8 = FUN_0277d6c4(param_2);
  lVar18 = *(long *)puVar7;
  if (lVar18 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_70 = *param_2;
      uStack_6c = param_2[1];
      local_68 = 0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      uVar8 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar7 != 0) {
        lVar17 = *(long *)(lVar18 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar17 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(param_2);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
             (puVar11 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8),
             puVar11 != (uint *)0x0)) {
            uVar8 = *puVar11;
            if (uVar8 == 0) {
              return 0;
            }
            if (puVar11 == (uint *)(ulong)uVar8) {
              return 0;
            }
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
            if (((*puVar13 != 0) && (uVar8 = puVar13[1], uVar8 != 0)) &&
               ((ulong)(ushort)puVar13[2] != 0)) {
              lVar17 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar13 + lVar17 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar17 != 0) {
                uVar1 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar17) / (ulong)uVar8);
                }
                if (*puVar13 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (((uVar1 < *(uint *)PTR_DAT_04bc0020) &&
                    (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2),
                    local_7c = (uint)uVar5, uVar5 < 0x5b6)) && (local_7c != 0)) {
                  plStack_3aa10 = alStack_3aa00;
                  uStack_3aa20._4_4_ = 0;
                  puStack_3aa18 = (undefined1 *)0x0;
                  puStack_3aa28 = PTR_DAT_04bb60c8 + 0x10;
                  lVar17 = 0;
                  while( true ) {
                    plVar14 = (long *)((long)alStack_3aa00 + lVar17 + 8);
                    *plVar14 = (long)alStack_3aa00 + lVar17 + 0x10;
                    *(long **)((long)alStack_3aa00 + lVar17) = plVar14;
                    *(undefined1 **)((long)alStack_3aa00 + lVar17 + 0x10) =
                         auStack_3a9e0 + lVar17 + -8;
                    if (lVar17 == 0x1d4a0) break;
                    *(undefined1 **)(auStack_3a9e0 + lVar17 + -8) = auStack_3a9e0 + lVar17;
                    lVar17 = lVar17 + 0x20;
                  }
                  if (auStack_1d540 != (undefined1 *)0x0) {
                    uStack_3aa20._4_4_ = 15000;
                    puStack_3aa18 = auStack_1d540;
                  }
                  uStack_3aa20 = (ulong)uStack_3aa20._4_4_ << 0x20;
                  puStack_3b198 = PTR_DAT_04bbfe60 + 0x10;
                  plStack_3aa08 = plStack_3aa10;
                  memset(auStack_3b190,0,0x754);
                  uVar8 = nn::os::GetSystemTick();
                  uStack_3aa3c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
                  uStack_3aa38 = (uStack_3aa3c ^ uStack_3aa3c >> 0x1e) * 0x6c078965 + 2;
                  uStack_3aa34 = (uStack_3aa38 ^ uStack_3aa38 >> 0x1e) * 0x6c078965 + 3;
                  iStack_3aa30 = (uStack_3aa34 ^ uStack_3aa34 >> 0x1e) * 0x6c078965 + 4;
                  pvVar9 = (void *)FUN_01a451fc(&puStack_3b198);
                  memset(pvVar9,0,0x754);
                  pvVar9 = (void *)(**(code **)(puStack_3b198 + 0x18))(&puStack_3b198);
                  memset(pvVar9,0,0x754);
                  local_60 = &PTR_FUN_049ff858;
                  local_58 = &local_7c;
                  FUN_008a1ba0(&puStack_3b198,&local_60);
                  FUN_009aa4b0(&puStack_3aa28,&puStack_3b198);
                  piVar10 = (int *)(**(code **)(puStack_3aa28 + 0x18))(&puStack_3aa28);
                  puVar6 = PTR_DAT_04bb37e0;
                  uVar8 = *piVar10 - 1;
                  if (0 < *piVar10) {
                    if (6 < uVar8) {
                      uVar8 = 7;
                    }
                    uVar16 = 0;
                    puVar15 = (undefined4 *)(param_1 + 2);
                    do {
                      piVar10 = (int *)(**(code **)(puStack_3aa28 + 0x18))(&puStack_3aa28);
                      puVar12 = (undefined4 *)puVar6;
                      if ((*piVar10 != 0) &&
                         (piVar10 = (int *)(**(code **)(puStack_3aa28 + 0x18))(&puStack_3aa28),
                         uVar16 <= *piVar10 - 1)) {
                        lVar17 = (**(code **)(puStack_3aa28 + 0x18))(&puStack_3aa28);
                        puVar12 = *(undefined4 **)(*(long *)(lVar17 + 8) + uVar16 * 8);
                      }
                      uVar2 = puVar12[1];
                      uVar16 = uVar16 + 1;
                      puVar15[-1] = *puVar12;
                      *puVar15 = uVar2;
                      puVar15 = puVar15 + 2;
                    } while (uVar8 + 1 != uVar16);
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

