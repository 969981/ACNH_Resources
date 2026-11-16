
void FUN_0282cbb0(long param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined *local_88;
  int local_80;
  undefined4 uStack_7c;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((*(char *)((long)param_2 + 0x2e) == '\0') || (iVar5 = FUN_0252d29c(), iVar5 != param_3)) {
    if (*(char *)((long)param_2 + 0x29) != '\0' || *(char *)((long)param_2 + 0x2a) != '\0') {
      FUN_0282d76c(param_1,param_3);
      FUN_0282db54(param_1,param_3,1);
      FUN_0282db54(param_1,param_3,3);
    }
    if (*param_2 < 1) {
      if (*(char *)((long)param_2 + 0x29) != '\0' || *(char *)((long)param_2 + 0x2a) != '\0') {
        uVar6 = 0;
        iVar5 = 0;
        do {
          uVar7 = FUN_02828794(param_1 + (long)iVar5 * 0x2b8);
          puVar4 = PTR_DAT_04bc0580;
          puVar1 = PTR_DAT_04bb4fa8;
          iVar5 = iVar5 + 1;
          uVar6 = uVar6 + ((uVar7 ^ 0xffffffff) & 1);
        } while (iVar5 != 0x1e);
        if (uVar6 < 2) {
          uVar6 = 0;
          puVar2 = PTR_DAT_04bc05b8 + 0x10;
          do {
            lVar11 = param_1 + (long)(int)uVar6 * 0x2b8;
            uVar8 = FUN_02828794(lVar11);
            if ((uVar8 & 1) != 0) {
              uStack_7c = *(undefined4 *)(lVar11 + 0xc);
              local_78 = 0;
              uStack_70 = 0;
              local_68 = (undefined1 *)((ulong)uVar6 << 0x20);
              local_88 = puVar2;
              local_80 = param_3;
              lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)puVar4);
              if (lVar11 != 0) {
                plVar9 = *(long **)puVar1;
                lVar10 = *plVar9;
                plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
                *plVar9 = (long)plVar3;
                *plVar3 = lVar10;
                plVar3[1] = (long)plVar9;
                if (lVar10 != 0) {
                  *(long **)(lVar10 + 8) = plVar3;
                }
                *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x1e);
        }
      }
      if ((*(char *)((long)param_2 + 0x29) != '\0' || *(char *)((long)param_2 + 0x2a) != '\0') &&
         (uVar6 = FUN_0282e284(param_1), uVar6 < 2)) {
        iVar5 = 0;
        puVar1 = PTR_DAT_04bc05b8 + 0x10;
        do {
          lVar11 = param_1 + 0x5190 + (long)iVar5 * 0x2b8;
          uVar8 = FUN_02828b58(lVar11);
          if ((uVar8 & 1) != 0) {
            uStack_7c = *(undefined4 *)(lVar11 + 0xc);
            local_78 = 0;
            uStack_70 = 0;
            local_68 = (undefined1 *)CONCAT44(iVar5,1);
            local_88 = puVar1;
            local_80 = param_3;
            lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
            if (lVar11 != 0) {
              plVar9 = *(long **)PTR_DAT_04bb4fa8;
              lVar10 = *plVar9;
              plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
              *plVar9 = (long)plVar3;
              *plVar3 = lVar10;
              plVar3[1] = (long)plVar9;
              if (lVar10 != 0) {
                *(long **)(lVar10 + 8) = plVar3;
              }
              *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x18);
      }
    }
    else {
      uVar6 = 0;
      puVar1 = PTR_DAT_04bc05b8 + 0x10;
      do {
        lVar11 = param_1 + (long)(int)uVar6 * 0x2b8;
        uVar8 = FUN_02828794(lVar11);
        if ((uVar8 & 1) != 0) {
          uStack_7c = *(undefined4 *)(lVar11 + 0xc);
          local_78 = 0;
          uStack_70 = 0;
          local_68 = (undefined1 *)((ulong)uVar6 << 0x20);
          local_88 = puVar1;
          local_80 = param_3;
          lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
          if (lVar11 != 0) {
            plVar9 = *(long **)PTR_DAT_04bb4fa8;
            lVar10 = *plVar9;
            plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
            *plVar9 = (long)plVar3;
            *plVar3 = lVar10;
            plVar3[1] = (long)plVar9;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 8) = plVar3;
            }
            *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x1e);
      iVar5 = 0;
      puVar1 = PTR_DAT_04bc05b8 + 0x10;
      do {
        lVar11 = param_1 + 0x5190 + (long)iVar5 * 0x2b8;
        uVar8 = FUN_02828b58(lVar11);
        if ((uVar8 & 1) != 0) {
          uStack_7c = *(undefined4 *)(lVar11 + 0xc);
          local_78 = 0;
          uStack_70 = 0;
          local_68 = (undefined1 *)CONCAT44(iVar5,1);
          local_88 = puVar1;
          local_80 = param_3;
          lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
          if (lVar11 != 0) {
            plVar9 = *(long **)PTR_DAT_04bb4fa8;
            lVar10 = *plVar9;
            plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
            *plVar9 = (long)plVar3;
            *plVar3 = lVar10;
            plVar3[1] = (long)plVar9;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 8) = plVar3;
            }
            *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
          }
        }
        puVar4 = PTR_DAT_04bb43c0;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x18);
      if (*(char *)(param_1 + 0xa8b0) != '\0') {
        lVar10 = *(long *)PTR_DAT_04bb43c0;
        uVar6 = FUN_0277d6c4(param_1 + 0xa8b4);
        lVar11 = *(long *)puVar4;
        if (lVar11 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_78 = 0;
            local_80 = *(int *)(param_1 + 0xa8b4);
            uStack_7c = *(undefined4 *)(param_1 + 0xa8b8);
            local_88 = PTR_DAT_04bc0510 + 0x10;
            uVar6 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar4 != 0) {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(param_1 + 0xa8b4);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                   lVar11 != 0)) {
                  local_78 = lVar11;
                }
              }
            }
            uVar8 = FUN_01b032d0(&local_88);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = nn::time::IsValidDate
                                  ((uint)*(ushort *)(param_1 + 0xa8bc),
                                   (uint)*(byte *)(param_1 + 0xa8be),
                                   (uint)*(byte *)(param_1 + 0xa8bf)), (uVar8 & 1) != 0)) {
              local_78 = 0;
              uStack_70 = 0;
              uStack_7c = *(undefined4 *)(param_1 + 0xa8bc);
              local_88 = PTR_DAT_04bc05b8 + 0x10;
              local_68 = (undefined1 *)0x3;
              local_80 = param_3;
              lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
              if (lVar11 != 0) {
                plVar9 = *(long **)PTR_DAT_04bb4fa8;
                lVar10 = *plVar9;
                plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
                *plVar9 = (long)plVar3;
                *plVar3 = lVar10;
                plVar3[1] = (long)plVar9;
                if (lVar10 != 0) {
                  *(long **)(lVar10 + 8) = plVar3;
                }
                *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
              }
            }
          }
        }
      }
      if (*(char *)(param_1 + 0xa8c0) != '\0') {
        lVar10 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(param_1 + 0xa8c4);
        lVar11 = *(long *)puVar4;
        if (lVar11 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_78 = 0;
            local_80 = *(int *)(param_1 + 0xa8c4);
            uStack_7c = *(undefined4 *)(param_1 + 0xa8c8);
            local_88 = PTR_DAT_04bc0510 + 0x10;
            uVar6 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar4 != 0) {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(param_1 + 0xa8c4);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                   lVar11 != 0)) {
                  local_78 = lVar11;
                }
              }
            }
            uVar8 = FUN_01b032d0(&local_88);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = nn::time::IsValidDate
                                  ((uint)*(ushort *)(param_1 + 0xa8cc),
                                   (uint)*(byte *)(param_1 + 0xa8ce),
                                   (uint)*(byte *)(param_1 + 0xa8cf)), (uVar8 & 1) != 0)) {
              local_78 = 0;
              uStack_70 = 0;
              uStack_7c = *(undefined4 *)(param_1 + 0xa8cc);
              local_88 = PTR_DAT_04bc05b8 + 0x10;
              local_68 = &DAT_100000003;
              local_80 = param_3;
              lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
              if (lVar11 != 0) {
                plVar9 = *(long **)PTR_DAT_04bb4fa8;
                lVar10 = *plVar9;
                plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
                *plVar9 = (long)plVar3;
                *plVar3 = lVar10;
                plVar3[1] = (long)plVar9;
                if (lVar10 != 0) {
                  *(long **)(lVar10 + 8) = plVar3;
                }
                *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
              }
            }
          }
        }
      }
      if (*(char *)(param_1 + 0xa8d0) != '\0') {
        lVar10 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(param_1 + 0xa8d4);
        lVar11 = *(long *)puVar4;
        if (lVar11 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_78 = 0;
            local_80 = *(int *)(param_1 + 0xa8d4);
            uStack_7c = *(undefined4 *)(param_1 + 0xa8d8);
            local_88 = PTR_DAT_04bc0510 + 0x10;
            uVar6 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar4 != 0) {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(param_1 + 0xa8d4);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                   lVar11 != 0)) {
                  local_78 = lVar11;
                }
              }
            }
            uVar8 = FUN_01b032d0(&local_88);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = nn::time::IsValidDate
                                  ((uint)*(ushort *)(param_1 + 0xa8dc),
                                   (uint)*(byte *)(param_1 + 0xa8de),
                                   (uint)*(byte *)(param_1 + 0xa8df)), (uVar8 & 1) != 0)) {
              local_78 = 0;
              uStack_70 = 0;
              uStack_7c = *(undefined4 *)(param_1 + 0xa8dc);
              local_88 = PTR_DAT_04bc05b8 + 0x10;
              local_68 = (undefined1 *)0x200000003;
              local_80 = param_3;
              lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
              if (lVar11 != 0) {
                plVar9 = *(long **)PTR_DAT_04bb4fa8;
                lVar10 = *plVar9;
                plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
                *plVar9 = (long)plVar3;
                *plVar3 = lVar10;
                plVar3[1] = (long)plVar9;
                if (lVar10 != 0) {
                  *(long **)(lVar10 + 8) = plVar3;
                }
                *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
              }
            }
          }
        }
      }
      if (*(char *)(param_1 + 0xa8e0) != '\0') {
        lVar10 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(param_1 + 0xa8e4);
        lVar11 = *(long *)puVar4;
        if (lVar11 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_78 = 0;
            local_80 = *(int *)(param_1 + 0xa8e4);
            uStack_7c = *(undefined4 *)(param_1 + 0xa8e8);
            local_88 = PTR_DAT_04bc0510 + 0x10;
            uVar6 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar4 != 0) {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(param_1 + 0xa8e4);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                   lVar11 != 0)) {
                  local_78 = lVar11;
                }
              }
            }
            uVar8 = FUN_01b032d0(&local_88);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = nn::time::IsValidDate
                                  ((uint)*(ushort *)(param_1 + 0xa8ec),
                                   (uint)*(byte *)(param_1 + 0xa8ee),
                                   (uint)*(byte *)(param_1 + 0xa8ef)), (uVar8 & 1) != 0)) {
              local_78 = 0;
              uStack_70 = 0;
              uStack_7c = *(undefined4 *)(param_1 + 0xa8ec);
              local_88 = PTR_DAT_04bc05b8 + 0x10;
              local_68 = (undefined1 *)0x300000003;
              local_80 = param_3;
              lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
              if (lVar11 != 0) {
                plVar9 = *(long **)PTR_DAT_04bb4fa8;
                lVar10 = *plVar9;
                plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
                *plVar9 = (long)plVar3;
                *plVar3 = lVar10;
                plVar3[1] = (long)plVar9;
                if (lVar10 != 0) {
                  *(long **)(lVar10 + 8) = plVar3;
                }
                *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
              }
            }
          }
        }
      }
      if (*(char *)(param_1 + 0xa8f0) != '\0') {
        lVar10 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(param_1 + 0xa8f4);
        lVar11 = *(long *)puVar4;
        if (lVar11 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_78 = 0;
            local_80 = *(int *)(param_1 + 0xa8f4);
            uStack_7c = *(undefined4 *)(param_1 + 0xa8f8);
            local_88 = PTR_DAT_04bc0510 + 0x10;
            uVar6 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar4 != 0) {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(param_1 + 0xa8f4);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                   lVar11 != 0)) {
                  local_78 = lVar11;
                }
              }
            }
            uVar8 = FUN_01b032d0(&local_88);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = nn::time::IsValidDate
                                  ((uint)*(ushort *)(param_1 + 0xa8fc),
                                   (uint)*(byte *)(param_1 + 0xa8fe),
                                   (uint)*(byte *)(param_1 + 0xa8ff)), (uVar8 & 1) != 0)) {
              local_78 = 0;
              uStack_70 = 0;
              uStack_7c = *(undefined4 *)(param_1 + 0xa8fc);
              local_88 = PTR_DAT_04bc05b8 + 0x10;
              local_68 = (undefined1 *)0x400000003;
              local_80 = param_3;
              lVar11 = FUN_01b42e7c(&local_88,*(undefined8 *)PTR_DAT_04bc0580);
              if (lVar11 != 0) {
                plVar9 = *(long **)PTR_DAT_04bb4fa8;
                lVar10 = *plVar9;
                plVar3 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar11);
                *plVar9 = (long)plVar3;
                *plVar3 = lVar10;
                plVar3[1] = (long)plVar9;
                if (lVar10 != 0) {
                  *(long **)(lVar10 + 8) = plVar3;
                }
                *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
              }
            }
          }
        }
      }
    }
    if (*param_2 != 0) {
      FUN_0282db54(param_1,param_3,2);
    }
    if (0 < param_2[1]) {
      FUN_0282e488(param_1,param_3);
      FUN_0282e740(param_1,param_3);
      if (0 < param_2[1]) {
        FUN_0282e9f8(param_1,param_3);
      }
    }
  }
  return;
}

