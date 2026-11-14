
undefined8
FUN_015bc318(long *param_1,undefined8 param_2,byte *param_3,float *param_4,int *param_5,long param_6
            )

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  
  if ((char)param_1[7] == '\0') {
    return 0;
  }
  uVar5 = (**(code **)(*param_1 + 0xc0))();
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  lVar6 = param_1[0x168];
  iVar4 = *(int *)(param_6 + 8);
  uVar7 = iVar4 - *(int *)(lVar6 + 0x10);
  if (iVar4 < *(int *)(lVar6 + 0x10) || *(int *)(lVar6 + 0x20) < iVar4) {
    return 0;
  }
  iVar4 = *(int *)(param_6 + 0xc);
  uVar3 = iVar4 - *(int *)(lVar6 + 0x14);
  if (iVar4 < *(int *)(lVar6 + 0x14)) {
    return 0;
  }
  if (*(int *)(lVar6 + 0x24) < iVar4) {
    return 0;
  }
  lVar6 = (long)(int)(uVar7 + *(uint *)(param_1 + 0x18b) * uVar3);
  if (*(uint *)((long)param_1 + 0xc5c) <= uVar3 || *(uint *)(param_1 + 0x18b) <= uVar7) {
    lVar6 = 0;
  }
  pbVar1 = (byte *)(param_1[0x18c] + lVar6 * 2);
  bVar2 = *pbVar1;
  if (pbVar1[1] == 0 && bVar2 == 0) {
    return 0;
  }
  if (bVar2 == 0) {
    pbVar1 = pbVar1 + 1;
  }
  *(bool *)param_2 = bVar2 != 0;
  bVar2 = *pbVar1;
  uVar7 = (uint)bVar2;
  if ((bVar2 & 3) != 0) {
    if (param_4 != (float *)0x0) {
      *param_4 = (float)*(int *)(param_6 + 8) * 10.0;
      param_4[2] = (float)*(int *)(param_6 + 0xc) * 10.0;
    }
    goto LAB_015bc490;
  }
  if ((bVar2 & 0xc) == 0) {
    if ((bVar2 & 0x30) == 0) {
      if (bVar2 < 0x40) {
        return 0;
      }
      uVar7 = (uint)(bVar2 >> 6);
      if (param_4 != (float *)0x0) {
        fVar8 = (float)*(int *)(param_6 + 8) * 10.0;
        *param_4 = fVar8;
        iVar4 = *(int *)(param_6 + 0xc);
        *param_4 = fVar8 + 10.0;
        param_4[2] = (float)iVar4 * 10.0;
      }
      goto LAB_015bc490;
    }
    bVar2 = bVar2 >> 4;
    uVar7 = (uint)bVar2;
    if (param_4 == (float *)0x0) goto LAB_015bc490;
    fVar8 = (float)*(int *)(param_6 + 8) * 10.0;
    *param_4 = fVar8;
    iVar4 = *(int *)(param_6 + 0xc);
    *param_4 = fVar8 + 10.0;
  }
  else {
    bVar2 = bVar2 >> 2;
    uVar7 = (uint)bVar2;
    if (param_4 == (float *)0x0) goto LAB_015bc490;
    *param_4 = (float)*(int *)(param_6 + 8) * 10.0;
    iVar4 = *(int *)(param_6 + 0xc);
  }
  uVar7 = (uint)bVar2;
  param_4[2] = (float)iVar4 * 10.0 + 10.0;
LAB_015bc490:
  iVar4 = FUN_006f0400(((float)*(int *)(param_6 + 8) * 10.0 + 5.0) - *param_4,
                       ((float)*(int *)(param_6 + 0xc) * 10.0 + 5.0) - param_4[2],0);
  *param_5 = iVar4;
  *param_3 = (byte)(uVar7 >> 1) & 1;
  if ((uVar7 >> 1 & 1) != 0) {
    iVar4 = -0x10000000;
    if ((uVar7 & 1) == 0) {
      iVar4 = 0x10000000;
    }
    *param_5 = *param_5 + iVar4;
  }
  return 1;
}

