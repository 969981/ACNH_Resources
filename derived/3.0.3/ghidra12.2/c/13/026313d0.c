
void FUN_026313d0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  ulong uVar16;
  uint *puVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  bool bVar21;
  int iVar22;
  ulong uVar23;
  long *plVar24;
  undefined *local_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  uint *local_7f0;
  undefined8 local_7e8;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_70;
  undefined4 local_6c;
  
  if (param_2 != (long *)0x0) {
    local_7e0 = PTR_DAT_04bbfe60 + 0x10;
    uVar10 = nn::os::GetSystemTick();
    local_84 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
    local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
    local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
    memcpy(auStack_7d8,param_2 + 1,0x754);
    lVar13 = FUN_01a45204(&local_7e0);
    uVar23 = 0;
    do {
      if ((*(uint *)(lVar13 + (uVar23 >> 5) * 4) >> (ulong)((uint)uVar23 & 0x1f) & 1) != 0)
      goto LAB_026314b0;
      uVar10 = (uint)uVar23 + 1;
      uVar23 = (ulong)uVar10;
    } while (uVar10 != 15000);
    uVar23 = 0;
LAB_026314b0:
    lVar14 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    puVar8 = PTR_DAT_04bbfe58;
    iVar22 = 15000;
    do {
      if ((*(uint *)(lVar14 + (ulong)(iVar22 - 1U >> 5) * 4) >> (ulong)(iVar22 - 1U & 0x1f) & 1) !=
          0) break;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    if (iVar22 != (int)uVar23) {
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      plVar24 = (long *)PTR_DAT_04bb37e0;
LAB_02631554:
      plVar2 = (long *)(puVar8 + uVar23 * 8);
      if (0x752 < (uint)(uVar23 >> 3)) {
        plVar2 = (long *)puVar8;
      }
      plVar3 = plVar24;
      if ((uint)uVar23 < 0x3a99) {
        plVar3 = plVar2;
      }
      local_800 = (undefined *)*plVar3;
      iVar11 = FUN_0277d6c4(&local_800);
      if (iVar11 < 0xfc2) {
        if (iVar11 < 0xcc6) {
          if (iVar11 < 0x5e5) {
            if (((iVar11 != 0x408) && (iVar11 != 0x457)) && (iVar11 != 0x5e0)) goto LAB_0263179c;
          }
          else if (iVar11 < 0x6df) {
            if ((iVar11 != 0x5e5) && (iVar11 != 0x6d6)) goto LAB_0263179c;
          }
          else if ((iVar11 != 0x6df) && (iVar11 != 0x745)) goto LAB_0263179c;
          goto LAB_026316d0;
        }
        if (0xdfb < iVar11) {
          if ((iVar11 != 0xdfc) && (iVar11 != 0xeeb)) goto LAB_0263179c;
          goto LAB_026316d0;
        }
        if ((iVar11 - 0xd52U < 3) || (iVar11 - 0xcc6U < 2)) goto LAB_026316d0;
LAB_0263179c:
        local_800 = (undefined *)*plVar3;
        uVar9 = FUN_0261eff4(&local_800);
        if (((uVar9 != 0x4c7b) &&
            (uVar10 = (uint)uVar9 - (uint)*(ushort *)(param_1 + 0xea6e0),
            uVar10 < *(uint *)(param_1 + 0xea6c0))) &&
           (puVar19 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar10 * 8),
           puVar19 != (uint *)0x0)) {
          iVar11 = 0;
LAB_026317e4:
          local_7e8 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_7e8);
          switch(iVar11) {
          case 0:
            if (*puVar19 != 0) {
              cVar15 = DAT_055576f0;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  DAT_055576f0 = '\x01';
                  DAT_055576f4 = 0xffffffffffffffff;
                  DAT_055576fc = 0xffffffffffffffff;
                  DAT_05557704 = 0xffffffffffffffff;
                  DAT_0555770c = 0xffffffffffffffff;
                  DAT_05557714 = 0xffffffffffffffff;
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
                  uVar16 = DAT_05557734 & 0xffffffff;
                  if (-1 < (int)DAT_05557734) goto LAB_02631df4;
                  if ((int)DAT_05557734 != -1) break;
                }
                puVar20 = (uint *)(ulong)*puVar19;
                uVar9 = 0xfffe;
                if ((*puVar19 == 0) || (puVar19 == puVar20)) goto LAB_02631e08;
                lVar14 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar19 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
                DAT_05557734 = CONCAT44(DAT_05557734._4_4_,0xfffffffe);
                if (uVar16 == 0) break;
                piVar18 = (int *)(lVar14 + 4);
                while (piVar18[-1] != 0x1bbfa75e) {
                  piVar18 = piVar18 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_02631e04;
                }
                iVar12 = 0;
                if (*piVar18 != -1) {
                  iVar12 = *piVar18;
                }
                DAT_05557734 = CONCAT44(DAT_05557734._4_4_,iVar12);
                if (*puVar19 == 0) break;
              } while( true );
            }
            break;
          case 1:
            if (*puVar19 != 0) {
              cVar15 = DAT_055576f0;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  DAT_055576f0 = '\x01';
                  DAT_055576f4 = 0xffffffffffffffff;
                  DAT_055576fc = 0xffffffffffffffff;
                  DAT_05557704 = 0xffffffffffffffff;
                  DAT_0555770c = 0xffffffffffffffff;
                  DAT_05557714 = 0xffffffffffffffff;
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
                  uVar16 = (ulong)DAT_05557734._4_4_;
                  if (-1 < (long)DAT_05557734) goto LAB_02631df4;
                  if (DAT_05557734._4_4_ != 0xffffffff) break;
                }
                puVar20 = (uint *)(ulong)*puVar19;
                uVar9 = 0xfffe;
                if ((*puVar19 == 0) || (puVar19 == puVar20)) goto LAB_02631e08;
                lVar14 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar19 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
                DAT_05557734 = CONCAT44(0xfffffffe,(int)DAT_05557734);
                if (uVar16 == 0) break;
                piVar18 = (int *)(lVar14 + 4);
                while (piVar18[-1] != 0x5c1fdd8e) {
                  piVar18 = piVar18 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_02631e04;
                }
                iVar12 = 0;
                if (*piVar18 != -1) {
                  iVar12 = *piVar18;
                }
                DAT_05557734 = CONCAT44(iVar12,(int)DAT_05557734);
                if (*puVar19 == 0) break;
              } while( true );
            }
            break;
          case 2:
            if (*puVar19 != 0) {
              cVar15 = DAT_055576f0;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  DAT_055576f0 = '\x01';
                  DAT_055576f4 = 0xffffffffffffffff;
                  DAT_055576fc = 0xffffffffffffffff;
                  DAT_05557704 = 0xffffffffffffffff;
                  DAT_0555770c = 0xffffffffffffffff;
                  DAT_05557714 = 0xffffffffffffffff;
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
                  uVar16 = DAT_0555773c & 0xffffffff;
                  if (-1 < (int)DAT_0555773c) goto LAB_02631df4;
                  if ((int)DAT_0555773c != -1) break;
                }
                puVar20 = (uint *)(ulong)*puVar19;
                uVar9 = 0xfffe;
                if ((*puVar19 == 0) || (puVar19 == puVar20)) goto LAB_02631e08;
                lVar14 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar19 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
                DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,0xfffffffe);
                if (uVar16 == 0) break;
                piVar18 = (int *)(lVar14 + 4);
                while (piVar18[-1] != 0x617ff43e) {
                  piVar18 = piVar18 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_02631e04;
                }
                iVar12 = 0;
                if (*piVar18 != -1) {
                  iVar12 = *piVar18;
                }
                DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,iVar12);
                if (*puVar19 == 0) break;
              } while( true );
            }
            break;
          case 3:
            if (*puVar19 != 0) {
              cVar15 = DAT_055576f0;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  DAT_055576f0 = '\x01';
                  DAT_055576f4 = 0xffffffffffffffff;
                  DAT_055576fc = 0xffffffffffffffff;
                  DAT_05557704 = 0xffffffffffffffff;
                  DAT_0555770c = 0xffffffffffffffff;
                  DAT_05557714 = 0xffffffffffffffff;
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
                  uVar16 = (ulong)DAT_0555773c._4_4_;
                  if (-1 < (long)DAT_0555773c) goto LAB_02631df4;
                  if (DAT_0555773c._4_4_ != 0xffffffff) break;
                }
                puVar20 = (uint *)(ulong)*puVar19;
                uVar9 = 0xfffe;
                if ((*puVar19 == 0) || (puVar19 == puVar20)) goto LAB_02631e08;
                lVar14 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar19 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
                DAT_0555773c = CONCAT44(0xfffffffe,(int)DAT_0555773c);
                if (uVar16 == 0) break;
                piVar18 = (int *)(lVar14 + 4);
                while (piVar18[-1] != -0x2ca0d7d2) {
                  piVar18 = piVar18 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_02631e04;
                }
                iVar12 = 0;
                if (*piVar18 != -1) {
                  iVar12 = *piVar18;
                }
                DAT_0555773c = CONCAT44(iVar12,(int)DAT_0555773c);
                if (*puVar19 == 0) break;
              } while( true );
            }
            break;
          case 4:
            if (*puVar19 != 0) {
              cVar15 = DAT_055576f0;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  DAT_055576f0 = '\x01';
                  DAT_055576f4 = 0xffffffffffffffff;
                  DAT_055576fc = 0xffffffffffffffff;
                  DAT_05557704 = 0xffffffffffffffff;
                  DAT_0555770c = 0xffffffffffffffff;
                  DAT_05557714 = 0xffffffffffffffff;
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
                  uVar16 = DAT_05557744 & 0xffffffff;
                  if (-1 < (int)DAT_05557744) goto LAB_02631df4;
                  if ((int)DAT_05557744 != -1) break;
                }
                puVar20 = (uint *)(ulong)*puVar19;
                uVar9 = 0xfffe;
                if ((*puVar19 == 0) || (puVar19 == puVar20)) goto LAB_02631e08;
                lVar14 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar19 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
                DAT_05557744 = CONCAT44(DAT_05557744._4_4_,0xfffffffe);
                if (uVar16 == 0) break;
                piVar18 = (int *)(lVar14 + 4);
                while (piVar18[-1] != -0x11c0fe62) {
                  piVar18 = piVar18 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_02631e04;
                }
                iVar12 = 0;
                if (*piVar18 != -1) {
                  iVar12 = *piVar18;
                }
                DAT_05557744 = CONCAT44(DAT_05557744._4_4_,iVar12);
                if (*puVar19 == 0) break;
              } while( true );
            }
            break;
          case 5:
            if (*puVar19 != 0) {
              cVar15 = DAT_055576f0;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  DAT_055576f0 = '\x01';
                  DAT_055576f4 = 0xffffffffffffffff;
                  DAT_055576fc = 0xffffffffffffffff;
                  DAT_05557704 = 0xffffffffffffffff;
                  DAT_0555770c = 0xffffffffffffffff;
                  DAT_05557714 = 0xffffffffffffffff;
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
                  uVar16 = (ulong)DAT_05557744._4_4_;
                  if (-1 < (long)DAT_05557744) goto LAB_02631df4;
                  if (DAT_05557744._4_4_ != 0xffffffff) break;
                }
                puVar20 = (uint *)(ulong)*puVar19;
                uVar9 = 0xfffe;
                if ((*puVar19 == 0) || (puVar19 == puVar20)) goto LAB_02631e08;
                lVar14 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar19 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
                DAT_05557744 = CONCAT44(0xfffffffe,(int)DAT_05557744);
                if (uVar16 == 0) break;
                piVar18 = (int *)(lVar14 + 4);
                while (piVar18[-1] != -0x566084b2) {
                  piVar18 = piVar18 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_02631e04;
                }
                iVar12 = 0;
                if (*piVar18 != -1) {
                  iVar12 = *piVar18;
                }
                DAT_05557744 = CONCAT44(iVar12,(int)DAT_05557744);
                if (*puVar19 == 0) break;
              } while( true );
            }
            break;
          default:
            sVar5 = (short)local_7e8;
            goto LAB_02631e34;
          }
          goto LAB_02631e04;
        }
      }
      else {
        if (iVar11 < 0x1bf7) {
          if (iVar11 < 0x101d) {
            if ((10 < iVar11 - 0xfc2U) || ((1 << (ulong)(iVar11 - 0xfc2U & 0x1f) & 0x405U) == 0))
            goto LAB_0263179c;
          }
          else if ((iVar11 != 0x101d) && (iVar11 != 0x1603)) {
            iVar12 = 0x1b88;
            goto LAB_02631698;
          }
        }
        else if (iVar11 < 0x1f5f) {
          if ((4 < iVar11 - 0x1bf7U) || (iVar11 - 0x1bf7U == 3)) goto LAB_0263179c;
        }
        else if ((1 < iVar11 - 0x376bU) && (iVar11 != 0x2ea6)) {
          iVar12 = 0x1f5f;
LAB_02631698:
          if (iVar11 != iVar12) goto LAB_0263179c;
        }
LAB_026316d0:
        local_800 = (undefined *)*plVar3;
        lVar14 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar10 = FUN_0277d6c4(&local_800);
        if ((uVar10 >> 3 & 0x1fff) < 0x753) {
          lVar6 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
          *(uint *)(lVar14 + lVar6) =
               *(uint *)(lVar14 + lVar6) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
        }
      }
