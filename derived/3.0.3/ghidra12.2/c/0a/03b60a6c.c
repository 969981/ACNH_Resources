
void FUN_03b60a6c(float param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  undefined2 local_48 [2];
  float local_44;
  
  plVar11 = *(long **)(param_2 + 0xd8);
  if (plVar11 == (long *)0x0) {
    return;
  }
  uVar8 = param_3 & 0xffff;
  lVar9 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x178);
  if (uVar8 == 0xffff) {
    if (lVar9 == 0) goto LAB_03b60c48;
  }
  else {
    if (lVar9 == 0) goto LAB_03b60c48;
    uVar6 = (uint)param_3 & 0xffff;
    if (*(ushort *)(lVar9 + 0x1f0) != uVar6) {
      if (*(char *)(lVar9 + 0x28) == '\0') {
LAB_03b60c48:
        uVar6 = *(uint *)((long)plVar11 + (uVar8 >> 5) * 4 + 0x10);
        uVar2 = 1 << (ulong)((uint)param_3 & 0x1f);
        if ((uVar6 & uVar2) == 0) {
          return;
        }
        *(uint *)((long)plVar11 + (uVar8 >> 5) * 4 + 0x10) = uVar6 & (uVar2 ^ 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x03b60c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 0x30))(plVar11,plVar11 + 1);
        return;
      }
      iVar1 = *(int *)(lVar9 + 0x48);
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (*(long *)(lVar9 + 0x30) != 0) {
        iVar7 = (int)uVar8;
        bVar5 = SBORROW4(iVar1,iVar7);
        bVar3 = iVar1 - iVar7 < 0;
        bVar4 = iVar1 == iVar7;
      }
      if ((bVar4 || bVar3 != bVar5) ||
         (plVar10 = (long *)(*(long *)(lVar9 + 0x30) + uVar8 * 0xe8),
         *(ushort *)(plVar10 + 0x1c) != uVar6)) goto LAB_03b60c48;
      goto LAB_03b60ad8;
    }
  }
  plVar10 = (long *)(lVar9 + 0x60);
LAB_03b60ad8:
  uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
  if ((0.0 < param_1) &&
     ((1 << (ulong)(uVar6 & 0x1f) &
      *(uint *)((long)plVar11 + (ulong)(uVar6 >> 5 & 0x7ff) * 4 + 0x10)) == 0)) {
    plVar11 = *(long **)(param_2 + 0xd8);
    uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
    if ((*(uint *)((long)plVar11 + (ulong)(uVar6 >> 5 & 0x7ff) * 4 + 0x10) >> (ulong)(uVar6 & 0x1f)
        & 1) == 0) {
      uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
      lVar9 = (ulong)(uVar6 >> 5 & 0x7ff) * 4;
      *(uint *)((long)plVar11 + lVar9 + 0x10) =
           1 << (ulong)(uVar6 & 0x1f) | *(uint *)((long)plVar11 + lVar9 + 0x10);
      (**(code **)(*plVar11 + 0x30))(plVar11,plVar11 + 1);
      local_48[0] = (**(code **)(*plVar10 + 0x48))(plVar10);
      local_44 = 0.0;
      FUN_03b56150(plVar11 + 5,local_48,0);
    }
  }
  lVar9 = *(long *)(param_2 + 0xd8);
  uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
  if ((*(uint *)(lVar9 + (ulong)(uVar6 >> 5 & 0x7ff) * 4 + 0x10) >> (ulong)(uVar6 & 0x1f) & 1) == 0)
  {
    return;
  }
  lVar9 = *(long *)(param_2 + 0xd8);
  fVar12 = 128.0;
  if (param_1 <= 128.0) {
    fVar12 = param_1;
  }
  fVar13 = -128.0;
  if (-128.0 <= param_1) {
    fVar13 = fVar12;
  }
  local_48[0] = (**(code **)(*plVar10 + 0x48))(plVar10);
  local_44 = fVar13;
  FUN_03b56150(lVar9 + 0x28,local_48,0);
  return;
}

