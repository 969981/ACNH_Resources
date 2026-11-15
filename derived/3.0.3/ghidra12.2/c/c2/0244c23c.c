
/* WARNING: Removing unreachable block (ram,0x0244c2c4) */
/* WARNING: Removing unreachable block (ram,0x0244c378) */

void FUN_0244c23c(long param_1)

{
  byte *pbVar1;
  float *pfVar2;
  byte *pbVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint *puVar14;
  undefined8 *puVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_70;
  float local_68;
  undefined4 uStack_64;
  long local_60;
  undefined4 local_54;
  
  pfVar2 = (float *)(param_1 + 0x20b8);
  if (*(int *)(param_1 + 0x178) == 0) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    iVar8 = FUN_00a74b78(pbVar1);
    plVar13 = (long *)PTR_DAT_04bb4718;
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar14 = (uint *)&DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar14 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar14 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar14 = puVar14 + (ulong)*pbVar1 * 2;
      }
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,8);
    if ((*puVar14 >> 8 & 1) == 0) {
      local_54 = 5;
      pbVar3 = (byte *)(param_1 + 0x18f4);
      local_70 = (undefined *)CONCAT44(local_70._4_4_,5);
      if ((*pbVar3 >> 5 & 1) == 0) {
        local_70 = (undefined *)CONCAT44(local_70._4_4_,5);
        if (iVar8 != 0x13) {
          if (iVar8 != 4) goto LAB_0244c9b4;
          if (*plVar13 == 0) {
            if ((DAT_054f0960 & 1) == 0) {
              iVar8 = __cxa_guard_acquire(&DAT_054f0960);
              puVar14 = (uint *)&DAT_054f0958;
              if (iVar8 != 0) {
                DAT_054f0958 = 0;
                __cxa_guard_release(&DAT_054f0960);
              }
              plVar13 = (long *)PTR_DAT_04bb4718;
            }
            else {
              puVar14 = (uint *)&DAT_054f0958;
            }
          }
          else {
            puVar14 = (uint *)(*plVar13 + 0x204);
            if ((ulong)*pbVar1 < 8) {
              puVar14 = puVar14 + (ulong)*pbVar1 * 2;
            }
          }
          local_70 = (undefined *)CONCAT44(local_70._4_4_,6);
          if ((*puVar14 >> 6 & 1) == 0) {
            if (*plVar13 == 0) {
              if ((DAT_054f0960 & 1) == 0) {
                iVar8 = __cxa_guard_acquire(&DAT_054f0960);
                puVar14 = (uint *)&DAT_054f0958;
                if (iVar8 != 0) {
                  DAT_054f0958 = 0;
                  __cxa_guard_release(&DAT_054f0960);
                }
              }
              else {
                puVar14 = (uint *)&DAT_054f0958;
              }
            }
            else {
              puVar14 = (uint *)(*plVar13 + 0x204);
              if ((ulong)*pbVar1 < 8) {
                puVar14 = puVar14 + (ulong)*pbVar1 * 2;
              }
            }
            local_70 = (undefined *)CONCAT44(local_70._4_4_,7);
            if ((*puVar14 >> 7 & 1) != 0) goto LAB_0244c6e4;
          }
          else {
LAB_0244c6e4:
            puVar15 = *(undefined8 **)(param_1 + 0x60);
            if (puVar15 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar8 = __cxa_guard_acquire(&DAT_052461c0);
                puVar15 = &DAT_05240280;
                if (iVar8 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                puVar15 = &DAT_05240280;
              }
            }
            local_70 = (undefined *)CONCAT44(local_70._4_4_,8);
            if ((*(uint *)((long)puVar15 + 0x15f4) >> 8 & 1) == 0) {
              FUN_0244cd90(param_1);
              goto LAB_0244c9b4;
            }
          }
          puVar5 = PTR_DAT_04bb43c0;
          lVar16 = *(long *)PTR_DAT_04bb43c0;
          uVar6 = FUN_0277d6c4(pfVar2);
          lVar9 = *(long *)puVar5;
          if (lVar9 != 0) {
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              local_68 = *pfVar2;
              local_60 = 0;
              local_70 = PTR_DAT_04bc0510 + 0x10;
              uStack_64 = *(undefined4 *)(param_1 + 0x20bc);
              uVar6 = FUN_0277d6c4(&local_68);
              if (*(long *)puVar5 != 0) {
                lVar9 = *(long *)(lVar9 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                  lVar9 = *(long *)PTR_DAT_04bc0428;
                  uVar6 = FUN_0277d6c4(pfVar2);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                  if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
                    lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
                    if (lVar9 != 0) {
                      local_60 = lVar9;
                    }
                  }
                }
              }
              uVar11 = FUN_01ae59b0(&local_70);
              if ((uVar11 & 1) != 0) {
                uVar12 = FUN_016e3954(param_1);
                FUN_0170a8c4(uVar12,param_1 + 0x20c0);
                goto LAB_0244c9b4;
              }
            }
          }
        }
        local_54 = 4;
        *pbVar3 = *pbVar3 & 0xef;
        local_70._0_4_ = 5.60519e-45;
        if (*(long *)(param_1 + 0x60) != 0) {
          FUN_0172fad0(*(long *)(param_1 + 0x60) + 0x12c0,param_1,PTR_DAT_04bbe070,PTR_DAT_04bbe078,
                       PTR_DAT_04bb6928);
          lVar9 = *(long *)(param_1 + 0x60);
          if (lVar9 != 0) {
            *(undefined4 *)(lVar9 + 0x12d0) = 0;
            *(undefined1 *)(lVar9 + 0x142d) = 0;
            **(undefined1 **)(lVar9 + 0x12e0) = 0;
            *(undefined4 *)(lVar9 + 0x1330) = 0xffffffff;
            *(undefined4 *)(lVar9 + 0x1428) = 0;
            *(undefined8 *)(lVar9 + 0x1334) = 0;
            *(undefined8 *)(lVar9 + 0x133c) = 0;
            *(undefined4 *)(lVar9 + 0x1344) = 0;
          }
        }
        local_54 = 5;
        local_70 = (undefined *)CONCAT44(local_70._4_4_,5);
        *pbVar3 = *pbVar3 & 0xdf;
        goto LAB_0244c94c;
      }
    }
    FUN_0244cbcc(param_1,param_1 + 0x18e0);
  }
  else {
    local_54 = 2;
    local_70._0_4_ = 2.8026e-45;
    bVar4 = *(byte *)(param_1 + 0x18fa) >> 2 & 1;
    puVar15 = *(undefined8 **)(param_1 + 0x60);
    if (puVar15 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar15 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar15 = &DAT_05240280;
      }
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,8);
    uVar6 = *(uint *)((long)puVar15 + 0x15f4);
    FUN_0244b6a0(param_1,bVar4,0);
    if ((uVar6 >> 8 & 1) == 0) {
      bVar4 = 1;
    }
    if (bVar4 == 0) {
      FUN_023164ec(param_1,6);
    }
    puVar15 = *(undefined8 **)(param_1 + 0x60);
    if (puVar15 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar15 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar15 = &DAT_05240280;
      }
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,8);
    if ((*(uint *)((long)puVar15 + 0x15f4) >> 8 & 1) == 0) {
      local_54 = 4;
      if ((*(byte *)(param_1 + 0x18f4) >> 4 & 1) == 0) {
        local_54 = 5;
        local_70 = (undefined *)CONCAT44(local_70._4_4_,5);
        if ((*(byte *)(param_1 + 0x18f4) >> 5 & 1) == 0) goto LAB_0244c94c;
      }
      puVar15 = *(undefined8 **)(param_1 + 0x60);
      local_68 = 0.0;
      local_70 = (undefined *)0x0;
      if (puVar15 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          puVar15 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar15 = &DAT_05240280;
        }
      }
      FUN_016ff8c0(puVar15,8,&local_70);
      fVar19 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
      lVar9 = FUN_0251e98c(1);
      pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x2890) + 0xf0))(lVar9 + 0x2890);
      fVar19 = fVar19 + *pfVar10;
      lVar9 = *(long *)(param_1 + 0x60);
      local_70 = (undefined *)CONCAT44(fVar19,(float)local_70);
      if (lVar9 != 0) {
        if ((*(int *)(lVar9 + 0x1428) != 1) &&
           (fVar17 = *(float *)(lVar9 + 0x133c) - (float)local_70,
           fVar19 = *(float *)(lVar9 + 0x1340) - fVar19,
           fVar18 = *(float *)(lVar9 + 0x1344) - local_68,
           2.0 < SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar18 * fVar18))) {
          *(undefined1 *)(lVar9 + 0x142d) = 0;
        }
        *(undefined4 *)(lVar9 + 0x12d0) = 0;
        **(undefined1 **)(lVar9 + 0x12e0) = 0;
        *(undefined8 *)(lVar9 + 0x1334) = 0;
        *(undefined **)(lVar9 + 0x133c) = local_70;
        *(float *)(lVar9 + 0x1344) = local_68;
        *(undefined4 *)(lVar9 + 0x1428) = 1;
      }
      goto LAB_0244c9b4;
    }
