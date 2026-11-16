
uint FUN_0262298c(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char cVar10;
  ushort uVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  bool bVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined2 local_800;
  undefined1 local_7fe;
  undefined1 local_7fd;
  undefined4 local_7fc;
  uint *local_7f8;
  uint local_7ec;
  undefined4 local_7e8;
  uint local_7e4;
  uint local_7e0;
  undefined4 uStack_7dc;
  uint local_6c;
  
  uVar6 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0xea6e0);
  if (*(uint *)(param_1 + 0xea6c0) <= uVar6) {
    return 0;
  }
  puVar14 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar6 * 8);
  if (puVar14 == (uint *)0x0) {
    return 0;
  }
  uVar6 = *puVar14;
  if (uVar6 == 0 || puVar14 == (uint *)(ulong)uVar6) {
    return 0;
  }
  puVar12 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
  if (*puVar12 == 0) {
    return 0;
  }
  uVar6 = puVar12[1];
  if (uVar6 == 0) {
    return 0;
  }
  if ((ulong)(ushort)puVar12[2] == 0) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar12 + 10) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar12 + lVar16 + (ulong)(ushort)puVar12[2] * 8;
  if (lVar16 == 0) {
    return 0;
  }
  uVar3 = 0;
  if ((ulong)uVar6 != 0) {
    uVar3 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar6);
  }
  if (*puVar12 <= uVar3) {
    uVar3 = 0xffffffff;
  }
  if (DAT_05557790 <= uVar3) {
    return 0;
  }
  uVar11 = *(ushort *)(DAT_05557798 + (long)(int)uVar3 * 2);
  local_6c = (uint)uVar11;
  if (4 < uVar11) {
    return 0;
  }
  if (local_6c == 0) {
    return 0;
  }
  if ((param_4 & 1) == 0) {
    uVar6 = FUN_03853b94(puVar14);
    if ((DAT_055577a0 <= uVar6) ||
       (uVar11 = *(ushort *)(DAT_055577a8 + (long)(int)uVar6 * 2), local_7e0 = (uint)uVar11,
       2 < uVar11)) {
      local_7e0 = 0;
    }
    if ((local_7e0 != 0) && (uVar8 = FUN_02624e04(param_1,param_3), (uVar8 & 1) == 0)) {
      return 0;
    }
    uVar6 = (param_3 & 0xffff) - 0x369;
    if ((((uVar6 < 0x40) && ((1L << ((ulong)uVar6 & 0x3f) & 0x8000020000000101U) != 0)) ||
        ((uVar6 = (param_3 & 0xffff) - 0x3b0, uVar6 < 0x1b &&
         ((1 << (ulong)(uVar6 & 0x1f) & 0x4110001U) != 0)))) &&
       (uVar8 = FUN_01223640(), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  FUN_0264a620(&local_7e0,param_2);
  bVar4 = false;
  iVar17 = 0;
  bVar15 = false;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
LAB_02622b9c:
  local_7e4 = local_6c;
  local_7ec = *(uint *)PTR_DAT_04bb37e0;
  local_7e8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  switch(iVar17) {
  case 0:
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          if (-1 < (int)DAT_05557734) {
            puVar2 = (ushort *)((DAT_05557734 & 0xffffffff) + (long)puVar14);
            if (puVar2 != (ushort *)0x0) {
              uVar11 = *puVar2;
              goto LAB_026230dc;
            }
            break;
          }
          if ((int)DAT_05557734 != -1) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        uVar11 = 0xfffe;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_026230dc;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_05557734 = CONCAT44(DAT_05557734._4_4_,0xfffffffe);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != 0x1bbfa75e) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_026230d8;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_05557734 = CONCAT44(DAT_05557734._4_4_,iVar7);
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_026230d8:
    uVar11 = 0xfffe;
LAB_026230dc:
    local_808 = (undefined *)(ulong)uVar11;
    FUN_0277d4ac(&local_808);
    local_7ec = (uint)local_808;
    uVar6 = local_7ec & 0xffff;
    local_7e8 = local_808._4_4_;
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          uVar8 = (ulong)DAT_05557714._4_4_;
          if (-1 < DAT_05557714) goto LAB_0262378c;
          if (DAT_05557714._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_05557714 = CONCAT44(0xfffffffe,(undefined4)DAT_05557714);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != 0x13a65775) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto switchD_02622bd4_default;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_05557714 = CONCAT44(iVar7,(undefined4)DAT_05557714);
        if (*puVar14 == 0) break;
      } while( true );
    }
    break;
  case 1:
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          if (-1 < (long)DAT_05557734) {
            if ((ushort *)((ulong)DAT_05557734._4_4_ + (long)puVar14) != (ushort *)0x0) {
              uVar11 = *(ushort *)((ulong)DAT_05557734._4_4_ + (long)puVar14);
              goto LAB_02623200;
            }
            break;
          }
          if (DAT_05557734._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        uVar11 = 0xfffe;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_02623200;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_05557734 = CONCAT44(0xfffffffe,(int)DAT_05557734);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != 0x5c1fdd8e) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_026231fc;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_05557734 = CONCAT44(iVar7,(int)DAT_05557734);
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_026231fc:
    uVar11 = 0xfffe;
LAB_02623200:
    local_808 = (undefined *)(ulong)uVar11;
    FUN_0277d4ac(&local_808);
    local_7ec = (uint)local_808;
    uVar6 = local_7ec & 0xffff;
    local_7e8 = local_808._4_4_;
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          uVar8 = DAT_0555771c & 0xffffffff;
          if (-1 < (int)DAT_0555771c) goto LAB_0262378c;
          if ((int)DAT_0555771c != -1) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_0555771c = CONCAT44(DAT_0555771c._4_4_,0xfffffffe);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != 0x54062da5) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto switchD_02622bd4_default;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_0555771c = CONCAT44(DAT_0555771c._4_4_,iVar7);
        if (*puVar14 == 0) break;
      } while( true );
    }
    break;
  case 2:
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          if (-1 < (int)DAT_0555773c) {
            puVar2 = (ushort *)((DAT_0555773c & 0xffffffff) + (long)puVar14);
            if (puVar2 != (ushort *)0x0) {
              uVar11 = *puVar2;
              goto LAB_02623318;
            }
            break;
          }
          if ((int)DAT_0555773c != -1) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        uVar11 = 0xfffe;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_02623318;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,0xfffffffe);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != 0x617ff43e) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_02623314;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,iVar7);
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_02623314:
    uVar11 = 0xfffe;
