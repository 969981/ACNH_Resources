
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02322950(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  long lVar18;
  ulong *puVar19;
  byte bVar20;
  byte bVar21;
  uint *puVar22;
  long *plVar23;
  long lVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  ulong local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined7 uStack_b0;
  undefined1 local_a9;
  undefined2 uStack_a8;
  char cStack_a6;
  undefined4 local_a4;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  uint local_78;
  
  puVar4 = PTR_DAT_04bb39b0;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
LAB_023229d8:
    bVar7 = true;
  }
  else {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar18 + 0x158);
    }
    bVar21 = *pbVar1;
    bVar20 = *pbVar2;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if (bVar20 == bVar21) goto LAB_023229d8;
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar22 = &DAT_054f08c0;
        if (iVar10 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar22 = &DAT_054f08c0;
      }
    }
    else {
      puVar22 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
    }
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
    bVar7 = (*puVar22 >> 1 & 1) == 0;
  }
  uVar14 = FUN_0243b298(param_1,0);
  if ((uVar14 & 1) != 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x12f8) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x17ac) == '\0') {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,3);
    if ((*(uint *)(param_1 + 0xed0) >> 3 & 1) != 0) {
      lVar18 = *(long *)puVar4;
      if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
LAB_02322a84:
        sVar3 = *(short *)PTR_DAT_04bb6298;
        if (sVar3 != -1) {
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
          puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
          if (0xff < (uint)(int)sVar3) {
            puVar22 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar22 >> 1 & 1) != 0) {
LAB_02322ad4:
            uVar14 = FUN_02426e2c(param_1,0,0,0,0);
            if ((uVar14 & 1) != 0) {
              return 1;
            }
            goto LAB_02322af0;
          }
        }
LAB_02322c88:
        uVar14 = FUN_02426e2c(param_1,0,0,0,0);
      }
      else {
        pbVar2 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar18 + 0x15c) != 0) {
          pbVar2 = (byte *)(lVar18 + 0x158);
        }
        bVar21 = *pbVar1;
        bVar20 = *pbVar2;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        if (7 < bVar21) {
          bVar21 = 0xff;
        }
        if (bVar20 == bVar21) goto LAB_02322a84;
        if (*(long *)PTR_DAT_04bb4718 == 0) {
          if ((DAT_054f08c8 & 1) == 0) {
            iVar10 = __cxa_guard_acquire(&DAT_054f08c8);
            puVar22 = &DAT_054f08c0;
            if (iVar10 != 0) {
              DAT_054f08c0 = 0;
              __cxa_guard_release(&DAT_054f08c8);
            }
          }
          else {
            puVar22 = &DAT_054f08c0;
          }
        }
        else {
          puVar22 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
        }
        bVar6 = (*puVar22 >> 1 & 1) == 0;
        sVar3 = *(short *)PTR_DAT_04bb6298;
        if (sVar3 == -1) {
LAB_02322c84:
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
          if (!bVar6) goto LAB_02322ca4;
          goto LAB_02322c88;
        }
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 1 & 1) == 0) goto LAB_02322c84;
        if (bVar6) goto LAB_02322ad4;
LAB_02322af0:
        lVar18 = *(long *)puVar4;
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
LAB_02322b3c:
          uVar14 = FUN_023c27d0(param_1,0);
          if ((uVar14 & 1) != 0) {
            return 1;
          }
        }
        else {
          pbVar2 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar18 + 0x15c) != 0) {
            pbVar2 = (byte *)(lVar18 + 0x158);
          }
          bVar21 = *pbVar1;
          bVar20 = *pbVar2;
          if (7 < bVar20) {
            bVar20 = 0xff;
          }
          if (7 < bVar21) {
            bVar21 = 0xff;
          }
          if (bVar20 == bVar21) goto LAB_02322b3c;
        }
        uVar14 = FUN_02545954(pbVar1);
        if ((uVar14 & 1) == 0) goto LAB_02322ca4;
        uVar14 = FUN_023d2018(param_1,0x36,0);
      }
      if ((uVar14 & 1) != 0) {
        return 1;
      }
    }
