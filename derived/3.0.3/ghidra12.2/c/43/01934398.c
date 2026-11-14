
void FUN_01934398(long param_1,uint *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_3 == (float *)0x0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x178);
  puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar8 = *puVar3 ^ *puVar3 << 0xb;
  uVar1 = puVar3[3];
  *puVar3 = puVar3[1];
  puVar3[1] = puVar3[2];
  uVar8 = uVar8 >> 8 ^ uVar1 >> 0x13 ^ uVar8 ^ uVar1;
  uVar9 = (ulong)uVar2 * (ulong)uVar8;
  puVar3[2] = uVar1;
  puVar3[3] = uVar8;
  uVar8 = (uint)(uVar9 >> 0x20);
  *param_2 = uVar8;
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 200) + 0xf0))((long *)(param_1 + 200));
  if (((long)uVar9 < 0) || (*(int *)(param_1 + 0x178) <= (int)uVar8)) {
    if (*(uint *)(param_1 + 0x158) != 0) {
      plVar7 = *(long **)(param_1 + 0x160);
      goto LAB_01934448;
    }
  }
  else if (uVar8 < *(uint *)(param_1 + 0x158)) {
    plVar7 = (long *)(*(long *)(param_1 + 0x160) + (uVar9 >> 0x20) * 8);
LAB_01934448:
    lVar5 = *plVar7;
    goto LAB_01934454;
  }
  lVar5 = 0;
LAB_01934454:
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x30) + 0xf0))();
  fVar10 = pfVar4[1];
  fVar11 = pfVar4[2];
  fVar12 = pfVar6[1];
  fVar13 = pfVar6[2];
  *param_3 = *pfVar4 + *pfVar6;
  param_3[1] = fVar10 + fVar12;
  param_3[2] = fVar11 + fVar13;
  return;
}