LAB_02631720:
      do {
        uVar10 = (int)uVar23 + 1;
        uVar23 = (ulong)uVar10;
        if (0x752 < uVar10 >> 3) {
          uVar10 = 0x3a95;
          goto LAB_02631750;
        }
      } while ((*(uint *)(lVar13 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) == 0);
      goto LAB_0263154c;
    }
  }
  return;
LAB_02631df4:
  if ((ushort *)(uVar16 + (long)puVar19) == (ushort *)0x0) {
LAB_02631e04:
    uVar9 = 0xfffe;
  }
  else {
    uVar9 = *(ushort *)(uVar16 + (long)puVar19);
  }
LAB_02631e08:
  local_800 = (undefined *)(ulong)uVar9;
  FUN_0277d4ac(&local_800);
  local_7e8 = local_800;
  sVar5 = (short)local_800;
LAB_02631e34:
  if (sVar5 == -2) goto LAB_02631720;
  iVar12 = FUN_0277d6c4(&local_7e8);
  if ((iVar12 == 0x9c9) ||
     (iVar12 = FUN_0277d6c4(&local_7e8), puVar7 = PTR_DAT_04bb43c0, iVar12 == 0xcbf))
  goto LAB_026316d0;
  local_7f0 = (uint *)0x0;
  local_7f8 = (undefined4)local_7e8;
  uStack_7f4 = local_7e8._4_4_;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  local_800 = puVar1;
  uVar10 = FUN_0277d6c4(&local_7f8);
  if (*(long *)puVar7 == 0) {
LAB_02632100:
    puVar20 = (uint *)0x0;
    bVar21 = true;
    local_70 = 0xbc;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_02632100;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(&local_7e8);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar10) ||
       (puVar20 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8),
       puVar20 == (uint *)0x0)) goto LAB_02632100;
    local_70 = 0;
    local_6c = 99;
    uVar10 = *puVar20;
    if ((uVar10 != 0) && (puVar20 != (uint *)(ulong)uVar10)) {
      puVar17 = (uint *)((long)puVar20 - (long)(ulong)uVar10);
      local_70 = 0;
      if (*puVar17 != 0) {
        uVar10 = puVar17[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar14 != 0) {
            uVar4 = 0;
            if ((ulong)uVar10 != 0) {
              uVar4 = (uint)((ulong)((long)puVar20 - lVar14) / (ulong)uVar10);
            }
            if (*puVar17 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_70 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
               , local_70 < 0xbd)) goto LAB_02631f94;
          }
        }
        local_70 = 0;
      }
    }
