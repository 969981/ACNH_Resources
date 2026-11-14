
long * FUN_01936854(int *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined4 local_58;
  
  if (*param_1 < param_1[1]) {
    plVar7 = *(long **)(param_1 + 4);
    if (plVar7 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar7;
    }
    puVar2 = PTR_DAT_04bb3050;
    plVar8 = (long *)*param_3;
    *plVar7 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar3 = PTR_DAT_04bb60a0;
    lVar4 = param_2[1];
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[1] = lVar4;
    lVar4 = param_2[6];
    plVar7[5] = 0;
    *(int *)(plVar7 + 4) = (int)lVar4;
    *plVar7 = (long)(puVar3 + 0x10);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x140))(plVar8,plVar7);
    }
    *plVar7 = (long)&PTR_FUN_049deff0;
    local_58 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puStack_70 = &DAT_040bff0f;
    local_80 = "mOffsetPos";
    pcStack_60 = "Min=-500.f, Max=500.f";
    local_88 = puVar1;
    local_78 = puVar1;
    local_68 = puVar1;
    FUN_006fdfc0(plVar7 + 6,&local_88,PTR_DAT_04bb2150,plVar7);
    puStack_70 = &DAT_040bb3b8;
    local_58 = 8;
    plVar8 = plVar7 + 0xd;
    *plVar8 = (long)(PTR_DAT_04bd0d40 + 0x10);
    local_80 = "mNextPointIDBuffer";
    pcStack_60 = "";
    plVar7[0xe] = 0;
    lVar4 = *(long *)PTR_DAT_04bb2698;
    plVar7[0xf] = 0;
    plVar7[0x10] = 0;
    local_88 = puVar1;
    local_78 = puVar1;
    local_68 = puVar1;
    if (lVar4 != 0) {
      lVar4 = FUN_038cb610(lVar4,plVar8);
      plVar7[0xe] = lVar4;
      if (lVar4 != 0) {
        if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar4 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
        }
        plVar6 = (long *)(lVar4 + 0x70);
        lVar5 = *plVar6;
        plVar9 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar8);
        *plVar6 = (long)plVar9;
        *plVar9 = lVar5;
        plVar9[1] = (long)plVar6;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar9;
        }
        *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    plVar9 = plVar7 + 0x11;
    *plVar9 = (long)(puVar2 + 0x10);
    (**(code **)(local_88 + 0x18))(&local_88);
    plVar7[0x14] = 0;
    plVar7[0x16] = 0;
    plVar7[0x12] = (long)local_80;
    plVar7[0x13] = 0;
    *(undefined4 *)(plVar7 + 0x15) = local_58;
    *plVar9 = (long)(puVar3 + 0x10);
    (**(code **)(*plVar7 + 0x140))(plVar7,plVar9);
    plVar7[0x1b] = 0;
    puVar2 = PTR_DAT_04bbf8f0;
    plVar7[0x1d] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    *plVar9 = (long)(puVar2 + 0xd0);
    plVar7[0x17] = 0;
    plVar7[0x18] = 0;
    plVar7[0xd] = (long)(puVar2 + 0x10);
    *(undefined4 *)(plVar7 + 0x1d) = 0xffffffff;
    *(undefined4 *)(plVar7 + 0x1c) = 3;
    FUN_01929bc0(plVar8,&DAT_04177454);
    puVar2 = PTR_DAT_04bbf8e8;
    plVar7[0xd] = (long)(PTR_DAT_04bbf8e8 + 0x10);
    plVar7[0x1e] = (long)(puVar2 + 0x238);
    *plVar9 = (long)(puVar2 + 0xd8);
    *plVar7 = (long)&PTR_FUN_049dee88;
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar7;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}

