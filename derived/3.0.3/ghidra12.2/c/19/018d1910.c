
undefined8 FUN_018d1910(undefined8 param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  float local_38;
  
  local_38 = 0.0;
  local_40 = 0;
  lVar6 = *(long *)PTR_DAT_04bb47e0;
  if ((*(long *)(lVar6 + 0x38) != 0 && 0x18 < *(uint *)(lVar6 + 0x30)) &&
     (plVar3 = *(long **)(*(long *)(lVar6 + 0x38) + 0xc0), plVar3 != (long *)0x0)) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x160))();
    if (((*PTR_DAT_04bbf000 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbf000), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bbeff8 = PTR_DAT_04bb2fb8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbf000);
    }
    if ((plVar3 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbeff8), (uVar4 & 1) != 0))
    goto LAB_018d19a8;
  }
  plVar3 = (long *)FUN_018d1d40(lVar6);
LAB_018d19a8:
  uVar4 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,*param_2);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_01a1c7b0(&local_40,*param_2,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    fVar7 = (float)FUN_015cb8d4(&local_40,1);
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_60 = PTR_DAT_04bb2010 + 0x10;
    fVar8 = (float)(int)((int)((float)(int)(float)local_40 / 10.0) - (uint)((float)local_40 < 0.0))
            * 10.0;
    fVar10 = (float)(int)((int)((float)(int)local_38 / 10.0) - (uint)(local_38 < 0.0)) * 10.0;
    fVar9 = fVar8 + 2.5;
    fVar11 = fVar10 + 2.5;
    fVar8 = fVar8 + 10.0 + -2.5;
    fVar10 = fVar10 + 10.0 + -2.5;
    local_48 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iStack_44 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iVar2 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar1 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    local_58 = local_48;
    if (iVar2 <= local_48) {
      local_58 = iVar2;
    }
    if (local_48 <= iVar2) {
      local_48 = iVar2;
    }
    iStack_54 = iStack_44;
    if (iVar1 <= iStack_44) {
      iStack_54 = iVar1;
    }
    if (iStack_44 <= iVar1) {
      iStack_44 = iVar1;
    }
    local_50 = puStack_60;
    local_40._4_4_ = fVar7;
    uVar4 = FUN_01a1d370(&local_68);
    if ((uVar4 & 1) == 0) {
      pfVar5 = (float *)(**(code **)(plVar3[0x24] + 0xf0))(plVar3 + 0x24);
      fVar7 = *pfVar5;
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(float *)(param_3 + 8) = (float)local_40;
      *(float *)(param_3 + 0xc) = fVar7 + local_40._4_4_;
      *(float *)(param_3 + 0x10) = local_38;
      return 1;
    }
  }
  return 0;
}

