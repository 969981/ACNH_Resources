
/* WARNING: Removing unreachable block (ram,0x00a8f384) */

bool FUN_00a8f1d0(undefined8 param_1)

{
  int *piVar1;
  undefined *puVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  short *psVar7;
  
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar6 = (ulong)(short)uVar4;
  if (uVar6 == 0xffffffffffffffff) {
    psVar7 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if (*(short *)(DAT_04da7238 + 0x651c8) != 0) {
      psVar7 = (short *)(DAT_04da7238 + 0x651c8);
    }
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x78855454) {
      return false;
    }
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x19 & 1) == 0) {
      piVar1 = (int *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
      if (0xff < uVar4) {
        piVar1 = (int *)PTR_DAT_04bc39f8;
      }
      if (*piVar1 < 0) goto LAB_00a8f2bc;
      puVar2 = PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8;
      if (0xff < uVar4) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_00a8f2bc;
      psVar7 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if (*(short *)(DAT_04da7238 + 0x651c8) != 0) {
        psVar7 = (short *)(DAT_04da7238 + 0x651c8);
      }
    }
    else {
LAB_00a8f2bc:
      psVar7 = (short *)(DAT_04da7238 + 0x651e0);
    }
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x19 & 1) != 0) {
      return false;
    }
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x78855454) {
      return false;
    }
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x11 & 1) != 0) goto LAB_00a8f3e0;
  }
  uVar6 = FUN_00a8117c(psVar7);
  if ((uVar6 & 1) != 0) {
    return false;
  }
LAB_00a8f3e0:
  if (*(byte *)(psVar7 + 2) - 4 < 0xf) {
    return false;
  }
  iVar5 = FUN_00a8fb10(param_1);
  return iVar5 == 1;
}

