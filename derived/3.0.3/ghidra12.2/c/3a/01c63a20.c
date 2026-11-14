
int FUN_01c63a20(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = (uint *)(param_1 + 8);
  uVar4 = *puVar8 - (*puVar8 >> 1 & 0x55555555);
  uVar1 = *(uint *)(param_1 + 0xc) - (*(uint *)(param_1 + 0xc) >> 1 & 0x55555555);
  uVar2 = *(uint *)(param_1 + 0x10) - (*(uint *)(param_1 + 0x10) >> 1 & 0x55555555);
  uVar7 = *(uint *)(param_1 + 0x14) - (*(uint *)(param_1 + 0x14) >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  uVar4 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + (uVar4 + (uVar4 >> 0x10) & 0x3f) +
          (uVar2 + (uVar2 >> 0x10) & 0x3f) + (uVar7 + (uVar7 >> 0x10) & 0x3f);
  if (uVar4 == 0) {
LAB_01c63ce8:
    iVar5 = -1;
  }
  else {
    puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar1 = *puVar3 ^ *puVar3 << 0xb;
    uVar7 = puVar3[3];
    *puVar3 = puVar3[1];
    puVar3[1] = puVar3[2];
    uVar2 = uVar1 >> 8 ^ uVar7 >> 0x13 ^ uVar1 ^ uVar7;
    puVar3[2] = uVar7;
    puVar3[3] = uVar2;
    uVar1 = *puVar8 - (*puVar8 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    uVar1 = uVar1 + (uVar1 >> 0x10) & 0x3f;
    uVar4 = (uint)((ulong)uVar2 * (ulong)uVar4 >> 0x20);
    if (uVar4 < uVar1) {
      iVar5 = 0;
      uVar7 = *puVar8;
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xc) - (*(uint *)(param_1 + 0xc) >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      uVar2 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar1;
      if (uVar4 < uVar2) {
        iVar5 = 1;
        uVar7 = *(uint *)(param_1 + 0xc);
        uVar2 = uVar1;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x10) - (*(uint *)(param_1 + 0x10) >> 1 & 0x55555555);
        uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
        uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
        uVar1 = uVar1 + (uVar1 >> 8);
        uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar2;
        if (uVar4 < uVar1) {
          iVar5 = 2;
          uVar7 = *(uint *)(param_1 + 0x10);
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x14) - (*(uint *)(param_1 + 0x14) >> 1 & 0x55555555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
          uVar2 = uVar2 + (uVar2 >> 8);
          if ((uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar1 <= uVar4) goto LAB_01c63ce8;
          iVar5 = 3;
          uVar7 = *(uint *)(param_1 + 0x14);
          uVar2 = uVar1;
        }
      }
    }
    if (uVar7 == 0) {
      iVar5 = iVar5 * 0x20 + -1;
    }
    else {
      iVar6 = (uVar4 - uVar2) + 2;
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 < 2) {
          uVar4 = uVar7 - 1 & (uVar7 ^ 0xffffffff);
          uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
          uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
          uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
          uVar4 = uVar4 + (uVar4 >> 8);
          return (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar5 * 0x20;
        }
        uVar7 = uVar7 - 1 & uVar7;
      } while (uVar7 != 0);
      iVar5 = iVar5 * 0x20 + -1;
    }
  }
  return iVar5;
}

