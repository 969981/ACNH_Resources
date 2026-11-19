
undefined4 FUN_038f0420(long param_1,char *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  void *__src;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  
  cVar5 = *param_2;
  if (cVar5 == '\0') {
    **(undefined1 **)(param_1 + 0x10) = 0;
    __src = *(void **)(param_1 + 0x18);
    if (param_3 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar8 = 0;
    uVar2 = 0;
    do {
      uVar6 = uVar2;
      *(char *)(*(long *)(param_1 + 0x10) + uVar8) = cVar5;
      uVar2 = uVar6 + 1;
      uVar8 = (ulong)uVar2;
      cVar5 = param_2[uVar8];
    } while (cVar5 != '\0');
    *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar8) = 0;
    if (param_3 < uVar2) {
      return 0;
    }
    __src = *(void **)(param_1 + 0x18);
    bVar4 = param_3 != 0;
    if (uVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar11 = 0;
      uVar8 = 0;
      do {
        uVar10 = (uint)uVar11;
        uVar7 = (uint)uVar8;
        if (((uVar10 < param_4) || (uVar6 - 3 < uVar10)) || (param_2[uVar11] != '&')) {
          *(char *)((long)__src + uVar8) = param_2[uVar11];
LAB_038f04a0:
          uVar8 = (ulong)(uVar7 + 1);
LAB_038f04a4:
          uVar9 = uVar10;
        }
        else {
          if (param_3 <= (uint)(uVar11 + 1)) goto LAB_038f0700;
          if (param_2[uVar11 + 1] != '#') {
            *(undefined1 *)((long)__src + uVar8) = 0x26;
            goto LAB_038f04a0;
          }
          if (param_3 <= (uint)(uVar11 + 2)) goto LAB_038f0700;
          bVar3 = param_2[uVar11 + 2];
          if (bVar3 != 0x78) {
            uVar9 = uVar10 + 4;
            if (uVar9 < param_3) {
              if (param_2[uVar9] == ';') {
                uVar10 = bVar3 - 0x30;
                if (9 < uVar10) {
                  uVar13 = (uint)bVar3;
                  if (uVar13 - 0x41 < 6) {
                    uVar10 = uVar13 - 0x37;
                  }
                  else {
                    uVar10 = uVar13 - 0x57;
                    if (5 < uVar13 - 0x61) {
                      uVar10 = 0;
                    }
                  }
                }
                bVar3 = param_2[uVar11 + 3];
                uVar13 = bVar3 - 0x30;
                if (9 < uVar13) {
                  uVar12 = (uint)bVar3;
                  if (bVar3 - 0x41 < 6) {
                    uVar13 = uVar12 - 0x37;
                  }
                  else {
                    uVar13 = uVar12 - 0x57;
                    if (5 < uVar12 - 0x61) {
                      uVar13 = 0;
                    }
                  }
                }
                uVar13 = uVar13 + uVar10 * 10;
                if (uVar13 < 0x80) {
LAB_038f0690:
                  *(char *)((long)__src + uVar8) = (char)uVar13;
                }
                else {
                  if (uVar13 < 0x800) {
LAB_038f06a0:
                    *(byte *)((long)__src + uVar8) = (byte)(uVar13 >> 6) | 0xc0;
                    ((byte *)((long)__src + uVar8))[1] = (byte)uVar13 & 0x3f | 0x80;
                    uVar8 = (ulong)(uVar7 + 2);
                    goto LAB_038f04a8;
                  }
LAB_038f06c4:
                  *(undefined1 *)((long)__src + uVar8) = 0x3f;
                }
                uVar8 = (ulong)(uVar7 + 1);
                goto LAB_038f04a8;
              }
              goto LAB_038f04a4;
            }
            goto LAB_038f0700;
          }
          uVar9 = uVar10 + 5;
          if (param_3 <= uVar9) goto LAB_038f0700;
          if (param_2[uVar9] != ';') goto LAB_038f04a4;
          bVar3 = param_2[uVar11 + 3];
          uVar12 = bVar3 - 0x30;
          if (9 < uVar12) {
            uVar13 = (uint)bVar3;
            if (bVar3 - 0x41 < 6) {
              uVar12 = uVar13 - 0x37;
            }
            else {
              uVar12 = uVar13 - 0x57;
              if (5 < uVar13 - 0x61) {
                uVar12 = 0;
              }
            }
          }
          bVar3 = param_2[uVar10 + 4];
          uVar13 = bVar3 - 0x30;
          if (9 < uVar13) {
            uVar10 = (uint)bVar3;
            if (bVar3 - 0x41 < 6) {
              uVar13 = uVar10 - 0x37;
            }
            else {
              uVar13 = uVar10 - 0x57;
              if (5 < uVar10 - 0x61) {
                uVar13 = 0;
              }
            }
          }
          uVar13 = uVar13 | uVar12 << 4;
          pbVar1 = (byte *)((long)__src + uVar8);
          if (uVar13 < 0x80) goto LAB_038f0690;
          if (uVar13 < 0x800) goto LAB_038f06a0;
          if (uVar13 >> 0x10 != 0) goto LAB_038f06c4;
          *pbVar1 = (byte)(uVar13 >> 0xc) | 0xe0;
          pbVar1[1] = (byte)(uVar13 >> 6) & 0x3f | 0x80;
          pbVar1[2] = (byte)uVar13 & 0x3f | 0x80;
          uVar8 = (ulong)(uVar7 + 3);
        }
LAB_038f04a8:
        uVar11 = (ulong)(uVar9 + 1);
        uVar7 = (uint)uVar8;
        bVar4 = uVar7 < param_3;
      } while ((uVar9 + 1 < uVar2) && (uVar7 < param_3));
    }
    if (!bVar4) {
      uVar7 = param_3 - 1;
    }
  }
LAB_038f0700:
  *(undefined1 *)((long)__src + (ulong)uVar7) = 0;
  memcpy(param_2,__src,(ulong)(uVar7 + 1));
  return 1;
}