LAB_02623318:
    local_808 = (undefined *)(ulong)uVar11;
    FUN_0277d4ac(&local_808);
    local_7ec = (uint)local_808;
    uVar6 = local_7ec & 0xffff;
    local_7e8 = local_808._4_4_;
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          uVar8 = (ulong)DAT_0555771c._4_4_;
          if (-1 < (long)DAT_0555771c) goto LAB_0262378c;
          if (DAT_0555771c._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_0555771c = CONCAT44(0xfffffffe,(int)DAT_0555771c);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != 0x69660415) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto switchD_02622bd4_default;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_0555771c = CONCAT44(iVar7,(int)DAT_0555771c);
        if (*puVar14 == 0) break;
      } while( true );
    }
    break;
  case 3:
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          if (-1 < (long)DAT_0555773c) {
            if ((ushort *)((ulong)DAT_0555773c._4_4_ + (long)puVar14) != (ushort *)0x0) {
              uVar11 = *(ushort *)((ulong)DAT_0555773c._4_4_ + (long)puVar14);
              goto LAB_0262343c;
            }
            break;
          }
          if (DAT_0555773c._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        uVar11 = 0xfffe;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_0262343c;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_0555773c = CONCAT44(0xfffffffe,(int)DAT_0555773c);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != -0x2ca0d7d2) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_02623438;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_0555773c = CONCAT44(iVar7,(int)DAT_0555773c);
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_02623438:
    uVar11 = 0xfffe;
