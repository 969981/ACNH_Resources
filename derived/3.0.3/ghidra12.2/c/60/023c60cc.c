
/* WARNING: Removing unreachable block (ram,0x023c67cc) */

void FUN_023c60cc(long param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  undefined4 *puVar12;
  uint *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  long lVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  
  uVar5 = *(ushort *)(param_1 + 0x1912);
  local_60 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_60);
  local_60 = *(undefined **)(param_1 + 0x1908);
  lVar10 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar20 = *pfVar11;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_88 = CONCAT44(local_88._4_4_,10);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023c618c;
  }
  else {
LAB_023c618c:
    iVar9 = (uint)uVar5 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar2 + 0x148))();
    iVar16 = iVar9 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar16 + 0x5b05afU) {
      iVar6 = 0x15555560;
      iVar9 = -0x15555560;
      iVar16 = (int)(fVar20 * (float)iVar16);
      if (iVar16 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar9 = 0x5b05b0;
      }
      iVar1 = iVar16;
      if (iVar6 <= iVar16) {
        iVar1 = iVar6;
      }
      if (iVar9 <= iVar16) {
        iVar9 = iVar1;
      }
      iVar9 = iVar9 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar9;
  }
  lVar10 = FUN_0251e98c(1);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x5a0) + 0xf0))(lVar10 + 0x5a0);
  uVar21 = *puVar12;
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x5d0) + 0xf0))(lVar10 + 0x5d0);
  uVar22 = *puVar12;
  puVar13 = (uint *)(**(code **)(*(long *)(lVar10 + 0x600) + 0xf0))(lVar10 + 0x600);
  puVar7 = PTR_DAT_04bb43c0;
  uVar23 = *puVar13;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_60);
  lVar10 = *(long *)puVar7;
  if (lVar10 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_70 = (uint *)0x0;
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_78 = (undefined4)local_60;
      uStack_74 = local_60._4_4_;
      uVar8 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar7 == 0) {
        uVar14 = FUN_01ad673c(&local_80);
        if ((uVar14 & 1) == 0) goto LAB_023c6514;
LAB_023c64bc:
        lVar10 = FUN_0251e98c(1);
        puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x2ce0) + 0xf0))(lVar10 + 0x2ce0);
        uVar21 = *puVar12;
        puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x2d10) + 0xf0))(lVar10 + 0x2d10);
        lVar19 = 0x2d40;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_60);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (*(uint *)(lVar10 + 0x1d8) <= uVar8) goto LAB_023c63dc;
          puVar13 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8);
          if (puVar13 == (uint *)0x0) goto LAB_023c63e0;
          bVar18 = false;
          uVar8 = *puVar13;
          local_70 = puVar13;
          if ((uVar8 != 0) && (puVar13 != (uint *)(ulong)uVar8)) {
            puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
            if ((*puVar17 != 0) &&
               ((uVar8 = puVar17[1], uVar8 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar17 + lVar10 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar10 != 0) {
                uVar3 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar13 - lVar10) / (ulong)uVar8);
                }
                if (*puVar17 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) == 1))
                goto LAB_023c64bc;
              }
            }
            bVar18 = false;
          }
        }
        else {
LAB_023c63dc:
          puVar13 = (uint *)0x0;
LAB_023c63e0:
          bVar18 = true;
        }
        uVar14 = FUN_01ad673c(&local_80);
        if ((uVar14 & 1) != 0) goto LAB_023c64bc;
        if (bVar18) goto LAB_023c6514;
        puVar17 = (uint *)((long)puVar13 - (ulong)*puVar13);
        if ((((*puVar13 == 0) || (puVar17 == (uint *)0x0)) || (*puVar17 == 0)) ||
           ((uVar8 = puVar17[1], uVar8 == 0 || ((ulong)(ushort)puVar17[2] == 0))))
        goto LAB_023c6514;
        lVar10 = 0xc;
        if (*(char *)((long)puVar17 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar17 + lVar10 + (ulong)(ushort)puVar17[2] * 8;
        if (lVar10 == 0) goto LAB_023c6514;
        uVar3 = 0;
        if ((ulong)uVar8 != 0) {
          uVar3 = (uint)((ulong)((long)puVar13 - lVar10) / (ulong)uVar8);
        }
        if (*puVar17 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar3) ||
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) != 2))
        goto LAB_023c6514;
        lVar10 = FUN_0251e98c(1);
        puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x2da0) + 0xf0))(lVar10 + 0x2da0);
        uVar21 = *puVar12;
        puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x2dd0) + 0xf0))(lVar10 + 0x2dd0);
        lVar19 = 0x2e00;
      }
      uVar22 = *puVar12;
      puVar13 = (uint *)(**(code **)(*(long *)(lVar10 + lVar19) + 0xf0))((long *)(lVar10 + lVar19));
      uVar23 = *puVar13;
    }
  }
