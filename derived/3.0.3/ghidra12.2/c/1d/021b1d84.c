
void FUN_021b1d84(long param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  
  if (param_3 == -1) {
    return;
  }
  if (DAT_0534bef8 == 0) {
    return;
  }
  iVar3 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar3 < -0x83ceb3d) {
    if (iVar3 < -0x15fdefdb) {
      if (iVar3 == -0x477aafe0) {
        uVar5 = 5;
      }
      else {
        if (iVar3 != -0x2099c902) goto LAB_021b1eb0;
        uVar5 = 9;
      }
    }
    else if (iVar3 == -0x15fdefdb) {
      uVar5 = 7;
    }
    else if (iVar3 == -0xe632453) {
      uVar5 = 3;
    }
    else {
LAB_021b1eb0:
      uVar5 = (uint)(iVar3 == 0x17f77b87) << 3;
    }
  }
  else if (iVar3 < 0x3b3bf38a) {
    if (iVar3 == -0x83ceb3d) {
      uVar5 = 4;
    }
    else {
      if (iVar3 != -0x169521c) goto LAB_021b1eb0;
      uVar5 = 1;
    }
  }
  else if (iVar3 == 0x3b3bf38a) {
    uVar5 = 6;
  }
  else if (iVar3 == 0x3fce6459) {
    uVar5 = 2;
  }
  else {
    if (iVar3 != 0x6148bcad) goto LAB_021b1eb0;
    uVar5 = 0;
  }
  piVar7 = (int *)(param_1 + 0x55ca4);
  lVar6 = **(long **)PTR_DAT_04bb27d0;
  bVar4 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar4)) {
      piVar7 = (int *)(param_1 + 0x55cac);
    }
  }
  if (*piVar7 == param_3) {
    lVar6 = 0;
  }
  else {
    if (piVar7[1] != param_3) goto LAB_021b1f58;
    lVar6 = 1;
  }
  param_1 = param_1 + lVar6 * 0x28;
LAB_021b1f58:
  if (param_2 < 0x1e) {
    puVar2 = (uint *)(param_1 + 0x55cb4) + uVar5;
    if (9 < uVar5) {
      puVar2 = (uint *)(param_1 + 0x55cb4);
    }
    *puVar2 = *puVar2 | 1 << (ulong)(param_2 & 0x1f);
  }
  return;
}

