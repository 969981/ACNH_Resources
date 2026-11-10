
long FUN_0014e2b4(char *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  size_t sVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  int local_98;
  int local_94;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_6c;
  undefined8 local_68;
  
  puVar5 = PTR_PTR_04bcb6e0;
  uVar17 = 0xffffffff;
  local_68 = 0xffffffffffffffff;
  local_6c = -1;
  if (*param_1 != '\0') {
    bVar7 = false;
    uVar12 = 0;
    uVar17 = 0xffffffff;
    iVar19 = -1;
    uVar15 = 0xffffffff;
    local_98 = -1;
    lVar13 = 0xffffffff;
    pcVar16 = param_1;
LAB_0014e320:
    do {
      iVar9 = FUN_00146570();
      if (iVar9 == 0) {
        pcVar16 = pcVar16 + 1;
        if (*pcVar16 != '\0') goto LAB_0014e320;
        cVar8 = '\0';
      }
      else {
        cVar8 = *pcVar16;
      }
      iVar9 = FUN_001465e8(cVar8);
      if (iVar9 == 0) {
        iVar9 = FUN_0014654c(*pcVar16);
        if (iVar9 != 0) {
          local_90 = (char *)0x0;
          local_94 = 0;
          if (local_6c == -1) {
            iVar9 = sscanf(pcVar16,"%02d:%02d:%02d%n",(long)&local_68 + 4,&local_68,&local_6c,
                           &local_94);
            if (iVar9 != 3) {
              if ((local_6c != -1) ||
                 (iVar9 = sscanf(pcVar16,"%02d:%02d%n",(long)&local_68 + 4,&local_68,&local_94),
                 iVar9 != 2)) goto LAB_0014e390;
              local_6c = 0;
            }
            pcVar16 = pcVar16 + local_94;
          }
          else {
LAB_0014e390:
            piVar11 = __errno_location();
            iVar9 = *piVar11;
            *piVar11 = 0;
            lVar18 = strtol(pcVar16,&local_90,10);
            iVar2 = *piVar11;
            if (iVar2 != iVar9) {
              *piVar11 = iVar9;
            }
            if (iVar2 != 0) {
              return -1;
            }
            if (lVar18 - 0x80000000U < 0xffffffff00000000) {
              return -1;
            }
            iVar9 = FUN_00146668();
            lVar18 = (long)local_90 - (long)pcVar16;
            if (uVar17 == 0xffffffff) {
              bVar4 = 0;
              if ((param_1 < pcVar16) && (lVar18 == 4)) {
                uVar17 = 0xffffffff;
                if (iVar9 < 0x579) {
                  cVar8 = pcVar16[-1];
                  if ((cVar8 == '-') || (cVar8 == '+')) {
                    bVar4 = 1;
                    iVar2 = iVar9 + (iVar9 / 100) * -0x28;
                    uVar17 = iVar2 * -0x3c;
                    if (cVar8 != '+') {
                      uVar17 = iVar2 * 0x3c;
                    }
                  }
                  else {
                    bVar4 = 0;
                  }
                  lVar18 = 4;
                }
              }
              else {
                uVar17 = 0xffffffff;
              }
            }
            else {
              bVar4 = 0;
            }
            if ((((lVar18 == 8) && (iVar19 == -1)) && ((int)uVar15 == -1)) && (local_98 == -1)) {
              iVar19 = iVar9 / 10000;
              uVar15 = (ulong)((int)(short)((short)iVar9 + (short)iVar19 * -10000) / 100 - 1);
              local_98 = iVar9 % 100;
              bVar4 = 1;
            }
            bVar6 = iVar9 - 1U < 0x1f;
            iVar2 = iVar9;
            if (!bVar6) {
              iVar2 = -1;
            }
            bVar3 = (bool)(!bVar7 & (bVar4 ^ 1) & local_98 == -1);
            if (!bVar3) {
              iVar2 = local_98;
            }
            bVar6 = (bool)(bVar4 | bVar3 & bVar6);
            if (bVar3) {
              bVar7 = true;
            }
            pcVar16 = local_90;
            local_98 = iVar2;
            if (((bVar6) || (!bVar7)) || (iVar19 != -1)) {
              if (!bVar6) {
                return -1;
              }
            }
            else {
              iVar19 = iVar9;
              if (iVar9 < 100) {
                if (iVar9 < 0x47) {
                  iVar19 = iVar9 + 2000;
                }
                else {
                  iVar19 = iVar9 + 0x76c;
                }
              }
              bVar7 = iVar2 != -1;
            }
          }
        }
      }
      else {
        local_80 = 0;
        uStack_78 = 0;
        local_90 = (char *)0x0;
        uStack_88 = 0;
        iVar9 = sscanf(pcVar16,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",&local_90
                      );
        if (iVar9 == 0) {
          sVar10 = 0;
        }
        else {
          sVar10 = strlen((char *)&local_90);
        }
        if ((int)lVar13 == -1) {
          lVar13 = 0;
          ppuVar1 = &PTR_s_Monday_04836358;
          if (sVar10 < 4) {
            ppuVar1 = (undefined **)PTR_PTR_04bcb6e8;
          }
          do {
            iVar9 = FUN_00144a90(&local_90,ppuVar1[lVar13]);
            if (iVar9 != 0) goto LAB_0014e4ac;
            lVar13 = lVar13 + 1;
          } while ((int)lVar13 != 7);
          lVar13 = 0xffffffff;
        }
        if ((int)uVar15 == -1) {
          uVar15 = 0;
          do {
            iVar9 = FUN_00144a90(&local_90,*(undefined8 *)(puVar5 + uVar15 * 8));
            if (iVar9 != 0) goto LAB_0014e4ac;
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 != 0xc);
          uVar15 = 0xffffffff;
        }
        if (uVar17 != 0xffffffff) {
          return -1;
        }
        lVar18 = 0;
        while (iVar9 = FUN_00144a90(&local_90,&DAT_041018fc + lVar18), iVar9 == 0) {
          lVar18 = lVar18 + 0xc;
          if ((int)lVar18 == 0x33c) {
            return -1;
          }
        }
        uVar17 = *(int *)((long)&DAT_04101904 + lVar18) * 0x3c;
LAB_0014e4ac:
        pcVar16 = pcVar16 + sVar10;
      }
      uVar14 = (uint)uVar15;
      if ((*pcVar16 == '\0') || (bVar6 = 4 < uVar12, uVar12 = uVar12 + 1, bVar6)) goto LAB_0014e6d8;
    } while( true );
  }
  iVar19 = -1;
  local_98 = -1;
  uVar14 = 0xffffffff;
LAB_0014e6f8:
  local_6c = 0;
  local_68 = 0;
LAB_0014e700:
  if ((((((local_98 != -1) && (uVar14 != 0xffffffff)) && (iVar19 != -1)) &&
       ((iVar19 < 0x7f6 && (0x76e < iVar19)))) &&
      ((local_6c < 0x3d && ((local_98 < 0x20 && ((int)uVar14 < 0xc)))))) &&
     ((local_68._4_4_ < 0x18 && ((int)local_68 < 0x3c)))) {
    uVar12 = uVar14;
    if ((int)uVar14 < 0) {
      uVar12 = (0xb - uVar14) / 0xc;
      iVar19 = uVar12 + iVar19;
      uVar12 = (uVar12 * 0xc - (0xb - uVar14)) + 0xb;
    }
    uVar14 = iVar19 - (uint)((int)uVar14 < 2);
    lVar13 = ((long)(int)local_68 +
              ((long)local_68._4_4_ +
              ((long)*(int *)(&DAT_04101c38 + (ulong)uVar12 * 4) + (long)local_98 +
               (long)(iVar19 + -0x7b2) * 0x16d +
              (long)(int)((uVar14 / 400 - uVar14 / 100) + (uVar14 >> 2) + -0x1dd)) * 0x18) * 0x3c +
             -0x5a0) * 0x3c + (long)local_6c;
    uVar12 = 0;
    if (uVar17 != 0xffffffff) {
      uVar12 = uVar17;
    }
    if (((int)uVar12 < 1) || (lVar13 <= (long)(ulong)(uVar12 ^ 0x7fffffff))) {
      lVar13 = lVar13 + (int)uVar12;
      lVar18 = 0;
      if (lVar13 != -1) {
        lVar18 = lVar13;
      }
      return lVar18;
    }
  }
  return -1;
LAB_0014e6d8:
  if (local_6c != -1) goto LAB_0014e700;
  goto LAB_0014e6f8;
}