LAB_0244c94c:
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_0172fad0(*(long *)(param_1 + 0x60) + 0x12c0,param_1,PTR_DAT_04bbe070,PTR_DAT_04bbe078,
                   PTR_DAT_04bb6928);
      lVar9 = *(long *)(param_1 + 0x60);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x12d0) = 0;
        *(undefined1 *)(lVar9 + 0x142d) = 0;
        **(undefined1 **)(lVar9 + 0x12e0) = 0;
        *(undefined4 *)(lVar9 + 0x1330) = 0xffffffff;
        *(undefined4 *)(lVar9 + 0x1428) = 0;
        *(undefined8 *)(lVar9 + 0x1334) = 0;
        *(undefined8 *)(lVar9 + 0x133c) = 0;
        *(undefined4 *)(lVar9 + 0x1344) = 0;
      }
    }
  }
LAB_0244c9b4:
  puVar5 = PTR_DAT_04bb37e0;
  *(undefined8 *)(param_1 + 0x20c0) = 0;
  *(undefined4 *)(param_1 + 0x20c8) = 0;
  *(undefined2 *)pfVar2 = *(undefined2 *)puVar5;
  *(undefined *)(param_1 + 0x20ba) = puVar5[2];
  *(undefined *)(param_1 + 0x20bb) = puVar5[3];
  *(undefined4 *)(param_1 + 0x20bc) = *(undefined4 *)(puVar5 + 4);
  return;
}

