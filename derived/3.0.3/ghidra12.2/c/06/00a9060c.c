
bool FUN_00a9060c(long param_1)

{
  short *psVar1;
  short *psVar2;
  uint *puVar3;
  int *piVar4;
  undefined *puVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  
  psVar1 = (short *)(param_1 + 0x651d0);
  uVar7 = *(ushort *)PTR_DAT_04bb6298;
  uVar9 = (ulong)(short)uVar7;
  if (uVar9 == 0xffffffffffffffff) {
LAB_00a90708:
    psVar2 = (short *)(DAT_04da7238 + 0x651c8);
    if (*psVar2 == 0) {
      psVar2 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      sVar6 = *psVar1;
    }
    else {
      sVar6 = *psVar1;
    }
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar7 * 8);
    if (0xff < (uint)(int)(short)uVar7) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x19 & 1) == 0) {
      piVar4 = (int *)(PTR_DAT_04bc39f8 + (uVar9 & 0xffffffff) * 8);
      if (0xff < uVar7) {
        piVar4 = (int *)PTR_DAT_04bc39f8;
      }
      if (-1 < *piVar4) {
        puVar5 = PTR_DAT_04bc39f8 + (uVar9 & 0xffffffff) * 8;
        if (0xff < uVar7) {
          puVar5 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar5 + 4) & 1) == 0) goto LAB_00a90708;
      }
    }
    psVar2 = (short *)(DAT_04da7238 + 0x651e0);
    sVar6 = *psVar1;
  }
  if (sVar6 == 0) {
    iVar8 = FUN_00a86d64(param_1,psVar2);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x653e0);
    if (iVar8 < 0) {
      return false;
    }
  }
  return *(char *)((long)psVar2 + 5) <= iVar8;
}

