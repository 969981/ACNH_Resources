
void FUN_02249a24(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  undefined *__dest;
  char *pcVar9;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar5 = malloc(0x2e8);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02249ab0;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2e8,8);
  }
LAB_02249ab0:
  FUN_00705c50(plVar5);
  puVar2 = PTR_DAT_04bb3078;
  __dest = (undefined *)plVar5[0xc];
  plVar5[0x54] = (long)&DAT_3f8000003f800000;
  plVar5[0x4f] = 0;
  plVar5[0x50] = 0;
  plVar5[0x51] = 0;
  plVar5[0x52] = 0;
  plVar5[0x53] = 0;
  *(undefined4 *)(plVar5 + 0x55) = 0x3f800000;
  *plVar5 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)plVar5 + 700) = 0;
  *(undefined8 *)((long)plVar5 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar5 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar5 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar5 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar5 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar5 + 0x2d4) = 0;
  if (__dest != &DAT_040afd37) {
    iVar3 = 4;
    if ((int)plVar5[0xd] < 5) {
      iVar3 = (int)plVar5[0xd] + -1;
    }
    memcpy(__dest,&DAT_040afd37,(long)iVar3);
    __dest[iVar3] = 0;
  }
  *(uint *)(plVar5 + 0x4c) = *(uint *)(plVar5 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar5,0xffffffff);
  (**(code **)(*param_1 + 0x100))(param_1,param_3);
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    plVar5 = malloc(0x2a8);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02249be0;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2a8,8);
  }
LAB_02249be0:
  FUN_00705c50(plVar5);
  *(undefined4 *)(plVar5 + 0x51) = 0;
  puVar2 = PTR_DAT_04bb35d0;
  pcVar9 = (char *)plVar5[0xc];
  *(undefined4 *)(plVar5 + 0x52) = 0;
  plVar5[0x53] = 0;
  *(undefined2 *)(plVar5 + 0x54) = 0;
  plVar5[0x50] = (long)(plVar5 + 0x4f);
  plVar5[0x4f] = (long)(plVar5 + 0x4f);
  *plVar5 = (long)(puVar2 + 0x10);
  if (pcVar9 != "ModelResLoader") {
    iVar3 = 0xe;
    if ((int)plVar5[0xd] < 0xf) {
      iVar3 = (int)plVar5[0xd] + -1;
    }
    memcpy(pcVar9,"ModelResLoader",(long)iVar3);
    pcVar9[iVar3] = '\0';
  }
  *(undefined4 *)((long)plVar5 + 0x28c) = 8;
  *(uint *)(plVar5 + 0x4c) = *(uint *)(plVar5 + 0x4c) & 0xfffffff0 | 1;
  FUN_006f9fc0(param_1,plVar5,0xffffffff);
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    pvVar6 = malloc(0x3a8);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x3a8,8);
  }
  FUN_00938950(0x3f800000,0x3f800000,pvVar6,param_2 + 8,1);
  FUN_006f9fc0(param_1,pvVar6,0xffffffff);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5b58);
    }
    uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bb5b50);
    if ((uVar7 & 1) == 0) {
      plVar5 = (long *)0x0;
    }
  }
  param_1[0x82] = (long)plVar5;
  *(bool *)((long)param_1 + 0x401) = *(int *)((long)param_1 + 0x174) != 0;
  if (*(int *)((long)param_1 + 0x174) == 0) goto LAB_02249f10;
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    plVar5 = malloc(0x5098);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02249db8;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x5098,8);
  }
LAB_02249db8:
  FUN_00705c50(plVar5);
  *(uint *)(plVar5 + 0x4c) = *(uint *)(plVar5 + 0x4c) & 0xfffffff0 | 4;
  puVar1 = PTR_DAT_04bb5b40;
  *(undefined4 *)(plVar5 + 0x4f) = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  FUN_0093c1e0(plVar5 + 0x50);
  plVar5[0x9f6] = 0;
  puVar1 = PTR_DAT_04bb2cc0;
  plVar5[0x9f7] = 0;
  plVar5[0x9f8] = 0;
  plVar5[0x9f9] = 0;
  plVar5[0x9f5] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2ca0;
  *(undefined4 *)(plVar5 + 0x9fa) = 0;
  plVar5[0x9fc] = 0;
  plVar5[0x9fd] = 0;
  plVar5[0xa03] = 0;
  *(undefined8 *)((long)plVar5 + 0x4ff4) = 0;
  *(undefined8 *)((long)plVar5 + 0x4ffc) = 0;
  plVar5[0x9fb] = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar5 + 0x9fe) = 7;
  puVar1 = PTR_DAT_04bb2010;
  *(undefined8 *)((long)plVar5 + 0x5001) = 0;
  *(undefined4 *)(plVar5 + 0xa04) = 0;
  *(undefined1 *)((long)plVar5 + 0x5024) = 0;
  plVar5[0xa02] = (long)(puVar1 + 0x10);
  plVar5[0xa05] = -0x3c05ffff3c060000;
  puVar1 = PTR_DAT_04bb2d80;
  *(undefined4 *)(plVar5 + 0xa0e) = 0;
  plVar5[0xa10] = 0;
  plVar5[0xa0f] = 0;
  plVar5[0xa06] = (long)(puVar1 + 0x10);
  plVar5[0xa0a] = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)plVar5 + 0x5074) = 0x101;
  *(undefined1 *)((long)plVar5 + 0x5076) = 1;
  pcVar9 = (char *)plVar5[0xc];
  *(undefined4 *)((long)plVar5 + 0x508f) = 0;
  plVar5[0xa11] = 0;
  if (pcVar9 != "ColActorComponentBgCheck") {
    iVar3 = 0x18;
    if ((int)plVar5[0xd] < 0x19) {
      iVar3 = (int)plVar5[0xd] + -1;
    }
    memcpy(pcVar9,"ColActorComponentBgCheck",(long)iVar3);
    pcVar9[iVar3] = '\0';
  }
  FUN_006f9fc0(param_1,plVar5,0xffffffff);
  param_1[0x81] = param_1[0x14];
LAB_02249f10:
  (**(code **)(*param_1 + 0xf8))(param_1);
  FUN_02249f90(param_1,param_3);
  return;
}

