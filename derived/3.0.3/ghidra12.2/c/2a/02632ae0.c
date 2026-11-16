
undefined8 FUN_02632ae0(long param_1,uint *param_2,uint param_3,long param_4)

{
  ushort *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  ushort uVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  long lVar16;
  uint local_48;
  uint local_44;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar6 = param_3 & 0xffff;
  *(undefined2 *)(param_2 + 0x12) = 0;
  if (0x7ff < uVar6) {
    return 0;
  }
  if ((((*(byte *)(param_4 + (ulong)(uVar6 >> 3)) >> (ulong)(param_3 & 7) & 1) == 0) ||
      (uVar6 = uVar6 - *(ushort *)(param_1 + 0xea6e0), *(uint *)(param_1 + 0xea6c0) <= uVar6)) ||
     (puVar15 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar6 * 8),
     puVar15 == (uint *)0x0)) {
LAB_02633950:
    uVar7 = 0;
  }
  else {
    if (*puVar15 != 0) {
      cVar8 = DAT_055576f0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
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
            puVar1 = (ushort *)((DAT_05557734 & 0xffffffff) + (long)puVar15);
            if (puVar1 != (ushort *)0x0) {
              uVar11 = *puVar1;
              goto LAB_02632c58;
            }
            break;
          }
          if ((int)DAT_05557734 != -1) break;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        uVar11 = 0xfffe;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_02632c58;
        lVar16 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
        if (lVar16 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        DAT_05557734 = CONCAT44(DAT_05557734._4_4_,0xfffffffe);
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar16 + 4);
        while (piVar14[-1] != 0x1bbfa75e) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_02632c54;
        }
        iVar3 = 0;
        if (*piVar14 != -1) {
          iVar3 = *piVar14;
        }
        DAT_05557734 = CONCAT44(DAT_05557734._4_4_,iVar3);
        if (*puVar15 == 0) break;
      } while( true );
    }
LAB_02632c54:
    uVar11 = 0xfffe;
LAB_02632c58:
    local_48 = (uint)uVar11;
    local_44 = 0;
    FUN_0277d4ac(&local_48);
    *param_2 = local_48;
    param_2[1] = local_44;
    puVar5 = PTR_DAT_04bb43c0;
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_2);
    puVar4 = PTR_DAT_04bb37e0;
    if (*(long *)puVar5 == 0) {
LAB_02632d9c:
      cVar8 = '\0';
      *(undefined2 *)param_2 = *(undefined2 *)PTR_DAT_04bb37e0;
      *(undefined *)((long)param_2 + 2) = puVar4[2];
      *(undefined *)((long)param_2 + 3) = puVar4[3];
      param_2[1] = *(uint *)(puVar4 + 4);
      uVar6 = *puVar15;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02632d9c;
      if (*puVar15 == 0) {
LAB_02632eb8:
        uVar10 = 0;
      }
      else {
        cVar8 = DAT_055576f0;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            if (-1 < DAT_05557714) {
              if ((undefined1 *)((ulong)DAT_05557714._4_4_ + (long)puVar15) == (undefined1 *)0x0)
              goto LAB_02632eb8;
              uVar10 = *(undefined1 *)((ulong)DAT_05557714._4_4_ + (long)puVar15);
              goto LAB_02632ebc;
            }
            if (DAT_05557714._4_4_ != 0xffffffff) goto LAB_02632eb8;
          }
          puVar13 = (uint *)(ulong)*puVar15;
          uVar10 = 0;
          if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_02632ebc;
          lVar16 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
          if (lVar16 == 0) goto LAB_02632eb8;
          uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
          DAT_05557714 = CONCAT44(0xfffffffe,(undefined4)DAT_05557714);
          uVar10 = 0;
          if (uVar12 == 0) goto LAB_02632ebc;
          piVar14 = (int *)(lVar16 + 4);
          while (piVar14[-1] != 0x13a65775) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar10 = 0;
              goto LAB_02632ebc;
            }
          }
          iVar3 = 0;
          if (*piVar14 != -1) {
            iVar3 = *piVar14;
          }
          DAT_05557714 = CONCAT44(iVar3,(undefined4)DAT_05557714);
        } while (*puVar15 != 0);
        uVar10 = 0;
      }
