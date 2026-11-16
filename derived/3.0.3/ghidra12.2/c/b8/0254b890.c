
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0254b890(void)

{
  bool bVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  ulong uVar16;
  short *psVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  byte local_9c [4];
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  float local_88;
  undefined4 local_84;
  
  FUN_02507c6c(local_9c,1,1,0,0);
  puVar7 = PTR_DAT_04bb6298;
  puVar6 = PTR_DAT_04bb5038;
  uVar16 = (ulong)local_9c[0];
  local_a4 = local_98;
  bVar3 = 0xff;
  if (local_9c[0] < 8) {
    bVar3 = local_9c[0];
  }
  local_a8 = CONCAT31(local_a8._1_3_,bVar3);
  local_a0 = local_94;
  if (local_9c[0] < 8) {
    fVar21 = 0.0;
    fVar20 = 100000.0;
    fVar23 = 0.0;
    bVar4 = false;
    fVar22 = 100000.0;
    if (DAT_054f5738 == 0) goto LAB_0254b974;
    do {
      lVar13 = DAT_054f5738 + uVar16 * 0xd0 +
               (ulong)(*(uint *)(DAT_054f5738 + uVar16 * 4 + 0xd68) & 1) * 0x68;
      psVar17 = (short *)(lVar13 + 0x6e8);
      cVar5 = *(char *)(lVar13 + 0x74c);
joined_r0x0254b96c:
      if ((cVar5 != '\0') && (*psVar17 == *(short *)puVar7)) {
        uVar12 = FUN_0231f070(*(undefined4 *)(psVar17 + 2),0);
        if ((uVar12 & 1) == 0) {
          if (DAT_054f5738 == 0) {
            puVar14 = &DAT_054f0958;
            if ((DAT_054f0960 & 1) == 0) {
              iVar11 = __cxa_guard_acquire(&DAT_054f0960);
              if (iVar11 == 0) {
                puVar14 = &DAT_054f0958;
              }
              else {
                DAT_054f0958 = 0;
                __cxa_guard_release(&DAT_054f0960);
                puVar14 = &DAT_054f0958;
              }
            }
          }
          else {
            puVar14 = (undefined8 *)(DAT_054f5738 + uVar16 * 8 + 0x204);
          }
          local_84 = 0x2f;
          if ((*(uint *)((long)puVar14 + 4) >> 0xf & 1) == 0) goto LAB_0254ba40;
        }
        fVar19 = *(float *)(psVar17 + 6);
        fVar18 = *(float *)(psVar17 + 10);
        bVar1 = fVar23 < fVar19;
        fVar8 = fVar19;
        if (fVar19 <= fVar23) {
          fVar8 = fVar23;
        }
        fVar23 = fVar8;
        bVar9 = fVar18 < fVar20;
        if (bVar9) {
          fVar20 = fVar18;
        }
        bVar10 = fVar19 < fVar22;
        if (bVar10) {
          fVar22 = fVar19;
        }
        if (fVar18 <= fVar21) {
          bVar4 = (bool)((bVar10 || (bVar9 || bVar1)) | bVar4);
        }
        else {
          bVar4 = true;
          fVar21 = fVar18;
        }
      }
LAB_0254ba40:
      bVar3 = (byte)local_a8;
      uVar16 = (ulong)(byte)local_a8;
      if ((7 < (byte)local_a8) || (uVar16 + 1 == 8)) {
LAB_0254bc00:
        if (!bVar4) goto LAB_0254bc30;
        local_88 = (fVar21 + fVar20) * 0.5;
        local_90 = CONCAT44(0x47435000,(fVar23 + fVar22) * 0.5);
        goto LAB_0254bde0;
      }
      pbVar15 = puVar6 + uVar16 + 1;
      uVar12 = FUN_02507924(&local_a8,pbVar15);
      if ((uVar12 & 1) == 0) {
        if (uVar16 + 2 == 8) goto LAB_0254bc00;
        pbVar15 = puVar6 + uVar16 + 2;
        uVar12 = FUN_02507924(&local_a8,pbVar15);
        if ((uVar12 & 1) == 0) {
          if (uVar16 + 3 == 8) goto LAB_0254bc00;
          pbVar15 = puVar6 + uVar16 + 3;
          uVar12 = FUN_02507924(&local_a8,pbVar15);
          if ((uVar12 & 1) == 0) {
            if (uVar16 + 4 == 8) goto LAB_0254bc00;
            pbVar15 = puVar6 + uVar16 + 4;
            uVar12 = FUN_02507924(&local_a8,pbVar15);
            if ((uVar12 & 1) == 0) {
              if (uVar16 + 5 == 8) goto LAB_0254bc00;
              pbVar15 = puVar6 + uVar16 + 5;
              uVar12 = FUN_02507924(&local_a8,pbVar15);
              if ((uVar12 & 1) == 0) {
                if (uVar16 + 6 == 8) goto LAB_0254bc00;
                pbVar15 = puVar6 + uVar16 + 6;
                uVar12 = FUN_02507924(&local_a8,pbVar15);
                if ((uVar12 & 1) == 0) {
                  if (uVar16 + 7 == 8) goto LAB_0254bc00;
                  pbVar15 = puVar6 + uVar16 + 7;
                  uVar12 = FUN_02507924(&local_a8,pbVar15);
                  if ((uVar12 & 1) == 0) {
                    if (bVar3 == 0) goto LAB_0254bc00;
                    pbVar15 = puVar6 + uVar16 + 8;
                    FUN_02507924(&local_a8,pbVar15);
                  }
                }
              }
            }
          }
        }
      }
      bVar3 = *pbVar15;
      uVar16 = (ulong)bVar3;
      if (7 < bVar3) goto LAB_0254bc00;
      local_a8 = CONCAT31(local_a8._1_3_,bVar3);
    } while (DAT_054f5738 != 0);
LAB_0254b974:
    psVar17 = &DAT_054f0c08;
    cVar5 = DAT_054f0c6c;
    if ((DAT_054f0c70 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar11 != 0) {
        DAT_054f0c6c = '\0';
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
      psVar17 = &DAT_054f0c08;
      cVar5 = DAT_054f0c6c;
    }
    goto joined_r0x0254b96c;
  }
LAB_0254bc30:
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  if (lVar13 == 0) {
    uVar16 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0254bc9c;
LAB_0254bd08:
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar17 = &DAT_054f0c08;
        if (iVar11 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar17 = &DAT_054f0c08;
      }
    }
    else {
      psVar17 = (short *)(DAT_054f5738 + uVar16 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + uVar16 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((char)psVar17[0x32] != '\0') && (*psVar17 == *(short *)PTR_DAT_04bb6298)) {
      uVar12 = FUN_0231f070(*(undefined4 *)(psVar17 + 2),0);
      if ((uVar12 & 1) == 0) {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar11 = __cxa_guard_acquire(&DAT_054f0960);
            puVar14 = &DAT_054f0958;
            if (iVar11 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar14 = &DAT_054f0958;
          }
        }
        else {
          puVar14 = (undefined8 *)(DAT_054f5738 + uVar16 * 8 + 0x204);
        }
        local_a8 = 0x2f;
        if ((*(uint *)((long)puVar14 + 4) >> 0xf & 1) == 0) goto LAB_0254bdfc;
      }
      local_90 = *(undefined8 *)(psVar17 + 6);
      local_88 = *(float *)(psVar17 + 10);
LAB_0254bde0:
      FUN_016e026c(0,&local_90,0,0);
      goto LAB_0254be08;
    }
  }
  else {
    pbVar15 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar13 + 0x158);
    }
    uVar16 = (ulong)*pbVar15;
    if ((*pbVar15 < 8) ||
       (((*(int *)(lVar13 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (uVar16 = (ulong)*(byte *)(DAT_054f5738 + 0x11a5), *(byte *)(DAT_054f5738 + 0x11a5) < 8))))
    goto LAB_0254bd08;
LAB_0254bc9c:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar13 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar13 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar13 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar15 = (byte *)(lVar13 + 0x471);
        }
      }
      uVar16 = (ulong)*pbVar15;
      if (*pbVar15 < 8) goto LAB_0254bd08;
    }
    uVar16 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_0254bd08;
  }
LAB_0254bdfc:
  local_90 = 0;
LAB_0254be08:
  return (undefined4)local_90;
}

