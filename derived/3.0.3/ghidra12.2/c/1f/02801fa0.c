
byte FUN_02801fa0(long *param_1,short *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  int iVar19;
  int local_dc;
  long *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  long local_88;
  undefined8 local_80;
  long *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  if (*param_2 != -2) {
    local_88 = 0;
    local_90 = CONCAT22(param_2[1],*param_2);
    local_8c = *(undefined4 *)(param_2 + 2);
    local_98 = PTR_DAT_04bc0510 + 0x10;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar3 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_2);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar5 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar15 != 0) {
            local_88 = lVar15;
          }
        }
      }
    }
    uVar10 = FUN_01af0020(&local_98);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_0277e9e0(param_2);
      if ((uVar10 & 1) != 0) {
        bVar4 = FUN_026825d0(param_1,0,param_2,0);
        goto LAB_02801fd4;
      }
    }
    else {
      iVar6 = FUN_01af02d0(&local_98);
      iVar7 = FUN_01af2610(&local_98);
      puVar1 = (uint *)(param_1 + 9000);
      uVar17 = *puVar1;
      uVar5 = uVar17;
      if (8999 < uVar17) {
        uVar5 = 9000;
      }
      if (uVar5 == 0) {
        if (iVar6 < 1) goto LAB_02802314;
      }
      else {
        uVar10 = 0;
        iVar19 = 0;
        plVar18 = param_1;
        do {
          lVar15 = *(long *)puVar3;
          if ((short)*plVar18 == -2) {
            plVar12 = plVar18;
            lVar16 = lVar15;
          }
          else {
            uVar5 = FUN_0277d6c4(plVar18);
            lVar16 = *(long *)puVar3;
            plVar12 = (long *)PTR_DAT_04bb37e0;
            if (lVar16 != 0) {
              lVar15 = *(long *)(lVar15 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if (uVar5 < *(uint *)(lVar15 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
                  plVar12 = plVar18;
                }
              }
            }
          }
          local_b8 = (long *)*plVar12;
          iVar8 = iVar7;
          if ((short)*plVar12 != -2) {
            iVar8 = 0;
          }
          iVar19 = iVar8 + iVar19;
          uVar5 = FUN_0277d6c4(&local_b8);
          if (*(long *)puVar3 != 0) {
            lVar15 = *(long *)(lVar16 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if (((uVar5 < *(uint *)(lVar15 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
               (uVar11 = FUN_01af28ac(&local_98,&local_b8), (uVar11 & 1) != 0)) {
              local_70 = (undefined *)0x0;
              lVar15 = *(long *)puVar3;
              local_78 = local_b8;
              local_80 = puVar2 + 0x10;
              uVar5 = FUN_0277d6c4(&local_78);
              if (*(long *)puVar3 != 0) {
                lVar15 = *(long *)(lVar15 + 0x57e58);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar5 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                  lVar15 = *(long *)PTR_DAT_04bc0428;
                  uVar5 = FUN_0277d6c4(&local_b8);
                  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if (uVar5 < *(uint *)(lVar15 + 0x1d8)) {
                    puVar13 = *(undefined **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8);
                    if (puVar13 != (undefined *)0x0) {
                      local_70 = puVar13;
                    }
                  }
                }
              }
              iVar8 = FUN_01af02d0(&local_80);
              iVar19 = (iVar19 + iVar7) - iVar8;
            }
          }
          uVar17 = *puVar1;
          uVar10 = uVar10 + 1;
          plVar18 = plVar18 + 1;
          uVar5 = uVar17;
          if (8999 < uVar17) {
            uVar5 = 9000;
          }
        } while (uVar10 < uVar5);
        if (iVar6 <= iVar19) {
LAB_02802314:
          if (8999 < uVar17) {
            uVar17 = 9000;
          }
          if (uVar17 == 0) {
            iVar19 = 0;
          }
          else {
            local_dc = 0;
            iVar19 = 0;
            uVar10 = 0;
            plVar18 = (long *)(PTR_DAT_04bc0510 + 0x10);
            puVar2 = PTR_DAT_04bc35f8 + 0x10;
            plVar12 = param_1;
            do {
              lVar15 = *(long *)puVar3;
              if ((short)*plVar12 == -2) {
                plVar14 = plVar12;
                lVar16 = lVar15;
              }
              else {
                uVar5 = FUN_0277d6c4(plVar12);
                lVar16 = *(long *)puVar3;
                plVar14 = (long *)PTR_DAT_04bb37e0;
                if (lVar16 != 0) {
                  lVar15 = *(long *)(lVar15 + 0x57e58);
                  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if (uVar5 < *(uint *)(lVar15 + 0x1d8)) {
                    if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
                      plVar14 = plVar12;
                    }
                  }
                }
              }
              local_a0 = (undefined4)*plVar14;
              local_9c = *(undefined4 *)((long)plVar14 + 4);
              uVar5 = FUN_0277d6c4(&local_a0);
              if (*(long *)puVar3 != 0) {
                lVar15 = *(long *)(lVar16 + 0x57e58);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if (((uVar5 < *(uint *)(lVar15 + 0x1d8)) &&
                    (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
                   (uVar11 = FUN_01af28ac(&local_98,&local_a0), (uVar11 & 1) != 0)) {
                  local_a8 = 0;
                  lVar15 = *(long *)puVar3;
                  local_b0 = local_a0;
                  uStack_ac = local_9c;
                  local_b8 = plVar18;
                  uVar5 = FUN_0277d6c4(&local_b0);
                  if (*(long *)puVar3 != 0) {
                    lVar15 = *(long *)(lVar15 + 0x57e58);
                    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                    if ((uVar5 < *(uint *)(lVar15 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                      lVar15 = *(long *)PTR_DAT_04bc0428;
                      uVar5 = FUN_0277d6c4(&local_a0);
                      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                      if (uVar5 < *(uint *)(lVar15 + 0x1d8)) {
                        lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8);
                        if (lVar15 != 0) {
                          local_a8 = lVar15;
                        }
                      }
                    }
                  }
                  iVar8 = FUN_01af02d0(&local_b8);
                  if (iVar8 < iVar7) {
                    iVar8 = FUN_01af02d0(&local_b8);
                    iVar9 = FUN_01af02d0(&local_b8);
                    uVar11 = FUN_0277e9e0(PTR_DAT_04bb37e0);
                    if ((uVar11 & 1) != 0) {
                      local_70 = PTR_LAB_04bc35e8;
                      uStack_68 = 0;
                      uVar5 = *puVar1;
                      if (8999 < uVar5) {
                        uVar5 = 9000;
                      }
                      local_80 = puVar2;
                      local_78 = param_1;
                      FUN_0277b494(uVar10 & 0xffffffff,PTR_DAT_04bb37e0,uVar5,&local_80,1,0);
                    }
                    iVar19 = iVar8 + iVar19;
                    local_dc = (iVar7 - iVar9) + local_dc;
                    if (iVar6 <= local_dc) break;
                  }
                }
              }
              uVar5 = *puVar1;
              uVar10 = uVar10 + 1;
              plVar12 = plVar12 + 1;
              if (8999 < uVar5) {
                uVar5 = 9000;
              }
            } while (uVar10 < uVar5);
          }
          iVar19 = iVar19 + iVar6;
          do {
            bVar4 = iVar19 < 1;
            if (iVar19 < 1) break;
            if (iVar19 < iVar7) {
              FUN_01af2bc0(&local_98,iVar19);
              iVar19 = 0;
            }
            else {
              FUN_01af2bc0(&local_98,iVar7);
              iVar19 = iVar19 - iVar7;
            }
            local_80 = (undefined *)CONCAT44(local_8c,local_90);
            uVar10 = FUN_0277e9e0(&local_80);
            if ((uVar10 & 1) == 0) goto LAB_02801fd0;
            uVar10 = FUN_026825d0(param_1,0,&local_80,0);
          } while ((uVar10 & 1) != 0);
          goto LAB_02801fd4;
        }
      }
    }
  }
LAB_02801fd0:
  bVar4 = 0;
LAB_02801fd4:
  return bVar4 & 1;
}