LAB_0262343c:
    local_808 = (undefined *)(ulong)uVar11;
    FUN_0277d4ac(&local_808);
    local_7ec = (uint)local_808;
    uVar6 = local_7ec & 0xffff;
    local_7e8 = local_808._4_4_;
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          uVar8 = DAT_05557724 & 0xffffffff;
          if (-1 < (int)DAT_05557724) goto LAB_0262378c;
          if ((int)DAT_05557724 != -1) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_05557724 = CONCAT44(DAT_05557724._4_4_,0xfffffffe);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != -0x24b927fb) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto switchD_02622bd4_default;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_05557724 = CONCAT44(DAT_05557724._4_4_,iVar7);
        if (*puVar14 == 0) break;
      } while( true );
    }
    break;
  case 4:
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          if (-1 < (int)DAT_05557744) {
            puVar2 = (ushort *)((DAT_05557744 & 0xffffffff) + (long)puVar14);
            if (puVar2 != (ushort *)0x0) {
              uVar11 = *puVar2;
              goto LAB_02623560;
            }
            break;
          }
          if ((int)DAT_05557744 != -1) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        uVar11 = 0xfffe;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_02623560;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_05557744 = CONCAT44(DAT_05557744._4_4_,0xfffffffe);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != -0x11c0fe62) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0262355c;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_05557744 = CONCAT44(DAT_05557744._4_4_,iVar7);
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_0262355c:
    uVar11 = 0xfffe;
LAB_02623560:
    local_808 = (undefined *)(ulong)uVar11;
    FUN_0277d4ac(&local_808);
    local_7ec = (uint)local_808;
    uVar6 = local_7ec & 0xffff;
    local_7e8 = local_808._4_4_;
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          uVar8 = (ulong)DAT_05557724._4_4_;
          if (-1 < (long)DAT_05557724) goto LAB_0262378c;
          if (DAT_05557724._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_05557724 = CONCAT44(0xfffffffe,(int)DAT_05557724);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != -0x19d90e4b) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto switchD_02622bd4_default;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_05557724 = CONCAT44(iVar7,(int)DAT_05557724);
        if (*puVar14 == 0) break;
      } while( true );
    }
    break;
  case 5:
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          if (-1 < (long)DAT_05557744) {
            if ((ushort *)((ulong)DAT_05557744._4_4_ + (long)puVar14) != (ushort *)0x0) {
              uVar11 = *(ushort *)((ulong)DAT_05557744._4_4_ + (long)puVar14);
              goto LAB_02623684;
            }
            break;
          }
          if (DAT_05557744._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        uVar11 = 0xfffe;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_02623684;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_05557744 = CONCAT44(0xfffffffe,(int)DAT_05557744);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != -0x566084b2) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_02623680;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_05557744 = CONCAT44(iVar7,(int)DAT_05557744);
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_02623680:
    uVar11 = 0xfffe;
LAB_02623684:
    local_808 = (undefined *)(ulong)uVar11;
    FUN_0277d4ac(&local_808);
    local_7ec = (uint)local_808;
    uVar6 = local_7ec & 0xffff;
    local_7e8 = local_808._4_4_;
    if (*puVar14 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = -1;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = 0xffffffffffffffff;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          uVar8 = DAT_0555772c & 0xffffffff;
          if (-1 < (int)DAT_0555772c) goto LAB_0262378c;
          if ((int)DAT_0555772c != -1) break;
        }
        puVar12 = (uint *)(ulong)*puVar14;
        if ((*puVar14 == 0) || (puVar14 == puVar12)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + (lVar16 - (long)puVar12);
        if (lVar16 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
        DAT_0555772c = CONCAT44(DAT_0555772c._4_4_,0xfffffffe);
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != -0x5e79749b) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto switchD_02622bd4_default;
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        DAT_0555772c = CONCAT44(DAT_0555772c._4_4_,iVar7);
        if (*puVar14 == 0) break;
      } while( true );
    }
  }
  goto switchD_02622bd4_default;
LAB_0262378c:
  puVar5 = PTR_DAT_04bb43c0;
  if (((short *)(uVar8 + (long)puVar14) == (short *)0x0) ||
     (*(short *)(uVar8 + (long)puVar14) == 0 || uVar6 == 0xfffe)) goto switchD_02622bd4_default;
  local_800 = (undefined2)uVar6;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  local_7f8 = (uint *)0x0;
  local_7fe = local_808._2_1_;
  local_7fd = local_808._3_1_;
  local_808 = puVar1;
  local_7fc = local_7e8;
  uVar6 = FUN_0277d6c4(&local_800);
  if (*(long *)puVar5 == 0) {
LAB_02623850:
    if (local_7f8 != (uint *)0x0) goto LAB_02623858;
switchD_02623900_caseD_2:
    iVar7 = FUN_0277d6c4(&local_7ec);
    if ((((iVar7 - 0x3106U < 2) || (iVar7 == 0x1661)) || (iVar7 == 0x9c5)) &&
       (uVar8 = FUN_01a450c8(&local_7e0,&local_7ec), (uVar8 & 1) != 0)) {
      return 0;
    }
    goto LAB_02623980;
  }
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02623850;
  lVar16 = *(long *)PTR_DAT_04bc0428;
  uVar6 = FUN_0277d6c4(&local_7ec);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
     (puVar12 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8), puVar12 == (uint *)0x0
     )) goto LAB_02623850;
  local_7f8 = puVar12;
