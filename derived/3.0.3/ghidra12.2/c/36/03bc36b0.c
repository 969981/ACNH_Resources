
long FUN_03bc36b0(long param_1,long *param_2,ulong param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  lVar7 = 0;
  uVar6 = 0xffffffff;
  do {
    pbVar1 = (byte *)((long)param_2 + lVar7);
    lVar7 = lVar7 + 4;
    uVar2 = crc32b(uVar6,(uint)*pbVar1,0x4c11db7);
    uVar2 = crc32b(uVar2,(uint)pbVar1[1],0x4c11db7);
    uVar2 = crc32b(uVar2,(uint)pbVar1[2],0x4c11db7);
    uVar6 = crc32b(uVar2,(uint)pbVar1[3],0x4c11db7);
  } while ((int)lVar7 != 0x38);
  if (0xfffffffd < uVar6) {
    uVar6 = 0xfffffffe;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar8 = (ulong)(int)uVar4;
  uVar6 = ~uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  if ((param_3 & 1) == 0) {
    if (uVar4 != 0) {
      if (lVar7 == 0) goto LAB_03bc3720;
      plVar13 = (long *)(lVar7 + (long)(int)(uVar4 - 1) * 0x10);
      lVar12 = (long)(int)(uVar4 - 1) + 1;
      do {
        if ((*(uint *)(plVar13 + 1) == uVar6) &&
           (lVar11 = *plVar13,
           (((((*(long *)(lVar11 + 0x20) == *param_2 && *(long *)(lVar11 + 0x28) == param_2[1]) &&
              *(long *)(lVar11 + 0x30) == param_2[2]) && *(long *)(lVar11 + 0x38) == param_2[3]) &&
            *(long *)(lVar11 + 0x40) == param_2[4]) && *(long *)(lVar11 + 0x48) == param_2[5]) &&
           *(long *)(lVar11 + 0x50) == param_2[6])) goto LAB_03bc3830;
        plVar13 = plVar13 + -2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if ((uVar3 != uVar4) && (lVar7 != 0)) {
      plVar13 = (long *)(lVar7 + (long)(int)(uVar3 - 1) * 0x10);
      lVar12 = ~(long)(int)(uVar3 - 1) + uVar8;
      do {
        if ((*(uint *)(plVar13 + 1) == uVar6) &&
           (lVar11 = *plVar13,
           (((((*(long *)(lVar11 + 0x20) == *param_2 && *(long *)(lVar11 + 0x28) == param_2[1]) &&
              *(long *)(lVar11 + 0x30) == param_2[2]) && *(long *)(lVar11 + 0x38) == param_2[3]) &&
            *(long *)(lVar11 + 0x40) == param_2[4]) && *(long *)(lVar11 + 0x48) == param_2[5]) &&
           *(long *)(lVar11 + 0x50) == param_2[6])) goto LAB_03bc3830;
        plVar13 = plVar13 + -2;
        bVar5 = lVar12 != -1;
        lVar12 = lVar12 + 1;
      } while (bVar5);
    }
  }
LAB_03bc3720:
  if (uVar4 != uVar3) {
    iVar9 = uVar3 - uVar4;
    piVar10 = (int *)(lVar7 + uVar8 * 0x10 + 8);
    do {
      if (*piVar10 == 0) goto LAB_03bc3800;
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + -1;
      piVar10 = piVar10 + 4;
    } while (iVar9 != 0);
  }
  if (uVar4 != 0) {
    uVar8 = 0;
    piVar10 = (int *)(lVar7 + 8);
    do {
      if (*piVar10 == 0) {
LAB_03bc3800:
        plVar13 = (long *)(lVar7 + uVar8 * 0x10);
        (**(code **)(*(long *)*plVar13 + 0x20))();
        *(uint *)(plVar13 + 1) = uVar6;
        iVar9 = 0;
        if ((int)uVar8 + 1 < *(int *)(param_1 + 0x18)) {
          iVar9 = (int)uVar8 + 1;
        }
        *(int *)(param_1 + 0x1c) = iVar9;
        lVar11 = *plVar13;
LAB_03bc3830:
        *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
        return *plVar13;
      }
      uVar8 = uVar8 + 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != uVar8);
  }
  return 0;
}

