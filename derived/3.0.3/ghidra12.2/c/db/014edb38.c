
void FUN_014edb38(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined *local_70;
  undefined *puStack_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  
  puVar2 = PTR_DAT_04bb27c0;
  local_60 = 0;
  iStack_5c = 0;
  local_70 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_68 = PTR_DAT_04bb2010 + 0x10;
  local_50 = 0;
  iStack_4c = 0;
  local_58 = puStack_68;
  if (*(int *)(param_1 + 0x18) != 1) {
    if (*(int *)(param_1 + 0x98) == 0) {
      if ((*(int *)(param_1 + 0x18) == 3) &&
         (lVar6 = FUN_014e7558(param_1,*(undefined4 *)(param_1 + 0x8c)), lVar6 != 0)) {
        fVar9 = *(float *)(param_3 + 8) + -2.5;
        fVar10 = *(float *)(param_3 + 0x10) + -2.5;
        local_60 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
        iStack_5c = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
        local_50 = local_60 + 1;
        iStack_4c = iStack_5c + 1;
      }
    }
    else {
      plVar7 = (long *)FUN_014ba988(param_1 + 0x90);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0xd8))(plVar7,&local_70,param_3);
      }
    }
    goto LAB_014edd54;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) goto LAB_014edd54;
  uVar8 = *(uint *)(param_1 + 0x8c);
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_014edcec;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014edcec:
    uVar8 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    uVar1 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
    if ((((int)lVar6 == 1) && ((uVar4 & uVar8) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      FUN_0147e698(plVar7,&local_70,param_3);
    }
  }
LAB_014edd54:
  *(int *)(param_2 + 0x10) = local_60;
  *(int *)(param_2 + 0x14) = iStack_5c;
  *(int *)(param_2 + 0x20) = local_50;
  *(int *)(param_2 + 0x24) = iStack_4c;
  return;
}

