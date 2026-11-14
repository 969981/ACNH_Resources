
void FUN_016bed70(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  undefined2 *puVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  ulong uVar15;
  uint *puVar16;
  int *piVar17;
  short *psVar18;
  long *plVar19;
  undefined **local_f28;
  long lStack_f20;
  undefined1 *local_f18;
  long lStack_f10;
  undefined4 local_7b4;
  uint local_7b0 [468];
  undefined1 uStack_41;
  
  plVar1 = (long *)(param_1 + 0xe80);
  pvVar9 = (void *)(**(code **)(*(long *)(param_1 + 0xe80) + 0x18))(plVar1);
  memset(pvVar9,0,0x754);
  plVar2 = (long *)(param_1 + 0x15f0);
  pvVar9 = (void *)(**(code **)(*(long *)(param_1 + 0x15f0) + 0x18))(plVar2);
  memset(pvVar9,0,0x754);
  plVar3 = (long *)(param_1 + 0x1d60);
  pvVar9 = (void *)(**(code **)(*(long *)(param_1 + 0x1d60) + 0x18))(plVar3);
  memset(pvVar9,0,0x754);
  FUN_0252d11c(&uStack_41);
  FUN_016c8768(&local_f28,&uStack_41);
  pvVar9 = (void *)(**(code **)(*(long *)(param_1 + 0x1d60) + 0x18))(plVar3);
  lVar10 = (*(code *)local_f28[4])(&local_f28);
  for (lVar12 = 0;
      *(uint *)((long)local_7b0 + lVar12 + -4) =
           *(uint *)(lVar10 + lVar12) | *(uint *)((long)pvVar9 + lVar12), lVar12 != 0x750;
      lVar12 = lVar12 + 8) {
    *(uint *)((long)local_7b0 + lVar12) =
         *(uint *)(lVar10 + lVar12 + 4) | *(uint *)((long)pvVar9 + lVar12 + 4);
  }
  memcpy(pvVar9,&local_7b4,0x754);
  *(uint *)((long)pvVar9 + 0x750) = *(uint *)((long)pvVar9 + 0x750) & 0xffffff;
  FUN_0264a400(&local_f28,&uStack_41);
  pvVar9 = (void *)(**(code **)(*plVar3 + 0x18))(plVar3);
  lVar10 = (*(code *)local_f28[4])(&local_f28);
  for (lVar12 = 0;
      *(uint *)((long)local_7b0 + lVar12 + -4) =
           *(uint *)(lVar10 + lVar12) | *(uint *)((long)pvVar9 + lVar12), lVar12 != 0x750;
      lVar12 = lVar12 + 8) {
    *(uint *)((long)local_7b0 + lVar12) =
         *(uint *)(lVar10 + lVar12 + 4) | *(uint *)((long)pvVar9 + lVar12 + 4);
  }
  memcpy(pvVar9,&local_7b4,0x754);
  *(uint *)((long)pvVar9 + 0x750) = *(uint *)((long)pvVar9 + 0x750) & 0xffffff;
  if (*(long *)PTR_DAT_04bb46f0 != 0) {
    local_f28 = &PTR_LAB_049bc0a8;
    local_f18 = &uStack_41;
    lStack_f20 = param_1;
    lStack_f10 = *(long *)PTR_DAT_04bb46f0;
    FUN_008a1ba0(plVar3,&local_f28);
  }
  FUN_02686600(&local_f28);
  pvVar9 = (void *)(**(code **)(*plVar3 + 0x18))(plVar3);
  lVar10 = (*(code *)local_f28[4])(&local_f28);
  for (lVar12 = 0;
      *(uint *)((long)local_7b0 + lVar12 + -4) =
           *(uint *)(lVar10 + lVar12) | *(uint *)((long)pvVar9 + lVar12), lVar12 != 0x750;
      lVar12 = lVar12 + 8) {
    *(uint *)((long)local_7b0 + lVar12) =
         *(uint *)(lVar10 + lVar12 + 4) | *(uint *)((long)pvVar9 + lVar12 + 4);
  }
  memcpy(pvVar9,&local_7b4,0x754);
  *(uint *)((long)pvVar9 + 0x750) = *(uint *)((long)pvVar9 + 0x750) & 0xffffff;
  puVar7 = PTR_DAT_04bbc450;
  puVar6 = PTR_DAT_04bbc448;
  if (*(char *)(param_1 + 0x12) != '\0') {
    lVar12 = *(long *)PTR_DAT_04bb4930;
    uVar8 = (uint)*(ushort *)(param_1 + 0x10) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar13 != (uint *)0x0)) {
      if (*puVar13 != 0) {
        cVar14 = *PTR_DAT_04bbc448;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar7 + 0x18);
            if (-1 < (int)uVar8) {
              lVar12 = (ulong)uVar8 + (long)puVar13;
              goto LAB_016bf0f8;
            }
            if (uVar8 != 0xffffffff) break;
          }
          puVar16 = (uint *)(ulong)*puVar13;
          lVar12 = 0;
          if ((*puVar13 == 0) || (puVar13 == puVar16)) goto LAB_016bf0f8;
          lVar12 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar16)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar10 = (long)puVar13 + (lVar12 - (long)puVar16);
          if (lVar10 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar16));
          *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
          lVar12 = 0;
          if (uVar15 == 0) goto LAB_016bf0f8;
          piVar17 = (int *)(lVar10 + 4);
          while (piVar17[-1] != -0x590492a1) {
            piVar17 = piVar17 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              lVar12 = 0;
              goto LAB_016bf0f8;
            }
          }
          iVar4 = 0;
          if (*piVar17 != -1) {
            iVar4 = *piVar17;
          }
          *(int *)(puVar7 + 0x18) = iVar4;
        } while (*puVar13 != 0);
      }
      lVar12 = 0;
