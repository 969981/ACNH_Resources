
/* WARNING: Type propagation algorithm not settling */

void FUN_03701d30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined8 ******ppppppuVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined *puVar19;
  char cVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  undefined8 uVar25;
  int *piVar26;
  long lVar27;
  undefined *local_138;
  char *pcStack_130;
  undefined *local_128;
  char *pcStack_120;
  undefined *local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_104 [7];
  undefined1 local_fd;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 *****local_d8;
  undefined8 ****local_d0;
  undefined8 ***local_c8;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [6];
  undefined *local_78;
  char *local_70;
  
  iVar9 = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  puVar2 = PTR_DAT_04bb7648 + 0x10;
  puVar11 = PTR_DAT_04bb2020 + 0x10;
  puVar19 = PTR_DAT_04bc27f0;
  do {
    uVar12 = (ulong)(byte)(&DAT_0545a41b)[(long)iVar9 + (long)iVar9 * 2];
    if (uVar12 < 0x23) {
      bVar15 = (&DAT_0545a41c)[(long)iVar9 * 3];
      if ((bVar15 <= (byte)puVar19[uVar12]) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar12 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0)) {
        ppppppuStack_e0._0_4_ = (uint)(uint3)ppppppuStack_e0;
        local_e8 = (undefined8 ******)CONCAT35(local_e8._5_3_,8);
        local_f8 = puVar1;
        local_f0 = (char *)((long)&local_e8 + 4);
        FUN_038d1270(&local_f8,"-----");
        uVar12 = (ulong)(byte)(&DAT_0545a41b)[(long)iVar9 + (long)iVar9 * 2];
        if (uVar12 < 0x23) {
          FUN_038d1270(&local_f8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar12 * 8 + 0xb0),
                       (&DAT_0545a41c)[(long)iVar9 * 3]);
        }
        local_118 = puVar2;
        uVar6 = FUN_0376baa0(&local_f8);
        local_110 = (char *)CONCAT62(local_110._2_6_,uVar6);
        local_70 = "ApproachOccurringFlag";
        local_78 = puVar11;
        iVar7 = FUN_0376c020(&local_118,&local_78);
        puVar19 = PTR_DAT_04bc27f0;
        if (0 < iVar7) {
          return;
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 6);
  local_f8 = PTR_DAT_04bb2020 + 0x10;
  local_f0 = "CoordinatorGrade";
  uVar8 = FUN_02758850(&local_f8);
  puVar11 = PTR_DAT_04bc27f0;
  puVar2 = PTR_DAT_04bb7f70;
  puVar1 = PTR_DAT_04bb7f68;
  lVar13 = *(long *)PTR_DAT_04bb4968;
  if (lVar13 == 0) {
    return;
  }
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar8) {
    return;
  }
  puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8);
  if (puVar10 == (uint *)0x0) {
    return;
  }
  uVar8 = *puVar10;
  if (uVar8 != 0) {
    cVar20 = *PTR_DAT_04bb7f68;
    do {
      puVar24 = (uint *)(ulong)uVar8;
      if (cVar20 != '\0') {
        uVar8 = *(uint *)(puVar2 + 0xc);
        if ((int)uVar8 < 0) {
          if (uVar8 != 0xffffffff) goto LAB_03701fcc;
          uVar8 = 0;
          if (puVar24 != (uint *)0x0) goto LAB_03701f50;
        }
        else if ((ushort *)((ulong)uVar8 + (long)puVar10) == (ushort *)0x0) {
LAB_03701fcc:
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar10);
        }
LAB_03701fd0:
        uVar16 = *puVar10;
        if (uVar16 == 0) goto LAB_03702078;
        uVar22 = *(uint *)(puVar2 + 8);
        goto LAB_03701ff0;
      }
      cVar20 = '\x01';
      *(undefined8 *)puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
      *puVar1 = 1;
      *(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
      puVar24 = (uint *)(ulong)*puVar10;
      uVar8 = 0;
      if (puVar24 == (uint *)0x0) goto LAB_03701fd0;
LAB_03701f50:
      uVar8 = 0;
      if (puVar10 == puVar24) goto LAB_03701fd0;
      lVar13 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar24)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)puVar10 + (lVar13 - (long)puVar24);
      uVar8 = 0;
      if (lVar13 == 0) goto LAB_03701fd0;
      uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar24));
      *(undefined4 *)(puVar2 + 0xc) = 0xfffffffe;
      if (uVar12 == 0) goto LAB_03701fcc;
      piVar26 = (int *)(lVar13 + 4);
      while (piVar26[-1] != 0x4c8d39f8) {
        piVar26 = piVar26 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_03701fcc;
      }
      iVar9 = 0;
      if (*piVar26 != -1) {
        iVar9 = *piVar26;
      }
      *(int *)(puVar2 + 0xc) = iVar9;
      uVar8 = *puVar10;
    } while (uVar8 != 0);
  }
  uVar8 = 0;
