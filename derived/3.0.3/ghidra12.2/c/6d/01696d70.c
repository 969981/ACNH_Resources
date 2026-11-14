
void FUN_01696d70(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  lVar4 = 0;
  uVar8 = 0;
  do {
    uVar5 = *(uint *)(param_2 + 8 + lVar4);
    lVar4 = lVar4 + 4;
    uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    uVar8 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar8;
  } while (lVar4 != 0x1000);
  if (uVar8 == 0) {
    iVar7 = 0;
    uVar8 = 0;
    goto LAB_01696ee4;
  }
  uVar5 = 0xffffffff;
  uVar2 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar2 = uVar2 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar2 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  iVar9 = (int)((ulong)uVar2 * (ulong)uVar8 >> 0x20);
  lVar4 = 0;
  puVar6 = (uint *)(param_2 + 8);
  iVar7 = 0;
  do {
    uVar10 = *puVar6;
    uVar8 = uVar10 - (uVar10 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    iVar1 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar7;
    if (iVar9 + 1 <= iVar1) {
      if (uVar10 == 0) {
        uVar5 = 0xffffffff;
        goto LAB_01696ed4;
      }
      iVar7 = (iVar9 - iVar7) + 2;
      uVar5 = 0xffffffff;
      goto LAB_01696e80;
    }
    bVar3 = lVar4 != -0x7fe0;
    lVar4 = lVar4 + -0x20;
    puVar6 = puVar6 + 1;
    iVar7 = iVar1;
  } while (bVar3);
  goto LAB_01696ed8;
  while (uVar10 = uVar10 - 1 & uVar10, uVar10 != 0) {
LAB_01696e80:
    iVar7 = iVar7 + -1;
    if (iVar7 < 2) {
      uVar8 = uVar10 - 1 & (uVar10 ^ 0xffffffff);
      uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar5 = uVar8 + (uVar8 >> 0x10) & 0x3f;
      break;
    }
  }
LAB_01696ed4:
  uVar5 = uVar5 - (int)lVar4;
LAB_01696ed8:
  iVar7 = (uVar5 & 0xff) << 1;
  uVar8 = (int)uVar5 >> 7 & 0xfffffffe;
  DAT_0514cb64 = uVar2;
LAB_01696ee4:
  *(int *)(param_1 + 1) = iVar7;
  *(uint *)((long)param_1 + 0xc) = uVar8;
  *param_1 = &DAT_048f9750;
  return;
}

