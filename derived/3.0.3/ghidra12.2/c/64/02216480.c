
bool FUN_02216480(undefined8 param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  puVar6 = PTR_DAT_04bb39d8;
  uVar4 = *param_2 - (*param_2 >> 1 & 0x55555555);
  uVar5 = param_2[1] - (param_2[1] >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  uVar5 = uVar5 + (uVar5 >> 0x10) & 0x3f;
  if (uVar5 + uVar4 == 0) goto LAB_02216778;
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar13 = *puVar7 ^ *puVar7 << 0xb;
  uVar8 = puVar7[3];
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar12 = uVar13 >> 8 ^ uVar8 >> 0x13 ^ uVar13 ^ uVar8;
  puVar7[2] = uVar8;
  puVar7[3] = uVar12;
  uVar8 = *param_2;
  uVar13 = uVar8 - (uVar8 >> 1 & 0x55555555);
  uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
  uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
  uVar13 = uVar13 + (uVar13 >> 8);
  uVar13 = uVar13 + (uVar13 >> 0x10) & 0x3f;
  uVar12 = (uint)((ulong)uVar12 * (ulong)(uVar5 + uVar4) >> 0x20);
  if (uVar12 < uVar13) {
    iVar10 = 0;
    uVar13 = 0;
joined_r0x02216610:
    if (uVar8 == 0) {
      uVar13 = iVar10 - 1;
    }
    else {
      iVar14 = (uVar12 - uVar13) + 2;
      do {
        iVar14 = iVar14 + -1;
        if (iVar14 < 2) {
          uVar13 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
          uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555);
          uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
          uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
          uVar13 = uVar13 + (uVar13 >> 8);
          uVar13 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar10;
          goto LAB_0221665c;
        }
        uVar8 = uVar8 - 1 & uVar8;
      } while (uVar8 != 0);
      uVar13 = iVar10 - 1;
    }
  }
  else {
    uVar8 = param_2[1];
    uVar11 = uVar8 - (uVar8 >> 1 & 0x55555555);
    uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
    uVar11 = uVar11 + (uVar11 >> 8);
    if (uVar12 < (uVar11 + (uVar11 >> 0x10) & 0x3f) + uVar13) {
      iVar10 = 0x20;
      goto joined_r0x02216610;
    }
    uVar13 = 0xffffffff;
  }
LAB_0221665c:
  uVar9 = (ulong)uVar13;
  uVar1 = (ulong)uVar13;
  if (0x22 < uVar13) {
    uVar9 = 0;
    uVar1 = 0;
  }
  uVar3 = *(uint *)(param_3 + uVar1 * 4);
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
  uVar8 = 0xffffffff;
  uVar2 = puVar7[3];
  uVar12 = *puVar7 ^ *puVar7 << 0xb;
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar11 = uVar12 >> 8 ^ uVar2 >> 0x13 ^ uVar12 ^ uVar2;
  puVar7[2] = uVar2;
  puVar7[3] = uVar11;
  uVar12 = *(uint *)(param_3 + uVar9 * 4);
  if ((uVar12 != 0) &&
     (uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555),
     uVar2 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
     uVar3 = uVar12 - (uVar12 >> 1 & 0x55555555), uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f,
     uVar2 = uVar2 + (uVar2 >> 8), uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
     uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f, uVar3 = uVar3 + (uVar3 >> 8),
     uVar11 = (uint)((ulong)(uVar2 + (uVar2 >> 0x10) & 0x3f) * (ulong)uVar11 >> 0x20),
     uVar11 < (uVar3 + (uVar3 >> 0x10) & 0x3f))) {
    iVar10 = uVar11 + 2;
    do {
      iVar10 = iVar10 + -1;
      if (iVar10 < 2) {
        uVar8 = uVar12 - 1 & (uVar12 ^ 0xffffffff);
        uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
        uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
        uVar8 = uVar8 + (uVar8 >> 8);
        uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
        break;
      }
      uVar12 = uVar12 - 1 & uVar12;
    } while (uVar12 != 0);
  }
  FUN_020fd218(param_1,(ulong)uVar13,uVar8);
LAB_02216778:
  return uVar5 != -uVar4;
}

