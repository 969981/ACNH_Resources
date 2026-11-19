
void FUN_03961de0(long param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  long lVar8;
  short *psVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar8 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar8 = (*DAT_04c61fd0)();
  }
  local_58 = *param_2;
  uVar12 = (ulong)local_58;
  iVar2 = (param_4 + 3) * param_3;
  sVar4 = (short)param_3;
  if (param_5 == 0) {
    if (param_3 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      uVar14 = 0;
      iVar1 = 1 << (ulong)(param_6 & 0x1f);
      do {
        psVar9 = (short *)(lVar8 + uVar12 + uVar11 * 2);
        sVar5 = (short)uVar14;
        uVar14 = uVar14 + iVar1;
        uVar11 = uVar11 + 3;
        *psVar9 = sVar5 + 1;
        sVar5 = 0;
        if (param_3 != 0) {
          sVar5 = (short)(uVar14 / param_3);
        }
        psVar9[1] = 0;
        psVar9[2] = ((short)uVar14 - sVar5 * sVar4) + 1;
      } while (uVar14 < param_3);
      sVar5 = sVar4 + 1 + sVar4 * (short)param_4;
      uVar14 = 0;
      psVar9 = (short *)(uVar12 + lVar8 + (uVar11 & 0xffffffff) * 2 + 6);
      do {
        sVar6 = (short)uVar14;
        sVar3 = sVar5 + sVar6;
        psVar9[-1] = sVar3;
        uVar14 = uVar14 + iVar1;
        sVar7 = 0;
        if (param_3 != 0) {
          sVar7 = (short)(uVar14 / param_3);
        }
        *psVar9 = sVar3;
        psVar9[-3] = sVar4 + sVar6 + 1;
        uVar11 = (ulong)((int)uVar11 + 6);
        sVar7 = (short)uVar14 - sVar7 * sVar4;
        sVar3 = sVar7 + sVar4 + 1;
        psVar9[-2] = sVar3;
        psVar9[1] = sVar3;
        psVar9[2] = sVar7 + sVar5;
        psVar9 = psVar9 + 6;
      } while (uVar14 < param_3);
      iVar2 = iVar2 + 1;
      uVar14 = 0;
      iVar15 = iVar2 - iVar1;
      puVar13 = (undefined2 *)(uVar12 + lVar8 + uVar11 * 2 + 2);
      iVar10 = iVar15;
      do {
        uVar14 = uVar14 + iVar1;
        puVar13[-1] = (short)iVar10;
        uVar11 = (ulong)((int)uVar11 + 3);
        sVar5 = 0;
        if (param_3 != 0) {
          sVar5 = (short)(uVar14 / param_3);
        }
        *puVar13 = (short)iVar2;
        iVar10 = iVar10 - iVar1;
        puVar13[1] = (short)iVar15 + (sVar5 * sVar4 - (short)uVar14);
        puVar13 = puVar13 + 3;
      } while (uVar14 < param_3);
      local_58 = *param_2;
    }
    uStack_54 = param_2[1];
    local_50 = *(undefined8 *)(param_2 + 2);
    uStack_48 = *(undefined8 *)(param_2 + 4);
    FUN_03901480(param_1,&local_58,1,uVar11);
    uVar18 = 4;
    goto LAB_039620a4;
  }
  if (param_5 != 1) {
    return;
  }
  uVar14 = param_4 + 1;
  if (param_4 < 0xffffffff) {
    iVar1 = 1 << (ulong)(param_6 & 0x1f);
    if (param_3 == 0) {
      uVar16 = 1;
      do {
        uVar16 = uVar16 + iVar1;
      } while (uVar16 <= uVar14);
      goto LAB_0396200c;
    }
    uVar11 = 0;
    iVar15 = param_3 + 1;
    uVar16 = 1;
    do {
      uVar17 = 0;
      iVar10 = (int)uVar11;
      uVar11 = (ulong)iVar10;
      psVar9 = (short *)(uVar12 + lVar8 + 2 + (long)iVar10 * 2);
      do {
        sVar5 = (short)uVar17;
        uVar17 = uVar17 + iVar1;
        psVar9[-1] = (short)iVar15 + sVar5;
        sVar5 = 0;
        if (param_3 != 0) {
          sVar5 = (short)(uVar17 / param_3);
        }
        uVar11 = uVar11 + 2;
        *psVar9 = ((short)uVar17 - sVar5 * sVar4) + (short)uVar16 * sVar4 + 1;
        psVar9 = psVar9 + 2;
      } while (uVar17 < param_3);
      uVar16 = uVar16 + iVar1;
      iVar15 = iVar15 + iVar1 * param_3;
    } while (uVar16 <= uVar14);
  }
  else {
LAB_0396200c:
    uVar11 = 0;
  }
  if (param_3 != 0) {
    uVar16 = 0;
    psVar9 = (short *)(uVar12 + (long)(int)uVar11 * 2 + lVar8 + 6);
    do {
      sVar5 = (short)uVar16;
      psVar9[-3] = 0;
      psVar9[-2] = sVar5 + 1;
      uVar11 = (ulong)((int)uVar11 + 6);
      *psVar9 = (short)uVar14 * sVar4 + 1 + sVar5;
      uVar16 = uVar16 + (1 << (ulong)(param_6 & 0x1f));
      psVar9[-1] = sVar4 + 1 + sVar5;
      psVar9[1] = ((short)param_4 + 2) * sVar4 + 1 + sVar5;
      psVar9[2] = (short)iVar2 + 1;
      psVar9 = psVar9 + 6;
    } while (uVar16 < param_3);
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  local_50 = *(undefined8 *)(param_2 + 2);
  uStack_48 = *(undefined8 *)(param_2 + 4);
  uVar18 = 1;
  FUN_03901480(param_1,&local_58,1,uVar11);
LAB_039620a4:
  *(undefined4 *)(param_1 + 0xc) = uVar18;
  return;
}

