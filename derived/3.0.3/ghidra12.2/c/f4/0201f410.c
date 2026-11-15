
void FUN_0201f410(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  undefined1 *__src;
  int *piVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  uint local_d0;
  uint local_cc;
  undefined *local_b8;
  undefined1 *puStack_b0;
  int local_a8;
  undefined1 auStack_a4 [7];
  undefined1 local_9d;
  undefined6 local_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  uint local_78;
  undefined4 uStack_74;
  
  puVar9 = PTR_DAT_04bca400;
  puVar8 = PTR_DAT_04bb29d0;
  piVar22 = *(int **)PTR_DAT_04bb47d0;
  if (piVar22 != (int *)0x0) {
    lVar21 = 0;
    puVar1 = PTR_DAT_04bb6a30 + 0x10;
    puVar2 = PTR_DAT_04bb3768 + 0x10;
    do {
      plVar11 = (long *)(param_1 + 0x105d0 + lVar21 * 0x180);
      if ((*(char *)plVar11[1] != '\0') &&
         (uVar12 = (ulong)*(byte *)(param_1 + 0x11050 + lVar21), uVar12 != 0)) {
        uVar10 = nn::os::GetSystemTick();
        uVar23 = 0;
        local_78 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
        uStack_74 = (undefined4)lVar21;
        local_cc = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 2;
        local_d0 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 3;
        uVar10 = (local_d0 ^ local_d0 >> 0x1e) * 0x6c078965 + 4;
        do {
          local_9d = 0;
          plVar4 = plVar11 + uVar23 * 6;
          if (7 < uVar23) {
            plVar4 = plVar11;
          }
          local_a8 = 8;
          local_b8 = puVar1;
          puStack_b0 = auStack_a4;
          (**(code **)(*plVar4 + 0x18))(plVar4);
          __src = (undefined1 *)plVar4[1];
          if (auStack_a4 != __src) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
            lVar13 = 0;
            do {
              if (*(char *)(plVar4[1] + lVar13) == '\0') goto LAB_0201f660;
              lVar3 = plVar4[1] + lVar13;
              if (*(char *)(lVar3 + 1) == '\0') {
                lVar13 = lVar13 + 1;
                goto LAB_0201f660;
              }
              if (*(char *)(lVar3 + 2) == '\0') {
                lVar13 = lVar13 + 2;
                goto LAB_0201f660;
              }
              lVar13 = lVar13 + 3;
            } while (lVar13 != 0x80001);
            lVar13 = 0;
LAB_0201f660:
            iVar14 = (int)lVar13;
            if (local_a8 <= (int)lVar13) {
              iVar14 = local_a8 + -1;
            }
            memcpy(auStack_a4,__src,(long)iVar14);
            auStack_a4[iVar14] = 0;
          }
          local_98 = (undefined6)plVar4[4];
          uStack_92 = (undefined2)*(undefined8 *)((long)plVar4 + 0x26);
          uStack_90 = (undefined6)((ulong)*(undefined8 *)((long)plVar4 + 0x26) >> 0x10);
          local_b8 = puVar2;
          FUN_02042ba0(param_1,&uStack_74,&local_b8);
          if (*piVar22 == *(int *)(param_1 + 0x230)) {
            while (piVar22[2] != 2) {
              nn::os::ConvertToTimeSpan(*(long *)puVar8 / 100);
              nn::os::SleepThread();
            }
          }
          if ((*(float *)PTR_DAT_04bb76e8 != 0.0) || (*(float *)(PTR_DAT_04bb76e8 + 8) != 0.0)) {
            fVar24 = *(float *)PTR_DAT_04bb76e8 + -7.5;
            fVar25 = *(float *)(PTR_DAT_04bb76e8 + 8) + -7.5;
            iVar17 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
            iVar15 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
            iVar14 = iVar15 + 4;
            iVar18 = iVar17;
            do {
              if ((((piVar22[2] == 2) && (iVar6 = iVar18 - (uint)*(ushort *)puVar9, -1 < iVar6)) &&
                  (iVar6 < *(int *)(puVar9 + 0xc))) &&
                 ((iVar7 = iVar15 - (uint)*(ushort *)(puVar9 + 2), -1 < iVar7 &&
                  (iVar7 < *(int *)(puVar9 + 0x10))))) {
                lVar13 = *(long *)(puVar9 + 0x40);
                uVar5 = iVar6 + *(int *)(lVar13 + 0x1c) * iVar7;
                uVar16 = 1 << (ulong)(uVar5 & 0x1f);
                uVar20 = *(uint *)(*(long *)(lVar13 + 0x10) + (long)((int)uVar5 >> 5) * 4);
                if ((uVar16 & uVar20) != 0) {
                  *(uint *)(*(long *)(lVar13 + 0x10) + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
                       uVar20 & (uVar16 ^ 0xffffffff);
                  *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                }
              }
              if (iVar18 < iVar17 + 3) {
                iVar18 = iVar18 + 1;
              }
              else {
                iVar15 = iVar15 + 1;
                iVar18 = iVar17;
              }
            } while ((iVar17 != iVar18) || (iVar14 != iVar15));
          }
          uVar20 = uVar10;
          if (piVar22[2] == 2) {
            piVar22[2] = 0;
            local_78 = local_78 ^ local_78 << 0xb;
            *piVar22 = 0;
            lVar13 = *(long *)(puVar9 + 0x40);
            uVar20 = local_78 >> 8 ^ uVar10 >> 0x13 ^ local_78 ^ uVar10;
            if (0 < (int)*(uint *)(lVar13 + 8)) {
              uVar16 = 0;
              uVar19 = (ulong)*(uint *)(lVar13 + 0x18) * (ulong)uVar20 >> 0x20;
              do {
                if ((*(uint *)(*(long *)(lVar13 + 0x10) + (ulong)(uVar16 >> 5) * 4) >>
                     (ulong)(uVar16 & 0x1f) & 1) != 0) {
                  if ((int)uVar19 == 0) {
                    iVar14 = *(int *)(lVar13 + 0x1c);
                    iVar15 = 0;
                    if (iVar14 != 0) {
                      iVar15 = (int)uVar16 / iVar14;
                    }
                    local_78 = local_cc;
                    iVar17 = iVar15 + (uint)*(ushort *)(puVar9 + 2);
                    iVar14 = (uVar16 - iVar15 * iVar14) + (uint)*(ushort *)puVar9;
                    local_cc = local_d0;
                    local_d0 = uVar10;
                    goto LAB_0201f598;
                  }
                  uVar19 = (ulong)((int)uVar19 - 1);
                }
                uVar16 = uVar16 + 1;
              } while (*(uint *)(lVar13 + 8) != uVar16);
            }
            local_78 = local_cc;
            local_cc = local_d0;
            local_d0 = uVar10;
          }
          iVar14 = piVar22[4];
          iVar17 = piVar22[5];
LAB_0201f598:
          uVar10 = uVar20;
          uVar23 = uVar23 + 1;
          *(undefined4 *)((long)plVar4 + 0x24) = 0;
          *(undefined1 *)((long)plVar4 + 0x2c) = 1;
          *(float *)(plVar4 + 4) = (float)iVar14 * 5.0 + 2.5;
          *(float *)(plVar4 + 5) = (float)iVar17 * 5.0 + 2.5;
        } while (uVar23 != uVar12);
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != 7);
  }
  return;
}

