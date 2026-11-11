
void FUN_00676cb0(uint param_1,int param_2,int param_3,long *param_4)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1 & 0xff;
  if (uVar8 == 0) {
    return;
  }
  puVar4 = (undefined1 *)(*param_4 + 3U & 0xfffffffffffffffc);
  *param_4 = (long)puVar4;
  if ((uVar8 >> 4 & 1) == 0) {
    uVar3 = 0;
    if ((param_1 & 1) == 0) goto LAB_00676d4c;
    uVar1 = *puVar4;
    *puVar4 = puVar4[3];
    puVar4[3] = uVar1;
  }
  else {
    uVar1 = *puVar4;
    *puVar4 = puVar4[3];
    puVar4[3] = uVar1;
    lVar5 = *param_4;
    uVar1 = *(undefined1 *)(lVar5 + 1);
    *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar5 + 2);
    *(undefined1 *)(lVar5 + 2) = uVar1;
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    uVar1 = *(undefined1 *)(lVar5 + 4);
    *(undefined1 *)(lVar5 + 4) = *(undefined1 *)(lVar5 + 7);
    *(undefined1 *)(lVar5 + 7) = uVar1;
    uVar3 = 1;
  }
  lVar5 = *param_4;
  uVar1 = *(undefined1 *)(lVar5 + 1);
  *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar5 + 2);
  *(undefined1 *)(lVar5 + 2) = uVar1;
  puVar4 = (undefined1 *)(*param_4 + 4);
  *param_4 = (long)puVar4;
LAB_00676d4c:
  if ((uVar8 >> 5 & 1) == 0) {
    if ((uVar8 >> 1 & 1) != 0) {
      uVar1 = *puVar4;
      *puVar4 = puVar4[3];
      puVar4[3] = uVar1;
      lVar5 = *param_4;
      uVar1 = *(undefined1 *)(lVar5 + 1);
      *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar5 + 2);
      *(undefined1 *)(lVar5 + 2) = uVar1;
      puVar4 = (undefined1 *)(*param_4 + 4);
      *param_4 = (long)puVar4;
    }
  }
  else {
    uVar1 = *puVar4;
    *puVar4 = puVar4[3];
    puVar4[3] = uVar1;
    lVar5 = *param_4;
    uVar1 = *(undefined1 *)(lVar5 + 1);
    *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar5 + 2);
    *(undefined1 *)(lVar5 + 2) = uVar1;
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    uVar1 = *(undefined1 *)(lVar5 + 4);
    *(undefined1 *)(lVar5 + 4) = *(undefined1 *)(lVar5 + 7);
    *(undefined1 *)(lVar5 + 7) = uVar1;
    lVar5 = *param_4;
    uVar1 = *(undefined1 *)(lVar5 + 1);
    *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar5 + 2);
    *(undefined1 *)(lVar5 + 2) = uVar1;
    puVar4 = (undefined1 *)(*param_4 + 4);
    *param_4 = (long)puVar4;
    uVar3 = uVar3 + 1;
  }
  if ((uVar8 >> 6 & 1) == 0) {
    if ((uVar8 >> 2 & 1) != 0) {
      uVar1 = *puVar4;
      *puVar4 = puVar4[3];
      puVar4[3] = uVar1;
      lVar5 = *param_4;
      uVar1 = *(undefined1 *)(lVar5 + 1);
      *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar5 + 2);
      *(undefined1 *)(lVar5 + 2) = uVar1;
      puVar4 = (undefined1 *)(*param_4 + 4);
      *param_4 = (long)puVar4;
    }
    if (uVar3 == 0) {
      return;
    }
    lVar5 = 1;
    if (param_3 != 0) {
      lVar5 = 2;
    }
  }
  else {
    uVar1 = *puVar4;
    *puVar4 = puVar4[3];
    puVar4[3] = uVar1;
    lVar5 = *param_4;
    uVar1 = *(undefined1 *)(lVar5 + 1);
    *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar5 + 2);
    *(undefined1 *)(lVar5 + 2) = uVar1;
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    uVar1 = *(undefined1 *)(lVar5 + 4);
    *(undefined1 *)(lVar5 + 4) = *(undefined1 *)(lVar5 + 7);
    *(undefined1 *)(lVar5 + 7) = uVar1;
    lVar5 = *param_4;
    uVar1 = *(undefined1 *)(lVar5 + 1);
    *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar5 + 2);
    *(undefined1 *)(lVar5 + 2) = uVar1;
    puVar4 = (undefined1 *)(*param_4 + 4);
    *param_4 = (long)puVar4;
    uVar3 = uVar3 + 1;
    lVar5 = 1;
    if (param_3 != 0) {
      lVar5 = 2;
    }
  }
  if (-1 < param_2) {
    iVar6 = 0;
    do {
      while (param_3 == 0) {
        if (6 < uVar3 - 1) {
          iVar7 = 0;
          do {
            puVar4 = puVar4 + lVar5 * 8;
            iVar7 = iVar7 + 8;
          } while (iVar7 != 0);
        }
        if (uVar3 != 0) {
          uVar8 = uVar3;
          do {
            puVar4 = puVar4 + lVar5;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        *param_4 = (long)puVar4;
        bVar2 = iVar6 == param_2;
        iVar6 = iVar6 + 1;
        if (bVar2) {
          return;
        }
      }
      if (2 < uVar3 - 1) {
        iVar7 = 0;
        do {
          uVar1 = *puVar4;
          *puVar4 = puVar4[1];
          puVar4[1] = uVar1;
          puVar4 = (undefined1 *)(*param_4 + lVar5);
          *param_4 = (long)puVar4;
          uVar1 = *puVar4;
          *puVar4 = puVar4[1];
          puVar4[1] = uVar1;
          puVar4 = (undefined1 *)(*param_4 + lVar5);
          *param_4 = (long)puVar4;
          uVar1 = *puVar4;
          *puVar4 = puVar4[1];
          puVar4[1] = uVar1;
          puVar4 = (undefined1 *)(*param_4 + lVar5);
          *param_4 = (long)puVar4;
          uVar1 = *puVar4;
          *puVar4 = puVar4[1];
          puVar4[1] = uVar1;
          puVar4 = (undefined1 *)(*param_4 + lVar5);
          iVar7 = iVar7 + 4;
          *param_4 = (long)puVar4;
        } while (iVar7 != 0);
      }
      if ((uVar3 & 3) != 0) {
        uVar8 = uVar3 & 3;
        do {
          uVar1 = *puVar4;
          *puVar4 = puVar4[1];
          puVar4[1] = uVar1;
          puVar4 = (undefined1 *)(*param_4 + lVar5);
          uVar8 = uVar8 - 1;
          *param_4 = (long)puVar4;
        } while (uVar8 != 0);
      }
      bVar2 = iVar6 != param_2;
      iVar6 = iVar6 + 1;
    } while (bVar2);
  }
  return;
}

