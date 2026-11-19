
uint FUN_038db5b0(long *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  
  bVar7 = *(byte *)((long)param_1 + 0x1a);
  uVar5 = (ulong)bVar7;
  if (bVar7 != 0) {
    uVar11 = 0;
    uVar4 = (uint)bVar7;
    do {
      uVar13 = uVar11;
      if ((uVar4 & 0xff) == 0) {
        iVar12 = *(int *)((long)param_1 + 0xc);
        uVar4 = (uint)bVar7;
        if ((iVar12 < 1) || ((int)param_1[1] <= iVar12)) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          *(int *)(param_1 + 1) = iVar12;
        }
        goto joined_r0x038db904;
      }
      uVar9 = uVar4 - 1;
      *(char *)((long)param_1 + 0x1a) = (char)uVar9;
      switch(uVar4 & 0xff) {
      case 0xd:
        if (param_2[uVar13] != 0x30) {
          return 0xffffffff;
        }
        break;
      case 0xe:
        if (param_2[uVar13] != 0x7a) {
          return 0xffffffff;
        }
        break;
      case 0xf:
        if (param_2[uVar13] != 0x61) {
          return 0xffffffff;
        }
        break;
      case 0x10:
        if (param_2[uVar13] != 0x59) {
          return 0xffffffff;
        }
        break;
      default:
        if (7 < (uVar9 & 0xff)) {
          *(uint *)(param_1 + 1) =
               (uint)param_2[uVar13] << (ulong)((uVar9 & 3) << 3) | *(uint *)(param_1 + 1);
        }
      }
      uVar11 = uVar13 + 1;
      uVar4 = uVar9;
    } while (((uVar9 & 0xff) == 0) || (param_3 - 1 != (int)uVar13));
    uVar5 = uVar11 & 0xffffffff;
    uVar4 = (uint)uVar11;
joined_r0x038db904:
    param_3 = param_3 - uVar4;
    if (param_3 == 0) {
      if ((uVar9 & 0xff) == 0) {
        return *(uint *)(param_1 + 1);
      }
      return 0xffffffff;
    }
    param_2 = param_2 + uVar5;
  }
  uVar4 = *(uint *)(param_1 + 1);
  iVar12 = *(int *)((long)param_1 + 0x14);
  pbVar6 = (byte *)*param_1;
  uVar10 = *(ushort *)(param_1 + 3);
  uVar5 = (ulong)uVar10;
  uVar9 = (uint)*(byte *)(param_1 + 2);
  bVar7 = *(byte *)((long)param_1 + 0x11);
  uVar8 = (uint)bVar7;
  uVar11 = (ulong)*(byte *)((long)param_1 + 0x12);
  while (0 < (int)uVar4) {
    uVar10 = (ushort)uVar5;
    if (iVar12 == 1) {
      uVar5 = ((ulong)*param_2 | (uVar11 & 0xf) << 8) + 1;
      if (0xf < (uint)uVar11) {
        uVar3 = ((uint)uVar11 >> 4) + 2;
        if (uVar4 < uVar3) {
          if (*(int *)((long)param_1 + 0xc) == 0) {
            return 0xfffffffe;
          }
          uVar3 = uVar4 & 0xffff;
        }
        uVar14 = uVar3 & 7;
        if (uVar14 == 0) {
          uVar16 = uVar3;
        }
        else {
          uVar16 = uVar3 & 0xfff8;
          pbVar2 = pbVar6;
          do {
            uVar14 = uVar14 - 1;
            pbVar6 = pbVar2 + 1;
            *pbVar2 = pbVar2[-uVar5];
            pbVar2 = pbVar6;
          } while (uVar14 != 0);
        }
        if (6 < uVar3 - 1) {
          lVar15 = 0;
          do {
            pbVar2 = pbVar6 + lVar15 + -uVar5;
            pbVar1 = pbVar6 + lVar15;
            lVar15 = lVar15 + 8;
            *pbVar1 = *pbVar2;
            pbVar1[1] = pbVar2[1];
            pbVar1[2] = pbVar2[2];
            pbVar1[3] = pbVar2[3];
            pbVar1[4] = pbVar2[4];
            pbVar1[5] = pbVar2[5];
            pbVar1[6] = pbVar2[6];
            pbVar1[7] = pbVar2[7];
          } while (uVar16 != (uint)lVar15);
          goto LAB_038db898;
        }
        goto LAB_038db89c;
      }
      iVar12 = 2;
    }
    else if (iVar12 == 2) {
      uVar3 = *param_2 + 0x12;
      if (uVar4 < uVar3) {
        if (*(int *)((long)param_1 + 0xc) == 0) {
          return 0xfffffffe;
        }
        uVar3 = uVar4 & 0xffff;
      }
      uVar14 = uVar3 & 7;
      if (uVar14 == 0) {
        uVar16 = uVar3;
      }
      else {
        uVar16 = uVar3 & 0xfff8;
        pbVar2 = pbVar6;
        do {
          uVar14 = uVar14 - 1;
          pbVar6 = pbVar2 + 1;
          *pbVar2 = pbVar2[-uVar5];
          pbVar2 = pbVar6;
        } while (uVar14 != 0);
      }
      if (6 < uVar3 - 1) {
        lVar15 = 0;
        do {
          pbVar2 = pbVar6 + lVar15 + -uVar5;
          pbVar1 = pbVar6 + lVar15;
          lVar15 = lVar15 + 8;
          *pbVar1 = *pbVar2;
          pbVar1[1] = pbVar2[1];
          pbVar1[2] = pbVar2[2];
          pbVar1[3] = pbVar2[3];
          pbVar1[4] = pbVar2[4];
          pbVar1[5] = pbVar2[5];
          pbVar1[6] = pbVar2[6];
          pbVar1[7] = pbVar2[7];
        } while (uVar16 != (uint)lVar15);
LAB_038db898:
        pbVar6 = pbVar6 + lVar15;
      }
LAB_038db89c:
      iVar12 = 0;
      uVar4 = uVar4 - uVar3;
    }
    else {
      pbVar2 = param_2;
      uVar3 = param_3;
      if (uVar9 == 0) {
        pbVar2 = param_2 + 1;
        bVar7 = *param_2;
        uVar8 = (uint)bVar7;
        uVar3 = param_3 - 1;
        uVar9 = 0x80;
        param_3 = 0;
        if (uVar3 == 0) break;
      }
      if ((uVar8 & uVar9) == 0) {
        iVar12 = 1;
        uVar11 = (ulong)*pbVar2;
      }
      else {
        *pbVar6 = *pbVar2;
        uVar4 = uVar4 - 1;
        pbVar6 = pbVar6 + 1;
      }
      uVar9 = uVar9 >> 1;
      param_2 = pbVar2;
      param_3 = uVar3;
    }
    bVar7 = (byte)uVar8;
    uVar10 = (ushort)uVar5;
    param_3 = param_3 - 1;
    if (param_3 == 0) break;
    param_2 = param_2 + 1;
  }
  *(uint *)(param_1 + 1) = uVar4;
  *(int *)((long)param_1 + 0x14) = iVar12;
  *param_1 = (long)pbVar6;
  *(ushort *)(param_1 + 3) = uVar10;
  *(char *)(param_1 + 2) = (char)uVar9;
  *(byte *)((long)param_1 + 0x11) = bVar7;
  *(char *)((long)param_1 + 0x12) = (char)uVar11;
  if (((uVar4 == 0) && (0x20 < param_3)) && (*(int *)((long)param_1 + 0xc) == 0)) {
    return 0xffffffff;
  }
  return uVar4;
}

