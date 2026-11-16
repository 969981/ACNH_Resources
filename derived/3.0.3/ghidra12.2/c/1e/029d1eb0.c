
uint FUN_029d1eb0(long param_1,int *param_2)

{
  bool bVar1;
  ushort uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  int local_230;
  uint local_228;
  ushort local_224 [66];
  int local_1a0;
  uint local_198;
  ushort local_194 [62];
  ushort *local_118;
  int local_110;
  uint local_108;
  ushort local_104 [122];
  
  cVar4 = *(char *)(param_1 + 0x4e);
  if ((cVar4 == '\0' && DAT_055eafb8 != 0) && (1 < *(uint *)(DAT_0537d558 + 0x80))) {
    uVar3 = 0;
    if (-1 < (long)*(ulong *)(DAT_055eafb8 + 0x128)) {
      uVar3 = *(ulong *)(DAT_055eafb8 + 0x128) & 0xf;
    }
    lVar12 = DAT_055eafb8 + uVar3 * 0x10;
    iVar11 = *(int *)(lVar12 + 0x14);
    iVar10 = *(int *)(lVar12 + 0x18);
    iVar9 = *(int *)(lVar12 + 0x1c);
    iVar7 = *(int *)(lVar12 + 0x20);
    if ((iVar10 == 0 && iVar11 == 0) && (iVar9 == 0 && iVar7 == 0)) {
      iVar7 = 0x48077044;
      iVar9 = 0x714acb41;
      iVar10 = 0x6c078967;
      iVar11 = 1;
    }
    *(int *)(param_1 + 0x38) = iVar11;
    *(int *)(param_1 + 0x3c) = iVar10;
    *(int *)(param_1 + 0x40) = iVar9;
    *(int *)(param_1 + 0x44) = iVar7;
    uVar8 = (uint)*(byte *)(param_1 + 0x4d);
    iVar11 = *param_2;
    local_108 = 0;
    if (iVar11 != 0) {
      lVar12 = *(long *)(param_2 + 2);
      iVar9 = 0;
      do {
        iVar10 = *(byte *)(lVar12 + iVar9) - 0x18;
        if ((int)(uint)*(byte *)(param_1 + 0x4c) < iVar10) break;
        if (((int)(uint)*(byte *)(param_1 + 0x4b) <= iVar10) &&
           (local_110 = 0x79, (int)local_108 < 0x79)) {
          iVar11 = 0;
          if (0x78 < (int)local_108) {
            iVar11 = local_110;
          }
          local_104[(int)(local_108 - iVar11)] = (ushort)iVar10;
          iVar11 = *param_2;
          local_108 = local_108 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar11 != iVar9);
      if (iVar11 != 0) {
        lVar12 = *(long *)(param_2 + 2);
        iVar9 = 0;
        do {
          iVar10 = *(byte *)(lVar12 + iVar9) - 0xc;
          if ((int)(uint)*(byte *)(param_1 + 0x4c) < iVar10) break;
          if (((int)(uint)*(byte *)(param_1 + 0x4b) <= iVar10) &&
             (local_110 = 0x79, (int)local_108 < 0x79)) {
            iVar11 = 0;
            if (0x78 < (int)local_108) {
              iVar11 = local_110;
            }
            local_104[(int)(local_108 - iVar11)] = (ushort)iVar10;
            iVar11 = *param_2;
            local_108 = local_108 + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar11 != iVar9);
        if (iVar11 != 0) {
          lVar12 = *(long *)(param_2 + 2);
          iVar9 = 0;
          do {
            bVar5 = *(byte *)(lVar12 + iVar9);
            if (*(byte *)(param_1 + 0x4c) < bVar5) break;
            if ((*(byte *)(param_1 + 0x4b) <= bVar5) && (local_110 = 0x79, (int)local_108 < 0x79)) {
              iVar11 = 0;
              if (0x78 < (int)local_108) {
                iVar11 = local_110;
              }
              local_104[(int)(local_108 - iVar11)] = (ushort)bVar5;
              iVar11 = *param_2;
              local_108 = local_108 + 1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar11 != iVar9);
          if (iVar11 != 0) {
            lVar12 = *(long *)(param_2 + 2);
            iVar9 = 0;
            do {
              uVar2 = *(byte *)(lVar12 + iVar9) + 0xc;
              if (*(byte *)(param_1 + 0x4c) < uVar2) break;
              if ((*(byte *)(param_1 + 0x4b) <= uVar2) && (local_110 = 0x79, (int)local_108 < 0x79))
              {
                iVar11 = 0;
                if (0x78 < (int)local_108) {
                  iVar11 = local_110;
                }
                local_104[(int)(local_108 - iVar11)] = uVar2;
                iVar11 = *param_2;
                local_108 = local_108 + 1;
              }
              iVar9 = iVar9 + 1;
            } while (iVar11 != iVar9);
            if (iVar11 != 0) {
              lVar12 = *(long *)(param_2 + 2);
              iVar9 = 0;
              do {
                uVar2 = *(byte *)(lVar12 + iVar9) + 0x18;
                if (*(byte *)(param_1 + 0x4c) < uVar2) break;
                if ((*(byte *)(param_1 + 0x4b) <= uVar2) &&
                   (local_110 = 0x79, (int)local_108 < 0x79)) {
                  iVar11 = 0;
                  if (0x78 < (int)local_108) {
                    iVar11 = local_110;
                  }
                  local_104[(int)(local_108 - iVar11)] = uVar2;
                  iVar11 = *param_2;
                  local_108 = local_108 + 1;
                }
                iVar9 = iVar9 + 1;
              } while (iVar11 != iVar9);
            }
          }
        }
      }
    }
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x4d);
    uVar8 = (uint)bVar5;
    local_108 = 0;
    local_198 = 0;
    local_228 = 0;
    bVar6 = false;
    if (*param_2 != 0) {
      iVar11 = 1;
      iVar9 = -0x18;
      do {
        if (iVar11 != 0) {
          lVar12 = *(long *)(param_2 + 2);
          iVar10 = 0;
          do {
            iVar11 = iVar9 + (uint)*(byte *)(lVar12 + iVar10);
            if (iVar11 < (int)(uint)bVar5) {
              if (((int)(uint)*(byte *)(param_1 + 0x4b) <= iVar11) && ((int)local_198 < 0x3c)) {
                puVar13 = local_194;
                uVar15 = local_198;
                local_198 = local_198 + 1;
LAB_029d20f0:
                iVar7 = 0;
                if (0x3b < (int)uVar15) {
                  iVar7 = 0x3c;
                }
                puVar13[(int)(uVar15 - iVar7)] = (ushort)iVar11;
              }
            }
            else if ((int)(uint)bVar5 < iVar11) {
              if ((int)(uint)*(byte *)(param_1 + 0x4c) < iVar11) goto LAB_029d2108;
              if ((int)local_228 < 0x3c) {
                puVar13 = local_224;
                uVar15 = local_228;
                local_228 = local_228 + 1;
                goto LAB_029d20f0;
              }
            }
            else {
              bVar6 = (bool)(*(byte *)(param_1 + 0x4f) < *(byte *)(param_1 + 0x4a) | bVar6);
            }
            iVar11 = *param_2;
            iVar10 = iVar10 + 1;
          } while (iVar11 != iVar10);
        }
        bVar1 = iVar9 < 0x18;
        iVar9 = iVar9 + 0xc;
      } while (bVar1);
    }
LAB_029d2108:
    if (0 < (int)local_198) {
      if (cVar4 == '\0') {
        iVar11 = 0;
        uVar15 = 0xffffffff;
        do {
          puVar13 = local_194;
          if (CARRY4(local_198,uVar15)) {
            local_1a0 = 0x3c;
            iVar9 = 0;
            if (0x3b < (int)(uVar15 + local_198)) {
              iVar9 = local_1a0;
            }
            puVar13 = local_194 + (int)(uVar15 + (local_198 - iVar9));
          }
          local_110 = 0x79;
          if ((int)local_108 < 0x79) {
            iVar9 = 0;
            if (0x78 < (int)local_108) {
              iVar9 = local_110;
            }
            local_104[(int)(local_108 - iVar9)] = *puVar13;
            local_108 = local_108 + 1;
          }
          iVar11 = iVar11 + 1;
          uVar15 = uVar15 - 1;
        } while (iVar11 < (int)local_198);
      }
      else {
        uVar15 = 0;
        uVar14 = 0xffffffff;
        do {
          if (*(byte *)(param_1 + 0x48) <= uVar15) break;
          puVar13 = local_194;
          if (CARRY4(local_198,uVar14)) {
            local_1a0 = 0x3c;
            iVar11 = 0;
            if (0x3b < (int)(uVar14 + local_198)) {
              iVar11 = local_1a0;
            }
            puVar13 = local_194 + (int)(uVar14 + (local_198 - iVar11));
          }
          local_110 = 0x79;
          if ((int)local_108 < 0x79) {
            iVar11 = 0;
            if (0x78 < (int)local_108) {
              iVar11 = local_110;
            }
            local_104[(int)(local_108 - iVar11)] = *puVar13;
            local_108 = local_108 + 1;
          }
          uVar15 = uVar15 + 1;
          uVar14 = uVar14 - 1;
        } while ((int)uVar15 < (int)local_198);
      }
    }
    if (0 < (int)local_228) {
      if (cVar4 == '\0') {
        uVar15 = 0;
        do {
          puVar13 = local_224;
          if (uVar15 < local_228) {
            local_230 = 0x3c;
            iVar11 = 0;
            if (0x3b < (int)uVar15) {
              iVar11 = local_230;
            }
            puVar13 = local_224 + (int)(uVar15 - iVar11);
          }
          local_110 = 0x79;
          if ((int)local_108 < 0x79) {
            iVar11 = 0;
            if (0x78 < (int)local_108) {
              iVar11 = local_110;
            }
            local_104[(int)(local_108 - iVar11)] = *puVar13;
            local_108 = local_108 + 1;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_228);
      }
      else {
        uVar15 = 0;
        do {
          if (*(byte *)(param_1 + 0x48) <= uVar15) break;
          puVar13 = local_224;
          if (uVar15 < local_228) {
            local_230 = 0x3c;
            iVar11 = 0;
            if (0x3b < (int)uVar15) {
              iVar11 = local_230;
            }
            puVar13 = local_224 + (int)(uVar15 - iVar11);
          }
          local_110 = 0x79;
          if ((int)local_108 < 0x79) {
            iVar11 = 0;
            if (0x78 < (int)local_108) {
              iVar11 = local_110;
            }
            local_104[(int)(local_108 - iVar11)] = *puVar13;
            local_108 = local_108 + 1;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_228);
      }
    }
    if ((bVar6) && (local_110 = 0x79, (int)local_108 < 0x79)) {
      iVar11 = 0;
      if (0x78 < (int)local_108) {
        iVar11 = local_110;
      }
      local_104[(int)(local_108 - iVar11)] = (ushort)bVar5;
      local_108 = local_108 + 1;
    }
  }
  local_118 = local_104;
  if (local_108 != 0) {
    uVar8 = *(uint *)(param_1 + 0x38) ^ *(uint *)(param_1 + 0x38) << 0xb;
    uVar15 = *(uint *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
    uVar8 = uVar8 >> 8 ^ uVar15 >> 0x13 ^ uVar8 ^ uVar15;
    *(uint *)(param_1 + 0x40) = uVar15;
    *(uint *)(param_1 + 0x44) = uVar8;
    uVar8 = (uint)((ulong)local_108 * (ulong)uVar8 >> 0x20);
    if (uVar8 < local_108) {
      local_110 = 0x79;
      iVar11 = 0;
      if (0x78 < (int)uVar8) {
        iVar11 = local_110;
      }
      local_118 = local_118 + (int)(uVar8 - iVar11);
    }
    uVar8 = (uint)(short)*local_118;
  }
  return uVar8;
}