LAB_02632ebc:
      *(undefined1 *)(param_2 + 2) = uVar10;
      cVar8 = '\x01';
      uVar6 = *puVar15;
    }
    if (uVar6 != 0) {
      cVar9 = DAT_055576f0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
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
            if ((ushort *)((ulong)DAT_05557734._4_4_ + (long)puVar15) != (ushort *)0x0) {
              uVar11 = *(ushort *)((ulong)DAT_05557734._4_4_ + (long)puVar15);
              goto LAB_02632ed0;
            }
            break;
          }
          if (DAT_05557734._4_4_ != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        uVar11 = 0xfffe;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_02632ed0;
        lVar16 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
        if (lVar16 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        DAT_05557734 = CONCAT44(0xfffffffe,(int)DAT_05557734);
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar16 + 4);
        while (piVar14[-1] != 0x5c1fdd8e) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_02632ecc;
        }
        iVar3 = 0;
        if (*piVar14 != -1) {
          iVar3 = *piVar14;
        }
        DAT_05557734 = CONCAT44(iVar3,(int)DAT_05557734);
        if (*puVar15 == 0) break;
      } while( true );
    }
LAB_02632ecc:
    uVar11 = 0xfffe;
LAB_02632ed0:
    local_48 = (uint)uVar11;
    local_44 = 0;
    FUN_0277d4ac(&local_48);
    lVar16 = *(long *)puVar5;
    param_2[3] = local_48;
    param_2[4] = local_44;
    uVar6 = FUN_0277d6c4();
    if (*(long *)puVar5 == 0) {
LAB_02633004:
      uVar6 = *(uint *)(puVar4 + 4);
      param_2[3] = *(uint *)puVar4;
      param_2[4] = uVar6;
      uVar6 = *puVar15;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02633004;
      if (*puVar15 == 0) {
LAB_02633108:
        uVar10 = 0;
      }
      else {
        cVar9 = DAT_055576f0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
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
            if (-1 < (int)DAT_0555771c) {
              puVar2 = (undefined1 *)((DAT_0555771c & 0xffffffff) + (long)puVar15);
              if (puVar2 == (undefined1 *)0x0) goto LAB_02633108;
              uVar10 = *puVar2;
              goto LAB_0263310c;
            }
            if ((int)DAT_0555771c != -1) goto LAB_02633108;
          }
          puVar13 = (uint *)(ulong)*puVar15;
          uVar10 = 0;
          if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_0263310c;
          lVar16 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
          if (lVar16 == 0) goto LAB_02633108;
          uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
          DAT_0555771c = CONCAT44(DAT_0555771c._4_4_,0xfffffffe);
          uVar10 = 0;
          if (uVar12 == 0) goto LAB_0263310c;
          piVar14 = (int *)(lVar16 + 4);
          while (piVar14[-1] != 0x54062da5) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar10 = 0;
              goto LAB_0263310c;
            }
          }
          iVar3 = 0;
          if (*piVar14 != -1) {
            iVar3 = *piVar14;
          }
          DAT_0555771c = CONCAT44(DAT_0555771c._4_4_,iVar3);
        } while (*puVar15 != 0);
        uVar10 = 0;
      }
LAB_0263310c:
      *(undefined1 *)(param_2 + 5) = uVar10;
      cVar8 = cVar8 + '\x01';
      uVar6 = *puVar15;
    }
    if (uVar6 != 0) {
      cVar9 = DAT_055576f0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
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
            puVar1 = (ushort *)((DAT_0555773c & 0xffffffff) + (long)puVar15);
            if (puVar1 != (ushort *)0x0) {
              uVar11 = *puVar1;
              goto LAB_02633120;
            }
            break;
          }
          if ((int)DAT_0555773c != -1) break;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        uVar11 = 0xfffe;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_02633120;
        lVar16 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
        if (lVar16 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,0xfffffffe);
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar16 + 4);
        while (piVar14[-1] != 0x617ff43e) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0263311c;
        }
        iVar3 = 0;
        if (*piVar14 != -1) {
          iVar3 = *piVar14;
        }
        DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,iVar3);
        if (*puVar15 == 0) break;
      } while( true );
    }