LAB_03702078:
  uVar16 = 0;
LAB_0370207c:
  if (uVar16 == 0 && uVar8 == 0) {
    return;
  }
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  local_e8 = &local_d8;
  local_c8 = &local_c0;
  local_c0 = &local_b8;
  local_b8 = &local_b0;
  local_f8 = (undefined *)0x0;
  local_f0 = (char *)0x0;
  local_b0 = 0;
  if (local_a8 != (undefined8 *)0x0) {
    local_f8 = (undefined *)0x600000000;
    local_f0 = (char *)local_a8;
  }
  lVar13 = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  puVar2 = PTR_DAT_04bb7648 + 0x10;
  puVar19 = PTR_DAT_04bb2020 + 0x10;
  ppppppuStack_e0 = local_e8;
  do {
    uVar12 = (ulong)(byte)(&DAT_0545a41b)[lVar13 * 3];
    if (uVar12 < 0x23) {
      bVar15 = (&DAT_0545a41c)[lVar13 * 3];
      if ((bVar15 <= (byte)puVar11[uVar12]) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar12 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0)) {
        local_fd = 0;
        local_108 = 8;
        local_104[0] = 0;
        local_118 = puVar1;
        local_110 = local_104;
        FUN_038d1270(&local_118,"-----");
        uVar12 = (ulong)(byte)(&DAT_0545a41b)[lVar13 * 3];
        if (uVar12 < 0x23) {
          FUN_038d1270(&local_118,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar12 * 8 + 0xb0),
                       (&DAT_0545a41c)[lVar13 * 3]);
        }
        local_78 = puVar2;
        uVar6 = FUN_0376baa0(&local_118);
        local_70 = (char *)CONCAT62(local_70._2_6_,uVar6);
        if (0 < DAT_0545a430) {
          lVar27 = 0;
          do {
            iVar9 = FUN_02217e90(*(undefined8 *)(DAT_0545a438 + lVar27 * 8),&local_118);
            if (iVar9 == 0) {
              if (*(long *)(DAT_0545a438 + lVar27 * 8) != 0) goto LAB_03702128;
              break;
            }
            lVar27 = lVar27 + 1;
          } while (lVar27 < DAT_0545a430);
        }
        pcStack_120 = "HasAcquaintanceship";
        local_128 = puVar19;
        iVar9 = FUN_0376c020(&local_78,&local_128);
        if (iVar9 == 0) {
          local_138 = PTR_DAT_04bb2020 + 0x10;
          pcStack_130 = "AlreadyApproachSelectToday";
          iVar9 = FUN_0376c020(&local_78,&local_138);
          ppppppuVar4 = local_e8;
          if (iVar9 == 0) {
            if ((int)local_f8 < local_f8._4_4_) {
              if (local_e8 != (undefined8 ******)0x0) {
                local_e8 = (undefined8 ******)*local_e8;
              }
              *(int *)ppppppuVar4 = (int)lVar13;
              if ((int)local_f8 < local_f8._4_4_) {
                *(undefined8 *******)((long)local_f0 + (long)(int)local_f8 * 8) = ppppppuVar4;
                local_f8 = (undefined *)CONCAT44(local_f8._4_4_,(int)local_f8 + 1);
              }
            }
            local_128 = PTR_DAT_04bb2020 + 0x10;
            pcStack_120 = "AlreadyApproachSelectToday";
            FUN_0376c130(&local_78,&local_128,1);
          }
        }
LAB_03702128:
        puVar11 = PTR_DAT_04bc27f0;
      }
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 6);
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
    bVar15 = *PTR_DAT_04bb32e0;
