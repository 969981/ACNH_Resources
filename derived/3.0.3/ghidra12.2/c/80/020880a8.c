
byte FUN_020880a8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  float *pfVar9;
  uint *puVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_64;
  
  bVar7 = FUN_02087ce0(param_1,param_3,&local_64);
  fVar13 = local_64;
  puVar6 = PTR_DAT_04bb3968;
  pfVar9 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1de8) + 0xf0))
                              (*(long *)PTR_DAT_04bb3968 + 0x1de8);
  fVar15 = *pfVar9;
  bVar1 = fVar13 < fVar15;
  if ((bVar7 & 1) != 0 || bVar1) {
    FUN_02089050(2);
    *param_2 = *param_3;
    iVar8 = FUN_02089050(0);
    iVar5 = 0;
    if (iVar8 != -1) {
      iVar5 = iVar8;
    }
    param_2[1] = iVar5;
    param_2[6] = local_64;
    uVar4 = *(uint *)(param_1 + 0x55c);
    param_2[2] = 0x5a;
    *(byte *)(param_2 + 5) = bVar7 & 1 | bVar1 << 1;
    puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar2 = *puVar10 ^ *puVar10 << 0xb;
    uVar3 = puVar10[3];
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar10[2] = uVar3;
    puVar10[3] = uVar2;
    piVar11 = (int *)(**(code **)(*(long *)(*(long *)puVar6 + 0x1e18) + 0xf0))
                               (*(long *)puVar6 + 0x1e18);
    fVar12 = (float)(int)((ulong)uVar2 * 0x3c >> 0x20);
    if ((bVar7 & 1) == 0) {
      iVar5 = param_2[3];
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      fVar14 = (float)(iVar5 + -1);
    }
    else {
      fVar14 = fVar12 + 150.0;
    }
    iVar5 = *piVar11;
    param_2[3] = (int)fVar14;
    if (fVar15 <= fVar13) {
      iVar5 = param_2[4];
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      fVar13 = (float)(iVar5 + -1);
    }
    else {
      fVar13 = fVar12 + 150.0 + (float)(int)(iVar5 - (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)));
    }
    param_2[4] = (int)fVar13;
  }
  return bVar7 & 1 | bVar1;
}

