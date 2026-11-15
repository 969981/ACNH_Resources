
uint FUN_021b1b7c(long param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_3 == -1) {
    return 0;
  }
  if (DAT_0534bef8 == 0) {
    return 0;
  }
  iVar2 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar2 < -0x83ceb3d) {
    if (iVar2 < -0x15fdefdb) {
      if (iVar2 == -0x477aafe0) {
        uVar5 = 5;
        goto LAB_021b1cc0;
      }
      if (iVar2 == -0x2099c902) {
        uVar5 = 9;
        goto LAB_021b1cc0;
      }
    }
    else {
      if (iVar2 == -0x15fdefdb) {
        uVar5 = 7;
        goto LAB_021b1cc0;
      }
      if (iVar2 == -0xe632453) {
        uVar5 = 3;
        goto LAB_021b1cc0;
      }
    }
  }
  else if (iVar2 < 0x3b3bf38a) {
    if (iVar2 == -0x83ceb3d) {
      uVar5 = 4;
      goto LAB_021b1cc0;
    }
    if (iVar2 == -0x169521c) {
      uVar5 = 1;
      goto LAB_021b1cc0;
    }
  }
  else {
    if (iVar2 == 0x3b3bf38a) {
      uVar5 = 6;
      goto LAB_021b1cc0;
    }
    if (iVar2 == 0x3fce6459) {
      uVar5 = 2;
      goto LAB_021b1cc0;
    }
    if (iVar2 == 0x6148bcad) {
      uVar5 = 0;
      goto LAB_021b1cc0;
    }
  }
  uVar5 = (uint)(iVar2 == 0x17f77b87) << 3;
LAB_021b1cc0:
  piVar4 = (int *)(param_1 + 0x55c28);
  lVar6 = **(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar3)) {
      piVar4 = (int *)(param_1 + 0x55c30);
    }
  }
  if (*piVar4 == param_3) {
    lVar6 = 0;
  }
  else {
    if (piVar4[1] != param_3) {
      return 0;
    }
    lVar6 = 1;
  }
  uVar7 = (ulong)uVar5;
  if (0x1d < param_2) {
    return 0;
  }
  if (9 < uVar5) {
    uVar7 = 0;
  }
  return *(uint *)(param_1 + lVar6 * 0x28 + uVar7 * 4 + 0x55c50) >> (ulong)(param_2 & 0x1f) & 1;
}

