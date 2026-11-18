
uint FUN_03373db0(long param_1,long param_2)

{
  long lVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  
  lVar7 = DAT_05355a60;
  if (DAT_05355a60 == 0) {
    uVar12 = 0;
    goto LAB_03373f18;
  }
  if (0 < (int)*(uint *)(DAT_05355a60 + 0x474)) {
    uVar12 = 0;
    iVar13 = 1;
    uVar11 = (ulong)*(uint *)(DAT_05355a60 + 0x474);
LAB_03373e34:
    uVar10 = 0;
    do {
      (**(code **)(DAT_05735eb8 + 0x18))(&DAT_05735eb8);
      uVar9 = 0;
      while (*(short *)(DAT_05735ec0 + uVar9 * 2) != 0) {
        lVar1 = DAT_05735ec0 + uVar9 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          uVar9 = uVar9 + 1;
          break;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          uVar9 = uVar9 + 2;
          break;
        }
        uVar9 = uVar9 + 3;
        if (uVar9 == 0x80001) goto LAB_03373e24;
      }
      if ((uVar9 & 0xffffffff) <= uVar10) goto LAB_03373e24;
      psVar2 = (short *)(DAT_05735ec0 + uVar10 * 2);
      if ((long)DAT_05735ec8 <= (long)uVar10) {
        psVar2 = &DAT_0419b686;
      }
      if (*(short *)(*(long *)(lVar7 + 0x468) + (uVar11 - 1) * 2) == *psVar2) goto LAB_03373e20;
      uVar10 = uVar10 + 1;
    } while( true );
  }
  uVar12 = 0;
  cVar6 = *(char *)(DAT_05355a60 + 0xf80);
  goto joined_r0x03373f0c;
LAB_03373e20:
  uVar12 = uVar12 + iVar13 * (int)uVar10;
LAB_03373e24:
  iVar13 = iVar13 * 10;
  bVar8 = (long)uVar11 < 2;
  uVar11 = uVar11 - 1;
  if (bVar8) goto LAB_03373ef0;
  goto LAB_03373e34;
LAB_03373ef0:
  uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
  if (DAT_05355a60 == 0) goto LAB_03373f18;
  cVar6 = *(char *)(DAT_05355a60 + 0xf80);
joined_r0x03373f0c:
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(param_1 + 0x218);
    uVar5 = *(uint *)(DAT_05355a60 + 0xf7c);
    uVar3 = uVar4;
    if ((int)uVar5 <= (int)uVar4) {
      uVar3 = uVar5;
    }
    if (-1 < (int)uVar4) {
      uVar5 = uVar3;
    }
    if (param_2 != 0) {
      if ((int)uVar5 < (int)uVar12) {
        bVar8 = *(char *)(DAT_05355a60 + 0xf81) == '\0';
      }
      else {
        bVar8 = false;
      }
      *(bool *)param_2 = bVar8;
    }
    if ((int)uVar12 < (int)uVar5) {
      return uVar12;
    }
    return uVar5;
  }
LAB_03373f18:
  if (0 < (int)uVar12) {
    uVar12 = 1;
  }
  return uVar12;
}

