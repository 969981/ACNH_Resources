
float FUN_008d6f70(long *param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  float *pfVar9;
  float *pfVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e0 [52];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  float local_a4 [3];
  undefined1 auStack_98 [52];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  float afStack_5c [3];
  long local_50;
  char local_48;
  char local_46;
  int local_38;
  undefined4 uStack_34;
  
  local_38 = (int)param_3;
  uStack_34 = param_2;
  if (*(long *)PTR_DAT_04bb27c0 == 0 || local_38 == 0) {
LAB_008d7014:
    plVar11 = (long *)0x0;
LAB_008d7018:
    bVar3 = true;
LAB_008d701c:
    bVar2 = false;
    if (plVar11 != (long *)0x0) {
      bVar2 = bVar3;
    }
  }
  else {
    plVar11 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                        (param_3 >> 0x14 & 0xfff) * 8);
    if (plVar11 == (long *)0x0) goto LAB_008d7018;
    if (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0) || ((int)plVar11[0x46] != local_38))
    goto LAB_008d7014;
    lVar4 = plVar11[0x2a];
    if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2e60);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb2e58);
    if ((uVar7 & 1) == 0) {
      bVar3 = false;
      goto LAB_008d701c;
    }
    if ((int)lVar4 == 1) goto LAB_008d7040;
    bVar2 = true;
  }
  if (!bVar2) {
    return 140.0;
  }
  if (*(char *)((long)param_1 + 0x37fb1) == '\0') {
    return 140.0;
  }
LAB_008d7040:
  puVar8 = (undefined *)FUN_0252d9bc(0);
  puVar5 = PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb2150;
  if (puVar8 != (undefined *)0x0) {
    puVar1 = puVar8;
  }
  FUN_009047a4(auStack_98,&uStack_34,puVar1,PTR_DAT_04bb3238);
  FUN_009047a4(auStack_e0,&local_38,plVar11[0xd] + 0x278,puVar5);
  (**(code **)(*param_1 + 0x100))(&local_50,param_1);
  FUN_0071cb58(&local_50,auStack_64,auStack_60,0);
  if ((((local_50 == 0) || (local_48 == '\0')) || (local_46 == '\0')) ||
     (*(long **)(local_50 + 0x68) == (long *)0x0)) {
    pfVar9 = afStack_5c;
  }
  else {
    pfVar9 = (float *)(**(code **)(**(long **)(local_50 + 0x68) + 0x120))();
  }
  FUN_0071cb58(&local_50,auStack_ac,auStack_a8,0);
  if (((local_50 == 0) || (local_48 == '\0')) ||
     ((local_46 == '\0' || (*(long **)(local_50 + 0x68) == (long *)0x0)))) {
    pfVar10 = local_a4;
  }
  else {
    pfVar10 = (float *)(**(code **)(**(long **)(local_50 + 0x68) + 0x120))();
  }
  fVar12 = *pfVar9;
  fVar13 = *pfVar10;
  fVar14 = (pfVar9[2] - pfVar10[2]) * 1.5;
  FUN_00905440(auStack_e0);
  FUN_00905440(auStack_98);
  return SQRT(fVar14 * fVar14 + (fVar12 - fVar13) * (fVar12 - fVar13));
}