LAB_0263311c:
    uVar11 = 0xfffe;
LAB_02633120:
    local_48 = (uint)uVar11;
    local_44 = 0;
    FUN_0277d4ac(&local_48);
    lVar16 = *(long *)puVar5;
    param_2[6] = local_48;
    param_2[7] = local_44;
    uVar6 = FUN_0277d6c4();
    if (*(long *)puVar5 == 0) {
LAB_02633254:
      uVar6 = *(uint *)(puVar4 + 4);
      param_2[6] = *(uint *)puVar4;
      param_2[7] = uVar6;
      uVar6 = *puVar15;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02633254;
      if (*puVar15 == 0) {
LAB_02633358:
        uVar10 = 0;
      }
      else {
        cVar9 = DAT_055576f0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
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
            if (-1 < (long)DAT_0555771c) {
              if ((undefined1 *)((ulong)DAT_0555771c._4_4_ + (long)puVar15) == (undefined1 *)0x0)
              goto LAB_02633358;
              uVar10 = *(undefined1 *)((ulong)DAT_0555771c._4_4_ + (long)puVar15);
              goto LAB_0263335c;
            }
            if (DAT_0555771c._4_4_ != 0xffffffff) goto LAB_02633358;
          }
          puVar13 = (uint *)(ulong)*puVar15;
          uVar10 = 0;
          if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_0263335c;
          lVar16 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
          if (lVar16 == 0) goto LAB_02633358;
          uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
          DAT_0555771c = CONCAT44(0xfffffffe,(int)DAT_0555771c);
          uVar10 = 0;
          if (uVar12 == 0) goto LAB_0263335c;
          piVar14 = (int *)(lVar16 + 4);
          while (piVar14[-1] != 0x69660415) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar10 = 0;
              goto LAB_0263335c;
            }
          }
          iVar3 = 0;
          if (*piVar14 != -1) {
            iVar3 = *piVar14;
          }
          DAT_0555771c = CONCAT44(iVar3,(int)DAT_0555771c);
        } while (*puVar15 != 0);
        uVar10 = 0;
      }
LAB_0263335c:
      *(undefined1 *)(param_2 + 8) = uVar10;
      cVar8 = cVar8 + '\x01';
      uVar6 = *puVar15;
    }
    if (uVar6 != 0) {
      cVar9 = DAT_055576f0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
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
            if ((ushort *)((ulong)DAT_0555773c._4_4_ + (long)puVar15) != (ushort *)0x0) {
              uVar11 = *(ushort *)((ulong)DAT_0555773c._4_4_ + (long)puVar15);
              goto LAB_02633370;
            }
            break;
          }
          if (DAT_0555773c._4_4_ != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        uVar11 = 0xfffe;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_02633370;
        lVar16 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
        if (lVar16 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        DAT_0555773c = CONCAT44(0xfffffffe,(int)DAT_0555773c);
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar16 + 4);
        while (piVar14[-1] != -0x2ca0d7d2) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0263336c;
        }
        iVar3 = 0;
        if (*piVar14 != -1) {
          iVar3 = *piVar14;
        }
        DAT_0555773c = CONCAT44(iVar3,(int)DAT_0555773c);
        if (*puVar15 == 0) break;
      } while( true );
    }
LAB_0263336c:
    uVar11 = 0xfffe;