LAB_02322ca4:
    if (*(char *)(param_1 + 0x17ac) == '\0') {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,3);
      if (((*(uint *)(param_1 + 0xed0) >> 3 & 1) != 0) &&
         ((uVar14 = FUN_0243b378(param_1), (uVar14 & 1) != 0 ||
          (uVar14 = FUN_024f31b0(), (uVar14 & 1) != 0)))) {
        if (*(long *)(param_1 + 0x298) == 0) {
          puVar19 = (ulong *)PTR_DAT_04bb37e0;
        }
        else {
          lVar18 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
          puVar19 = (ulong *)(lVar18 + ((ulong)*(uint *)(lVar18 + 0x10) & 1) * 0x20 + 0x14);
        }
        local_a0 = *puVar19;
        uVar9 = FUN_0243b378(param_1);
        uVar14 = FUN_016e7304(&local_a0,uVar9 & 1,*(long *)(param_1 + 0x68) + 0x278);
        if ((uVar14 & 1) != 0) {
          FUN_01ad5d04(&local_d0,&local_a0);
          iVar10 = FUN_01ad78cc(&local_d0);
          if ((iVar10 == 0x43) && (uVar14 = FUN_024d7ccc(param_1,0,0), (uVar14 & 1) != 0)) {
            return 1;
          }
        }
      }
    }
  }
  puVar15 = local_d0;
  if (!bVar7) goto LAB_02323404;
  uVar14 = (ulong)local_d0 >> 0x20;
  local_d0 = (undefined *)(uVar14 << 0x20);
  if ((*(uint *)(param_1 + 0xec8) & 1) == 0) {
    local_d0 = (undefined *)(uVar14 << 0x20);
    if ((*(uint *)(param_1 + 0xec0) & 1) != 0) {
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 != -1) {
        local_d0 = (undefined *)CONCAT44((int)((ulong)puVar15 >> 0x20),1);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 1 & 1) != 0) {
          local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
          uVar14 = FUN_024662c4(param_1,&local_d0,0,0);
          if ((uVar14 & 1) != 0) {
            return 1;
          }
        }
      }
      if (*(long *)(param_1 + 0x298) == 0) {
        puVar15 = PTR_DAT_04bb37e0;
      }
      else {
        lVar18 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
        puVar15 = (undefined *)(lVar18 + ((ulong)*(uint *)(lVar18 + 0x10) & 1) * 0x20 + 0x14);
      }
      lVar18 = *(long *)puVar4;
      if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
        bVar7 = true;
      }
      else {
        pbVar2 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar18 + 0x15c) != 0) {
          pbVar2 = (byte *)(lVar18 + 0x158);
        }
        bVar21 = *pbVar1;
        bVar20 = *pbVar2;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        if (7 < bVar21) {
          bVar21 = 0xff;
        }
        bVar7 = bVar20 == bVar21;
      }
      uVar14 = FUN_016e7304(puVar15,bVar7,*(long *)(param_1 + 0x68) + 0x278);
      if ((uVar14 & 1) != 0) {
        iVar10 = FUN_016f5c40(param_1);
        lVar18 = *(long *)puVar4;
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
LAB_02322f28:
          if ((*(char *)(param_1 + 0x2264) != '\0') ||
             (((*(int *)(*(long *)PTR_DAT_04bb4718 + 0x11c4) != 0 || (iVar10 != 0xb)) ||
              (*(int *)(param_1 + 0x178) != 0)))) goto LAB_02322f30;
          if (lVar18 != 0) goto LAB_023236b8;
        }
        else {
          pbVar2 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar18 + 0x15c) != 0) {
            pbVar2 = (byte *)(lVar18 + 0x158);
          }
          bVar21 = *pbVar1;
          bVar20 = *pbVar2;
          if (7 < bVar20) {
            bVar20 = 0xff;
          }
          if (7 < bVar21) {
            bVar21 = 0xff;
          }
          if (bVar20 == bVar21) goto LAB_02322f28;
          if ((iVar10 != 0xb) || (*(int *)(param_1 + 0x178) != 0)) goto LAB_02322f30;
