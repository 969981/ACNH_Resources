
void FUN_01c2d400(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  puVar7 = PTR_DAT_04bc3a80;
  iVar9 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar9 < -0x169521c) {
    if (iVar9 < -0x15fdefdb) {
      bVar8 = iVar9 == -0x477aafe0;
      iVar13 = -0x2099c902;
    }
    else {
      bVar8 = iVar9 == -0x15fdefdb || iVar9 == -0xe632453;
      iVar13 = -0x83ceb3d;
    }
  }
  else if (iVar9 < 0x3b3bf38a) {
    bVar8 = iVar9 == -0x169521c;
    iVar13 = 0x17f77b87;
  }
  else {
    bVar8 = iVar9 == 0x3b3bf38a || iVar9 == 0x6148bcad;
    iVar13 = 0x3fce6459;
  }
  if (!bVar8 && iVar9 != iVar13) {
    return;
  }
  local_70 = 0;
  if (DAT_05aed670 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar9 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)puVar7;
      if (iVar9 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar18 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  lVar21 = 0;
  local_78 = PTR_DAT_04bb3140 + 0x10;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
LAB_01c2d5ec:
  local_88 = (undefined8 *)(&PTR_s_MuseumFishStampRackLotID1_04a40fc0)[lVar21];
  local_90 = puVar1;
  uVar10 = FUN_0273ea30(&local_90);
  if (((uVar10 != 0xffffffff) &&
      (uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08),
      uVar10 < *(uint *)(param_1 + 0x9e8))) &&
     (puVar19 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar10 * 8),
     puVar19 != (uint *)0x0)) {
    iVar9 = *(int *)(puVar7 + 0x38);
    if (iVar9 < -0x83ceb3d) {
      if (iVar9 < -0x15fdefdb) {
        if (iVar9 == -0x477aafe0) {
          uVar10 = 5;
        }
        else {
          if (iVar9 != -0x2099c902) goto LAB_01c2d720;
          uVar10 = 9;
        }
      }
      else if (iVar9 == -0x15fdefdb) {
        uVar10 = 7;
      }
      else if (iVar9 == -0xe632453) {
        uVar10 = 3;
      }
      else {
LAB_01c2d720:
        uVar10 = (uint)(iVar9 == 0x17f77b87) << 3;
      }
    }
    else if (iVar9 < 0x3b3bf38a) {
      if (iVar9 == -0x83ceb3d) {
        uVar10 = 4;
      }
      else {
        if (iVar9 != -0x169521c) goto LAB_01c2d720;
        uVar10 = 1;
      }
    }
    else if (iVar9 == 0x3b3bf38a) {
      uVar10 = 6;
    }
    else if (iVar9 == 0x3fce6459) {
      uVar10 = 2;
    }
    else {
      if (iVar9 != 0x6148bcad) goto LAB_01c2d720;
      uVar10 = 0;
    }
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
    uVar14 = 0;
    uVar5 = *puVar19;
    if ((uVar5 != 0) && (puVar19 != (uint *)(ulong)uVar5)) {
      puVar15 = (uint *)((long)puVar19 - (long)(ulong)uVar5);
      uVar14 = 0;
      if (*puVar15 != 0) {
        uVar5 = puVar15[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar20 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar15 + lVar20 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar20 != 0) {
            uVar14 = 0;
            if ((ulong)uVar5 != 0) {
              uVar14 = (uint)((ulong)((long)puVar19 - lVar20) / (ulong)uVar5);
            }
            if (*puVar15 <= uVar14) {
              uVar14 = 0xffffffff;
            }
            if ((uVar14 < DAT_0534bc38) &&
               (uVar14 = (uint)*(ushort *)(DAT_0534bc40 + (long)(int)uVar14 * 2), uVar14 < 10))
            goto LAB_01c2d7c4;
          }
        }
        uVar14 = 0;
      }
    }