LAB_02633370:
    local_48 = (uint)uVar11;
    local_44 = 0;
    FUN_0277d4ac(&local_48);
    lVar16 = *(long *)puVar5;
    param_2[9] = local_48;
    param_2[10] = local_44;
    uVar6 = FUN_0277d6c4();
    if (*(long *)puVar5 == 0) {
LAB_026334a4:
      uVar6 = *(uint *)(puVar4 + 4);
      param_2[9] = *(uint *)puVar4;
      param_2[10] = uVar6;
      uVar6 = *puVar15;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_026334a4;
      if (*puVar15 == 0) {
LAB_026335a8:
        uVar10 = 0;
      }
      else {
        cVar9 = DAT_055576f0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
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
            if (-1 < (int)DAT_05557724) {
              puVar2 = (undefined1 *)((DAT_05557724 & 0xffffffff) + (long)puVar15);
              if (puVar2 == (undefined1 *)0x0) goto LAB_026335a8;
              uVar10 = *puVar2;
              goto LAB_026335ac;
            }
            if ((int)DAT_05557724 != -1) goto LAB_026335a8;
          }
          puVar13 = (uint *)(ulong)*puVar15;
          uVar10 = 0;
          if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_026335ac;
          lVar16 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
          if (lVar16 == 0) goto LAB_026335a8;
          uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
          DAT_05557724 = CONCAT44(DAT_05557724._4_4_,0xfffffffe);
          uVar10 = 0;
          if (uVar12 == 0) goto LAB_026335ac;
          piVar14 = (int *)(lVar16 + 4);
          while (piVar14[-1] != -0x24b927fb) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar10 = 0;
              goto LAB_026335ac;
            }
          }
          iVar3 = 0;
          if (*piVar14 != -1) {
            iVar3 = *piVar14;
          }
          DAT_05557724 = CONCAT44(DAT_05557724._4_4_,iVar3);
        } while (*puVar15 != 0);
        uVar10 = 0;
      }
LAB_026335ac:
      *(undefined1 *)(param_2 + 0xb) = uVar10;
      cVar8 = cVar8 + '\x01';
      uVar6 = *puVar15;
    }
    if (uVar6 != 0) {
      cVar9 = DAT_055576f0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
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
            puVar1 = (ushort *)((DAT_05557744 & 0xffffffff) + (long)puVar15);
            if (puVar1 != (ushort *)0x0) {
              uVar11 = *puVar1;
              goto LAB_026335c0;
            }
            break;
          }
          if ((int)DAT_05557744 != -1) break;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        uVar11 = 0xfffe;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_026335c0;
        lVar16 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
        if (lVar16 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        DAT_05557744 = CONCAT44(DAT_05557744._4_4_,0xfffffffe);
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar16 + 4);
        while (piVar14[-1] != -0x11c0fe62) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_026335bc;
        }
        iVar3 = 0;
        if (*piVar14 != -1) {
          iVar3 = *piVar14;
        }
        DAT_05557744 = CONCAT44(DAT_05557744._4_4_,iVar3);
        if (*puVar15 == 0) break;
      } while( true );
    }
LAB_026335bc:
    uVar11 = 0xfffe;
LAB_026335c0:
    local_48 = (uint)uVar11;
    local_44 = 0;
    FUN_0277d4ac(&local_48);
    lVar16 = *(long *)puVar5;
    param_2[0xc] = local_48;
    param_2[0xd] = local_44;
    uVar6 = FUN_0277d6c4();
    if (*(long *)puVar5 == 0) {
LAB_026336f4:
      uVar6 = *(uint *)(puVar4 + 4);
      param_2[0xc] = *(uint *)puVar4;
      param_2[0xd] = uVar6;
      uVar6 = *puVar15;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_026336f4;
      if (*puVar15 == 0) {
LAB_026337f8:
        uVar10 = 0;
      }
      else {
        cVar9 = DAT_055576f0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
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
            if (-1 < (long)DAT_05557724) {
              if ((undefined1 *)((ulong)DAT_05557724._4_4_ + (long)puVar15) == (undefined1 *)0x0)
              goto LAB_026337f8;
              uVar10 = *(undefined1 *)((ulong)DAT_05557724._4_4_ + (long)puVar15);
              goto LAB_026337fc;
            }
            if (DAT_05557724._4_4_ != 0xffffffff) goto LAB_026337f8;
          }
          puVar13 = (uint *)(ulong)*puVar15;
          uVar10 = 0;
          if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_026337fc;
          lVar16 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
          if (lVar16 == 0) goto LAB_026337f8;
          uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
          DAT_05557724 = CONCAT44(0xfffffffe,(int)DAT_05557724);
          uVar10 = 0;
          if (uVar12 == 0) goto LAB_026337fc;
          piVar14 = (int *)(lVar16 + 4);
          while (piVar14[-1] != -0x19d90e4b) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar10 = 0;
              goto LAB_026337fc;
            }
          }
          iVar3 = 0;
          if (*piVar14 != -1) {
            iVar3 = *piVar14;
          }
          DAT_05557724 = CONCAT44(iVar3,(int)DAT_05557724);
        } while (*puVar15 != 0);
        uVar10 = 0;
      }
