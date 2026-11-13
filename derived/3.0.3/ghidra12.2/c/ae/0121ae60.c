
/* WARNING: Removing unreachable block (ram,0x0121b9d4) */
/* WARNING: Removing unreachable block (ram,0x0121b664) */
/* WARNING: Removing unreachable block (ram,0x0121b570) */
/* WARNING: Removing unreachable block (ram,0x0121b6e8) */
/* WARNING: Removing unreachable block (ram,0x0121b9f4) */

void FUN_0121ae60(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int *piVar22;
  long lVar23;
  undefined8 local_30d0;
  undefined *local_30c8;
  undefined4 local_30c0;
  undefined4 uStack_30bc;
  undefined *local_30b8;
  undefined8 local_30b0;
  undefined8 local_30a8;
  uint local_30a0 [1024];
  undefined *local_20a0;
  uint local_2098 [1024];
  undefined *local_1098;
  uint local_1090;
  uint local_108c;
  undefined1 auStack_1088 [8];
  undefined1 auStack_1080 [4];
  uint local_107c;
  uint *local_1078;
  undefined1 auStack_1070 [8];
  undefined8 local_1068;
  char *local_1060;
  int local_1058;
  int local_1054;
  undefined *local_1050;
  int local_1048;
  int local_1044;
  
  if (((*(uint *)(param_3 + 8) | *(uint *)(param_3 + 0xc)) & 1) != 0) {
    return;
  }
  FUN_01a50240(auStack_1070,param_4,0);
  lVar23 = *(long *)PTR_DAT_04bbbc68;
  if (lVar23 == 0) {
    return;
  }
  if (*(long *)(lVar23 + 0xb0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar23 + 0xb0) + 8) == 0) {
    return;
  }
  if (*(long *)(lVar23 + 0x488) == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar23 + 0x488) + 8) == 0) {
    return;
  }
  if (*(long *)(lVar23 + 0x2b0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar23 + 0x2b0) + 8) == 0) {
    return;
  }
  uVar15 = FUN_0277d6c4(auStack_1070);
  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
  if (*(uint *)(lVar23 + 0x1d8) <= uVar15) {
    return;
  }
  if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar15 * 8) == 0) {
    return;
  }
  FUN_0124c030(auStack_1088,auStack_1070);
  puVar13 = PTR_DAT_04bbbc78;
  puVar12 = PTR_DAT_04bbbc70;
  if ((local_1078 != (uint *)0x0) && (uVar15 = *local_1078, uVar15 != 0)) {
    cVar14 = *PTR_DAT_04bbbc70;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar13 = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
        *puVar12 = 1;
        *(undefined4 *)(puVar13 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
        uVar15 = *local_1078;
      }
      else {
        uVar19 = *(uint *)(puVar13 + 0x4c);
        if (-1 < (int)uVar19) {
          if (((byte *)((ulong)uVar19 + (long)local_1078) != (byte *)0x0) &&
             (3 < *(byte *)((ulong)uVar19 + (long)local_1078))) {
            bVar11 = false;
            local_1090 = *(uint *)(param_3 + 8);
            local_108c = *(uint *)(param_3 + 0xc);
            goto LAB_0121b430;
          }
          break;
        }
        if (uVar19 != 0xffffffff) break;
      }
      puVar21 = (uint *)(ulong)uVar15;
      if ((puVar21 == (uint *)0x0) || (local_1078 == puVar21)) break;
      lVar23 = 0xc;
      if (*(char *)((long)local_1078 + (10 - (long)puVar21)) != '\0') {
        lVar23 = 0x1c;
      }
      lVar23 = (long)local_1078 + (lVar23 - (long)puVar21);
      if (lVar23 == 0) break;
      uVar18 = (ulong)*(ushort *)((long)local_1078 + (8 - (long)puVar21));
      *(undefined4 *)(puVar13 + 0x4c) = 0xfffffffe;
      if (uVar18 == 0) break;
      piVar22 = (int *)(lVar23 + 4);
      while (piVar22[-1] != -0xa58ccc9) {
        piVar22 = piVar22 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_0121b04c;
      }
      iVar17 = 0;
      if (*piVar22 != -1) {
        iVar17 = *piVar22;
      }
      *(int *)(puVar13 + 0x4c) = iVar17;
      uVar15 = *local_1078;
      if (uVar15 == 0) break;
    } while( true );
  }
