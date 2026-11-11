
undefined8 FUN_0054b560(long param_1,int param_2,long *param_3,long *param_4,long *param_5)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [512];
  
  if (*(int *)(param_1 + 0x48) < 1) {
    return 0;
  }
  lVar4 = 0;
  plVar3 = (long *)(*(long *)(param_1 + 0x40) + 0x10);
  while ((int)plVar3[-2] != param_2) {
    lVar4 = lVar4 + 1;
    plVar3 = plVar3 + 4;
    if (*(int *)(param_1 + 0x48) <= lVar4) {
      return 0;
    }
  }
  plVar3 = (long *)*plVar3;
  if ((int)plVar3[2] != (int)param_3[2]) {
    FUN_004426d0(auStack_230,auStack_220,0x200);
    FUN_0043ac90(auStack_230,
                 "Did not get the cloth instance\'s transform usage as number of transforms in hclTransformSet is different to the size of the supplied hkBitfields."
                );
    FUN_004221e0(0xabbadcae,auStack_220,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Cloth/Cloth/Utilities/Character/hclCharacterUtils.cpp"
                 ,0x1b7);
    FUN_00442760(auStack_230);
    return 0;
  }
  uVar8 = *(uint *)(plVar3 + 1);
  uVar10 = *(uint *)(param_3 + 1);
  uVar2 = uVar8;
  if ((int)uVar10 <= (int)uVar8) {
    uVar2 = uVar10;
  }
  if ((-1 < (int)uVar2) && (uVar2 != 0)) {
    lVar6 = *plVar3;
    lVar9 = *param_3;
    lVar4 = (long)(int)uVar2;
    if ((int)uVar10 <= (int)uVar8) {
      uVar8 = uVar10;
    }
    if ((uVar2 & 1) != 0) {
      lVar4 = lVar4 + -1;
      lVar11 = lVar4 * 4;
      *(uint *)(lVar9 + lVar11) = *(uint *)(lVar6 + lVar11) | *(uint *)(lVar9 + lVar11);
    }
    if (uVar8 != 1) {
      lVar11 = lVar4 * 4 + -4;
      puVar5 = (uint *)(lVar6 + lVar11);
      puVar7 = (uint *)(lVar9 + lVar11);
      do {
        *puVar7 = *puVar5 | *puVar7;
        puVar1 = puVar5 + -1;
        puVar5 = puVar5 + -2;
        lVar4 = lVar4 + -2;
        puVar7[-1] = *puVar1 | puVar7[-1];
        puVar7 = puVar7 + -2;
      } while ((int)lVar4 != 0);
    }
    uVar10 = *(uint *)(param_3 + 1);
  }
  uVar8 = *(uint *)(plVar3 + 10);
  lVar4 = plVar3[9];
  uVar2 = uVar8;
  if ((int)uVar10 <= (int)uVar8) {
    uVar2 = uVar10;
  }
  if ((-1 < (int)uVar2) && (uVar2 != 0)) {
    lVar9 = *param_3;
    lVar6 = (long)(int)uVar2;
    if ((int)uVar10 <= (int)uVar8) {
      uVar8 = uVar10;
    }
    if ((uVar2 & 1) != 0) {
      lVar6 = lVar6 + -1;
      lVar11 = lVar6 * 4;
      *(uint *)(lVar9 + lVar11) = *(uint *)(lVar4 + lVar11) | *(uint *)(lVar9 + lVar11);
    }
    if (uVar8 != 1) {
      lVar11 = lVar6 * 4 + -4;
      puVar5 = (uint *)(lVar4 + lVar11);
      puVar7 = (uint *)(lVar9 + lVar11);
      do {
        *puVar7 = *puVar5 | *puVar7;
        puVar1 = puVar5 + -1;
        puVar5 = puVar5 + -2;
        lVar6 = lVar6 + -2;
        puVar7[-1] = *puVar1 | puVar7[-1];
        puVar7 = puVar7 + -2;
      } while ((int)lVar6 != 0);
    }
    lVar4 = plVar3[9];
    uVar8 = *(uint *)(plVar3 + 10);
  }
  uVar10 = *(uint *)(param_4 + 1);
  uVar2 = uVar8;
  if ((int)uVar10 <= (int)uVar8) {
    uVar2 = uVar10;
  }
  if ((-1 < (int)uVar2) && (uVar2 != 0)) {
    lVar9 = *param_4;
    lVar6 = (long)(int)uVar2;
    if ((int)uVar10 <= (int)uVar8) {
      uVar8 = uVar10;
    }
    if ((uVar2 & 1) != 0) {
      lVar6 = lVar6 + -1;
      lVar11 = lVar6 * 4;
      *(uint *)(lVar9 + lVar11) = *(uint *)(lVar4 + lVar11) | *(uint *)(lVar9 + lVar11);
    }
    if (uVar8 != 1) {
      lVar11 = lVar6 * 4 + -4;
      puVar5 = (uint *)(lVar4 + lVar11);
      puVar7 = (uint *)(lVar9 + lVar11);
      do {
        *puVar7 = *puVar5 | *puVar7;
        puVar1 = puVar5 + -1;
        puVar5 = puVar5 + -2;
        lVar6 = lVar6 + -2;
        puVar7[-1] = *puVar1 | puVar7[-1];
        puVar7 = puVar7 + -2;
      } while ((int)lVar6 != 0);
    }
  }
  uVar8 = *(uint *)(plVar3 + 7);
  uVar10 = *(uint *)(param_5 + 1);
  uVar2 = uVar8;
  if ((int)uVar10 <= (int)uVar8) {
    uVar2 = uVar10;
  }
  if ((int)uVar2 < 0) {
    return 1;
  }
  if (uVar2 == 0) {
    return 1;
  }
  lVar6 = plVar3[6];
  lVar9 = *param_5;
  lVar4 = (long)(int)uVar2;
  if ((int)uVar10 <= (int)uVar8) {
    uVar8 = uVar10;
  }
  if ((uVar2 & 1) != 0) {
    lVar4 = lVar4 + -1;
    lVar11 = lVar4 * 4;
    *(uint *)(lVar9 + lVar11) = *(uint *)(lVar6 + lVar11) | *(uint *)(lVar9 + lVar11);
  }
  if (uVar8 == 1) {
    return 1;
  }
  lVar11 = lVar4 * 4 + -4;
  puVar5 = (uint *)(lVar6 + lVar11);
  puVar7 = (uint *)(lVar9 + lVar11);
  do {
    *puVar7 = *puVar5 | *puVar7;
    puVar1 = puVar5 + -1;
    puVar5 = puVar5 + -2;
    lVar4 = lVar4 + -2;
    puVar7[-1] = *puVar1 | puVar7[-1];
    puVar7 = puVar7 + -2;
  } while ((int)lVar4 != 0);
  return 1;
}