LAB_026337fc:
      *(undefined1 *)(param_2 + 0xe) = uVar10;
      cVar8 = cVar8 + '\x01';
      uVar6 = *puVar15;
    }
    if (uVar6 != 0) {
      cVar9 = DAT_055576f0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
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
            if ((ushort *)((ulong)DAT_05557744._4_4_ + (long)puVar15) != (ushort *)0x0) {
              uVar11 = *(ushort *)((ulong)DAT_05557744._4_4_ + (long)puVar15);
              goto LAB_02633810;
            }
            break;
          }
          if (DAT_05557744._4_4_ != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        uVar11 = 0xfffe;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_02633810;
        lVar16 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
        if (lVar16 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        DAT_05557744 = CONCAT44(0xfffffffe,(int)DAT_05557744);
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar16 + 4);
        while (piVar14[-1] != -0x566084b2) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0263380c;
        }
        iVar3 = 0;
        if (*piVar14 != -1) {
          iVar3 = *piVar14;
        }
        DAT_05557744 = CONCAT44(iVar3,(int)DAT_05557744);
        if (*puVar15 == 0) break;
      } while( true );
    }
LAB_0263380c:
    uVar11 = 0xfffe;
LAB_02633810:
    local_48 = (uint)uVar11;
    local_44 = 0;
    FUN_0277d4ac(&local_48);
    lVar16 = *(long *)puVar5;
    param_2[0xf] = local_48;
    param_2[0x10] = local_44;
    uVar6 = FUN_0277d6c4();
    if (*(long *)puVar5 == 0) {
LAB_02633944:
      uVar6 = *(uint *)(puVar4 + 4);
      param_2[0xf] = *(uint *)puVar4;
      param_2[0x10] = uVar6;
      if (cVar8 == '\0') goto LAB_02633950;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02633944;
      if (*puVar15 == 0) {
LAB_02633980:
        uVar10 = 0;
      }
      else {
        cVar9 = DAT_055576f0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
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
            if (-1 < (int)DAT_0555772c) {
              puVar2 = (undefined1 *)((DAT_0555772c & 0xffffffff) + (long)puVar15);
              if (puVar2 == (undefined1 *)0x0) goto LAB_02633980;
              uVar10 = *puVar2;
              goto LAB_02633984;
            }
            if ((int)DAT_0555772c != -1) goto LAB_02633980;
          }
          puVar13 = (uint *)(ulong)*puVar15;
          uVar10 = 0;
          if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_02633984;
          lVar16 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar15 + (lVar16 - (long)puVar13);
          if (lVar16 == 0) goto LAB_02633980;
          uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
          DAT_0555772c = CONCAT44(DAT_0555772c._4_4_,0xfffffffe);
          uVar10 = 0;
          if (uVar12 == 0) goto LAB_02633984;
          piVar14 = (int *)(lVar16 + 4);
          while (piVar14[-1] != -0x5e79749b) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar10 = 0;
              goto LAB_02633984;
            }
          }
          iVar3 = 0;
          if (*piVar14 != -1) {
            iVar3 = *piVar14;
          }
          DAT_0555772c = CONCAT44(DAT_0555772c._4_4_,iVar3);
        } while (*puVar15 != 0);
        uVar10 = 0;
      }
LAB_02633984:
      cVar8 = cVar8 + '\x01';
      *(undefined1 *)(param_2 + 0x11) = uVar10;
    }
    uVar7 = 1;
    *(char *)(param_2 + 0x12) = cVar8;
    *(undefined1 *)((long)param_2 + 0x49) = 1;
  }
  return uVar7;
}