LAB_023236b8:
          if (*(int *)(lVar18 + 0x15c) != 0) {
            pbVar2 = PTR_DAT_04bb32e0;
            if (*(int *)(lVar18 + 0x15c) != 0) {
              pbVar2 = (byte *)(lVar18 + 0x158);
            }
            bVar21 = *pbVar1;
            bVar20 = *pbVar2;
            if (7 < bVar20) {
              bVar20 = 0xff;
            }
            if (7 < bVar21) {
              bVar21 = 0xff;
            }
            if (bVar20 != bVar21) goto LAB_02323718;
          }
        }
        if ((*(char *)(param_1 + 0x2264) == '\0') &&
           (*(int *)(*(long *)PTR_DAT_04bb4718 + 0x11c4) == 0)) {
LAB_02323718:
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x91);
          *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
          *(undefined8 *)(param_1 + 0x18c0) = 0;
          *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
          *(undefined8 *)(param_1 + 0x18c8) = 0;
          *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
          *(undefined8 *)(param_1 + 0x18d0) = 0;
          *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
          *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
          *(undefined8 *)(param_1 + 0x18a0) = 0;
          *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
          *(undefined8 *)(param_1 + 0x18a8) = 0;
          *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
          *(undefined8 *)(param_1 + 0x18b0) = 0;
          *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
          *(undefined8 *)(param_1 + 0x18b8) = 0;
          *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
          *(undefined8 *)(param_1 + 0x1880) = 0;
          *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
          *(undefined8 *)(param_1 + 0x1888) = 0;
          *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
          *(undefined8 *)(param_1 + 0x1890) = 0;
          *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
          *(undefined8 *)(param_1 + 0x1898) = 0;
          *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
          lVar18 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar18 = *(long *)(param_1 + 0x70) + 0x278;
          }
          FUN_03ebb160(lVar18,0x91);
          return 1;
        }
      }
    }
  }
LAB_02322f30:
  iVar10 = FUN_016f5c40(param_1);
  uVar14 = FUN_016e6f44();
  if ((iVar10 == 0x43) || ((uVar14 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x21ac) = 0;
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_d0 = (undefined *)((ulong)local_d0._4_4_ << 0x20),
       (*(uint *)(param_1 + 0xed0) & 1) != 0)) goto LAB_02322f58;
    goto switchD_0232389c_caseD_a;
  }
  if (*(char *)(param_1 + 0x21ac) == '\0') {
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_d0 = (undefined *)((ulong)local_d0._4_4_ << 0x20),
       (*(uint *)(param_1 + 0xed0) & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x21ac) = 1;
    }
    goto switchD_0232389c_caseD_a;
  }
  *(undefined1 *)(param_1 + 0x21ac) = 0;