LAB_01c2d7c4:
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,uVar14);
    if (uVar10 != uVar14) goto LAB_01c2d5e0;
    local_a8 = (undefined8 *)0x31c4;
    FUN_0277d4ac(&local_a8);
    puVar6 = PTR_DAT_04bb43c0;
    local_80 = 0;
    local_88 = local_a8;
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    local_90 = puVar2;
    uVar10 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar6 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        lVar20 = *(long *)PTR_DAT_04bc0428;
        uVar10 = FUN_0277d6c4(&local_a8);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if (uVar10 < *(uint *)(lVar20 + 0x1d8)) {
          lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8);
          if (lVar20 != 0) {
            local_80 = lVar20;
          }
        }
      }
    }
    if (*puVar19 == 0) {
      sVar12 = 0;
    }
    else {
      cVar11 = DAT_0534bc48;
      do {
        if (cVar11 != '\0') {
          if ((int)DAT_0534bc64 < 0) {
            if ((int)DAT_0534bc64 == -1) goto LAB_01c2d908;
          }
          else {
            psVar3 = (short *)((DAT_0534bc64 & 0xffffffff) + (long)puVar19);
            if (psVar3 != (short *)0x0) {
              sVar12 = *psVar3;
              goto LAB_01c2d9ac;
            }
          }
LAB_01c2dae4:
          sVar12 = 0;
          goto LAB_01c2d9ac;
        }
        cVar11 = '\x01';
        DAT_0534bc48 = '\x01';
        DAT_0534bc4c = -1;
        DAT_0534bc54 = 0xffffffffffffffff;
        DAT_0534bc7c = 0xffffffff;
        DAT_0534bc5c = 0xffffffffffffffff;
        DAT_0534bc64 = 0xffffffffffffffff;
        DAT_0534bc6c = 0xffffffffffffffff;
        DAT_0534bc74 = 0xffffffffffffffff;
LAB_01c2d908:
        puVar15 = (uint *)(ulong)*puVar19;
        sVar12 = 0;
        if ((*puVar19 == 0) || (puVar19 == puVar15)) goto LAB_01c2d9ac;
        lVar20 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar15)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar19 + (lVar20 - (long)puVar15);
        if (lVar20 == 0) goto LAB_01c2dae4;
        uVar17 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar15));
        DAT_0534bc64 = CONCAT44(DAT_0534bc64._4_4_,0xfffffffe);
        sVar12 = 0;
        if (uVar17 == 0) goto LAB_01c2d9ac;
        piVar16 = (int *)(lVar20 + 4);
        while (piVar16[-1] != -0x2b0a4c1a) {
          piVar16 = piVar16 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) {
            sVar12 = 0;
            goto LAB_01c2d9ac;
          }
        }
        iVar9 = 0;
        if (*piVar16 != -1) {
          iVar9 = *piVar16;
        }
        DAT_0534bc64 = CONCAT44(DAT_0534bc64._4_4_,iVar9);
      } while (*puVar19 != 0);
      sVar12 = 0;
    }
