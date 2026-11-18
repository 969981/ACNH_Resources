
int FUN_032f2110(undefined8 param_1,long param_2,uint param_3)

{
  byte *__s;
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  long *plVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort uVar9;
  ushort uVar10;
  short *psVar11;
  ushort uVar12;
  short sVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  short *local_70;
  
  if (param_2 == 0) {
    return 0x8001;
  }
  __s = (byte *)(param_2 + 0xb5170);
  puVar1 = (ushort *)(param_2 + 0x79cc8);
  memset(__s,0,0x158);
  if (*(short *)(param_2 + 0x79e94) == 0) {
    local_70 = (short *)0x0;
    uVar10 = *puVar1;
  }
  else {
    local_70 = (short *)0x0;
    if (*(short *)(param_2 + 0x85b50) != 0) {
      local_70 = (short *)(param_2 + 0x85b50);
    }
    uVar10 = *puVar1;
  }
  puVar7 = puVar1;
  if (uVar10 != 0) {
    uVar10 = 0;
    psVar11 = (short *)(param_2 + 0x79cca);
    do {
      sVar13 = *psVar11;
      uVar10 = uVar10 + 1;
      psVar11 = psVar11 + 1;
    } while (sVar13 != 0);
    if (uVar10 != 0) {
      uVar9 = 0;
      uVar12 = 0;
      do {
        uVar6 = *puVar7;
        if (uVar6 < 0xca02) {
          if (uVar6 == 0xc702) {
            uVar14 = 0x3300;
            goto LAB_032f2280;
          }
          uVar14 = 0x3100;
          if (uVar6 == 0xc902) goto LAB_032f2280;
LAB_032f2208:
          uVar8 = (ulong)uVar9;
          uVar9 = uVar9 + 1;
          *(ushort *)(param_2 + uVar8 * 2 + 0xb5258) = uVar6;
        }
        else {
          if (uVar6 == 0xd902) {
            uVar14 = 0x3000;
          }
          else if (uVar6 == 0xcb02) {
            uVar14 = 0x3400;
          }
          else {
            if (uVar6 != 0xca02) goto LAB_032f2208;
            uVar14 = 0x3200;
          }
LAB_032f2280:
          *puVar7 = uVar14;
          bVar3 = *__s;
          *__s = bVar3 + 1;
          uVar14 = *puVar1;
          *(ushort *)(param_2 + (ulong)bVar3 * 2 + 0xb5172) = uVar12;
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = 0;
            psVar11 = (short *)(param_2 + 0x79cca);
            do {
              sVar13 = *psVar11;
              uVar6 = uVar6 + 1;
              psVar11 = psVar11 + 1;
            } while (sVar13 != 0);
          }
          if (uVar12 < uVar6) {
            *(undefined1 *)(param_2 + 0xb51e2) = 1;
          }
        }
        uVar12 = uVar12 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar12 < uVar10);
      sVar13 = *(short *)(param_2 + 0xb5258);
      psVar11 = (short *)(param_2 + 0xb51e6);
      if (sVar13 != 0) {
        do {
          *psVar11 = sVar13;
          sVar13 = psVar11[0x3a];
          psVar11 = psVar11 + 1;
        } while (sVar13 != 0);
      }
      goto LAB_032f2308;
    }
  }
  psVar11 = (short *)(param_2 + 0xb51e6);
LAB_032f2308:
  *psVar11 = 0;
  puVar1 = (ushort *)(param_2 + 0x83e00);
  uVar10 = 0;
  if (*(ushort *)(param_2 + 0xb5258) != 0) {
    uVar10 = 0;
    psVar11 = (short *)(param_2 + 0xb525a);
    do {
      sVar13 = *psVar11;
      uVar10 = uVar10 + 1;
      psVar11 = psVar11 + 1;
    } while (sVar13 != 0);
  }
  *(ushort *)(param_2 + 0xb51e4) = uVar10;
  *(undefined2 *)(param_2 + (ulong)uVar10 * 2 + 0xb5258) = 0;
  uVar10 = 0;
  if (*(char *)(param_2 + 0x79e99) != '\0') {
    uVar10 = 0x300;
  }
  *(ushort *)(param_2 + 0x79e88) = *(ushort *)(param_2 + 0x79e88) & 0xfcff | uVar10;
  if (*(char *)(param_2 + 0xb51e2) != '\0') {
    *(long *)(param_2 + 0x6f4e8) = param_2;
    *(undefined1 **)(param_2 + 0x6f4e0) = &LAB_032f1650;
  }
  puVar2 = (ushort *)(param_2 + 0xb5258);
  if (*puVar1 != 0) {
    puVar2 = puVar7;
  }
  if ((param_3 & 0xffff) == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = 0;
    uVar16 = 0;
    do {
      uVar10 = *puVar1;
      puVar7 = puVar2;
      if (uVar16 != 0) {
        puVar7 = (ushort *)0x0;
      }
      uVar5 = FUN_00100790(param_2 + 8,param_2 + 0x79ea0 + (ulong)uVar10 * 0x88,local_70,puVar7,
                           param_2 + 0x79e88);
      if ((uVar5 >> 0xf & 1) != 0) {
        return (int)(short)uVar5;
      }
      if ((short)uVar5 == 0) {
        return iVar15;
      }
      if ((*(ushort *)(param_2 + 0x79ea0 + (ulong)uVar10 * 0x88 + 0x80) & 0x8f0) == 0x10) {
        plVar4 = (long *)(param_2 + 0x6d778);
        for (uVar8 = (ulong)*(ushort *)(param_2 + 0x6f4a2); uVar8 != 0; uVar8 = uVar8 - 1) {
          if (*plVar4 == 0) goto LAB_032f2434;
          plVar4 = plVar4 + 0x11;
        }
      }
      iVar15 = iVar15 + 1;
      *puVar1 = *puVar1 + 1;
LAB_032f2434:
      uVar16 = uVar16 + 1;
    } while (uVar16 < (param_3 & 0xffff));
  }
  return iVar15;
}

