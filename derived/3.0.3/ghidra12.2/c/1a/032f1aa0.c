
uint FUN_032f1aa0(undefined8 param_1,long param_2)

{
  byte *__s;
  ushort *puVar1;
  long lVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  byte bVar9;
  short sVar10;
  short *psVar11;
  short *psVar12;
  ushort uVar13;
  short sVar14;
  short *psVar15;
  short *psVar16;
  ushort uVar17;
  short *psVar18;
  byte bVar19;
  short *psVar20;
  uint uVar21;
  ulong uVar22;
  undefined1 auStack_170 [104];
  char local_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  
  if (param_2 == 0) {
    return 0x8001;
  }
  __s = (byte *)(param_2 + 0xb5170);
  puVar1 = (ushort *)(param_2 + 0x83e00);
  psVar8 = (short *)(param_2 + 0x79cc8);
  if (*(short *)(param_2 + 0x79e94) == 0) {
    psVar20 = (short *)0x0;
  }
  else {
    psVar20 = (short *)0x0;
    if (*(short *)(param_2 + 0x85b50) != 0) {
      psVar20 = (short *)(param_2 + 0x85b50);
    }
  }
  *(undefined8 *)(param_2 + 0x6f4e0) = 0;
  *(undefined8 *)(param_2 + 0x6f4e8) = 0;
  memset(__s,0,0x158);
  bVar9 = 0;
  uVar17 = 0;
  uVar13 = 0;
  bVar5 = false;
  bVar19 = 0;
  do {
    while (uVar4 = *(ushort *)(param_2 + (ulong)uVar17 * 2 + 0x79cc8), uVar4 == 0x2300) {
      *(ushort *)(param_2 + (ulong)bVar9 * 2 + 0xb5172) = uVar17;
      bVar9 = bVar9 + 1;
      *__s = bVar9;
LAB_032f1be0:
      uVar17 = uVar17 + 1;
      bVar19 = bVar9;
    }
    if (uVar4 == 0) break;
    if (0x300 < uVar4 - 0x6021) {
      bVar9 = bVar19;
      if ((bVar19 == 0) || (!bVar5)) {
        uVar22 = (ulong)uVar13;
        uVar13 = uVar13 + 1;
        *(ushort *)(param_2 + uVar22 * 2 + 0x79daa) = uVar4;
      }
      else {
        bVar5 = true;
      }
      goto LAB_032f1be0;
    }
    bVar5 = true;
    uVar17 = uVar17 + 1;
  } while( true );
  sVar10 = *psVar8;
  lVar2 = param_2 + 8;
  *(ushort *)(param_2 + 0xb51e4) = uVar13;
  if (sVar10 == 0) {
    sVar14 = 0;
  }
  else {
    sVar14 = 0;
    psVar12 = (short *)(param_2 + 0x79cca);
    do {
      sVar3 = *psVar12;
      sVar14 = sVar14 + 1;
      psVar12 = psVar12 + 1;
    } while (sVar3 != 0);
  }
  *(short *)(param_2 + (ulong)bVar9 * 2 + 0xb5172) = sVar14;
  if ((*puVar1 == 0) && (*(char *)(param_2 + 2) == '\t')) {
    *(undefined1 *)(param_2 + 0xb51e2) = 0;
    local_74 = 0x1e0023;
    local_70 = 100;
    local_6c = 0x3700;
    *(undefined8 *)(param_2 + 0xb51e6) = 0;
    *(undefined8 *)(param_2 + 0xb51ee) = 0;
    *(undefined8 *)(param_2 + 0xb51f6) = 0;
    *(undefined8 *)(param_2 + 0xb51fe) = 0;
    *(undefined8 *)(param_2 + 0xb5206) = 0;
    *(undefined8 *)(param_2 + 0xb520e) = 0;
    *(undefined8 *)(param_2 + 0xb5216) = 0;
    *(undefined8 *)(param_2 + 0xb521e) = 0;
    *(undefined8 *)(param_2 + 0xb5226) = 0;
    *(undefined8 *)(param_2 + 0xb522e) = 0;
    *(undefined8 *)(param_2 + 0xb5236) = 0;
    *(undefined8 *)(param_2 + 0xb523e) = 0;
    *(undefined8 *)(param_2 + 0xb5246) = 0;
    *(undefined8 *)(param_2 + 0xb524e) = 0;
    memcpy((void *)(param_2 + 0x6f518),(void *)(param_2 + 0x87470),0x6d0);
    psVar12 = (short *)(param_2 + 0xb5258);
    psVar11 = psVar12;
    if (sVar10 != 0) {
      psVar15 = psVar12;
      do {
        psVar11 = psVar15 + 1;
        *psVar15 = sVar10;
        sVar10 = psVar15[-0x1dac7];
        psVar15 = psVar11;
      } while (sVar10 != 0);
    }
    *psVar11 = 0;
    *(undefined2 *)(param_2 + 0x87468) = 0;
    if (*psVar12 != 0) {
      uVar13 = 0;
      psVar11 = (short *)(param_2 + 0xb525a);
      do {
        sVar10 = *psVar11;
        uVar13 = uVar13 + 1;
        psVar11 = psVar11 + 1;
      } while (sVar10 != 0);
      if (uVar13 != 0) {
        uVar22 = (ulong)uVar13;
        psVar11 = (short *)((ulong)&local_e8 | 2);
        do {
          local_6c._0_2_ = CONCAT11((char)uVar22,(undefined1)local_6c);
          *(undefined2 *)(param_2 + uVar22 * 2 + 0xb5258) = 0;
          sVar10 = *(short *)(param_2 + 0x87468);
          if (sVar10 != 100) {
            uVar6 = FUN_00100790(lVar2,auStack_170,psVar20,psVar12,&local_74);
            if ((uVar6 >> 0xf & 1) != 0) {
              return (int)(short)uVar6;
            }
            if ((int)(short)uVar6 != 0) {
              if (local_108 == '\0') {
                local_88 = 0;
                uStack_80 = 0;
                local_98 = 0;
                uStack_90 = 0;
                local_a8 = 0;
                uStack_a0 = 0;
                local_b8 = 0;
                uStack_b0 = 0;
                local_c8 = 0;
                uStack_c0 = 0;
                local_d8 = 0;
                uStack_d0 = 0;
                local_e8 = 0;
                uStack_e0 = 0;
                FUN_001007f0(&local_e8,lVar2,auStack_170,0x70);
                if (*__s != 0) {
                  uVar6 = 0;
                  if ((short)local_e8 != 0) {
                    psVar15 = psVar11;
                    do {
                      sVar14 = *psVar15;
                      uVar6 = uVar6 + 1;
                      psVar15 = psVar15 + 1;
                    } while (sVar14 != 0);
                  }
                  if ((int)(uVar6 & 0xffff) < (int)*(short *)(param_2 + 0xb5172)) goto LAB_032f1e40;
                }
                psVar15 = (short *)(param_2 + (ulong)*(ushort *)(param_2 + 0x87468) * 0x16 + 0x86bd0
                                   );
                if ((short)local_e8 != 0) {
                  psVar16 = psVar15;
                  psVar18 = psVar11;
                  sVar14 = (short)local_e8;
                  do {
                    psVar15 = psVar16 + 1;
                    *psVar16 = sVar14;
                    sVar14 = *psVar18;
                    psVar16 = psVar15;
                    psVar18 = psVar18 + 1;
                  } while (sVar14 != 0);
                }
                *psVar15 = 0;
                uVar13 = *(ushort *)(param_2 + 0x87468);
                *(ushort *)(param_2 + 0x87468) = uVar13 + 1;
                *(undefined1 *)(param_2 + (ulong)uVar13 * 0x16 + 0x86be4) = 0;
              }
LAB_032f1e40:
              uVar13 = 100 - sVar10;
              if (1 < uVar13) {
                uVar17 = 1;
                do {
                  uVar6 = FUN_00100790(lVar2,auStack_170,psVar20,0,&local_74);
                  if ((uVar6 >> 0xf & 1) != 0) {
                    return (int)(short)uVar6;
                  }
                  if ((int)(short)uVar6 == 0) break;
                  if (local_108 == '\0') {
                    local_88 = 0;
                    uStack_80 = 0;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_a8 = 0;
                    uStack_a0 = 0;
                    local_b8 = 0;
                    uStack_b0 = 0;
                    local_c8 = 0;
                    uStack_c0 = 0;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_e8 = 0;
                    uStack_e0 = 0;
                    FUN_001007f0(&local_e8,lVar2,auStack_170,0x70);
                    if (*__s != 0) {
                      uVar6 = 0;
                      if ((short)local_e8 != 0) {
                        psVar15 = psVar11;
                        do {
                          sVar10 = *psVar15;
                          uVar6 = uVar6 + 1;
                          psVar15 = psVar15 + 1;
                        } while (sVar10 != 0);
                      }
                      if ((int)(uVar6 & 0xffff) < (int)*(short *)(param_2 + 0xb5172))
                      goto LAB_032f1e84;
                    }
                    psVar15 = (short *)(param_2 + (ulong)*(ushort *)(param_2 + 0x87468) * 0x16 +
                                       0x86bd0);
                    if ((short)local_e8 != 0) {
                      psVar16 = psVar15;
                      psVar18 = psVar11;
                      sVar10 = (short)local_e8;
                      do {
                        psVar15 = psVar16 + 1;
                        *psVar16 = sVar10;
                        sVar10 = *psVar18;
                        psVar16 = psVar15;
                        psVar18 = psVar18 + 1;
                      } while (sVar10 != 0);
                    }
                    *psVar15 = 0;
                    uVar4 = *(ushort *)(param_2 + 0x87468);
                    *(ushort *)(param_2 + 0x87468) = uVar4 + 1;
                    *(undefined1 *)(param_2 + (ulong)uVar4 * 0x16 + 0x86be4) = 0;
                  }
LAB_032f1e84:
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar13);
              }
            }
          }
          uVar22 = uVar22 - 1;
        } while ((uVar22 & 0xffff) != 0);
      }
    }
  }
  memcpy((void *)(param_2 + 0x6f518),(void *)(param_2 + 0x78ee0),0x6d0);
  psVar11 = (short *)(param_2 + 0x79daa);
  sVar10 = *psVar8;
  psVar12 = psVar11;
  if (sVar10 != 0) {
    do {
      *psVar12 = sVar10;
      sVar10 = psVar12[-0x70];
      psVar12 = psVar12 + 1;
    } while (sVar10 != 0);
  }
  *psVar12 = 0;
  sVar10 = *psVar8;
  psVar8 = (short *)(param_2 + 0xb51e6);
  *(undefined8 *)(param_2 + 0x6f4e0) = &LAB_032f13d0;
  *(long *)(param_2 + 0x6f4e8) = param_2;
  psVar12 = psVar8;
  if (sVar10 != 0) {
    psVar15 = psVar8;
    do {
      psVar12 = psVar15 + 1;
      *psVar15 = sVar10;
      sVar10 = psVar15[-0x1da8e];
      psVar15 = psVar12;
    } while (sVar10 != 0);
  }
  *psVar12 = 0;
  sVar10 = 0;
  if (*psVar8 != 0) {
    sVar10 = 0;
    psVar8 = (short *)(param_2 + 0xb51e8);
    do {
      sVar14 = *psVar8;
      sVar10 = sVar10 + 1;
      psVar8 = psVar8 + 1;
    } while (sVar14 != 0);
  }
  *(short *)(param_2 + 0xb51e4) = sVar10;
  uVar21 = 0;
  uVar6 = 0;
  uVar13 = *(ushort *)(param_2 + 0x79e88) & 0xfcff | 0x23;
  if (*(char *)(param_2 + 0x79e99) != '\0') {
    uVar13 = *(ushort *)(param_2 + 0x79e88) | 0x323;
  }
  *(ushort *)(param_2 + 0x79e88) = uVar13;
  psVar8 = psVar11;
  do {
    uVar7 = FUN_00100790(lVar2,param_2 + 0x79ea0 + (ulong)*puVar1 * 0x88,psVar20,psVar8,
                         param_2 + 0x79e88);
    if ((uVar7 >> 0xf & 1) != 0) {
      return (int)(short)uVar7;
    }
    if ((int)(short)uVar7 == 0) {
      if ((uVar6 & 0xffff) != 0) {
        return uVar6;
      }
      sVar10 = 0;
      if (*psVar11 != 0) {
        sVar10 = 0;
        psVar8 = (short *)(param_2 + 0x79dac);
        do {
          sVar14 = *psVar8;
          sVar10 = sVar10 + 1;
          psVar8 = psVar8 + 1;
        } while (sVar14 != 0);
      }
      uVar6 = 0;
      *(undefined2 *)(param_2 + (long)sVar10 * 2 + 0x79da8) = 0;
      *(undefined2 *)(param_2 + 0x6fb74) = 0;
      psVar8 = psVar11;
    }
    else {
      psVar8 = (short *)0x0;
      uVar6 = uVar6 + 1;
      *puVar1 = *puVar1 + 1;
    }
    bVar5 = uVar21 < 299;
    uVar21 = uVar21 + 1;
  } while (bVar5);
  return uVar6;
}