joined_r0x03702334:
    if (7 < bVar15) {
LAB_03702338:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar15 = *(byte *)(lVar13 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar15 != 0xffffffffffffffff) {
          puVar24 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
          if (7 < bVar15) {
            puVar24 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar24 & 8) != 0) {
            pbVar14 = (byte *)(lVar13 + 0x471);
          }
        }
        bVar15 = *pbVar14;
        bVar5 = 7 < bVar15;
        if (bVar5) {
          bVar15 = 0xff;
        }
        local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar15);
        if (!bVar5) goto LAB_037023b8;
      }
      pbVar14 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar15 = *pbVar14;
        goto joined_r0x03702334;
      }
      goto LAB_03702338;
    }
  }
  bVar15 = *pbVar14;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar15);
LAB_037023b8:
  if (0 < (int)local_f8) {
    local_118 = PTR_DAT_04bb2020 + 0x10;
    local_110 = "ApproachSelectMissedCount";
    iVar9 = FUN_02757a80(&local_138,&local_118);
    puVar2 = PTR_DAT_04bb7f70;
    puVar1 = PTR_DAT_04bb7f68;
    uVar22 = *puVar10;
    if (uVar22 != 0) {
      cVar20 = *PTR_DAT_04bb7f68;
      do {
        if (cVar20 == '\0') {
          cVar20 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          uVar22 = *puVar10;
        }
        else {
          uVar17 = *(uint *)(puVar2 + 4);
          if (-1 < (int)uVar17) {
            if (((ushort *)((ulong)uVar17 + (long)puVar10) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar17 + (long)puVar10), uVar3 != 0)) {
              iVar7 = 0;
              if (uVar3 != 0) {
                iVar7 = iVar9 / (int)(uint)uVar3;
              }
              uVar8 = uVar8 + iVar7 * uVar16;
            }
            break;
          }
          if (uVar17 != 0xffffffff) break;
        }
        puVar24 = (uint *)(ulong)uVar22;
        if ((puVar24 == (uint *)0x0) || (puVar10 == puVar24)) break;
        lVar13 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar24)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar10 + (lVar13 - (long)puVar24);
        if (lVar13 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar24));
        *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar26 = (int *)(lVar13 + 4);
        while (piVar26[-1] != -0x75b86aaa) {
          piVar26 = piVar26 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_03702500;
        }
        iVar7 = 0;
        if (*piVar26 != -1) {
          iVar7 = *piVar26;
        }
        *(int *)(puVar2 + 4) = iVar7;
        uVar22 = *puVar10;
        if (uVar22 == 0) break;
      } while( true );
    }