LAB_02322f58:
  FUN_0252be2c(pbVar1);
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    local_78 = 0;
  }
  else {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
    puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar22 = (uint *)PTR_DAT_04bc39f8;
    }
    local_78 = *puVar22 >> 1 & 1;
  }
  iVar11 = FUN_016f5c40(param_1);
  puVar5 = PTR_DAT_04bb43c0;
  puVar15 = PTR_DAT_04bb37e0;
  if (*(long *)(param_1 + 0x298) == 0) {
    plVar23 = (long *)PTR_DAT_04bb37e0;
  }
  else {
    lVar18 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    plVar23 = (long *)(lVar18 + ((ulong)*(uint *)(lVar18 + 0x10) & 1) * 0x20 + 0x14);
  }
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(plVar23);
  lVar24 = *(long *)puVar5;
  if (lVar24 == 0) {
LAB_023231c0:
    uVar9 = 0;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_023231c0;
    local_d0 = PTR_DAT_04bc0510 + 0x10;
    local_c8 = (undefined *)*plVar23;
    local_c0 = 0;
    uVar9 = FUN_0277d6c4(&local_c8);
    if (*(long *)puVar5 != 0) {
      lVar18 = *(long *)(lVar24 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar18 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(plVar23);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
           (lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8), lVar18 != 0)) {
          local_c0 = lVar18;
        }
      }
    }
    lVar18 = *(long *)puVar4;
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
      bVar7 = true;
    }
    else {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar18 + 0x158);
      }
      bVar21 = *pbVar1;
      bVar20 = *pbVar2;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      if (7 < bVar21) {
        bVar21 = 0xff;
      }
      bVar7 = bVar20 == bVar21;
    }
    uVar8 = FUN_0235a9ec(param_1);
    local_a0 = CONCAT53(local_a0._3_5_,0x10000);
    local_a0 = CONCAT62(local_a0._2_6_,CONCAT11(uVar8,bVar7)) & 0xffffffffffff01ff;
    local_98 = *(long *)(param_1 + 0x68) + 0x278;
    uVar9 = FUN_01add954(&local_d0,&local_a0);
    if (((uVar9 & 1) != 0) && (iVar11 != 0)) {
      lVar18 = *(long *)(param_1 + 0x68);
      uVar14 = (*(code *)DAT_053f6ff8[2])(&DAT_053f6ff8);
      if (((uVar14 & 1) != 0) &&
         (uVar14 = (*(code *)*DAT_053f6ff8)(&DAT_053f6ff8,lVar18 + 0x278,lVar18 + 0x2b0),
         (uVar14 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x21ac) = 0;
        goto switchD_0232389c_caseD_a;
      }
      uVar9 = 1;
    }
  }
  if ((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 0x280) - 0x10aU < 3)
     ) goto switchD_0232389c_caseD_a;
  uVar14 = FUN_023d9bd8(param_1,0);
  if ((uVar14 & 1) != 0) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x2264) != '\0') && (iVar11 != 0x11)) goto switchD_0232389c_caseD_a;
  if (iVar11 != 0x43) {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) != 0) || (iVar12 = __cxa_guard_acquire(&DAT_052461c0), iVar12 == 0)) {
        puVar16 = &DAT_05240280;
        goto LAB_02323230;
      }
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      uVar14 = FUN_0170c0d0(&DAT_05240280);
    }
    else {
LAB_02323230:
      uVar14 = FUN_0170c0d0(puVar16);
    }
    if (((uVar14 & 1) == 0) || (uVar14 = FUN_0243bb28(param_1), (uVar14 & 1) != 0))
    goto LAB_0232333c;
    local_d0 = *(undefined **)puVar15;
    local_a4 = 0;
    local_c8 = PTR_DAT_04bb2010 + 0x10;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a9 = 0;
    uStack_a8 = 0;
    cStack_a6 = '\0';
    local_c0 = 0;
    uVar14 = FUN_01503f54(&local_d0,pbVar1);
    if ((uVar14 & 1) == 0) goto LAB_0232333c;
    FUN_01ad5d04(&local_e8,&local_d0);
    iVar12 = FUN_01ae6950(&local_e8);
    if (((iVar12 != 0x1d) && (uVar14 = FUN_01aefaac(&local_e8), (uVar14 & 1) == 0)) ||
       (cStack_a6 == '\0')) goto LAB_0232333c;
    lVar18 = FUN_0231e70c(param_1);
    puVar16 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)(param_1 + 0x4c8);
    }
    puVar19 = puVar16 + 0x4f;
    if (lVar18 != 0) {
      puVar19 = (ulong *)(lVar18 + 0x14);
    }
    uVar26 = (undefined4)*puVar19;
    uVar27 = *(undefined4 *)((long)puVar19 + 4);
    uVar14 = *puVar19;
    uVar28 = (undefined4)puVar19[1];
    lVar18 = FUN_0251e98c(1);
    pfVar17 = (float *)(**(code **)(*(long *)(lVar18 + 0x2a0) + 0xf0))(lVar18 + 0x2a0);
    local_88 = 0;
    local_90 = 0x773f800000;
    local_98 = CONCAT44(*pfVar17 * 0.98,uVar28);
    local_a0 = uVar14;
    iVar12 = FUN_016ed290(&local_a0,0,0,0);
    if (iVar12 != 0) goto LAB_0232333c;
LAB_02323a4c:
    *(undefined4 *)(param_1 + 0x1f50) = uVar26;
    *(undefined4 *)(param_1 + 0x1f54) = uVar27;
    *(undefined4 *)(param_1 + 0x1f58) = uVar28;
    goto LAB_02323a58;
  }
