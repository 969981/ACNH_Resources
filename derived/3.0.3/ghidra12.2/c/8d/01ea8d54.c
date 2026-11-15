
bool FUN_01ea8d54(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x90);
  if (((*PTR_DAT_04bb5b58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5b58);
  }
  if (((plVar5 != (long *)0x0) &&
      (uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bb5b50), (uVar3 & 1) != 0)) &&
     (lVar4 = plVar5[0x4f], (*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) {
    fVar7 = *(float *)(lVar4 + 0x1c);
    fVar8 = 0.0;
    fVar6 = *(float *)(lVar4 + 0x24);
    fVar11 = SQRT(fVar7 * fVar7 + 0.0 + fVar6 * fVar6);
    if (0.01 <= fVar11) {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar10 = *(float *)(lVar4 + 0x294);
      fVar9 = *(float *)(lVar4 + 0x29c);
      if (0.0 < fVar11) {
        fVar11 = 1.0 / fVar11;
        fVar7 = fVar7 * fVar11;
        fVar8 = fVar11 * 0.0;
        fVar6 = fVar6 * fVar11;
      }
      fVar12 = 0.0;
      fVar11 = SQRT(fVar10 * fVar10 + 0.0 + fVar9 * fVar9);
      if (0.0 < fVar11) {
        fVar11 = 1.0 / fVar11;
        fVar10 = fVar10 * fVar11;
        fVar12 = fVar11 * 0.0;
        fVar9 = fVar9 * fVar11;
      }
      if (fVar8 * fVar12 + fVar10 * fVar7 + fVar9 * fVar6 < 0.0) {
        iVar2 = *(int *)(param_1 + 0xae58) + 1;
        iVar1 = 0;
        if (iVar2 < param_2) {
          iVar1 = *(int *)(param_1 + 0xae58) + 1;
        }
        *(int *)(param_1 + 0xae58) = iVar1;
        return param_2 <= iVar2;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0xae58);
  if (0 < iVar2) {
    *(int *)(param_1 + 0xae58) = iVar2 + -1;
  }
  return false;
}

