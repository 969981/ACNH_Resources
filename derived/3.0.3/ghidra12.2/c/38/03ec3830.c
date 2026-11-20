
bool FUN_03ec3830(short *param_1,short param_2,long param_3,uint param_4,long param_5,float *param_6
                 )

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  
  uVar4 = *(uint *)(param_1 + 0x48);
  if ((int)uVar4 < 1) {
    return false;
  }
  if (*param_1 == param_2) {
    bVar6 = true;
    psVar8 = param_1;
  }
  else {
    uVar13 = 0;
    psVar11 = param_1;
    do {
      psVar11 = psVar11 + 3;
      if ((ulong)uVar4 - 1 == uVar13) {
        return false;
      }
      bVar6 = 0x16 < uVar13;
      uVar13 = uVar13 + 1;
      psVar8 = psVar11;
      if (bVar6) {
        psVar8 = param_1;
      }
    } while (*psVar8 != param_2);
    bVar6 = uVar13 < uVar4;
  }
  if (param_4 != 0xffff) {
    lVar12 = *(long *)(*(long *)(param_5 + 0x10) + 8);
    lVar2 = lVar12 + *(int *)(lVar12 + 0x48);
    uVar4 = *(uint *)(lVar2 + (long)psVar8[1] * 0x10 + 8);
    lVar10 = *(long *)(param_3 + 0x10);
    if ((int)uVar4 < 1) {
      do {
        param_4 = (uint)*(ushort *)(lVar10 + (long)(int)param_4 * 0x60 + 0x2a);
      } while (param_4 != 0xffff);
    }
    else {
      lVar2 = lVar12 + *(int *)(lVar2 + (long)psVar8[1] * 0x10);
      do {
        uVar13 = 0;
        lVar1 = *(long *)(lVar10 + (long)(int)param_4 * 0x60) + 2;
        do {
          lVar3 = lVar12 + *(int *)(lVar12 + 0x24) + (long)*(int *)(lVar2 + uVar13 * 8);
          if (lVar1 == lVar3) {
LAB_03ec39b8:
            fVar14 = *(float *)(lVar2 + uVar13 * 8 + 4);
            *param_6 = fVar14;
            if ((char)psVar8[2] == '\0') {
              return bVar6;
            }
            fVar14 = 1.0 - fVar14;
            goto LAB_03ec3a0c;
          }
          uVar9 = 0;
          bVar7 = true;
          do {
            if (*(char *)(lVar1 + uVar9) != *(char *)(lVar3 + uVar9)) break;
            if (*(char *)(lVar1 + uVar9) == '\0') {
              if (bVar7) goto LAB_03ec39b8;
              break;
            }
            cVar5 = *(char *)(lVar1 + uVar9 + 1);
            if (cVar5 != *(char *)(lVar3 + uVar9 + 1)) break;
            if (cVar5 == '\0') goto LAB_03ec39b8;
            cVar5 = *(char *)(lVar1 + uVar9 + 2);
            if (cVar5 != *(char *)(lVar3 + uVar9 + 2)) break;
            if (cVar5 == '\0') goto LAB_03ec39b8;
            bVar7 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar4);
        param_4 = (uint)*(ushort *)(lVar10 + (long)(int)param_4 * 0x60 + 0x2a);
      } while (param_4 != 0xffff);
    }
  }
  *param_6 = 1.0;
  fVar14 = 1.0;
  if ((char)psVar8[2] != '\0') {
    fVar14 = 0.0;
  }
LAB_03ec3a0c:
  *param_6 = fVar14;
  return bVar6;
}