LAB_023c6514:
  local_62 = 0;
  local_70._0_5_ = (uint5)uVar23;
  local_64 = 1;
  local_80 = local_60;
  local_68 = 0x3f800000;
  local_78 = uVar21;
  uStack_74 = uVar22;
  FUN_023c49a8(param_1,&local_80,param_1 + 0x9cc,param_1 + 0x9c8);
  local_88 = 0xfffe;
  FUN_0277d4ac(&local_88);
  local_88 = *(undefined8 *)(param_1 + 0x1908);
  lVar19 = *(long *)puVar7;
  uVar8 = FUN_0277d6c4(&local_88);
  lVar10 = *(long *)puVar7;
  if (lVar10 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_70 = (uint *)0x0;
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uVar8 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar7 == 0) {
        uVar14 = FUN_01ad673c(&local_80);
        if ((uVar14 & 1) == 0) goto LAB_023c6824;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_88);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (*(uint *)(lVar10 + 0x1d8) <= uVar8) goto LAB_023c66d0;
          puVar13 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8);
          if (puVar13 == (uint *)0x0) goto LAB_023c66d4;
          bVar18 = false;
          uVar8 = *puVar13;
          local_70 = puVar13;
          if ((uVar8 != 0) && (puVar13 != (uint *)(ulong)uVar8)) {
            puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
            if ((*puVar17 != 0) &&
               ((uVar8 = puVar17[1], uVar8 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar17 + lVar10 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar10 != 0) {
                uVar23 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar23 = (uint)((ulong)((long)puVar13 - lVar10) / (ulong)uVar8);
                }
                if (*puVar17 <= uVar23) {
                  uVar23 = 0xffffffff;
                }
                if ((uVar23 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar23 * 2) == 1))
                goto LAB_023c6774;
              }
            }
            bVar18 = false;
          }
        }
        else {
LAB_023c66d0:
          puVar13 = (uint *)0x0;
LAB_023c66d4:
          bVar18 = true;
        }
        uVar14 = FUN_01ad673c(&local_80);
        if ((uVar14 & 1) == 0) {
          if (!bVar18) {
            puVar17 = (uint *)((long)puVar13 - (ulong)*puVar13);
            if ((((*puVar13 != 0) && (puVar17 != (uint *)0x0)) && (*puVar17 != 0)) &&
               ((uVar8 = puVar17[1], uVar8 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar17 + lVar10 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar10 != 0) {
                uVar23 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar23 = (uint)((ulong)((long)puVar13 - lVar10) / (ulong)uVar8);
                }
                if (*puVar17 <= uVar23) {
                  uVar23 = 0xffffffff;
                }
                if ((uVar23 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar23 * 2) == 2))
                goto LAB_023c6774;
              }
            }
          }
          goto LAB_023c6824;
        }
      }
LAB_023c6774:
      puVar15 = *(undefined8 **)(param_1 + 0x60);
      if (puVar15 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(&DAT_052461c0);
          puVar15 = &DAT_05240280;
          if (iVar9 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar15 = &DAT_05240280;
        }
      }
      if (puVar15[0x227] == 0) {
        local_58 = 0;
      }
      else {
        local_58 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
        local_54 = 0x14;
        uVar14 = FUN_03850890(puVar15[0x227],0x14,0,local_58);
        if ((uVar14 & 1) != 0) {
          FUN_02472404(0,param_1);
          puVar15 = *(undefined8 **)(param_1 + 0x60);
          if (puVar15 == (undefined8 *)0x0) {
            if (((DAT_052461c0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_052461c0), iVar9 != 0)) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
              puVar15 = &DAT_05240280;
            }
            else {
              puVar15 = &DAT_05240280;
            }
          }
          FUN_01702b70(puVar15,6,2);
        }
      }
    }
  }
LAB_023c6824:
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_052461c0), iVar9 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      lVar10 = DAT_052413b8;
      goto joined_r0x023c6848;
    }
    puVar15 = &DAT_05240280;
  }
  lVar10 = puVar15[0x227];
joined_r0x023c6848:
  if (lVar10 == 0) {
    uVar14 = FUN_0170a6d0(puVar15,0);
  }
  else {
    local_80._4_4_ = (undefined4)((ulong)local_80 >> 0x20);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    uVar14 = FUN_0170a6d0(puVar15,*(uint *)(puVar15 + 0x2d3) >> 1 & 1);
  }
  if ((uVar14 & 1) != 0) {
    bVar4 = *(byte *)(param_1 + 0x1910);
    if (7 < bVar4) {
      bVar4 = 0;
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_023752f4(param_1,bVar4,6);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      if (bVar4 == 1) {
        FUN_0231b68c(param_1,6);
      }
      else {
        FUN_023164ec(param_1,6);
      }
    }
  }
  return;
}

