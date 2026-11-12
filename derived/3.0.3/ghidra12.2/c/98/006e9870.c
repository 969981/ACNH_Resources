
/* WARNING: Removing unreachable block (ram,0x006e99cc) */

void FUN_006e9870(int *param_1,int param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte bStack_61;
  undefined *local_60;
  long lStack_58;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lStack_58 = param_3[1];
    local_60 = PTR_DAT_04bb2020 + 0x10;
    FUN_038d3570(param_1 + 2,&local_60,10);
    return;
  }
  if (param_2 != 1) {
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar10 = *(uint *)(param_3 + 2);
  uVar11 = 0;
  lVar12 = param_3[1];
  if (0xf < (int)uVar10) {
    uVar10 = 0x10;
  }
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  uVar13 = (ulong)uVar10;
  do {
    bVar1 = *(byte *)(lVar12 + uVar11);
    uVar10 = (uint)bVar1;
    if (bVar1 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      uVar13 = uVar11;
      if ((int)uVar11 < 1) {
        return;
      }
      break;
    }
    iVar3 = islower((uint)bVar1);
    uVar4 = (uint)bVar1;
    if (iVar3 != 0) {
      uVar4 = toupper(uVar4);
      uVar10 = uVar4 & 0xff;
    }
    if (uVar10 - 0x30 < 10) {
      cVar5 = (char)uVar4 + -0x30;
    }
    else {
      uVar4 = uVar4 - 0x42;
      if (0x17 < (uVar4 & 0xff)) {
        return;
      }
      if ((0xf7df77U >> (ulong)(uVar4 & 0x1f) & 1) == 0) {
        return;
      }
      cVar5 = (&DAT_0414d79c)[(char)uVar4];
    }
    *(char *)((long)&local_60 + uVar11) = cVar5;
    uVar11 = uVar11 + 1;
  } while (uVar13 != uVar11);
  if (uVar13 == 1) {
    lVar12 = 0;
    uVar11 = 0xffffffffffffffff;
    lVar6 = 1;
  }
  else {
    uVar11 = 0;
    lVar12 = 0;
    lVar6 = 1;
    pbVar7 = &bStack_61 + uVar13;
    do {
      uVar9 = uVar11 ^ 0xfffffffffffffffe;
      uVar11 = uVar11 + 2;
      lVar2 = lVar6 * (ulong)*pbVar7;
      lVar8 = lVar6 * (ulong)*(byte *)((long)&local_60 + uVar13 + uVar9);
      lVar6 = lVar6 * 900;
      lVar12 = lVar12 + lVar2 + lVar8 * 0x1e;
      pbVar7 = pbVar7 + -2;
    } while ((uVar13 & 0xfffffffe) != uVar11);
    uVar11 = ~uVar11;
    if ((uVar13 & 1) == 0) goto LAB_006e9a44;
  }
  lVar12 = lVar12 + lVar6 * (ulong)*(byte *)((long)&local_60 + uVar13 + uVar11);
LAB_006e9a44:
  *(long *)(param_1 + 2) = lVar12;
  return;
}

