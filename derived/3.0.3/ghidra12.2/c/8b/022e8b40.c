
/* WARNING: Removing unreachable block (ram,0x022e96fc) */
/* WARNING: Removing unreachable block (ram,0x022e969c) */
/* WARNING: Removing unreachable block (ram,0x022e963c) */
/* WARNING: Removing unreachable block (ram,0x022e95e4) */
/* WARNING: Removing unreachable block (ram,0x022e92c0) */
/* WARNING: Removing unreachable block (ram,0x022e91b4) */
/* WARNING: Removing unreachable block (ram,0x022e91f0) */
/* WARNING: Removing unreachable block (ram,0x022e9610) */
/* WARNING: Removing unreachable block (ram,0x022e966c) */
/* WARNING: Removing unreachable block (ram,0x022e96cc) */
/* WARNING: Removing unreachable block (ram,0x022e972c) */
/* WARNING: Removing unreachable block (ram,0x022e9258) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff6c : 0x022e9640 */
/* WARNING: Removing unreachable block (ram,0x022e928c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_022e8b40(undefined8 param_1,ushort *param_2,byte *param_3,uint param_4,short *param_5,
                 long param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  short *psVar6;
  short *psVar7;
  long lVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined *puVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  ushort *puVar21;
  ushort uVar22;
  uint *puVar23;
  ulong uVar24;
  uint *puVar25;
  char cVar26;
  int *piVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  uint *local_80;
  uint local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x330) != 0)) {
    puVar18 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
    FUN_006bd550(*puVar18,0);
  }
  puVar13 = PTR_DAT_04bb27a8;
  sVar12 = *(short *)PTR_DAT_04bb6298;
  if (sVar12 == -1) {
LAB_022e8c78:
    *param_3 = 0xff;
    return;
  }
  puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
  if (0xff < (uint)(int)sVar12) {
    puVar5 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar5 + 4) & 1) == 0) goto LAB_022e8c78;
  local_88 = PTR_DAT_04bbc220 + 0x10;
  lVar20 = *(long *)PTR_DAT_04bb27a8;
  if ((int)*(uint *)(lVar20 + 0x5d0) < 1) {
    if ((((*(long *)(lVar20 + 0x4c0) == 0) ||
         (local_80 = *(uint **)(*(long *)(lVar20 + 0x4c0) + 8), local_80 == (uint *)0x0)) ||
        ((param_4 < *(uint *)(lVar20 + 0x4d8) &&
         (*(char *)(*(long *)(lVar20 + 0x4e0) + (long)(int)param_4) == '\0')))) ||
       (((*local_80 <= param_4 || (local_80[1] == 0)) || ((ushort)local_80[2] == 0))))
    goto LAB_022e8d18;
    iVar15 = 0xc;
    if (*(char *)((long)local_80 + 10) != '\0') {
      iVar15 = 0x1c;
    }
    local_80 = (uint *)((ulong)(local_80[1] * param_4 + (uint)(ushort)local_80[2] * 8 + iVar15) +
                       (long)local_80);
    if (local_80 == (uint *)0x0) goto LAB_022e8d24;
LAB_022e8c5c:
    uVar19 = *local_80;
    if (uVar19 == 0 || local_80 == (uint *)(ulong)uVar19) goto LAB_022e8c6c;
    puVar23 = (uint *)((long)local_80 - (long)(ulong)uVar19);
    uVar19 = 0;
    if (*puVar23 != 0) {
      uVar19 = puVar23[1];
      if ((uVar19 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
        lVar20 = 0xc;
        if (*(char *)((long)puVar23 + 10) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar23 + lVar20 + (ulong)(ushort)puVar23[2] * 8;
        if (lVar20 != 0) {
          uVar17 = 0;
          if ((ulong)uVar19 != 0) {
            uVar17 = (uint)((ulong)((long)local_80 - lVar20) / (ulong)uVar19);
          }
          if (*puVar23 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if (uVar17 < *(uint *)PTR_DAT_04bbbe70) {
            uVar19 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbbe70 + 8) + (long)(int)uVar17 * 2);
            if (uVar19 < 2) goto LAB_022e8c70;
            bVar28 = false;
            uVar19 = 0;
            goto LAB_022e8d28;
          }
        }
      }
LAB_022e8c6c:
      uVar19 = 0;
    }
LAB_022e8c70:
    bVar28 = false;
  }
  else {
    if (param_4 < *(uint *)(lVar20 + 0x5d0)) {
      uVar19 = param_4;
      if (*(uint *)(lVar20 + 0x5c0) <= param_4) {
        uVar19 = 0;
      }
      local_80 = *(uint **)(*(long *)(lVar20 + 0x5c8) + (ulong)uVar19 * 8);
      if (local_80 != (uint *)0x0) goto LAB_022e8c5c;
    }
    else {
LAB_022e8d18:
      local_80 = (uint *)0x0;
    }
LAB_022e8d24:
    uVar19 = 0;
    bVar28 = true;
  }
LAB_022e8d28:
  puVar23 = local_80;
  local_98 = (undefined *)CONCAT44((int)((ulong)local_98 >> 0x20),uVar19);
  if (param_5 == (short *)0x0) {
    return;
  }
  if (uVar19 != 1) {
    return;
  }
  local_78 = param_4;
  local_68 = FUN_012efd10(&local_88);
  iVar15 = FUN_012efd10(&local_88);
  if (iVar15 == 6) {
    local_64 = *(uint *)(param_6 + 0x18);
    lVar20 = *(long *)puVar13;
    local_98 = PTR_DAT_04bbc308 + 0x10;
    if ((int)*(uint *)(lVar20 + 0x7a8) < 1) {
      if ((((*(long *)(lVar20 + 0x698) == 0) ||
           (puVar25 = *(uint **)(*(long *)(lVar20 + 0x698) + 8), puVar25 == (uint *)0x0)) ||
          ((local_64 < *(uint *)(lVar20 + 0x6b0) &&
           (*(char *)(*(long *)(lVar20 + 0x6b8) + (long)(int)local_64) == '\0')))) ||
         (((*puVar25 <= local_64 || (puVar25[1] == 0)) || ((ushort)puVar25[2] == 0))))
      goto LAB_022e8e90;
      iVar15 = 0xc;
      if (*(char *)((long)puVar25 + 10) != '\0') {
        iVar15 = 0x1c;
      }
      local_90 = (ulong)(puVar25[1] * local_64 + (uint)(ushort)puVar25[2] * 8 + iVar15) +
                 (long)puVar25;
    }
    else if (local_64 < *(uint *)(lVar20 + 0x7a8)) {
      uVar19 = local_64;
      if (*(uint *)(lVar20 + 0x798) <= local_64) {
        uVar19 = 0;
      }
      local_90 = *(long *)(*(long *)(lVar20 + 0x7a0) + (ulong)uVar19 * 8);
    }
    else {
LAB_022e8e90:
      local_90 = 0;
    }
    local_68 = FUN_0130dad0(&local_98);
  }
  uVar22 = *param_2 | (ushort)(1 << (ulong)(local_68 & 0x1f));
  *param_2 = uVar22;
  puVar5 = PTR_DAT_04bbbe68;
  puVar13 = PTR_DAT_04bbbe60;
  if (bVar28) {
    local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
    goto LAB_022e8f70;
  }
  uVar19 = *puVar23;
  uVar17 = 0;
  if ((uVar19 != 0) && (puVar23 != (uint *)(ulong)uVar19)) {
    puVar25 = (uint *)((long)puVar23 - (long)(ulong)uVar19);
    uVar17 = 0;
    if (*puVar25 != 0) {
      uVar19 = puVar25[1];
      if ((uVar19 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
        lVar20 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar25 + lVar20 + (ulong)(ushort)puVar25[2] * 8;
        if (lVar20 != 0) {
          uVar17 = 0;
          if ((ulong)uVar19 != 0) {
            uVar17 = (uint)((ulong)((long)puVar23 - lVar20) / (ulong)uVar19);
          }
          if (*puVar25 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < *(uint *)PTR_DAT_04bbbe88) &&
             (uVar17 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbbe88 + 8) + (long)(int)uVar17 * 2),
             uVar17 < 3)) goto LAB_022e8f5c;
        }
      }
      uVar17 = 0;
    }
  }
LAB_022e8f5c:
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar17);
  if (uVar17 == 0) {
    uVar19 = *puVar23;
    if (uVar19 != 0) {
      cVar26 = *PTR_DAT_04bbbe60;
      do {
        if (cVar26 == '\0') {
          cVar26 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar13 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          uVar19 = *puVar23;
        }
        else {
          uVar17 = *(uint *)(puVar5 + 0x24);
          if (-1 < (int)uVar17) {
            if (((char *)((ulong)uVar17 + (long)puVar23) != (char *)0x0) &&
               (*(char *)((ulong)uVar17 + (long)puVar23) != '\0')) {
              uVar22 = *param_2;
              goto LAB_022e8f68;
            }
            break;
          }
          if (uVar17 != 0xffffffff) break;
        }
        lVar20 = (long)puVar23 - (ulong)uVar19;
        if (((ulong)uVar19 == 0) || (lVar20 == 0)) break;
        lVar8 = 0xc;
        if (*(char *)(lVar20 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        if (lVar8 + lVar20 == 0) break;
        uVar24 = (ulong)*(ushort *)(lVar20 + 8);
        *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
        if (uVar24 == 0) break;
        piVar27 = (int *)(lVar8 + lVar20 + 4);
        while (piVar27[-1] != -0x65c8424) {
          piVar27 = piVar27 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_022e8f70;
        }
        iVar15 = 0;
        if (*piVar27 != -1) {
          iVar15 = *piVar27;
        }
        *(int *)(puVar5 + 0x24) = iVar15;
        uVar19 = *puVar23;
        if (uVar19 == 0) break;
      } while( true );
    }
  }
  else {
LAB_022e8f68:
    *param_2 = uVar22 | 2;
  }
LAB_022e8f70:
  if ((param_4 < 0xd) && ((1 << (ulong)(param_4 & 0x1f) & 0x19c0U) != 0)) {
    *param_2 = *param_2 | 8;
  }
  sVar12 = param_5[2];
  if (param_5[4] <= param_5[2]) {
    sVar12 = param_5[4];
  }
  sVar9 = param_5[3];
  if (param_5[5] <= param_5[3]) {
    sVar9 = param_5[5];
  }
  psVar6 = param_5 + (ulong)(uint)(((int)param_5[1] - (int)sVar9) * 3 +
                                  ((int)*param_5 - (int)sVar12)) * 7 + 6;
  if (2 < (uint)((int)param_5[1] - (int)sVar9) || 2 < (uint)((int)*param_5 - (int)sVar12)) {
    psVar6 = (short *)PTR_DAT_04bbc2f8;
  }
  uVar14 = FUN_022e9850(psVar6);
  uVar22 = *param_2;
  *param_2 = (uVar22 | uVar14) & 0xffce;
  if ((0xc < param_4) || ((1 << (ulong)(param_4 & 0x1f) & 0x19c0U) == 0)) {
    *param_2 = (uVar22 | uVar14) & 0xffc6;
  }
  sVar12 = param_5[2];
  sVar9 = param_5[4];
  sVar10 = param_5[3];
  sVar11 = param_5[5];
  local_98 = (undefined *)0x0;
  local_90 = 0;
  iVar15 = (int)sVar12;
  if (sVar9 <= sVar12) {
    iVar15 = (int)sVar9;
  }
  iVar3 = (int)sVar12;
  if (sVar12 <= sVar9) {
    iVar3 = (int)sVar9;
  }
  iVar30 = (int)sVar10;
  if (sVar11 <= sVar10) {
    iVar30 = (int)sVar11;
  }
  iVar4 = (int)sVar10;
  if (sVar10 <= sVar11) {
    iVar4 = (int)sVar11;
  }
  psVar6 = param_5 + (ulong)(uint)((param_5[1] - iVar30) * 3 + (*param_5 - iVar15)) * 7 + 6;
  if (2 < (uint)(param_5[1] - iVar30) || 2 < (uint)(*param_5 - iVar15)) {
    psVar6 = (short *)PTR_DAT_04bbc2f8;
  }
  if (iVar4 + 1 != iVar30) {
    iVar29 = iVar15;
    do {
      if (iVar29 != *param_5 || iVar30 != param_5[1]) {
        iVar16 = FUN_006f0400((float)iVar29 - (float)(int)*param_5,
                              (float)iVar30 - (float)(int)param_5[1]);
        uVar19 = iVar16 + 0x10000000U >> 0x1d;
        sVar12 = param_5[2];
        if (param_5[4] <= param_5[2]) {
          sVar12 = param_5[4];
        }
        sVar9 = param_5[3];
        if (param_5[5] <= param_5[3]) {
          sVar9 = param_5[5];
        }
        psVar7 = param_5 + (ulong)(uint)((iVar30 - sVar9) * 3 + (iVar29 - sVar12)) * 7 + 6;
        if (2 < (uint)(iVar30 - sVar9) || 2 < (uint)(iVar29 - sVar12)) {
          psVar7 = (short *)PTR_DAT_04bbc2f8;
        }
        FUN_022e9850(psVar7);
        uVar22 = *param_2;
        local_64 = (uint)*(byte *)(psVar6 + 6);
        local_68 = (uint)*(byte *)(psVar7 + 6);
        if ((uint)*(byte *)(psVar6 + 6) == (uint)*(byte *)(psVar7 + 6)) {
          uVar17 = FUN_022e9850(psVar7);
          uVar14 = 0;
          if (((uVar22 >> 2 & 1) != 0) && ((uVar17 & 4) != 0)) {
            uVar14 = 4;
          }
          if (((uVar22 >> 6 & 1) != 0) && ((uVar17 & 0x40) != 0)) {
            uVar14 = uVar14 | 0x40;
          }
          if (((uVar22 >> 7 & 1) != 0) && ((uVar17 & 0x80) != 0)) {
            uVar14 = uVar14 | 0x80;
          }
          if (((uVar22 >> 8 & 1) != 0) && ((uVar17 & 0x100) != 0)) {
            uVar14 = uVar14 | 0x100;
          }
          if (((uVar22 >> 9 & 1) != 0) && ((uVar17 & 0x200) != 0)) {
            uVar14 = uVar14 | 0x200;
          }
          if (((uVar22 >> 10 & 1) != 0) && ((uVar17 & 0x400) != 0)) {
            uVar14 = uVar14 | 0x400;
          }
          if (((uVar22 >> 0xb & 1) != 0) && ((uVar17 & 0x800) != 0)) {
            uVar14 = uVar14 | 0x800;
          }
          local_64 = 0xc;
          if (((uVar22 >> 0xc & 1) != 0) && ((uVar17 & 0x1000) != 0)) {
            uVar14 = uVar14 | 0x1000;
          }
          uVar22 = *param_2;
        }
        else {
          uVar14 = 0;
        }
        uVar24 = (ulong)uVar19;
        if (7 < uVar19) {
          uVar24 = 0;
        }
        *(ushort *)((long)&local_98 + uVar24 * 2) =
             *(ushort *)((long)&local_98 + uVar24 * 2) | uVar14;
        if ((uVar22 >> 1 & 1) == 0) {
          puVar21 = (ushort *)((long)&local_98 + (ulong)uVar19 * 2);
          if (7 < uVar19) {
            puVar21 = (ushort *)&local_98;
          }
LAB_022e9494:
          uVar22 = *puVar21 & 0xfffd;
        }
        else {
          uVar17 = FUN_022e9850(psVar7);
          uVar24 = (ulong)uVar19;
          puVar21 = (ushort *)((long)&local_98 + uVar24 * 2);
          if (7 < uVar19) {
            uVar24 = 0;
            puVar21 = (ushort *)&local_98;
          }
          if ((uVar17 >> 1 & 1) == 0) goto LAB_022e9494;
          uVar22 = *(ushort *)((long)&local_98 + uVar24 * 2) | 2;
        }
        *puVar21 = uVar22;
        local_64 = param_4;
        if (param_4 < 0xd) {
          if ((1 << (ulong)(param_4 & 0x1f) & 0x1980U) == 0) {
            if (param_4 != 6) goto LAB_022e954c;
            local_68 = (uint)*(byte *)(psVar6 + 6);
            local_6c = (uint)*(byte *)(psVar7 + 6);
            puVar21 = (ushort *)((long)&local_98 + (ulong)uVar19 * 2);
            if (7 < uVar19) {
              puVar21 = (ushort *)&local_98;
            }
            if ((uint)*(byte *)(psVar6 + 6) < (uint)*(byte *)(psVar7 + 6)) goto LAB_022e9540;
            goto LAB_022e955c;
          }
          local_68 = (uint)*(byte *)(psVar6 + 6);
          local_6c = (uint)*(byte *)(psVar7 + 6);
          puVar21 = (ushort *)((long)&local_98 + (ulong)uVar19 * 2);
          if (7 < uVar19) {
            puVar21 = (ushort *)&local_98;
          }
          if ((uint)*(byte *)(psVar6 + 6) != (uint)*(byte *)(psVar7 + 6)) goto LAB_022e955c;
LAB_022e9540:
          uVar22 = *puVar21 | 8;
        }
        else {
LAB_022e954c:
          puVar21 = (ushort *)((long)&local_98 + (ulong)uVar19 * 2);
          if (7 < uVar19) {
            puVar21 = (ushort *)&local_98;
          }
LAB_022e955c:
          uVar22 = *puVar21 & 0xfff7;
        }
        *puVar21 = uVar22;
      }
      if (iVar29 < iVar3) {
        iVar29 = iVar29 + 1;
      }
      else {
        iVar30 = iVar30 + 1;
        iVar29 = iVar15;
      }
    } while ((iVar15 != iVar29) || (iVar4 + 1 != iVar30));
  }
  FUN_022e9a80(&local_98,0x1fc4,0,param_5);
  FUN_022e9a80(&local_98,2,1,param_5);
  FUN_022e9a80(&local_98,8,1,param_5);
  local_64 = 0;
  local_64 = 1;
  bVar1 = *param_3 & 0xfe;
  if ((ushort)local_98 != 0) {
    bVar1 = *param_3 | 1;
  }
  local_64 = 2;
  bVar2 = bVar1 & 0xfd;
  if (local_98._2_2_ != 0) {
    bVar2 = bVar1 | 2;
  }
  local_64 = 3;
  bVar1 = bVar2 & 0xfb;
  if (local_98._4_2_ != 0) {
    bVar1 = bVar2 | 4;
  }
  local_64 = 4;
  bVar2 = bVar1 & 0xf7;
  if (local_98._6_2_ != 0) {
    bVar2 = bVar1 | 8;
  }
  local_64 = 5;
  bVar1 = bVar2 & 0xef;
  if ((short)local_90 != 0) {
    bVar1 = bVar2 | 0x10;
  }
  local_64 = 6;
  bVar2 = bVar1 & 0xdf;
  if (local_90._2_2_ != 0) {
    bVar2 = bVar1 | 0x20;
  }
  local_64 = 7;
  bVar1 = bVar2 & 0xbf;
  if (local_90._4_2_ != 0) {
    bVar1 = bVar2 | 0x40;
  }
  bVar2 = bVar1 & 0x7f;
  if (local_90._6_2_ != 0) {
    bVar2 = bVar1 | 0x80;
  }
  *param_3 = bVar2;
  return;
}

