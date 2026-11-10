
ulong FUN_0017eb10(uint param_1,byte *param_2,ulong param_3)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  uVar13 = (ulong)~param_1;
  if ((param_3 != 0) && (((ulong)param_2 & 7) != 0)) {
    uVar14 = param_3 - 1;
    pbVar15 = param_2 + 1;
    uVar19 = crc32b(~param_1,(uint)*param_2,0x4c11db7);
    uVar13 = (ulong)uVar19;
    if (uVar14 != 0) {
      if (((ulong)pbVar15 & 7) != 0) {
        uVar14 = param_3 - 2;
        pbVar15 = param_2 + 2;
        uVar19 = crc32b(uVar19,(uint)param_2[1],0x4c11db7);
        uVar13 = (ulong)uVar19;
        if (uVar14 != 0) {
          if (((ulong)pbVar15 & 7) != 0) {
            uVar14 = param_3 - 3;
            pbVar15 = param_2 + 3;
            uVar19 = crc32b(uVar19,(uint)param_2[2],0x4c11db7);
            uVar13 = (ulong)uVar19;
            if (uVar14 != 0) {
              if (((ulong)pbVar15 & 7) != 0) {
                uVar14 = param_3 - 4;
                pbVar15 = param_2 + 4;
                uVar19 = crc32b(uVar19,(uint)param_2[3],0x4c11db7);
                uVar13 = (ulong)uVar19;
                if (uVar14 != 0) {
                  if (((ulong)pbVar15 & 7) != 0) {
                    uVar14 = param_3 - 5;
                    pbVar15 = param_2 + 5;
                    uVar19 = crc32b(uVar19,(uint)param_2[4],0x4c11db7);
                    uVar13 = (ulong)uVar19;
                    if (uVar14 != 0) {
                      if (((ulong)pbVar15 & 7) != 0) {
                        uVar14 = param_3 - 6;
                        pbVar15 = param_2 + 6;
                        uVar19 = crc32b(uVar19,(uint)param_2[5],0x4c11db7);
                        uVar13 = (ulong)uVar19;
                        if (uVar14 != 0) {
                          if (((ulong)pbVar15 & 7) != 0) {
                            uVar14 = param_3 - 7;
                            pbVar15 = param_2 + 7;
                            uVar19 = crc32b(uVar19,(uint)param_2[6],0x4c11db7);
                            uVar13 = (ulong)uVar19;
                            if (uVar14 != 0) {
                              if (((ulong)pbVar15 & 7) != 0) {
                                param_3 = param_3 - 8;
                                pbVar15 = param_2 + 7;
                                param_2 = param_2 + 8;
                                uVar19 = crc32b(uVar19,(uint)*pbVar15,0x4c11db7);
                                uVar13 = (ulong)uVar19;
                                goto LAB_0017ec0c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    param_2 = pbVar15;
    param_3 = uVar14;
  }
LAB_0017ec0c:
  uVar14 = param_3 >> 3;
  if (0x1760f < param_3) {
    pbVar15 = param_2 + 0x7cb0;
    do {
      uVar17 = 0;
      uVar19 = 0;
      pbVar7 = pbVar15;
      lVar10 = -0x7cb0;
      do {
        uVar12 = *(undefined8 *)pbVar7;
        lVar3 = lVar10 + 8;
        pbVar2 = pbVar7 + 0x7cb0;
        pbVar7 = pbVar7 + 8;
        uVar6 = crc32x((int)uVar13,*(undefined8 *)(param_2 + lVar10 + 0x7cb0),0x4c11db7);
        uVar13 = (ulong)uVar6;
        uVar19 = crc32x(uVar19,uVar12,0x4c11db7);
        uVar17 = crc32x(uVar17,*(undefined8 *)pbVar2,0x4c11db7);
        lVar10 = lVar3;
      } while (lVar3 != 0);
      uVar6 = 0;
      param_2 = param_2 + 0x17610;
      uVar11 = 0x80000000;
      while( true ) {
        if (((uVar11 & 0xa10d3d0c) != 0) &&
           (uVar6 = uVar6 ^ (uint)uVar13, ((int)uVar11 - 1U & 0xa10d3d0c) == 0)) break;
        uVar9 = (uint)(uVar13 >> 1);
        uVar11 = uVar11 >> 1;
        if ((uVar13 & 1) != 0) {
          uVar9 = uVar9 ^ 0xedb88320;
        }
        uVar13 = (ulong)uVar9;
      }
      uVar9 = 0;
      uVar6 = uVar6 ^ uVar19;
      uVar13 = 0x80000000;
      while (((uVar13 & 0xa10d3d0c) == 0 ||
             (uVar9 = uVar9 ^ uVar6, ((int)uVar13 - 1U & 0xa10d3d0c) != 0))) {
        uVar19 = uVar6 >> 1;
        uVar4 = uVar6 & 1;
        uVar13 = uVar13 >> 1;
        uVar6 = uVar19;
        if (uVar4 != 0) {
          uVar6 = uVar19 ^ 0xedb88320;
        }
      }
      uVar14 = uVar14 - 0x2ec2;
      uVar13 = (ulong)(uVar17 ^ uVar9);
      pbVar15 = pbVar15 + 0x17610;
    } while (0x2ec1 < uVar14);
  }
  param_3 = param_3 & 7;
  if (uVar14 < 0x960) goto LAB_0017ee20;
  uVar19 = (uint)uVar14 & 0xffff;
  uVar11 = (uVar14 & 0xffff) / 3;
  if (uVar19 < 3) {
    uVar16 = 0;
    uVar17 = 0;
LAB_0017ed98:
    uVar6 = 0x80000000;
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = uVar11;
    if (uVar11 < 2) {
      uVar18 = 1;
    }
    pbVar15 = param_2;
    do {
      uVar18 = uVar18 - 1;
      uVar6 = crc32x((int)uVar13,*(undefined8 *)pbVar15,0x4c11db7);
      uVar13 = (ulong)uVar6;
      uVar17 = crc32x(uVar17,*(undefined8 *)(pbVar15 + uVar11 * 8),0x4c11db7);
      uVar6 = crc32x((int)uVar16,*(undefined8 *)(pbVar15 + uVar11 * 0x10),0x4c11db7);
      uVar16 = (ulong)uVar6;
      pbVar15 = pbVar15 + 8;
    } while (uVar18 != 0);
    if (uVar19 < 3) goto LAB_0017ed98;
    uVar19 = 6;
    uVar6 = 0x80000000;
    uVar18 = uVar11;
    do {
      if ((uVar18 & 1) != 0) {
        uVar8 = 0x80000000;
        uVar4 = 0;
        uVar9 = uVar6;
        while( true ) {
          uVar6 = uVar4;
          if ((((uint)uVar8 & *(uint *)(&UNK_04108188 + (ulong)(uVar19 & 0x1f) * 4)) != 0) &&
             (uVar6 = uVar6 ^ uVar9,
             ((uint)uVar8 - 1 & *(uint *)(&UNK_04108188 + (ulong)(uVar19 & 0x1f) * 4)) == 0)) break;
          uVar4 = uVar9 >> 1;
          uVar5 = uVar9 & 1;
          uVar8 = uVar8 >> 1;
          uVar9 = uVar4;
          if (uVar5 != 0) {
            uVar9 = uVar4 ^ 0xedb88320;
          }
          uVar4 = uVar6;
        }
      }
      uVar19 = uVar19 + 1;
      bVar1 = 1 < uVar18;
      uVar18 = uVar18 >> 1;
    } while (bVar1);
  }
  uVar19 = 0;
  uVar14 = uVar14 + uVar11 * -3;
  param_2 = param_2 + uVar11 * 0x18;
  uVar11 = 0x80000000;
  while( true ) {
    if ((((uint)uVar11 & uVar6) != 0) &&
       (uVar19 = uVar19 ^ (uint)uVar13, ((uint)uVar11 - 1 & uVar6) == 0)) break;
    uVar9 = (uint)(uVar13 >> 1);
    uVar11 = uVar11 >> 1;
    if ((uVar13 & 1) != 0) {
      uVar9 = uVar9 ^ 0xedb88320;
    }
    uVar13 = (ulong)uVar9;
  }
  uVar13 = 0;
  uVar19 = uVar19 ^ uVar17;
  uVar11 = 0x80000000;
  while ((((uint)uVar11 & uVar6) == 0 ||
         (uVar13 = (ulong)((uint)uVar13 ^ uVar19), ((uint)uVar11 - 1 & uVar6) != 0))) {
    uVar17 = uVar19 >> 1;
    uVar9 = uVar19 & 1;
    uVar11 = uVar11 >> 1;
    uVar19 = uVar17;
    if (uVar9 != 0) {
      uVar19 = uVar17 ^ 0xedb88320;
    }
  }
  uVar13 = uVar16 ^ uVar13;
LAB_0017ee20:
  if (uVar14 != 0) {
    pbVar15 = param_2;
    uVar11 = uVar14;
    do {
      uVar11 = uVar11 - 1;
      uVar19 = crc32x((int)uVar13,*(undefined8 *)pbVar15,0x4c11db7);
      uVar13 = (ulong)uVar19;
      pbVar15 = pbVar15 + 8;
    } while (uVar11 != 0);
  }
  if (param_3 != 0) {
    param_2 = param_2 + uVar14 * 8;
    uVar19 = crc32b((int)uVar13,(uint)*param_2,0x4c11db7);
    uVar13 = (ulong)uVar19;
    if (param_3 != 1) {
      uVar19 = crc32b(uVar19,(uint)param_2[1],0x4c11db7);
      uVar13 = (ulong)uVar19;
      if (param_3 != 2) {
        uVar19 = crc32b(uVar19,(uint)param_2[2],0x4c11db7);
        uVar13 = (ulong)uVar19;
        if (param_3 != 3) {
          uVar19 = crc32b(uVar19,(uint)param_2[3],0x4c11db7);
          uVar13 = (ulong)uVar19;
          if (param_3 != 4) {
            uVar19 = crc32b(uVar19,(uint)param_2[4],0x4c11db7);
            uVar13 = (ulong)uVar19;
            if (param_3 != 5) {
              uVar19 = crc32b(uVar19,(uint)param_2[5],0x4c11db7);
              uVar13 = (ulong)uVar19;
              if (param_3 != 6) {
                uVar19 = crc32b(uVar19,(uint)param_2[6],0x4c11db7);
                uVar13 = (ulong)uVar19;
              }
            }
          }
        }
      }
    }
  }
  return uVar13 ^ 0xffffffff;
}

