
int FUN_03137830(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar9 = *(int *)(param_1 + 0x34);
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 == 0) {
    bVar4 = *(byte *)(param_1 + 0x38);
    iVar11 = iVar9;
joined_r0x0313789c:
    bVar10 = false;
joined_r0x0313789c:
    if ((bVar4 & 1) == 0) goto LAB_031378d4;
LAB_031378c8:
    iVar6 = iVar9;
    if ((*(byte *)(param_1 + 0x68) & 1) == 0) goto LAB_031378d4;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x38);
    param_2 = iVar9 + param_2;
    if ((bVar4 & 1) == 0) {
      iVar2 = param_2;
      if (iVar6 + -1 <= param_2) {
        iVar2 = iVar6 + -1;
      }
      iVar11 = 0;
      if (-1 < param_2) {
        iVar11 = iVar2;
      }
      goto joined_r0x0313789c;
    }
    if (-1 < param_2) {
      bVar10 = iVar6 <= param_2;
      iVar11 = 0;
      if (param_2 < iVar6) {
        iVar11 = param_2;
      }
      goto joined_r0x0313789c;
    }
    iVar11 = iVar6 + -1;
    bVar10 = true;
    if ((bVar4 & 1) != 0) goto LAB_031378c8;
LAB_031378d4:
    FUN_03137320(param_1,iVar11,1);
    iVar6 = *(int *)(param_1 + 0x34);
  }
  uVar8 = *(uint *)(param_1 + 0x30);
  if ((-1 < (int)uVar8) && ((int)uVar8 < (int)*(uint *)(param_1 + 0x18))) {
    if (uVar8 < *(uint *)(param_1 + 0x18)) {
      lVar7 = param_1 + 8;
      uVar1 = uVar8 + 1 & 3;
      if (2 < uVar8) {
        uVar8 = uVar8 + 1 & 0xfffffffc;
        do {
          uVar8 = uVar8 - 4;
          lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
        } while (uVar8 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar7 = *(long *)(lVar7 + 8);
      }
    }
    else {
      lVar7 = 0;
    }
    lVar3 = 0;
    if (lVar7 != 0) {
      lVar3 = lVar7 - *(int *)(param_1 + 0x1c);
    }
    if ((iVar9 != -1) && (lVar3 != 0)) {
      if (iVar9 == iVar6) {
        if ((*(byte *)(param_1 + 0x68) >> 1 & 1) != 0) {
          iVar11 = 0;
          goto LAB_031379cc;
        }
        uVar5 = 2;
      }
      else if (iVar9 < iVar6) {
        uVar5 = bVar10;
      }
      else {
        uVar5 = bVar10 == false;
      }
      FUN_03135100(lVar3,uVar5);
      iVar6 = *(int *)(param_1 + 0x34);
    }
  }
  iVar11 = 0;
  if (iVar9 != iVar6) {
    if (bVar10 == false) {
      iVar11 = 1;
    }
    else {
      iVar11 = 2;
    }
  }
  iVar9 = iVar6;
LAB_031379cc:
  if ((*(long *)(param_1 + 0x20) != 0) && (iVar11 != 0)) {
    *(int *)(*(long *)(param_1 + 0x20) + 0x234) = iVar9;
  }
  return iVar11;
}