LAB_016bf0f8:
      lStack_f20 = *(long *)PTR_PTR_04bbdd60;
      if (lVar12 != 0) {
        lStack_f20 = lVar12;
      }
      local_f28 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      lVar12 = FUN_016ba230(param_1 + 0x24d8,&local_f28);
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x58) != 0) {
          plVar19 = *(long **)(lVar12 + 0x60);
          lVar12 = (long)*(int *)(lVar12 + 0x58) << 3;
          do {
            puVar11 = (undefined2 *)(**(code **)(*(long *)(*plVar19 + 0x30) + 0xf0))();
            local_7b4._0_2_ = *puVar11;
            local_7b4._2_2_ = 0;
            local_7b0[0] = 0;
            FUN_0277d4ac(&local_7b4);
            FUN_0277dedc(&local_7b4);
            lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
            uVar8 = FUN_0277d6c4(&local_7b4);
            if ((uVar8 >> 3 & 0x1fff) < 0x753) {
              lVar5 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
              *(uint *)(lVar10 + lVar5) = *(uint *)(lVar10 + lVar5) | 1 << (ulong)(uVar8 & 0x1f);
            }
            lVar10 = (**(code **)(*plVar3 + 0x20))(plVar3);
            uVar8 = FUN_0277d6c4(&local_7b4);
            if ((0x752 < (uVar8 >> 3 & 0x1fff)) ||
               ((*(uint *)(lVar10 + (ulong)((uVar8 & 0xffff) >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1
                ) == 0)) {
              FUN_0277dedc(&local_7b4);
              lVar10 = (**(code **)(*plVar1 + 0x18))(plVar1);
              uVar8 = FUN_0277d6c4(&local_7b4);
              if ((uVar8 >> 3 & 0x1fff) < 0x753) {
                lVar5 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
                *(uint *)(lVar10 + lVar5) = *(uint *)(lVar10 + lVar5) | 1 << (ulong)(uVar8 & 0x1f);
              }
            }
            plVar19 = plVar19 + 1;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
        psVar18 = (short *)(param_1 + 0x4c);
        if (*psVar18 != -2) {
          FUN_0277dedc(psVar18);
          lVar12 = (**(code **)(*plVar2 + 0x18))(plVar2);
          uVar8 = FUN_0277d6c4(psVar18);
          if ((uVar8 >> 3 & 0x1fff) < 0x753) {
            lVar10 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
            *(uint *)(lVar12 + lVar10) = *(uint *)(lVar12 + lVar10) | 1 << (ulong)(uVar8 & 0x1f);
          }
          lVar12 = (**(code **)(*plVar3 + 0x20))(plVar3);
          uVar8 = FUN_0277d6c4(psVar18);
          if ((0x752 < (uVar8 >> 3 & 0x1fff)) ||
             ((*(uint *)(lVar12 + (ulong)((uVar8 & 0xffff) >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1)
              == 0)) {
            FUN_0277dedc(psVar18);
            lVar12 = (**(code **)(*plVar1 + 0x18))(plVar1);
            uVar8 = FUN_0277d6c4(psVar18);
            if ((uVar8 >> 3 & 0x1fff) < 0x753) {
              lVar10 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
              *(uint *)(lVar12 + lVar10) = *(uint *)(lVar12 + lVar10) | 1 << (ulong)(uVar8 & 0x1f);
            }
          }
        }
        psVar18 = (short *)(param_1 + 0x38);
        if (*psVar18 != -2) {
          lVar12 = (**(code **)(*plVar2 + 0x20))(plVar2);
          uVar8 = FUN_0277d6c4(psVar18);
          if ((0x752 < (uVar8 >> 3 & 0x1fff)) ||
             ((*(uint *)(lVar12 + (ulong)((uVar8 & 0xffff) >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1)
              == 0)) {
            FUN_0277dedc(psVar18);
            lVar12 = (**(code **)(*plVar2 + 0x18))(plVar2);
            uVar8 = FUN_0277d6c4(psVar18);
            if ((uVar8 >> 3 & 0x1fff) < 0x753) {
              lVar10 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
              *(uint *)(lVar12 + lVar10) = *(uint *)(lVar12 + lVar10) | 1 << (ulong)(uVar8 & 0x1f);
            }
            lVar12 = (**(code **)(*plVar3 + 0x20))(plVar3);
            uVar8 = FUN_0277d6c4(psVar18);
            if ((0x752 < (uVar8 >> 3 & 0x1fff)) ||
               ((*(uint *)(lVar12 + (ulong)((uVar8 & 0xffff) >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1
                ) == 0)) {
              FUN_0277dedc(psVar18);
              lVar12 = (**(code **)(*plVar1 + 0x18))(plVar1);
              uVar8 = FUN_0277d6c4(psVar18);
              if ((uVar8 >> 3 & 0x1fff) < 0x753) {
                lVar10 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
                *(uint *)(lVar12 + lVar10) = *(uint *)(lVar12 + lVar10) | 1 << (ulong)(uVar8 & 0x1f)
                ;
              }
            }
          }
        }
      }
    }
  }
  return;
}

