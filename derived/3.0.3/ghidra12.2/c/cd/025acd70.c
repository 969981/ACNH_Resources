
/* WARNING: Removing unreachable block (ram,0x025ad19c) */
/* WARNING: Removing unreachable block (ram,0x025ad1a4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_025acd70(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *******pppppppuVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 ******ppppppuVar11;
  uint uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  undefined *local_19a0;
  char *pcStack_1998;
  undefined8 local_1990;
  undefined8 *local_1988;
  undefined8 *******local_1980;
  undefined8 *******local_1978;
  undefined8 *******local_1970;
  undefined8 *******local_1968;
  undefined8 *******local_1960;
  undefined8 *******local_1958;
  undefined8 *******local_1950;
  undefined8 *******local_1948;
  undefined8 *******local_1940;
  undefined8 *******local_1938;
  undefined8 *******local_1930;
  undefined8 *******local_1928;
  undefined8 *******local_1920;
  undefined8 *******local_1918;
  undefined8 *******local_1910;
  undefined8 *******local_1908;
  undefined8 *******local_1900;
  undefined8 *******local_18f8;
  undefined8 *******local_18f0;
  undefined8 *******local_18e8;
  undefined8 *******local_18e0;
  undefined8 *******local_18d8;
  undefined8 *******local_18d0;
  undefined8 *******local_18c8;
  undefined8 *******local_18c0;
  undefined8 *******local_18b8;
  undefined8 *******local_18b0;
  undefined8 *******local_18a8;
  undefined8 *******local_18a0;
  undefined8 *******local_1898;
  undefined8 *******local_1890;
  undefined8 *******local_1888;
  undefined8 *******local_1880;
  undefined8 *******local_1878;
  undefined8 *******local_1870;
  undefined8 *******local_1868;
  undefined8 *******local_1860;
  undefined8 *******local_1858;
  undefined8 *******local_1850;
  undefined8 *******local_1848;
  undefined8 *******local_1840;
  undefined8 *******local_1838;
  undefined8 *******local_1830;
  undefined8 *******local_1828;
  undefined8 *******local_1820;
  undefined8 *******local_1818;
  undefined8 *******local_1810;
  undefined8 *******local_1808;
  undefined8 *******local_1800;
  undefined8 *******local_17f8;
  undefined8 *******local_17f0;
  undefined8 *******local_17e8;
  undefined8 *******local_17e0;
  undefined8 *******local_17d8;
  undefined8 *******local_17d0;
  undefined8 *******local_17c8;
  undefined8 *******local_17c0;
  undefined8 *******local_17b8;
  undefined8 *******local_17b0;
  undefined8 *******local_17a8;
  undefined8 *******local_17a0;
  undefined8 *******local_1798;
  undefined8 *******local_1790;
  undefined8 *******local_1788;
  undefined8 *******local_1780;
  undefined8 *******local_1778;
  undefined8 *******local_1770;
  undefined8 *******local_1768;
  undefined8 *******local_1760;
  undefined8 *******local_1758;
  undefined8 *******local_1750;
  undefined8 *******local_1748;
  undefined8 *******local_1740;
  undefined8 *******local_1738;
  undefined8 *******local_1730;
  undefined8 *******local_1728;
  undefined8 *******local_1720;
  undefined8 *******local_1718;
  undefined8 *******local_1710;
  undefined8 *******local_1708;
  undefined8 *******local_1700;
  undefined8 *******local_16f8;
  undefined8 *******local_16f0;
  undefined8 *******local_16e8;
  undefined8 *******local_16e0;
  undefined8 *******local_16d8;
  undefined8 *******local_16d0;
  undefined8 *******local_16c8;
  undefined8 *******local_16c0;
  undefined8 *******local_16b8;
  undefined8 *******local_16b0;
  undefined8 *******local_16a8;
  undefined8 *******local_16a0;
  undefined8 *******local_1698;
  undefined8 *******local_1690;
  undefined8 ******local_1688;
  undefined8 *****local_1680;
  undefined8 ****local_1678;
  undefined8 ***local_1670;
  undefined8 **local_1668;
  undefined8 *local_1660;
  undefined8 local_1658;
  undefined8 local_1650 [100];
  undefined8 local_1330;
  char *local_1328;
  long *local_1320;
  long *local_1318;
  long local_1310 [2];
  long local_1300;
  long local_12f8;
  undefined1 auStack_12f0 [2360];
  undefined8 local_9b8;
  undefined8 local_9b0 [300];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  uVar6 = FUN_02601690(param_1,&local_1330);
  if ((uVar6 & 1) != 0) {
    nn::account::GetUserId((Uid *)&local_1990,(UserHandle *)&local_1330);
  }
  puVar3 = PTR_DAT_04bb2020;
  lVar9 = *(long *)(param_1 + 0x28);
  local_1328 = "Lib_F_Valid";
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_1330 = puVar1;
  lVar7 = nn::prepo::Struct::GetBuffer();
  if (lVar7 != 0) {
    (**(code **)(local_1330 + 0x18))(&local_1330);
    nn::prepo::Struct::Add((char *)(lVar9 + 8),SUB81(local_1328,0));
  }
  lVar9 = *(long *)(param_1 + 0x28);
  local_1328 = "Lib_F_AccountNum";
  local_1330 = puVar1;
  lVar7 = nn::prepo::Struct::GetBuffer();
  if (lVar7 != 0) {
    (**(code **)(local_1330 + 0x18))(&local_1330);
    nn::prepo::Struct::Add((char *)(lVar9 + 8),(long)local_1328);
  }
  local_1328 = (char *)0x0;
  local_1320 = local_1310;
  local_1330._4_4_ = 0;
  lVar7 = 0;
  while( true ) {
    plVar10 = (long *)((long)local_1310 + lVar7 + 8);
    *plVar10 = (long)local_1310 + lVar7 + 0x10;
    *(long **)((long)local_1310 + lVar7) = plVar10;
    *(undefined1 **)((long)local_1310 + lVar7 + 0x10) = auStack_12f0 + lVar7 + -8;
    if (lVar7 == 0x940) break;
    *(undefined1 **)(auStack_12f0 + lVar7 + -8) = auStack_12f0 + lVar7;
    lVar7 = lVar7 + 0x20;
  }
  local_9b8 = 0;
  if (local_9b0 != (undefined8 *)0x0) {
    local_1330._4_4_ = 300;
    local_1328 = (char *)local_9b0;
  }
  local_1330 = (undefined *)((ulong)local_1330._4_4_ << 0x20);
  local_1968 = &local_1960;
  local_1960 = &local_1958;
  local_1980 = &local_1970;
  local_1658 = 0;
  local_1958 = &local_1950;
  local_1950 = &local_1948;
  local_1948 = &local_1940;
  local_1940 = &local_1938;
  local_1938 = &local_1930;
  local_1930 = &local_1928;
  local_1928 = &local_1920;
  local_1920 = &local_1918;
  local_1918 = &local_1910;
  local_1910 = &local_1908;
  local_1908 = &local_1900;
  local_1900 = &local_18f8;
  local_18f8 = &local_18f0;
  local_18f0 = &local_18e8;
  local_18e8 = &local_18e0;
  local_18e0 = &local_18d8;
  local_18d8 = &local_18d0;
  local_18d0 = &local_18c8;
  local_18c8 = &local_18c0;
  local_18c0 = &local_18b8;
  local_18b8 = &local_18b0;
  local_18b0 = &local_18a8;
  local_18a8 = &local_18a0;
  local_18a0 = &local_1898;
  local_1898 = &local_1890;
  local_1890 = &local_1888;
  local_1888 = &local_1880;
  local_1880 = &local_1878;
  local_1878 = &local_1870;
  local_1870 = &local_1868;
  local_1868 = &local_1860;
  local_1860 = &local_1858;
  local_1858 = &local_1850;
  local_1850 = &local_1848;
  local_1848 = &local_1840;
  local_1840 = &local_1838;
  local_1838 = &local_1830;
  local_1830 = &local_1828;
  local_1828 = &local_1820;
  local_1820 = &local_1818;
  local_1818 = &local_1810;
  local_1810 = &local_1808;
  local_1808 = &local_1800;
  local_1800 = &local_17f8;
  local_17f8 = &local_17f0;
  local_17f0 = &local_17e8;
  local_17e8 = &local_17e0;
  local_17e0 = &local_17d8;
  local_17d8 = &local_17d0;
  local_17d0 = &local_17c8;
  local_17c8 = &local_17c0;
  local_17c0 = &local_17b8;
  local_17b8 = &local_17b0;
  local_17b0 = &local_17a8;
  local_17a8 = &local_17a0;
  local_17a0 = &local_1798;
  local_1798 = &local_1790;
  local_1790 = &local_1788;
  local_1788 = &local_1780;
  local_1780 = &local_1778;
  local_1778 = &local_1770;
  local_1770 = &local_1768;
  local_1768 = &local_1760;
  local_1760 = &local_1758;
  local_1758 = &local_1750;
  local_1750 = &local_1748;
  local_1748 = &local_1740;
  local_1740 = &local_1738;
  local_1738 = &local_1730;
  local_1730 = &local_1728;
  local_1728 = &local_1720;
  local_1720 = &local_1718;
  local_1718 = &local_1710;
  local_1710 = &local_1708;
  local_1708 = &local_1700;
  local_1700 = &local_16f8;
  local_16f8 = &local_16f0;
  local_16f0 = &local_16e8;
  local_16e8 = &local_16e0;
  local_16e0 = &local_16d8;
  local_16d8 = &local_16d0;
  local_16d0 = &local_16c8;
  local_16c8 = &local_16c0;
  local_16c0 = &local_16b8;
  local_16b8 = &local_16b0;
  local_16b0 = &local_16a8;
  local_16a8 = &local_16a0;
  local_16a0 = &local_1698;
  local_1698 = &local_1690;
  local_1690 = &local_1688;
  local_1688 = &local_1680;
  local_1680 = &local_1678;
  local_1678 = &local_1670;
  local_1670 = &local_1668;
  local_1668 = &local_1660;
  local_1660 = &local_1658;
  local_1970 = &local_1968;
  local_1990 = 0;
  local_1988 = (undefined8 *)0x0;
  if (local_1650 != (undefined8 *)0x0) {
    local_1990 = 0x6400000000;
    local_1988 = local_1650;
  }
  local_1978 = local_1980;
  local_1318 = local_1320;
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_19a0 = (undefined *)CONCAT71(local_19a0._1_7_,*(byte *)(param_1 + 0x18));
    lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_19a0,1);
  }
  else {
    if ((*(int *)(param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) goto LAB_025ad470;
    lVar7 = FUN_026eec4c();
  }
  if (lVar7 != 0) {
    lVar9 = lVar7 + 0x194b0;
    if (*(long *)(lVar7 + 0x194b8) == 0) {
      lVar9 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if (*(long **)(lVar9 + 0x8560) == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = (undefined8 *)**(long **)(lVar9 + 0x8560);
      uVar6 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        uVar6 = (**(code **)*puVar8)();
      }
    }
    lVar7 = 0;
    plVar10 = (long *)(*(long *)(lVar9 + 0x8548) + *(long *)(lVar9 + 0x8540));
    do {
      plVar5 = local_1320;
      pppppppuVar4 = local_1980;
      uVar12 = *(uint *)((long)plVar10 + lVar7 * 4 + 0xaf00);
      plVar2 = plVar10 + (ulong)uVar12 * 0xe;
      if (399 < uVar12) {
        plVar2 = plVar10;
      }
      if ((*plVar2 != 0) && (*(int *)((long)plVar2 + 0x2c) != 0 && (int)plVar2[2] != 0)) {
        ppppppuVar11 = (undefined8 ******)plVar2[1];
        if ((*(byte *)((long)plVar2 + 0x6e) & 1) != 0) {
          uVar13 = (ulong)local_1330 & 0xffffffff;
          if (0 < (int)local_1330) {
            lVar15 = 0xffffffff;
            pcVar14 = local_1328;
            do {
              if (ppppppuVar11 == (undefined8 ******)**(undefined8 **)pcVar14) {
                if (lVar15 != 0) goto LAB_025ad3a4;
                break;
              }
              lVar15 = lVar15 + -1;
              uVar13 = uVar13 - 1;
              pcVar14 = (char *)((long)pcVar14 + 8);
            } while (uVar13 != 0);
          }
          if ((int)local_1330 < (int)local_1330._4_4_) {
            if (local_1320 != (long *)0x0) {
              local_1320 = (long *)*local_1320;
            }
            *plVar5 = 0;
            if ((int)local_1330 < (int)local_1330._4_4_) {
              *(long **)((long)local_1328 + (long)(int)local_1330 * 8) = plVar5;
              local_1330 = (undefined *)CONCAT44(local_1330._4_4_,(int)local_1330 + 1);
            }
            *plVar5 = (long)ppppppuVar11;
            uVar12 = *(uint *)((long)plVar10 + lVar7 * 4 + 0xaf00);
          }
        }
LAB_025ad3a4:
        plVar2 = plVar10 + (ulong)uVar12 * 0xe;
        if (399 < uVar12) {
          plVar2 = plVar10;
        }
        if (((*(byte *)((long)plVar2 + 0x6e) ^ 0xff) & 6) == 0) {
          uVar13 = local_1990 & 0xffffffff;
          if (0 < (int)local_1990) {
            lVar15 = 0xffffffff;
            puVar8 = local_1988;
            do {
              if (ppppppuVar11 == *(undefined8 *******)*puVar8) {
                if (lVar15 != 0) goto LAB_025ad2d0;
                break;
              }
              lVar15 = lVar15 + -1;
              uVar13 = uVar13 - 1;
              puVar8 = puVar8 + 1;
            } while (uVar13 != 0);
          }
          if ((int)local_1990 < local_1990._4_4_) {
            if (local_1980 != (undefined8 *******)0x0) {
              local_1980 = (undefined8 *******)*local_1980;
            }
            *pppppppuVar4 = (undefined8 ******)0x0;
            if ((int)local_1990 < local_1990._4_4_) {
              local_1988[(int)local_1990] = pppppppuVar4;
              local_1990 = CONCAT44(local_1990._4_4_,(int)local_1990 + 1);
            }
            *pppppppuVar4 = ppppppuVar11;
          }
        }
      }
LAB_025ad2d0:
      lVar7 = lVar7 + 1;
    } while (lVar7 != 400);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x8560) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x8560) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
LAB_025ad470:
  lVar9 = *(long *)(param_1 + 0x28);
  lVar7 = nn::prepo::Struct::GetBuffer();
  if (lVar7 != 0) {
    nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40faaf1);
  }
  lVar9 = *(long *)(param_1 + 0x28);
  lVar7 = nn::prepo::Struct::GetBuffer();
  if (lVar7 != 0) {
    nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40fab04);
  }
  lVar9 = *(long *)(param_1 + 0x28);
  lVar7 = nn::prepo::Struct::GetBuffer();
  if (lVar7 != 0) {
    nn::prepo::Struct::Add((char *)(lVar9 + 8),0x4097976);
  }
  lVar9 = *(long *)(param_1 + 0x28);
  lVar7 = nn::prepo::Struct::GetBuffer();
  if (lVar7 != 0) {
    nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40e02e2);
  }
  lVar9 = *(long *)(param_1 + 0x28);
  lVar7 = nn::prepo::Struct::GetBuffer();
  if (lVar7 != 0) {
    nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40ac525);
  }
  nn::prepo::Struct::GetSize();
  local_19a0 = puVar3 + 0x10;
  pcStack_1998 = "FriendList";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_19a0,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

