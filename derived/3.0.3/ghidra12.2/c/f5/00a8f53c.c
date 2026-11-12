
/* WARNING: Removing unreachable block (ram,0x00a8f6f8) */

bool FUN_00a8f53c(undefined8 param_1)

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
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x78855454) {
LAB_00a8f750:
      uVar6 = FUN_00a8117c(psVar7);
      if ((uVar6 & 1) == 0) goto LAB_00a8f75c;
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
      if (*piVar1 < 0) goto LAB_00a8f620;
      puVar2 = PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8;
      if (0xff < uVar4) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_00a8f620;
      psVar7 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if (*(short *)(DAT_04da7238 + 0x651c8) != 0) {
        psVar7 = (short *)(DAT_04da7238 + 0x651c8);
      }
    }
    else {
LAB_00a8f620:
      psVar7 = (short *)(DAT_04da7238 + 0x651e0);
    }
    iVar5 = 0;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar3 >> 0x19 & 1) != 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x78855454))
    goto LAB_00a8f770;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x11 & 1) == 0) goto LAB_00a8f750;
LAB_00a8f75c:
    if (0xe < *(byte *)(psVar7 + 2) - 4) {
      iVar5 = FUN_00a8fb10(param_1);
      goto LAB_00a8f770;
    }
  }
  iVar5 = 0;
LAB_00a8f770:
  return iVar5 - 1U < 3;
}