LAB_0121b04c:
  local_1090 = *(uint *)(param_3 + 8);
  local_108c = *(uint *)(param_3 + 0xc);
  iVar20 = 0;
  iVar7 = local_1090 - 8;
  iVar8 = local_1090 - 6;
  iVar9 = local_1090 - 2;
  iVar10 = local_1090 - 4;
  iVar17 = local_1090 + 2;
  iVar1 = local_1090 + 4;
  iVar2 = local_1090 + 6;
  lVar23 = param_5 + 8;
  iVar16 = -10;
  iVar3 = local_1090 + 8;
  uVar15 = local_108c * 0x80 - 0x400;
  do {
    iVar4 = local_108c + iVar16 + 2;
    if ((((DAT_05233970 <= iVar7 && iVar7 <= DAT_05233980) && (DAT_05233974 <= iVar4)) &&
        (iVar4 <= DAT_05233984)) &&
       ((uVar19 = (uVar15 & 0xffffff00) + (iVar7 >> 1), uVar19 >> 0xf == 0 &&
        ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(iVar7 >> 1 & 0x1f)) != 0)))) {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    if (((DAT_05233970 <= iVar8 && iVar8 <= DAT_05233980) && (DAT_05233974 <= iVar4)) &&
       ((iVar4 <= DAT_05233984 &&
        ((uVar19 = (uVar15 & 0xffffff00) + (iVar8 >> 1), uVar19 >> 0xf == 0 &&
         ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(iVar8 >> 1 & 0x1f)) != 0)))))
       ) {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    if ((((DAT_05233970 <= iVar10 && iVar10 <= DAT_05233980) && (DAT_05233974 <= iVar4)) &&
        (iVar4 <= DAT_05233984)) &&
       ((uVar19 = (uVar15 & 0xffffff00) + (iVar10 >> 1), uVar19 >> 0xf == 0 &&
        ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(iVar10 >> 1 & 0x1f)) != 0))))
    {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    if (((DAT_05233970 <= iVar9 && iVar9 <= DAT_05233980) && (DAT_05233974 <= iVar4)) &&
       ((iVar4 <= DAT_05233984 &&
        ((uVar19 = (uVar15 & 0xffffff00) + (iVar9 >> 1), uVar19 >> 0xf == 0 &&
         ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(iVar9 >> 1 & 0x1f)) != 0)))))
       ) {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    if (((((iVar16 != -2) && (DAT_05233970 <= (int)local_1090)) && ((int)local_1090 <= DAT_05233980)
         ) && ((DAT_05233974 <= iVar4 && (iVar4 <= DAT_05233984)))) &&
       ((uVar19 = (uVar15 & 0xffffff00) + ((int)local_1090 >> 1), uVar19 >> 0xf == 0 &&
        ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)((int)local_1090 >> 1 & 0x1f))
         != 0)))) {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    if (((DAT_05233970 <= iVar17 && iVar17 <= DAT_05233980) && (DAT_05233974 <= iVar4)) &&
       ((iVar4 <= DAT_05233984 &&
        ((uVar19 = (uVar15 & 0xffffff00) + (iVar17 >> 1), uVar19 >> 0xf == 0 &&
         ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(iVar17 >> 1 & 0x1f)) != 0))))
       )) {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    if ((((DAT_05233970 <= iVar1 && iVar1 <= DAT_05233980) && (DAT_05233974 <= iVar4)) &&
        (iVar4 <= DAT_05233984)) &&
       ((uVar19 = (uVar15 & 0xffffff00) + (iVar1 >> 1), uVar19 >> 0xf == 0 &&
        ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(iVar1 >> 1 & 0x1f)) != 0)))) {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    if (((DAT_05233970 <= iVar2 && iVar2 <= DAT_05233980) && (DAT_05233974 <= iVar4)) &&
       ((iVar4 <= DAT_05233984 &&
        ((uVar19 = (uVar15 & 0xffffff00) + (iVar2 >> 1), uVar19 >> 0xf == 0 &&
         ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(iVar2 >> 1 & 0x1f)) != 0)))))
       ) {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    if ((((DAT_05233970 <= iVar3 && iVar3 <= DAT_05233980) && (DAT_05233974 <= iVar4)) &&
        (iVar4 <= DAT_05233984)) &&
       ((uVar19 = (uVar15 & 0xffffff00) + (iVar3 >> 1), uVar19 >> 0xf == 0 &&
        ((*(uint *)(lVar23 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(iVar3 >> 1 & 0x1f)) != 0)))) {
      if (10 < iVar20) {
        return;
      }
      iVar20 = iVar20 + 1;
    }
    iVar16 = iVar16 + 2;
    uVar15 = uVar15 + 0x100;
  } while (iVar16 < 7);
  bVar11 = true;
LAB_0121b430:
  uVar15 = 0;
  if (((DAT_05233970 <= (int)local_1090) && ((int)local_1090 <= DAT_05233980)) &&
     ((uVar15 = 0, DAT_05233974 <= (int)local_108c && ((int)local_108c <= DAT_05233984)))) {
    uVar15 = (local_108c & 0x1fffffe) * 0x80 + ((int)local_1090 >> 1);
    if (uVar15 >> 0xf == 0) {
      uVar15 = *(uint *)(param_6 + (ulong)(uVar15 >> 5) * 4 + 8) >> (ulong)(local_1090 >> 1 & 0x1f)
               & 1;
    }
    else {
      uVar15 = 0;
    }
  }
  local_1098 = PTR_DAT_04bb2010 + 0x10;
  uVar18 = FUN_01688880(param_2,&local_1098,uVar15);
  iVar1 = DAT_05233980;
  iVar17 = DAT_05233970;
  if ((uVar18 & 1) == 0) {
    uVar18 = FUN_0123b5b0(local_1078);
    if ((uVar18 & 1) == 0) {
      uVar18 = FUN_0123d890(local_1078,4);
      uVar15 = local_107c;
      if ((uVar18 & 1) == 0) goto LAB_0121b8dc;
      uVar15 = local_107c & 0xfff9ffff;
    }
    else {
      uVar15 = local_107c & 0xfff9ffff;
      if ((local_107c & 0x180000) == 0) goto LAB_0121b8dc;
      if (param_1 < (long)((ulong)(local_107c >> 0x13) & 3)) {
        uVar15 = local_107c & 0xffe00000 |
                 local_107c & 0x1ffff | ((local_107c >> 0x13) - (int)param_1) * 0x80000 & 0x180000;
      }
      else {
        uVar15 = local_107c & 0xffe1ffff;
      }
    }
LAB_0121b8dc:
    local_107c = uVar15;
    FUN_011f3390(param_4,0,auStack_1080,param_3);
    return;
  }
  if ((param_8 & 1) != 0) {
    uVar19 = *(uint *)(param_3 + 8);
    if ((((DAT_05233970 <= (int)uVar19) && ((int)uVar19 <= DAT_05233980)) &&
        (uVar6 = *(uint *)(param_3 + 0xc), DAT_05233974 <= (int)uVar6)) &&
       (((int)uVar6 <= DAT_05233984 &&
        (uVar6 = (uVar6 & 0x1fffffe) * 0x80 + ((int)uVar19 >> 1), uVar6 >> 0xf == 0)))) {
      param_5 = param_5 + (ulong)(uVar6 >> 5) * 4;
      *(uint *)(param_5 + 8) = *(uint *)(param_5 + 8) | 1 << (ulong)(uVar19 >> 1 & 0x1f);
      uVar19 = *(uint *)(param_3 + 8);
    }
    local_20a0 = (undefined *)CONCAT44(local_20a0._4_4_,0xb);
    if (((iVar17 <= (int)uVar19) && ((int)uVar19 <= iVar1)) &&
       ((uVar6 = *(uint *)(param_3 + 0xc), DAT_05233974 <= (int)uVar6 &&
        (((int)uVar6 <= DAT_05233984 &&
         (uVar6 = (uVar6 & 0x1fffffe) * 0x80 + ((int)uVar19 >> 1), uVar6 >> 0xf == 0)))))) {
      lVar23 = param_2 + 0x1f080 + (ulong)(uVar6 >> 5) * 4;
      *(uint *)(lVar23 + 8) =
           *(uint *)(lVar23 + 8) & (1 << (ulong)(uVar19 >> 1 & 0x1f) ^ 0xffffffffU);
    }
  }
  uVar18 = FUN_0124d940(auStack_1088,param_1,0,0);
  if ((uVar18 & 1) == 0) {
    return;
  }
  FUN_011f3390(param_4,0,auStack_1080,param_3);
  puVar12 = PTR_DAT_04bbdd38;
  local_20a0 = PTR_DAT_04bbdd38 + 0x10;
  local_30a8 = (undefined *)CONCAT44(local_30a8._4_4_,7);
  memset(local_2098,0,0x1000);
  lVar23 = 0;
  do {
    puVar21 = (uint *)(param_2 + 0x1b068 + lVar23);
    uVar19 = *(uint *)((long)local_2098 + lVar23 + 4);
    lVar5 = lVar23 + 8;
    uVar6 = puVar21[1];
    *(uint *)((long)local_30a0 + lVar23 + -8) = *puVar21 | *(uint *)((long)local_2098 + lVar23);
    *(uint *)((long)local_30a0 + lVar23 + -4) = uVar6 | uVar19;
    lVar23 = lVar5;
  } while (lVar5 != 0x1000);
  memcpy(local_2098,&local_30a8,0x1000);
  local_30a8 = puVar12 + 0x10;
  local_1068 = (undefined *)CONCAT44(local_1068._4_4_,8);
  memset(local_30a0,0,0x1000);
  lVar23 = 0;
  do {
    puVar21 = (uint *)(param_2 + 0x1c070 + lVar23);
    uVar19 = *(uint *)((long)local_30a0 + lVar23 + 4);
    lVar5 = lVar23 + 8;
    uVar6 = puVar21[1];
    *(uint *)(auStack_1070 + lVar23 + 8) = *puVar21 | *(uint *)((long)local_30a0 + lVar23);
    *(uint *)(auStack_1070 + lVar23 + 0xc) = uVar6 | uVar19;
    lVar23 = lVar5;
  } while (lVar5 != 0x1000);
  memcpy(local_30a0,&local_1068,0x1000);
  if (uVar15 != 0) {
    return;
  }
  uVar18 = FUN_016962d8(param_7,param_3,0);
  cVar14 = FUN_0124dff0(auStack_1088);
  if (cVar14 != '\x04') {
    return;
  }
  if ((uVar18 & 1) != 0) {
    local_1060 = "ExistBanboo";
    local_1068 = PTR_DAT_04bb2020 + 0x10;
    FUN_0273f3c4(&local_1068,1);
    if (!bVar11) {
      return;
    }
    local_30c0 = *(undefined4 *)(param_3 + 8);
    uStack_30bc = *(undefined4 *)(param_3 + 0xc);
    local_30c8 = PTR_DAT_04bb2010 + 0x10;
    local_30b0 = 0;
    local_30b8 = local_30c8;
    uVar18 = FUN_012116a0(&local_30b8,param_2,&local_30c8,1,0);
    if ((uVar18 & 1) == 0) {
      return;
    }
    local_30d0 = 0xfffe;
    FUN_0277d4ac(&local_30d0);
    uVar18 = FUN_0123b020(auStack_1080,&local_30d0,0,1);
    if ((uVar18 & 1) == 0) {
      return;
    }
    uVar18 = FUN_0277d9a8(&local_30d0);
    if ((uVar18 & 1) == 0) {
      return;
    }
    FUN_01a50ae4(param_4,&local_30d0,&local_30b8);
    local_1060 = PTR_DAT_04bb2010 + 0x10;
    local_1058 = (int)local_30b0;
    local_1054 = local_30b0._4_4_;
    local_1048 = (int)local_30b0 + 1;
    local_1044 = local_30b0._4_4_ + 1;
    local_1068 = PTR_DAT_04bbc1a0 + 0x10;
    local_1050 = local_1060;
    FUN_01686550(param_2,&local_1068);
    return;
  }
  uVar18 = FUN_016962d8(&local_30a8,param_3,0);
  if ((uVar18 & 1) == 0) {
    uVar18 = FUN_016962d8(&local_20a0,param_3,0);
    if ((uVar18 & 1) == 0) goto LAB_0121b984;
    local_1060 = "ExistOak";
  }
  else {
    local_1060 = "ExistCedar";
  }
  local_1068 = PTR_DAT_04bb2020 + 0x10;
  FUN_0273f3c4(&local_1068,1);
LAB_0121b984:
  iVar17 = FUN_0123db50(auStack_1080,local_1078);
  if (iVar17 == 3) {
    local_1068._0_4_ = 8;
    FUN_01696154(param_2 + 0x1c068,param_3);
  }
  else if (iVar17 != 1) {
    return;
  }
  local_1068 = (undefined *)CONCAT44(local_1068._4_4_,7);
  FUN_01696154(param_2 + 0x1b060,param_3);
  return;
}