LAB_0232333c:
  uVar14 = FUN_023281fc(param_1);
  if ((uVar14 & 1) != 0) {
    return 1;
  }
  if (local_78 == 0) {
    if (iVar11 == 0x43) {
      uVar14 = FUN_024d7ccc(param_1,0,1);
      if ((uVar14 & 1) != 0) {
        return 1;
      }
      FUN_016debb0(param_1);
      uVar14 = FUN_0170c0d0();
      if (((uVar14 & 1) != 0) && (uVar14 = FUN_0243bb28(param_1), (uVar14 & 1) == 0)) {
        local_d0 = *(undefined **)puVar15;
        local_a4 = 0;
        local_c8 = PTR_DAT_04bb2010 + 0x10;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a9 = 0;
        uStack_a8 = 0;
        cStack_a6 = '\0';
        local_c0 = 0;
        uVar14 = FUN_01503f54(&local_d0,pbVar1);
        if ((uVar14 & 1) != 0) {
          FUN_01ad5d04(&local_e8,&local_d0);
          iVar12 = FUN_01ae6950(&local_e8);
          if (((iVar12 == 0x1d) || (uVar14 = FUN_01aefaac(&local_e8), (uVar14 & 1) != 0)) &&
             (cStack_a6 != '\0')) {
            lVar18 = FUN_0231e70c(param_1);
            puVar16 = &DAT_054e9a58;
            if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
              puVar16 = *(undefined8 **)(param_1 + 0x4c8);
            }
            puVar19 = puVar16 + 0x4f;
            if (lVar18 != 0) {
              puVar19 = (ulong *)(lVar18 + 0x14);
            }
            uVar26 = (undefined4)*puVar19;
            uVar27 = *(undefined4 *)((long)puVar19 + 4);
            uVar14 = *puVar19;
            uVar28 = (undefined4)puVar19[1];
            lVar18 = FUN_0251e98c(1);
            pfVar17 = (float *)(**(code **)(*(long *)(lVar18 + 0x2a0) + 0xf0))(lVar18 + 0x2a0);
            local_88 = 0;
            local_90 = 0x773f800000;
            local_98 = CONCAT44(*pfVar17 * 0.98,uVar28);
            local_a0 = uVar14;
            iVar12 = FUN_016ed290(&local_a0,0,0,0);
            if (iVar12 == 0) goto LAB_02323a4c;
          }
        }
      }
    }
    if (iVar10 != 0x43) goto LAB_02323610;
  }
  else {
    if (iVar10 == 0x43) {
LAB_02323664:
      FUN_016debb0(param_1);
      uVar14 = FUN_0170bf6c();
      if (((uVar14 & 1) == 0) && (iVar10 = FUN_024dfbf0(param_1,0), iVar10 == 2)) {
        return 1;
      }
      uVar14 = FUN_02442458(param_1);
      if ((uVar14 & 1) == 0) goto LAB_02323804;
      uVar14 = FUN_024424e8(param_1,0);
    }
    else {
LAB_02323610:
      uVar14 = FUN_023ddd7c(param_1,0);
      if ((uVar14 & 1) != 0) {
        return 1;
      }
      FUN_016debb0(param_1);
      uVar14 = FUN_0170bf6c();
      if (((uVar14 & 1) != 0) && (uVar14 = FUN_0243bb28(param_1), (uVar14 & 1) == 0)) {
        local_d0 = *(undefined **)puVar15;
        local_a4 = 0;
        local_c8 = PTR_DAT_04bb2010 + 0x10;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a9 = 0;
        uStack_a8 = 0;
        cStack_a6 = '\0';
        local_c0 = 0;
        uVar14 = FUN_01503f54(&local_d0,pbVar1);
        if (((uVar14 & 1) != 0) &&
           ((cStack_a6 != '\0' && (lVar18 = FUN_0231e70c(param_1), lVar18 != 0)))) {
          local_e8 = *(ulong *)(lVar18 + 0x14);
          local_e0 = *(undefined4 *)(lVar18 + 0x1c);
          lVar18 = FUN_0251e98c(1);
          pfVar17 = (float *)(**(code **)(*(long *)(lVar18 + 0x2a0) + 0xf0))(lVar18 + 0x2a0);
          local_88 = 0;
          local_90 = 0x773f800000;
          fVar25 = *pfVar17 * 0.98;
          local_a0 = local_e8;
          local_98 = CONCAT44(fVar25,local_e0);
          iVar10 = FUN_016ed290(&local_a0,0,0,0);
          if (iVar10 == 0) {
            local_90 = CONCAT53(local_90._3_5_,1);
            local_a0 = local_e8;
            local_98 = CONCAT44(fVar25,local_e0);
            uVar14 = FUN_016e9c68(&local_a0);
            if (((uVar14 & 1) != 0) ||
               (uVar14 = FUN_016eafec(fVar25,&local_e8,0,0,0), (uVar14 & 1) == 0)) {
              lVar18 = FUN_0231e70c(param_1);
              puVar16 = &DAT_054e9a58;
              if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
                puVar16 = *(undefined8 **)(param_1 + 0x4c8);
              }
              puVar16 = puVar16 + 0x4f;
              if (lVar18 != 0) {
                puVar16 = (undefined8 *)(lVar18 + 0x14);
              }
              *(undefined4 *)(param_1 + 0x1f50) = *(undefined4 *)puVar16;
              *(undefined4 *)(param_1 + 0x1f54) = *(undefined4 *)((long)puVar16 + 4);
              *(undefined4 *)(param_1 + 0x1f58) = *(undefined4 *)(puVar16 + 1);
LAB_02323a58:
              FUN_02476cb0(param_1,8,0,0,0);
              return 1;
            }
          }
        }
      }
      uVar14 = FUN_024e3ea4(param_1);
      if ((((uVar14 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) &&
         (uVar14 = FUN_024e9964(param_1), (uVar14 & 1) != 0)) {
        return 1;
      }
      if (local_78 != 0) goto LAB_02323664;
      uVar14 = FUN_023de940(param_1,0);
    }
    if ((uVar14 & 1) != 0) {
      return 1;
    }
  }
LAB_02323804:
  uVar14 = FUN_016e60dc();
  if ((uVar14 & 1) == 0) {
    if ((uVar9 & 1) == 0) goto LAB_0232381c;
LAB_02323828:
    if ((iVar11 == 10) && (uVar14 = FUN_024b1140(param_1,0), (uVar14 & 1) != 0)) {
      return 1;
    }
    bVar7 = true;
  }
  else {
    uVar13 = FUN_016f62fc(param_1);
    if ((uVar9 & (uVar13 ^ 0xffffffff) & 1) != 0) goto LAB_02323828;
LAB_0232381c:
    bVar7 = false;
  }
  local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
  uVar14 = FUN_024662c4(param_1,&local_d0,1,0);
  if ((uVar14 & 1) != 0) {
    return 1;
  }
  uVar14 = FUN_02324d54(param_1);
  if ((uVar14 & 1) != 0) {
    return 1;
  }
  if (!bVar7) {
    uVar14 = FUN_0235a9ec(param_1);
    if (((uVar14 & 1) != 0) && ((iVar11 == 9 || (iVar11 == 8)))) {
      FUN_02535300(pbVar1,*(undefined4 *)(param_1 + 0x230),PTR_DAT_04bb37e0,0);
      return 1;
    }
    goto switchD_0232389c_caseD_a;
  }
  switch(iVar11) {
  case 8:
    uVar9 = FUN_02532d08(pbVar1);
    uVar14 = FUN_024bc798(param_1,uVar9 & 1,0);
    break;
  case 9:
    uVar14 = FUN_0247b630(param_1,0);
    break;
  default:
    goto switchD_0232389c_caseD_a;
  case 0xd:
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_02491ab4(param_1);
      return 1;
    }
    goto switchD_0232389c_caseD_a;
  case 0xe:
    uVar14 = FUN_024dbb28(param_1,0);
    break;
  case 0x10:
    uVar14 = FUN_02487118(param_1,0);
    break;
  case 0x11:
    uVar14 = FUN_02496154(param_1,0);
    break;
  case 0x12:
    uVar14 = FUN_02482f30(param_1,0);
    break;
  case 0x16:
    uVar14 = FUN_0248ad90(param_1,0);
    break;
  case 0x19:
    uVar14 = FUN_024acd04(param_1,0);
    break;
  case 0x28:
    uVar14 = FUN_0249a340(param_1,0);
    break;
  case 0x71:
    uVar14 = FUN_0244f918(param_1,0);
  }
  if ((uVar14 & 1) == 0) {
switchD_0232389c_caseD_a:
    uVar14 = FUN_02325670(param_1);
    if ((((uVar14 & 1) == 0) && (uVar14 = FUN_023259c8(param_1), (uVar14 & 1) == 0)) &&
       (uVar14 = FUN_02325ac4(param_1), (uVar14 & 1) == 0)) {
LAB_02323404:
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 != -1) {
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar22 >> 1 & 1) != 0) && (iVar10 = FUN_0240b8d0(param_1,0,1), iVar10 == 1)) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}

