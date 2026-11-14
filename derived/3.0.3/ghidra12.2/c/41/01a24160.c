
undefined8 FUN_01a24160(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar10 = 0;
  lVar4 = 0x14;
  do {
    puVar2 = (uint *)(param_1 + lVar4);
    lVar4 = lVar4 + 4;
    uVar5 = *puVar2 - (*puVar2 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    iVar10 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar10;
  } while (lVar4 != 0x334);
  if (iVar10 == 0) {
    return 0;
  }
  puVar2 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  iVar3 = 0;
  uVar7 = puVar2[3];
  uVar5 = *puVar2 ^ *puVar2 << 0xb;
  *puVar2 = puVar2[1];
  puVar2[1] = puVar2[2];
  lVar4 = 0x14;
  uVar5 = uVar5 >> 8 ^ uVar7 >> 0x13 ^ uVar5 ^ uVar7;
  puVar2[2] = uVar7;
  puVar2[3] = uVar5;
  iVar6 = -1;
  uVar7 = 0;
  do {
    uVar9 = *(uint *)(param_1 + lVar4);
    uVar1 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar7;
    uVar8 = (uint)((ulong)uVar5 * (ulong)(iVar10 - 1) >> 0x20);
    if (uVar8 < uVar1) {
      if (uVar9 != 0) {
        iVar10 = (uVar8 - uVar7) + 2;
        uVar5 = 0xffffffff;
        goto LAB_01a24294;
      }
      uVar5 = 0xffffffff;
      goto LAB_01a242e8;
    }
    lVar4 = lVar4 + 4;
    iVar3 = iVar3 + -0x20;
    uVar7 = uVar1;
  } while (lVar4 != 0x334);
  goto LAB_01a242ec;
  while (uVar9 = uVar9 - 1 & uVar9, uVar9 != 0) {
LAB_01a24294:
    iVar10 = iVar10 + -1;
    if (iVar10 < 2) {
      uVar5 = uVar9 - 1 & (uVar9 ^ 0xffffffff);
      uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      uVar5 = uVar5 + (uVar5 >> 0x10) & 0x3f;
      break;
    }
  }
LAB_01a242e8:
  iVar6 = uVar5 - iVar3;
LAB_01a242ec:
  *(int *)(param_2 + 8) = iVar6 % 0x50;
  *(int *)(param_2 + 0xc) = iVar6 / 0x50;
  return 1;
}

