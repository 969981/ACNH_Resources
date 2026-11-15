
void FUN_0208e490(undefined8 *param_1,ulong param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  int ******ppppppiStack_240;
  int *******local_238;
  int *******local_230;
  int local_228;
  undefined8 *******local_220;
  undefined8 *******pppppppuStack_218;
  int local_210;
  undefined8 *******local_208 [3];
  undefined8 *******local_1f0 [3];
  undefined8 *******local_1d8 [3];
  undefined8 *******local_1c0 [3];
  undefined8 *******local_1a8 [3];
  undefined8 *******local_190 [3];
  undefined8 *******local_178 [3];
  undefined8 *******local_160 [3];
  undefined8 *******local_148 [3];
  undefined8 *******local_130 [3];
  undefined8 ******local_118 [3];
  undefined8 *****local_100 [3];
  undefined8 ****local_e8 [3];
  undefined8 ***local_d0 [3];
  undefined8 **local_b8 [3];
  undefined8 *local_a0 [3];
  undefined8 local_88 [3];
  int local_6c;
  uint local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  local_64 = 0;
  local_68 = 0xffffffff;
  local_62 = 0;
  iVar7 = FUN_0208bb48();
  local_6c = 5 - param_3;
  if (iVar7 <= 5 - param_3) {
    local_6c = iVar7;
  }
  bVar6 = false;
  if (DAT_05454358 != '\0') {
    piVar10 = &DAT_054543c0;
    if (DAT_054543c4 == '\0') {
      if (DAT_05454398 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05454398 + DAT_05454394 + -1;
        iVar7 = 0;
        if (DAT_05454390 <= iVar12) {
          iVar7 = DAT_05454390;
        }
        piVar10 = (int *)(DAT_05454388 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    bVar6 = *piVar10 == 0;
  }
  local_68 = (uint)bVar6;
  if (DAT_05454630 != '\0') {
    piVar10 = &DAT_05454698;
    if (DAT_0545469c == '\0') {
      if (DAT_05454670 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05454670 + DAT_0545466c + -1;
        iVar7 = 0;
        if (DAT_05454668 <= iVar12) {
          iVar7 = DAT_05454668;
        }
        piVar10 = (int *)(DAT_05454660 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05454908 != '\0') {
    piVar10 = &DAT_05454970;
    if (DAT_05454974 == '\0') {
      if (DAT_05454948 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05454948 + DAT_05454944 + -1;
        iVar7 = 0;
        if (DAT_05454940 <= iVar12) {
          iVar7 = DAT_05454940;
        }
        piVar10 = (int *)(DAT_05454938 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05454be0 != '\0') {
    piVar10 = &DAT_05454c48;
    if (DAT_05454c4c == '\0') {
      if (DAT_05454c20 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05454c20 + DAT_05454c1c + -1;
        iVar7 = 0;
        if (DAT_05454c18 <= iVar12) {
          iVar7 = DAT_05454c18;
        }
        piVar10 = (int *)(DAT_05454c10 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05454eb8 != '\0') {
    piVar10 = &DAT_05454f20;
    if (DAT_05454f24 == '\0') {
      if (DAT_05454ef8 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05454ef8 + DAT_05454ef4 + -1;
        iVar7 = 0;
        if (DAT_05454ef0 <= iVar12) {
          iVar7 = DAT_05454ef0;
        }
        piVar10 = (int *)(DAT_05454ee8 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05455190 != '\0') {
    piVar10 = &DAT_054551f8;
    if (DAT_054551fc == '\0') {
      if (DAT_054551d0 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_054551d0 + DAT_054551cc + -1;
        iVar7 = 0;
        if (DAT_054551c8 <= iVar12) {
          iVar7 = DAT_054551c8;
        }
        piVar10 = (int *)(DAT_054551c0 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05455468 != '\0') {
    piVar10 = &DAT_054554d0;
    if (DAT_054554d4 == '\0') {
      if (DAT_054554a8 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_054554a8 + DAT_054554a4 + -1;
        iVar7 = 0;
        if (DAT_054554a0 <= iVar12) {
          iVar7 = DAT_054554a0;
        }
        piVar10 = (int *)(DAT_05455498 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05455740 != '\0') {
    piVar10 = &DAT_054557a8;
    if (DAT_054557ac == '\0') {
      if (DAT_05455780 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05455780 + DAT_0545577c + -1;
        iVar7 = 0;
        if (DAT_05455778 <= iVar12) {
          iVar7 = DAT_05455778;
        }
        piVar10 = (int *)(DAT_05455770 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05455a18 != '\0') {
    piVar10 = &DAT_05455a80;
    if (DAT_05455a84 == '\0') {
      if (DAT_05455a58 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05455a58 + DAT_05455a54 + -1;
        iVar7 = 0;
        if (DAT_05455a50 <= iVar12) {
          iVar7 = DAT_05455a50;
        }
        piVar10 = (int *)(DAT_05455a48 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05455cf0 != '\0') {
    piVar10 = &DAT_05455d58;
    if (DAT_05455d5c == '\0') {
      if (DAT_05455d30 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05455d30 + DAT_05455d2c + -1;
        iVar7 = 0;
        if (DAT_05455d28 <= iVar12) {
          iVar7 = DAT_05455d28;
        }
        piVar10 = (int *)(DAT_05455d20 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05455fc8 != '\0') {
    piVar10 = &DAT_05456030;
    if (DAT_05456034 == '\0') {
      if (DAT_05456008 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05456008 + DAT_05456004 + -1;
        iVar7 = 0;
        if (DAT_05456000 <= iVar12) {
          iVar7 = DAT_05456000;
        }
        piVar10 = (int *)(DAT_05455ff8 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_054562a0 != '\0') {
    piVar10 = &DAT_05456308;
    if (DAT_0545630c == '\0') {
      if (DAT_054562e0 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_054562e0 + DAT_054562dc + -1;
        iVar7 = 0;
        if (DAT_054562d8 <= iVar12) {
          iVar7 = DAT_054562d8;
        }
        piVar10 = (int *)(DAT_054562d0 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05456578 != '\0') {
    piVar10 = &DAT_054565e0;
    if (DAT_054565e4 == '\0') {
      if (DAT_054565b8 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_054565b8 + DAT_054565b4 + -1;
        iVar7 = 0;
        if (DAT_054565b0 <= iVar12) {
          iVar7 = DAT_054565b0;
        }
        piVar10 = (int *)(DAT_054565a8 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05456850 != '\0') {
    piVar10 = &DAT_054568b8;
    if (DAT_054568bc == '\0') {
      if (DAT_05456890 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05456890 + DAT_0545688c + -1;
        iVar7 = 0;
        if (DAT_05456888 <= iVar12) {
          iVar7 = DAT_05456888;
        }
        piVar10 = (int *)(DAT_05456880 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05456b28 != '\0') {
    piVar10 = &DAT_05456b90;
    if (DAT_05456b94 == '\0') {
      if (DAT_05456b68 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05456b68 + DAT_05456b64 + -1;
        iVar7 = 0;
        if (DAT_05456b60 <= iVar12) {
          iVar7 = DAT_05456b60;
        }
        piVar10 = (int *)(DAT_05456b58 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  if (DAT_05456e00 != '\0') {
    piVar10 = &DAT_05456e68;
    if (DAT_05456e6c == '\0') {
      if (DAT_05456e40 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05456e40 + DAT_05456e3c + -1;
        iVar7 = 0;
        if (DAT_05456e38 <= iVar12) {
          iVar7 = DAT_05456e38;
        }
        piVar10 = (int *)(DAT_05456e30 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  pppppppiVar15 = (int *******)&local_230;
  if (DAT_054570d8 != '\0') {
    piVar10 = &DAT_05457140;
    if (DAT_05457144 == '\0') {
      if (DAT_05457118 < 1) {
        piVar10 = (int *)PTR_DAT_04bc2808;
      }
      else {
        iVar12 = DAT_05457118 + DAT_05457114 + -1;
        iVar7 = 0;
        if (DAT_05457110 <= iVar12) {
          iVar7 = DAT_05457110;
        }
        piVar10 = (int *)(DAT_05457108 + (long)(iVar12 - iVar7) * 0x10 + 4);
      }
    }
    local_238 = (int *******)CONCAT44(local_238._4_4_,*piVar10);
    if (*piVar10 == 0) {
      local_68 = local_68 + 1;
    }
  }
  local_64 = 1;
  local_62 = 1;
  iVar8 = FUN_016d1b60();
  local_228 = 0;
  local_208[0] = local_1f0;
  local_1f0[0] = local_1d8;
  local_210 = 0x11;
  local_1d8[0] = local_1c0;
  local_220 = local_208;
  local_1c0[0] = local_1a8;
  local_1a8[0] = local_190;
  iVar7 = 0;
  local_190[0] = local_178;
  iVar11 = 0;
  local_178[0] = local_160;
  iVar12 = 0;
  local_160[0] = local_148;
  local_148[0] = local_130;
  local_130[0] = local_118;
  local_118[0] = local_100;
  local_100[0] = local_e8;
  local_e8[0] = local_d0;
  local_d0[0] = local_b8;
  local_b8[0] = local_a0;
  local_a0[0] = local_88;
  local_88[0] = 0;
  local_238 = (int *******)&local_238;
  local_230 = (int *******)&local_238;
  pppppppuStack_218 = local_220;
  do {
    pppppppuVar5 = local_220;
    if (iVar8 != iVar12) {
      if ((&DAT_05454358)[(long)iVar11 * 0x2d8] != '\0') {
        lVar13 = (long)iVar11;
        if ((&DAT_054543c4)[lVar13 * 0x2d8] == '\0') {
          if ((&DAT_05454398)[lVar13 * 0xb6] < 1) {
            piVar10 = (int *)PTR_DAT_04bc2808;
          }
          else {
            iVar4 = (&DAT_05454398)[lVar13 * 0xb6] + (&DAT_05454394)[lVar13 * 0xb6] + -1;
            iVar2 = 0;
            if ((&DAT_05454390)[lVar13 * 0xb6] <= iVar4) {
              iVar2 = (&DAT_05454390)[lVar13 * 0xb6];
            }
            piVar10 = (int *)((&DAT_05454388)[lVar13 * 0x5b] + (long)(iVar4 - iVar2) * 0x10 + 4);
          }
        }
        else {
          piVar10 = &DAT_054543c0 + lVar13 * 0xb6;
        }
        if (*piVar10 == 3 && iVar7 < local_210) {
          if (local_220 != (undefined8 *******)0x0) {
            local_220 = (undefined8 *******)*local_220;
          }
          *(int *)pppppppuVar5 = iVar12;
          pppppppiVar14 = (int *******)(pppppppuVar5 + 1);
          *pppppppiVar14 = (int ******)0x0;
          pppppppuVar5[2] = &local_238;
          *pppppppiVar14 = (int ******)local_238;
          if (local_238 != (int *******)0x0) {
            local_238[1] = (int ******)pppppppiVar14;
          }
          iVar7 = local_228 + 1;
          local_238 = pppppppiVar14;
          local_228 = iVar7;
        }
      }
    }
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 1;
  } while (iVar12 != 0x11);
  uVar9 = nn::os::GetSystemTick();
  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
  local_50 = (undefined *)CONCAT44(uVar3,uVar9);
  uVar9 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  local_48 = (char *)CONCAT44((uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4,uVar9);
  FUN_038aaa70(&local_238,&local_50);
  FUN_0208e320(&local_238,&local_6c);
  if (local_228 == 0) goto LAB_0208eff0;
  lVar13 = *(long *)PTR_DAT_04bb32f0;
  if (lVar13 == 0) {
LAB_0208ef70:
    if (((int)DAT_05453fec == -1) || (DAT_05453fec._4_4_ == -1)) {
      FUN_02090590(param_1,&local_238,&local_6c);
    }
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "Fireworks";
    local_50 = puVar1;
    iVar7 = FUN_008841f4(lVar13,&local_50);
    if (iVar7 != 1) {
      pcStack_58 = "Countdown";
      local_60 = puVar1;
      iVar7 = FUN_008841f4(lVar13,&local_60);
      if (iVar7 != 1) goto LAB_0208ef70;
    }
  }
  if ((local_228 != 0) && ((int ********)local_230 != &local_238)) {
    pppppppiVar14 = local_230;
    do {
      lVar13 = FUN_021c9770(*(undefined4 *)(pppppppiVar14 + -1),1);
      FUN_02093ad0(lVar13 + 0x10,1,1);
      pppppppiVar14 = (int *******)pppppppiVar14[1];
    } while (pppppppiVar14 + -1 != &ppppppiStack_240);
  }
LAB_0208eff0:
  do {
    pppppppiVar14 = (int *******)*pppppppiVar15;
    pppppppiVar15 = pppppppiVar14 + 1;
  } while ((int ********)pppppppiVar14 != &local_238);
  *param_1 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  return;
}

