
void FUN_01696be0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
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
    goto LAB_01696d54;
  }
  uVar5 = 0xffffffff;
  uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  lVar4 = 0;
  puVar6 = (uint *)(param_2 + 8);
  uVar10 = 0;
  do {
    uVar11 = *puVar6;
    uVar2 = uVar11 - (uVar11 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar2 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar10;
    uVar9 = (uint)((ulong)uVar1 * (ulong)uVar8 >> 0x20);
    if (uVar9 < uVar2) {
      if (uVar11 == 0) {
        uVar5 = 0xffffffff;
        goto LAB_01696d44;
      }
      iVar7 = (uVar9 - uVar10) + 2;
      uVar5 = 0xffffffff;
      goto LAB_01696cf0;
    }
    bVar3 = lVar4 != -0x7fe0;
    lVar4 = lVar4 + -0x20;
    puVar6 = puVar6 + 1;
    uVar10 = uVar2;
  } while (bVar3);
  goto LAB_01696d48;
  while (uVar11 = uVar11 - 1 & uVar11, uVar11 != 0) {
LAB_01696cf0:
    iVar7 = iVar7 + -1;
    if (iVar7 < 2) {
      uVar8 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
      uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar5 = uVar8 + (uVar8 >> 0x10) & 0x3f;
      break;
    }
  }
LAB_01696d44:
  uVar5 = uVar5 - (int)lVar4;
LAB_01696d48:
  iVar7 = (uVar5 & 0xff) << 1;
  uVar8 = (int)uVar5 >> 7 & 0xfffffffe;
  DAT_05582b7c = uVar1;
LAB_01696d54:
  *(int *)(param_1 + 1) = iVar7;
  *(uint *)((long)param_1 + 0xc) = uVar8;
  *param_1 = &DAT_048f9750;
  return;
}