LAB_02623858:
  puVar12 = (uint *)((long)local_7f8 - (ulong)*local_7f8);
  if ((((*local_7f8 == 0) || (puVar12 == (uint *)0x0)) || (*puVar12 == 0)) ||
     ((uVar6 = puVar12[1], uVar6 == 0 || ((ulong)(ushort)puVar12[2] == 0))))
  goto switchD_02623900_caseD_0;
  lVar16 = 0xc;
  if (*(char *)((long)puVar12 + 10) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar12 + lVar16 + (ulong)(ushort)puVar12[2] * 8;
  if (lVar16 == 0) goto switchD_02623900_caseD_0;
  uVar3 = 0;
  if ((ulong)uVar6 != 0) {
    uVar3 = (uint)((ulong)((long)local_7f8 - lVar16) / (ulong)uVar6);
  }
  if (*puVar12 <= uVar3) {
    uVar3 = 0xffffffff;
  }
  if ((*(uint *)PTR_DAT_04bc00c8 <= uVar3) ||
     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2), 0xbc < uVar11))
  goto switchD_02623900_caseD_0;
  switch(uVar11) {
  default:
    goto switchD_02623900_caseD_2;
  case 0x51:
    lVar16 = (**(code **)(CONCAT44(uStack_7dc,local_7e0) + 0x20))(&local_7e0);
    uVar6 = FUN_0277d6c4(&local_7ec);
    if ((0x752 < (uVar6 >> 3 & 0x1fff)) ||
       ((*(uint *)(lVar16 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0))
    {
      iVar7 = FUN_0277d6c4(&local_7ec);
      switch(iVar7) {
      case 0xbd5:
        local_810 = 0xbd7;
        FUN_0277d4ac(&local_810);
        uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
        if ((uVar8 & 1) == 0) {
          local_818 = 0xbd8;
          FUN_0277d4ac(&local_818);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
          if ((uVar8 & 1) == 0) {
            local_820 = 0xbd9;
            FUN_0277d4ac(&local_820);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
            if ((uVar8 & 1) == 0) {
              local_828 = 0x3263;
              FUN_0277d4ac(&local_828);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_828);
              if ((uVar8 & 1) == 0) {
                local_830 = 0xbd6;
LAB_02623e50:
                FUN_0277d4ac(&local_830);
                puVar9 = &local_830;
                goto LAB_02624d48;
              }
            }
          }
        }
        break;
      case 0xbd6:
      case 0xbd7:
      case 0xbd8:
      case 0xbd9:
      case 0xbdb:
      case 0xbdc:
      case 0xbdd:
      case 0xbde:
      case 0xbe0:
      case 0xbe1:
      case 0xbe2:
      case 0xbe3:
        goto switchD_02623b08_caseD_b30;
      case 0xbda:
        local_810 = 0x3265;
        FUN_0277d4ac(&local_810);
        uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
        if ((uVar8 & 1) == 0) {
          local_818 = 0xbdd;
          FUN_0277d4ac(&local_818);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
          if ((uVar8 & 1) == 0) {
            local_820 = 0xbde;
            FUN_0277d4ac(&local_820);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
            if ((uVar8 & 1) == 0) {
              local_828 = 0x3264;
              FUN_0277d4ac(&local_828);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_828);
              if ((uVar8 & 1) == 0) {
                local_830 = 0xbdb;
                goto LAB_02623e50;
              }
            }
          }
        }
        break;
      case 0xbdf:
        local_810 = 0x3267;
        FUN_0277d4ac(&local_810);
        uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
        if ((uVar8 & 1) == 0) {
          local_818 = 0xbe2;
          FUN_0277d4ac(&local_818);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
          if ((uVar8 & 1) == 0) {
            local_820 = 0xbe3;
            FUN_0277d4ac(&local_820);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
            if ((uVar8 & 1) == 0) {
              local_828 = 0x3266;
              FUN_0277d4ac(&local_828);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_828);
              if ((uVar8 & 1) == 0) {
                local_830 = 0xbe0;
                goto LAB_02623e50;
              }
            }
          }
        }
        break;
      case 0xbe4:
        local_810 = 0xbe6;
        FUN_0277d4ac(&local_810);
        uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
        if ((uVar8 & 1) == 0) {
          local_818 = 0xbe7;
          FUN_0277d4ac(&local_818);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
          if ((uVar8 & 1) == 0) {
            local_820 = 0xbe8;
            FUN_0277d4ac(&local_820);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
            if ((uVar8 & 1) == 0) {
              local_828 = 0x3269;
              FUN_0277d4ac(&local_828);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_828);
              if ((uVar8 & 1) == 0) {
                local_830 = 0xbe5;
                goto LAB_02623e50;
              }
            }
          }
        }
        break;
      default:
        if (iVar7 != 0xa0a) {
          return 0;
        }
        local_810 = 0x3261;
        FUN_0277d4ac(&local_810);
        uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
        if ((uVar8 & 1) == 0) {
          local_818 = 0xa5b;
          FUN_0277d4ac(&local_818);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
          if ((uVar8 & 1) == 0) {
            local_820 = 0xa5c;
            FUN_0277d4ac(&local_820);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
            if ((uVar8 & 1) == 0) {
              local_828 = 0x3262;
              FUN_0277d4ac(&local_828);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_828);
              if ((uVar8 & 1) == 0) {
                local_830 = 0xa59;
                goto LAB_02623e50;
              }
            }
          }
        }
      }
    }
    break;
  case 0x56:
    lVar16 = (**(code **)(CONCAT44(uStack_7dc,local_7e0) + 0x20))(&local_7e0);
    uVar6 = FUN_0277d6c4(&local_7ec);
    if ((0x752 < (uVar6 >> 3 & 0x1fff)) ||
       ((*(uint *)(lVar16 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0))
    {
      iVar7 = FUN_0277d6c4(&local_7ec);
      if (iVar7 < 0xe7d) {
        switch(iVar7) {
        case 0xb2f:
          local_810 = 0xb31;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb32;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xef4;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb30;
LAB_02624d34:
                FUN_0277d4ac(&local_828);
                puVar9 = &local_828;
                goto LAB_02624d48;
              }
            }
          }
          break;
        case 0xb30:
        case 0xb31:
        case 0xb32:
        case 0xb34:
        case 0xb35:
        case 0xb36:
        case 0xb38:
        case 0xb39:
        case 0xb3a:
        case 0xb3c:
        case 0xb3d:
        case 0xb3e:
        case 0xb40:
        case 0xb41:
        case 0xb42:
        case 0xb44:
        case 0xb45:
        case 0xb46:
        case 0xb48:
        case 0xb49:
        case 0xb4a:
        case 0xb4c:
        case 0xb4d:
        case 0xb4e:
        case 0xb50:
        case 0xb51:
        case 0xb52:
        case 0xb54:
        case 0xb55:
        case 0xb56:
        case 0xb58:
        case 0xb59:
        case 0xb5a:
        case 0xb5c:
        case 0xb5d:
        case 0xb5e:
        case 0xb60:
        case 0xb61:
        case 0xb62:
        case 0xb64:
        case 0xb65:
        case 0xb66:
        case 0xb68:
        case 0xb69:
        case 0xb6a:
        case 0xb6c:
        case 0xb6d:
        case 0xb6e:
        case 0xb70:
        case 0xb71:
        case 0xb72:
        case 0xb74:
        case 0xb75:
        case 0xb76:
        case 0xb78:
        case 0xb79:
        case 0xb7a:
        case 0xb7c:
        case 0xb7d:
        case 0xb7e:
        case 0xb80:
        case 0xb81:
        case 0xb82:
        case 0xb84:
        case 0xb85:
        case 0xb86:
        case 0xb88:
        case 0xb89:
        case 0xb8a:
        case 0xb8c:
        case 0xb8d:
        case 0xb8e:
          goto switchD_02623b08_caseD_b30;
        case 0xb33:
          local_810 = 0xb35;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb36;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xef6;
LAB_02624c50:
              FUN_0277d4ac(&local_820);
              puVar9 = &local_820;
LAB_02624d48:
              uVar8 = FUN_01a44f9c(&local_7e0,puVar9);
              if ((uVar8 & 1) == 0) {
                return 0;
              }
            }
          }
          break;
        case 0xb37:
          local_810 = 0xb39;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb3a;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xef8;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb3b:
          local_810 = 0xb3d;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb3e;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xefa;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb3f:
          local_810 = 0xb41;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb42;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xefc;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb40;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb43:
          local_810 = 0xb45;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb46;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xefe;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb44;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb47:
          local_810 = 0xb49;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb4a;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf00;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb48;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb4b:
          local_810 = 0xb4d;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb4e;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf02;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb4f:
          local_810 = 0xb51;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb52;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf04;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb53:
          local_810 = 0xb55;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb56;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf06;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb57:
          local_810 = 0xb59;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb5a;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf08;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb5b:
          local_810 = 0xb5d;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb5e;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf0a;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb5c;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb5f:
          local_810 = 0xb61;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb62;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf0c;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb60;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb63:
          local_810 = 0xb65;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb66;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf0e;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb64;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb67:
          local_810 = 0xb69;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb6a;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf10;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb6b:
          local_810 = 0xb6d;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb6e;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf12;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb6f:
          local_810 = 0xb71;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb72;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf14;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb73:
          local_810 = 0xb75;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb76;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf16;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb74;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb77:
          local_810 = 0xb79;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb7a;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf18;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb78;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb7b:
          local_810 = 0xb7d;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb7e;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf1a;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xb7c;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xb7f:
          local_810 = 0xb81;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb82;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf1c;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb83:
          local_810 = 0xb85;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb86;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf1e;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb87:
          local_810 = 0xb89;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb8a;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf20;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb8b:
          local_810 = 0xb8d;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb8e;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf22;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xb8f:
          local_810 = 0xb91;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xb92;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf24;
              goto LAB_02624c50;
            }
          }
          break;
        default:
          if (iVar7 == 0x900) {
            local_810 = 0xa43;
            FUN_0277d4ac(&local_810);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
            if ((uVar8 & 1) == 0) {
              local_818 = 0xa44;
              FUN_0277d4ac(&local_818);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
              if ((uVar8 & 1) == 0) {
                local_820 = 0xef0;
                FUN_0277d4ac(&local_820);
                uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
                if ((uVar8 & 1) == 0) {
                  local_828 = 0xa42;
                  goto LAB_02624d34;
                }
              }
            }
          }
          else {
            if (iVar7 != 0x901) {
              return 0;
            }
            local_810 = 0xa46;
            FUN_0277d4ac(&local_810);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
            if ((uVar8 & 1) == 0) {
              local_818 = 0xa47;
              FUN_0277d4ac(&local_818);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
              if ((uVar8 & 1) == 0) {
                local_820 = 0xef2;
                FUN_0277d4ac(&local_820);
                uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
                if ((uVar8 & 1) == 0) {
                  local_828 = 0xa45;
                  goto LAB_02624d34;
                }
              }
            }
          }
        }
      }
      else {
        switch(iVar7) {
        case 0xe7d:
          local_810 = 0xe7f;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe80;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf3a;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xe7e;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xe7e:
        case 0xe7f:
        case 0xe80:
        case 0xe82:
        case 0xe83:
        case 0xe84:
        case 0xe86:
        case 0xe87:
        case 0xe89:
        case 0xe8a:
        case 0xe8c:
        case 0xe8d:
        case 0xe8e:
        case 0xe90:
        case 0xe91:
        case 0xe93:
        case 0xe94:
        case 0xe95:
        case 0xe97:
        case 0xe98:
        case 0xe99:
        case 0xe9b:
        case 0xe9c:
        case 0xe9e:
        case 0xe9f:
        case 0xea1:
        case 0xea2:
        case 0xea3:
        case 0xea5:
        case 0xea6:
        case 0xea8:
        case 0xea9:
        case 0xeab:
        case 0xeac:
        case 0xead:
        case 0xeaf:
        case 0xeb0:
        case 0xeb1:
        case 0xeb3:
        case 0xeb4:
        case 0xeb6:
        case 0xeb7:
          goto switchD_02623b08_caseD_b30;
        case 0xe81:
          local_810 = 0xe83;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe84;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf3c;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xe85:
          local_810 = 0xe86;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe87;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf3e;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xe88:
          local_810 = 0xe89;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe8a;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf40;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xe8b:
          local_810 = 0xe8d;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe8e;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf42;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xe8c;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xe8f:
          local_810 = 0xe90;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe91;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf44;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xe92:
          local_810 = 0xe94;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe95;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf46;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xe93;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xe96:
          local_810 = 0xe98;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe99;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf48;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xe97;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xe9a:
          local_810 = 0xe9b;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe9c;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf4a;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xe9d:
          local_810 = 0xe9e;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xe9f;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf4c;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xea0:
          local_810 = 0xea2;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xea3;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf4e;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xea1;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xea4:
          local_810 = 0xea5;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xea6;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf50;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xea7:
          local_810 = 0xea8;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xea9;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf52;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xeaa:
          local_810 = 0xeac;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xead;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf54;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xeab;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xeae:
          local_810 = 0xeb0;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xeb1;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf56;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xeaf;
                goto LAB_02624d34;
              }
            }
          }
          break;
        case 0xeb2:
          local_810 = 0xeb3;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xeb4;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf58;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xeb5:
          local_810 = 0xeb6;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xeb7;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf5a;
              goto LAB_02624c50;
            }
          }
          break;
        case 0xeb8:
          local_810 = 0xeba;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xebb;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf5c;
              FUN_0277d4ac(&local_820);
              uVar8 = FUN_01a44f9c(&local_7e0,&local_820);
              if ((uVar8 & 1) == 0) {
                local_828 = 0xeb9;
                goto LAB_02624d34;
              }
            }
          }
          break;
        default:
          if (iVar7 != 0x1437) {
            return 0;
          }
          local_810 = 0xec2;
          FUN_0277d4ac(&local_810);
          uVar8 = FUN_01a44f9c(&local_7e0,&local_810);
          if ((uVar8 & 1) == 0) {
            local_818 = 0xec3;
            FUN_0277d4ac(&local_818);
            uVar8 = FUN_01a44f9c(&local_7e0,&local_818);
            if ((uVar8 & 1) == 0) {
              local_820 = 0xf5e;
              goto LAB_02624c50;
            }
          }
        }
      }
    }
    break;
  case 0x57:
    uVar8 = FUN_01b04458(&local_808);
    if ((uVar8 & 1) == 0) {
      local_7e4 = 3;
      bVar15 = true;
    }
    else {
      bVar4 = true;
    }
  case 0:
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
switchD_02623900_caseD_0:
    lVar16 = (**(code **)(CONCAT44(uStack_7dc,local_7e0) + 0x20))(&local_7e0);
    uVar6 = FUN_0277d6c4(&local_7ec);
    if (0x752 < (uVar6 >> 3 & 0x1fff)) {
      return 0;
    }
    if ((*(uint *)(lVar16 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0)
    {
      return 0;
    }
  }
LAB_02623980:
  if ((int)local_6c < (int)local_7e4) {
    local_6c = local_7e4;
  }
switchD_02622bd4_default:
  iVar17 = iVar17 + 1;
  if (iVar17 == 6) {
    if (!bVar4) {
      return local_6c;
    }
    fVar18 = (float)FUN_026253e0(param_1,param_3);
    uVar6 = (uint)fVar18;
    if (0xfffea136 < uVar6 - 0x15f91) {
      if (60000 < uVar6) {
        return 4;
      }
      if (30000 < uVar6) {
        return 3;
      }
      if (uVar6 < 0x2711) {
        uVar6 = 3;
        if (!bVar15) {
          uVar6 = 1;
        }
        return uVar6;
      }
      uVar6 = 2;
      if (bVar15) {
        uVar6 = 3;
      }
      return uVar6;
    }
switchD_02623b08_caseD_b30:
    return 0;
  }
  goto LAB_02622b9c;
}