LAB_03702500:
    puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar16 = *puVar10 ^ *puVar10 << 0xb;
    uVar22 = puVar10[3];
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar16 = uVar16 >> 8 ^ uVar22 >> 0x13 ^ uVar16 ^ uVar22;
    puVar10[2] = uVar22;
    puVar10[3] = uVar16;
    if ((uint)((ulong)uVar16 * 100 >> 0x20) < uVar8) {
      uVar8 = nn::os::GetSystemTick();
      if (1 < (int)local_f8) {
        uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
        uVar16 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
        uVar22 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
        uVar18 = (ulong)((uVar22 ^ uVar22 >> 0x1e) * 0x6c078965 + 4);
        uVar12 = (ulong)local_f8 & 0xffffffff;
        do {
          uVar8 = uVar8 ^ uVar8 << 0xb;
          uVar17 = (uint)uVar18;
          uVar18 = (ulong)(uVar17 >> 0x13 ^ uVar8 >> 8 ^ uVar17 ^ uVar8);
          uVar23 = uVar12 - 1 & 0xffffffff;
          uVar25 = *(undefined8 *)((long)local_f0 + uVar23 * 8);
          uVar21 = uVar12 * uVar18 >> 0x1d & 0x7fffffff8;
          *(undefined8 *)((long)local_f0 + uVar23 * 8) = *(undefined8 *)((long)local_f0 + uVar21);
          *(undefined8 *)((long)local_f0 + uVar21) = uVar25;
          bVar5 = 2 < uVar12;
          uVar12 = uVar12 - 1;
          uVar8 = uVar16;
          uVar16 = uVar22;
          uVar22 = uVar17;
        } while (bVar5);
      }
      pbVar14 = &DAT_0545a41b + (ulong)**(uint **)local_f0 * 3;
      if (5 < **(uint **)local_f0) {
        pbVar14 = &DAT_0545a41b;
      }
      uVar12 = (ulong)*pbVar14;
      if (((uVar12 < 0x23) && (pbVar14[1] <= (byte)PTR_DAT_04bc27f0[uVar12])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar12 * 4) >> (ulong)(pbVar14[1] & 0x1f) & 1) != 0)) {
        local_fd = 0;
        local_108 = 8;
        local_104[0] = 0;
        local_110 = local_104;
        local_118 = PTR_DAT_04bb3768 + 0x10;
        FUN_020fcc2c(pbVar14,&local_118);
        local_78 = PTR_DAT_04bb7648 + 0x10;
        uVar6 = FUN_0376baa0(&local_118);
        local_70 = (char *)CONCAT62(local_70._2_6_,uVar6);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_120 = "ApproachOccurringFlag";
        local_128 = puVar1;
        FUN_0376c130(&local_78,&local_128,1);
        pcStack_120 = "ApproachSelectMissedCount";
        local_128 = puVar1;
        FUN_02757de8(&local_138,&local_128,0);
        return;
      }
    }
  }
  local_118 = PTR_DAT_04bb2020 + 0x10;
  local_110 = "ApproachSelectMissedCount";
  FUN_027585c0(&local_138,&local_118,1);
  return;
LAB_03701ff0:
  if (-1 < (int)uVar22) {
    if ((ushort *)((long)puVar10 + (ulong)uVar22) != (ushort *)0x0) {
      uVar16 = (uint)*(ushort *)((long)puVar10 + (ulong)uVar22);
      goto LAB_0370207c;
    }
    goto LAB_03702078;
  }
  if ((uVar22 != 0xffffffff) || (lVar13 = (long)puVar10 - (ulong)uVar16, lVar13 == 0))
  goto LAB_03702078;
  lVar27 = 0xc;
  if (*(char *)(lVar13 + 10) != '\0') {
    lVar27 = 0x1c;
  }
  if (lVar27 + lVar13 == 0) goto LAB_03702078;
  uVar12 = (ulong)*(ushort *)(lVar13 + 8);
  *(undefined4 *)(puVar2 + 8) = 0xfffffffe;
  if (uVar12 == 0) goto LAB_03702078;
  puVar24 = (uint *)(lVar27 + lVar13 + 4);
  while (puVar24[-1] != 0xe362ce0) {
    puVar24 = puVar24 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_03702078;
  }
  uVar22 = 0;
  if (*puVar24 != 0xffffffff) {
    uVar22 = *puVar24;
  }
  *(uint *)(puVar2 + 8) = uVar22;
  uVar16 = *puVar10;
  if (uVar16 == 0) goto LAB_03702078;
  goto LAB_03701ff0;
}

