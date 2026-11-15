
bool FUN_0231a588(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 == (int *)0x0) {
    if ((*(int *)(param_1 + 0x178) != 0) || ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar3 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar6 = (**(code **)(*plVar2 + 0x148))();
      iVar4 = iVar3 - *(int *)(lVar6 + 4);
      if (iVar4 + 0x5b05afU < 0xb60b5f) {
        bVar5 = true;
        iVar8 = iVar3;
      }
      else {
        iVar7 = (int)((float)iVar4 * 0.1666667);
        iVar4 = 0x10000000;
        if (iVar7 < 1) {
          iVar4 = -0x5b05b0;
        }
        iVar8 = -0x10000000;
        if (0 < iVar7) {
          iVar8 = 0x5b05b0;
        }
        iVar1 = iVar7;
        if (iVar4 <= iVar7) {
          iVar1 = iVar4;
        }
        if (iVar8 <= iVar7) {
          iVar8 = iVar1;
        }
        iVar8 = iVar8 + *(int *)(lVar6 + 4);
        bVar5 = iVar8 == iVar3;
      }
      *(int *)(lVar6 + 4) = iVar8;
      return bVar5;
    }
  }
  else if ((*(int *)(param_1 + 0x178) != 0) || ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar2 + 0x148))();
    iVar3 = *param_2;
    iVar4 = iVar3 - *(int *)(lVar6 + 4);
    if (iVar4 + 0x5b05afU < 0xb60b5f) {
      *(int *)(lVar6 + 4) = iVar3;
      return true;
    }
    iVar7 = (int)((float)iVar4 * 0.1666667);
    iVar4 = 0x10000000;
    if (iVar7 < 1) {
      iVar4 = -0x5b05b0;
    }
    iVar8 = -0x10000000;
    if (0 < iVar7) {
      iVar8 = 0x5b05b0;
    }
    iVar1 = iVar7;
    if (iVar4 <= iVar7) {
      iVar1 = iVar4;
    }
    if (iVar8 <= iVar7) {
      iVar8 = iVar1;
    }
    iVar8 = iVar8 + *(int *)(lVar6 + 4);
    *(int *)(lVar6 + 4) = iVar8;
    return iVar8 == iVar3;
  }
  return true;
}

