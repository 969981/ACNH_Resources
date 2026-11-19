
ulong FUN_03c35b90(void *param_1,uint *param_2,int *param_3,uint *param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 local_64;
  
  if (param_5 < 4) {
    local_64 = 0;
    memcpy(&local_64,param_4,param_5);
    uVar7 = FUN_03c35b90(param_1,param_2,param_3,&local_64,4);
    uVar8 = 0xffffffffffffffec;
    if (uVar7 <= param_5 || 0xffffffffffffff88 < uVar7) {
      uVar8 = uVar7;
    }
  }
  else {
    memset(param_1,0,(ulong)(*param_2 + 1) << 1);
    uVar16 = *param_4;
    uVar17 = uVar16 & 0xf;
    if (uVar17 < 0xb) {
      *param_3 = uVar17 + 5;
      bVar6 = false;
      uVar19 = 0x20 << (ulong)uVar17;
      uVar10 = *param_2;
      uVar9 = 0;
      uVar18 = uVar19 | 1;
      iVar20 = uVar17 + 6;
      uVar16 = uVar16 >> 4;
      puVar11 = (uint *)((long)param_4 + (param_5 - 7));
      puVar12 = (uint *)((long)param_4 + (param_5 - 4));
      uVar17 = 4;
      puVar14 = param_4;
      do {
        puVar15 = puVar14;
        uVar21 = uVar9;
        if (bVar6) {
          while (((uVar16 ^ 0xffffffff) & 0xffff) == 0) {
            if (puVar15 < (uint *)((long)param_4 + (param_5 - 5))) {
              puVar15 = (uint *)((long)puVar15 + 2);
              uVar16 = *puVar15 >> (ulong)(uVar17 & 0x1f);
            }
            else {
              uVar16 = uVar16 >> 0x10;
              uVar17 = uVar17 + 0x10;
            }
            uVar21 = uVar21 + 0x18;
          }
          for (; uVar5 = uVar16 & 3, uVar5 == 3; uVar16 = uVar16 >> 2) {
            uVar21 = uVar21 + 3;
            uVar17 = uVar17 + 2;
          }
          uVar2 = uVar5 + uVar21;
          if (uVar10 < uVar2) {
            return 0xffffffffffffffd0;
          }
          if (uVar9 < uVar2) {
            memset((void *)((long)param_1 + (ulong)uVar9 * 2),0,
                   (ulong)(uVar21 + uVar5 + ~uVar9) * 2 + 2);
            uVar9 = uVar2;
          }
          uVar17 = uVar17 + 2;
          puVar14 = (uint *)((long)puVar15 + (long)((int)uVar17 >> 3));
          uVar21 = uVar9;
          if ((puVar11 < puVar15) && (puVar12 < puVar14)) {
            uVar16 = uVar16 >> 2;
            puVar14 = puVar15;
          }
          else {
            uVar17 = uVar17 & 7;
            uVar16 = *puVar14 >> (ulong)uVar17;
          }
        }
        else {
        }
        uVar10 = uVar19 * 2 - 1;
        uVar9 = uVar16 & uVar19 - 1;
        uVar5 = uVar10 - uVar18;
        uVar16 = uVar16 & uVar10;
        uVar10 = 0;
        if ((int)uVar19 <= (int)uVar16) {
          uVar10 = uVar5;
        }
        iVar13 = iVar20;
        uVar16 = uVar16 - uVar10;
        if (uVar9 < uVar5) {
          iVar13 = iVar20 + -1;
          uVar16 = uVar9;
        }
        iVar4 = uVar16 - 1;
        bVar6 = iVar4 == 0;
        iVar3 = 1 - uVar16;
        if (0 < (int)uVar16) {
          iVar3 = iVar4;
        }
        *(short *)((long)param_1 + (ulong)uVar21 * 2) = (short)iVar4;
        uVar18 = uVar18 - iVar3;
        for (; (int)uVar18 < (int)uVar19; uVar19 = (int)uVar19 >> 1) {
          iVar20 = iVar20 + -1;
        }
        uVar16 = iVar13 + uVar17;
        iVar13 = (int)puVar14;
        puVar15 = (uint *)((long)puVar14 + (long)((int)uVar16 >> 3));
        bVar1 = puVar14 <= puVar11;
        puVar14 = puVar12;
        uVar17 = uVar16 + (iVar13 - (int)puVar12) * 8;
        if (bVar1 || puVar15 <= puVar12) {
          puVar14 = puVar15;
          uVar17 = uVar16 & 7;
        }
        if ((int)uVar18 < 2) break;
        uVar9 = uVar21 + 1;
        uVar16 = *puVar14 >> (ulong)(uVar17 & 0x1f);
        uVar10 = *param_2;
      } while (uVar9 <= uVar10);
      uVar8 = 0xffffffffffffffec;
      if ((uVar18 == 1) && ((int)uVar17 < 0x21)) {
        *param_2 = uVar21;
        uVar8 = (long)puVar14 + ((long)((int)(uVar17 + 7) >> 3) - (long)param_4);
      }
    }
    else {
      uVar8 = 0xffffffffffffffd4;
    }
  }
  return uVar8;
}

