
undefined8 FUN_00363df8(undefined8 *param_1,char *param_2)

{
  char *__s1;
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  *param_1 = param_2;
  iVar8 = strncmp(param_2,"SARC",4);
  if (iVar8 != 0) {
    return 0;
  }
  bVar6 = *(ushort *)(param_2 + 6) >> 8 < 0xff;
  bVar7 = (*(ushort *)(param_2 + 6) & 0xff) != 0xfe;
  *(uint *)(param_1 + 6) = (uint)(bVar6 || bVar7);
  uVar2 = *(ushort *)(param_2 + 0x10);
  if (!bVar6 && !bVar7) {
    uVar2 = uVar2 >> 8 | uVar2 << 8;
  }
  if (uVar2 == 0x100) {
    uVar2 = *(ushort *)(param_2 + 4);
    if ((bVar6 || bVar7) == 0) {
      uVar2 = uVar2 >> 8 | uVar2 << 8;
    }
    if (uVar2 == 0x14) {
      param_1[1] = param_2 + 0x14;
      iVar8 = strncmp(param_2 + 0x14,"SFAT",4);
      if (iVar8 == 0) {
        uVar2 = *(ushort *)(param_2 + 0x18);
        if (!bVar6 && !bVar7) {
          uVar2 = uVar2 >> 8 | uVar2 << 8;
        }
        if (uVar2 == 0xc) {
          uVar2 = *(ushort *)(param_2 + 0x1a);
          uVar1 = (uint)uVar2;
          if (!bVar6 && !bVar7) {
            uVar1 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
          }
          if ((uVar1 & 0xc000) == 0) {
            *(uint *)(param_1 + 4) = uVar1;
            uVar2 = *(ushort *)(param_2 + 4);
            if (!bVar6 && !bVar7) {
              uVar2 = uVar2 >> 8 | uVar2 << 8;
            }
            uVar3 = *(ushort *)(param_2 + 0x18);
            if (!bVar6 && !bVar7) {
              uVar3 = uVar3 >> 8 | uVar3 << 8;
            }
            param_1[3] = param_2 + (long)(short)uVar3 + (long)(short)uVar2;
            uVar2 = *(ushort *)(param_2 + 4);
            if (!bVar6 && !bVar7) {
              uVar2 = uVar2 >> 8 | uVar2 << 8;
            }
            uVar3 = *(ushort *)(param_2 + 0x18);
            if (!bVar6 && !bVar7) {
              uVar3 = uVar3 >> 8 | uVar3 << 8;
            }
            uVar4 = *(ushort *)(param_2 + 0x1a);
            if (!bVar6 && !bVar7) {
              uVar4 = uVar4 >> 8 | uVar4 << 8;
            }
            __s1 = param_2 + (long)(short)uVar4 * 0x10 + (long)(short)uVar3 + (long)(short)uVar2;
            iVar8 = strncmp(__s1,"SFNT",4);
            if (iVar8 == 0) {
              uVar2 = *(ushort *)(__s1 + 4);
              if (!bVar6 && !bVar7) {
                uVar2 = uVar2 >> 8 | uVar2 << 8;
              }
              if (uVar2 == 8) {
                param_1[2] = __s1 + 8;
                uVar1 = *(uint *)(param_2 + 0xc);
                uVar5 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                if (!bVar6 && !bVar7) {
                  uVar1 = uVar5 >> 0x10 | uVar5 << 0x10;
                }
                if ((long)(__s1 + 8) - (long)param_2 <= (long)(int)uVar1) {
                  param_1[5] = param_2 + (int)uVar1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