LAB_01c2d9ac:
    FUN_01afade0(&local_90,(int)(long)((float)(int)sVar12 * 11930465.0) + 0x20000000U >> 0x1e);
    local_98 = (undefined4)local_88;
    uStack_94 = local_88._4_4_;
    local_a0 = 0;
    if (*puVar19 != 0) {
      cVar11 = DAT_0534bc48;
      do {
        if (cVar11 != '\0') {
          if (DAT_0534bc4c < 0) {
            if (DAT_0534bc4c._4_4_ == 0xffffffff) goto LAB_01c2da48;
LAB_01c2dacc:
            local_a0 = 0;
          }
          else {
            local_a0 = 0;
            if ((undefined4 *)((ulong)DAT_0534bc4c._4_4_ + (long)puVar19) != (undefined4 *)0x0) {
              local_a0 = *(undefined4 *)((ulong)DAT_0534bc4c._4_4_ + (long)puVar19);
            }
          }
LAB_01c2daf8:
          uVar10 = *puVar19;
          uStack_9c = 0;
          if (uVar10 == 0) goto LAB_01c2d5c0;
          uVar17 = DAT_0534bc54 & 0xffffffff;
          goto LAB_01c2db08;
        }
        cVar11 = '\x01';
        DAT_0534bc48 = '\x01';
        DAT_0534bc4c = -1;
        DAT_0534bc54 = 0xffffffffffffffff;
        DAT_0534bc7c = 0xffffffff;
        DAT_0534bc5c = 0xffffffffffffffff;
        DAT_0534bc64 = 0xffffffffffffffff;
        DAT_0534bc6c = 0xffffffffffffffff;
        DAT_0534bc74 = 0xffffffffffffffff;
LAB_01c2da48:
        puVar15 = (uint *)(ulong)*puVar19;
        local_a0 = 0;
        if ((*puVar19 == 0) || (puVar19 == puVar15)) goto LAB_01c2daf8;
        lVar20 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar15)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar19 + (lVar20 - (long)puVar15);
        if (lVar20 == 0) goto LAB_01c2dacc;
        uVar17 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar15));
        DAT_0534bc4c = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc4c);
        local_a0 = 0;
        if (uVar17 == 0) goto LAB_01c2daf8;
        piVar16 = (int *)(lVar20 + 4);
        while (piVar16[-1] != -0x670080c8) {
          piVar16 = piVar16 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) {
            local_a0 = 0;
            goto LAB_01c2daf8;
          }
        }
        iVar9 = 0;
        if (*piVar16 != -1) {
          iVar9 = *piVar16;
        }
        DAT_0534bc4c = CONCAT44(iVar9,(undefined4)DAT_0534bc4c);
      } while (*puVar19 != 0);
      local_a0 = 0;
    }
LAB_01c2d5bc:
    uStack_9c = 0;
    goto LAB_01c2d5c0;
  }
  goto LAB_01c2d5e0;
  while( true ) {
    if (uVar17 != 0xffffffff) goto LAB_01c2d5bc;
    lVar20 = (long)puVar19 - (ulong)uVar10;
    uStack_9c = 0;
    if (lVar20 == 0) goto LAB_01c2d5c0;
    lVar4 = 0xc;
    if (*(char *)(lVar20 + 10) != '\0') {
      lVar4 = 0x1c;
    }
    if (lVar4 + lVar20 == 0) goto LAB_01c2d5bc;
    uVar17 = (ulong)*(ushort *)(lVar20 + 8);
    DAT_0534bc54 = CONCAT44(DAT_0534bc54._4_4_,0xfffffffe);
    uStack_9c = 0;
    if (uVar17 == 0) goto LAB_01c2d5c0;
    puVar15 = (uint *)(lVar4 + lVar20 + 4);
    while (puVar15[-1] != 0xe23f2c58) {
      puVar15 = puVar15 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) {
        uStack_9c = 0;
        goto LAB_01c2d5c0;
      }
    }
    uVar17 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar17 = (ulong)*puVar15;
    }
    DAT_0534bc54 = CONCAT44(DAT_0534bc54._4_4_,(int)uVar17);
    uVar10 = *puVar19;
    if (uVar10 == 0) break;
LAB_01c2db08:
    if (-1 < (int)uVar17) {
      uStack_9c = 0;
      if ((undefined4 *)(uVar17 + (long)puVar19) != (undefined4 *)0x0) {
        uStack_9c = *(undefined4 *)(uVar17 + (long)puVar19);
      }
      goto LAB_01c2d5c0;
    }
  }
  uStack_9c = 0;
LAB_01c2d5c0:
  local_a8 = &DAT_048f9750;
  FUN_01a50970(&local_78,0,&local_98,&local_a8);
LAB_01c2d5e0:
  lVar21 = lVar21 + 1;
  if (lVar21 == 0xc) {
    return;
  }
  goto LAB_01c2d5ec;
}

