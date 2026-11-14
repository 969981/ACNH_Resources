
void FUN_014eefe8(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_2 + 0x18) != 1) || (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 == 0))
  goto LAB_014ef168;
  uVar9 = *(uint *)(param_2 + 0x8c);
  if ((uVar9 == 0) ||
     (((plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
       ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_014ef0b0;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014ef0b0:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
    if ((((int)lVar6 == 1) && ((uVar4 & uVar9) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[0x10] = 0;
      param_1[0xd] = (long)(param_1 + 0x10);
      plVar5 = param_1 + 1;
      param_1[2] = (long)plVar5;
      param_1[10] = (long)(param_1 + 0xd);
      plVar7 = param_1 + 7;
      *plVar7 = (long)(param_1 + 10);
      puVar2 = PTR_DAT_04bbcda0;
      param_1[4] = (long)plVar7;
      param_1[5] = (long)plVar7;
      *param_1 = (long)(puVar2 + 0x10);
      param_1[1] = (long)plVar5;
      *(undefined4 *)(param_1 + 6) = 4;
      FUN_0147a740(plVar5,plVar8 + 0x5e);
      return;
    }
  }
LAB_014ef168:
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x10] = 0;
  param_1[0xd] = (long)(param_1 + 0x10);
  param_1[10] = (long)(param_1 + 0xd);
  param_1[2] = (long)(param_1 + 1);
  plVar8 = param_1 + 7;
  *plVar8 = (long)(param_1 + 10);
  puVar2 = PTR_DAT_04bbcda0;
  param_1[4] = (long)plVar8;
  param_1[5] = (long)plVar8;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  *(undefined4 *)(param_1 + 6) = 4;
  return;
}