LAB_02631f94:
    local_7f0 = puVar20;
    if (local_70 == 99) goto LAB_02632258;
    local_6c = 0x56;
    local_70 = 0;
    uVar10 = *puVar20;
    if ((uVar10 != 0) && (puVar20 != (uint *)(ulong)uVar10)) {
      puVar17 = (uint *)((long)puVar20 - (long)(ulong)uVar10);
      local_70 = 0;
      if (*puVar17 != 0) {
        uVar10 = puVar17[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar14 != 0) {
            uVar4 = 0;
            if ((ulong)uVar10 != 0) {
              uVar4 = (uint)((ulong)((long)puVar20 - lVar14) / (ulong)uVar10);
            }
            if (*puVar17 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_70 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
               , local_70 < 0xbd)) goto LAB_0263203c;
          }
        }
        local_70 = 0;
      }
    }
LAB_0263203c:
    if (local_70 == 0x56) goto LAB_02632258;
    local_70 = 0;
    uVar10 = *puVar20;
    if ((uVar10 == 0) || (puVar20 == (uint *)(ulong)uVar10)) {
LAB_02632250:
      bVar21 = false;
    }
    else {
      puVar17 = (uint *)((long)puVar20 - (long)(ulong)uVar10);
      local_70 = 0;
      if (*puVar17 == 0) goto LAB_02632250;
      uVar10 = puVar17[1];
      if ((uVar10 == 0) || ((ulong)(ushort)puVar17[2] == 0)) {
LAB_0263224c:
        local_70 = 0;
        goto LAB_02632250;
      }
      lVar14 = 0xc;
      if (*(char *)((long)puVar17 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
      if (lVar14 == 0) goto LAB_0263224c;
      uVar4 = 0;
      if ((ulong)uVar10 != 0) {
        uVar4 = (uint)((ulong)((long)puVar20 - lVar14) / (ulong)uVar10);
      }
      if (*puVar17 <= uVar4) {
        uVar4 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar4) goto LAB_0263224c;
      local_70 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2);
      if (local_70 < 0xbd) goto LAB_02632250;
      bVar21 = false;
      local_70 = 0;
    }
  }
  local_6c = 0x57;
  if ((local_70 == 0x57) && (iVar12 = FUN_0277d6c4(&local_7e8), iVar12 != 0x8f0)) {
LAB_02632258:
    plVar24 = (long *)PTR_DAT_04bb37e0;
    goto LAB_026316d0;
  }
  local_6c = 0x68;
  local_70 = 0xbc;
  if (!bVar21) {
    uVar10 = *puVar20;
    local_70 = 0;
    if ((uVar10 != 0) && (puVar20 != (uint *)(ulong)uVar10)) {
      puVar17 = (uint *)((long)puVar20 - (long)(ulong)uVar10);
      local_70 = 0;
      if (*puVar17 != 0) {
        uVar10 = puVar17[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar14 != 0) {
            uVar4 = 0;
            if ((ulong)uVar10 != 0) {
              uVar4 = (uint)((ulong)((long)puVar20 - lVar14) / (ulong)uVar10);
            }
            if (*puVar17 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_70 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
               , local_70 < 0xbd)) goto LAB_02632220;
          }
        }
        local_70 = 0;
      }
    }
  }
LAB_02632220:
  plVar24 = (long *)PTR_DAT_04bb37e0;
  if (local_70 == 0x68) goto LAB_026316d0;
  iVar11 = iVar11 + 1;
  if (iVar11 == 6) goto LAB_02631720;
  goto LAB_026317e4;
  while( true ) {
    if ((*(uint *)(lVar13 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) != 0)
    goto LAB_02631548;
    uVar10 = uVar10 - 3;
    if (uVar10 == 0xfffffffd) break;
LAB_02631750:
    uVar4 = uVar10 + 2;
    if (((*(uint *)(lVar13 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0) ||
       (uVar4 = uVar10 + 1,
       (*(uint *)(lVar13 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
      uVar10 = uVar4;
LAB_02631548:
      uVar23 = (ulong)(uVar10 + 1);
      goto LAB_0263154c;
    }
  }
  uVar23 = 0;
LAB_0263154c:
  if (iVar22 == (int)uVar23) {
    return;
  }
  goto LAB_02631554;
}

