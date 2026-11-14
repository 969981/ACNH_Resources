
bool FUN_01696a90(long param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  lVar5 = 0;
  iVar4 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 8 + lVar5);
    lVar5 = lVar5 + 4;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    iVar4 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar4;
  } while (lVar5 != 0x1000);
  if (iVar4 < param_2) goto LAB_01696bc8;
  uVar6 = 0xffffffff;
  lVar5 = 0;
  puVar7 = (uint *)(param_1 + 8);
  iVar9 = 0;
  do {
    uVar8 = *puVar7;
    uVar2 = uVar8 - (uVar8 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar1 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar9;
    if (param_2 <= iVar1) {
      if (uVar8 == 0) {
        uVar6 = 0xffffffff;
        goto LAB_01696bb4;
      }
      iVar9 = (param_2 - iVar9) + 1;
      uVar6 = 0xffffffff;
      goto LAB_01696b60;
    }
    bVar3 = lVar5 != -0x7fe0;
    lVar5 = lVar5 + -0x20;
    puVar7 = puVar7 + 1;
    iVar9 = iVar1;
  } while (bVar3);
  goto LAB_01696bb8;
  while (uVar8 = uVar8 - 1 & uVar8, uVar8 != 0) {
LAB_01696b60:
    iVar9 = iVar9 + -1;
    if (iVar9 < 2) {
      uVar6 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
      uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      uVar6 = uVar6 + (uVar6 >> 0x10) & 0x3f;
      break;
    }
  }
LAB_01696bb4:
  uVar6 = uVar6 - (int)lVar5;
LAB_01696bb8:
  *(uint *)(param_3 + 8) = (uVar6 & 0xff) << 1;
  *(uint *)(param_3 + 0xc) = (int)uVar6 >> 7 & 0xfffffffe;
LAB_01696bc8:
  return param_2 <= iVar4;
}

