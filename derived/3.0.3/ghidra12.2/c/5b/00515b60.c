
undefined8 FUN_00515b60(long param_1,int param_2,ulong param_3)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  int *local_48;
  undefined8 local_40;
  uint local_34;
  
  if ((param_3 & 1) == 0) {
    if (*(int *)(param_1 + 0x24) == param_2) {
      return 1;
    }
    return 0;
  }
  local_48 = (int *)0x0;
  local_40 = 0x8000000000000000;
  FUN_00515440(param_2,&local_48);
  uVar3 = local_40;
  piVar8 = local_48;
  uVar4 = (uint)local_40;
  lVar11 = (long)(int)(uint)local_40;
  local_34 = (uint)local_40;
  uVar10 = *(undefined8 *)PTR_PTR_04bd4d20;
  bVar1 = 0 < (int)(uint)local_40;
  if (bVar1) {
    piVar5 = (int *)FUN_00421ed0(uVar10,4,&local_34);
    piVar6 = piVar5;
    if (2 < uVar4 - 1) {
      iVar7 = (uVar4 & 3) - uVar4;
      piVar9 = piVar5;
      do {
        *piVar9 = *piVar8;
        piVar9[1] = piVar8[1];
        piVar9[2] = piVar8[2];
        piVar2 = piVar8 + 3;
        piVar6 = piVar9 + 4;
        piVar8 = piVar8 + 4;
        piVar9[3] = *piVar2;
        iVar7 = iVar7 + 4;
        piVar9 = piVar6;
      } while (iVar7 != 0);
    }
    if ((uVar3 & 3) != 0) {
      iVar7 = -(uVar4 & 3);
      do {
        iVar7 = iVar7 + 1;
        *piVar6 = *piVar8;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar7 != 0);
    }
    if (uVar4 != 0) {
      lVar11 = lVar11 << 2;
      piVar8 = piVar5;
      do {
        if (*(int *)(param_1 + 0x24) == *piVar8) {
          bVar1 = true;
          goto joined_r0x00515cd0;
        }
        lVar11 = lVar11 + -4;
        piVar8 = piVar8 + 1;
      } while (lVar11 != 0);
    }
    bVar1 = false;
joined_r0x00515cd0:
    uVar3 = local_40;
    if ((piVar5 != (int *)0x0) && (-1 < (int)local_34)) {
      FUN_00421f90(uVar10,piVar5,4,local_34 & 0x3fffffff);
      uVar3 = local_40;
    }
    local_40 = uVar3;
    if (bVar1) {
      bVar1 = false;
      local_40._4_4_ = (uint)(uVar3 >> 0x20);
      uVar4 = local_40._4_4_;
      goto joined_r0x00515ca8;
    }
  }
  bVar1 = true;
  uVar4 = local_40._4_4_;
  uVar3 = local_40;
joined_r0x00515ca8:
  if ((-1 < (long)uVar3) && (local_40 = (ulong)uVar4 << 0x20, local_48 != (int *)0x0)) {
    FUN_00421f90(uVar10,local_48,4,uVar4 & 0x3fffffff);
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}

