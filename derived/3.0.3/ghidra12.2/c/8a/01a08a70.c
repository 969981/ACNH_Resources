
void FUN_01a08a70(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  void *__ptr;
  long lVar11;
  undefined8 local_9c;
  undefined4 local_94;
  undefined *local_90;
  char *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  char *pcStack_68;
  undefined4 local_60;
  ulong local_58;
  undefined8 *local_38;
  
  puVar2 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb60a0;
  lVar8 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar8;
  lVar8 = param_2[6];
  *param_1 = (long)(puVar3 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar8;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[0xb] = 0;
  *param_1 = (long)&PTR_LAB_049f90a8;
  param_1[6] = (long)&PTR_LAB_049f97a0;
  param_1[7] = (long)"mFgKind";
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 8;
  lVar8 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar11 = lVar8;
      lVar8 = *(long *)(lVar11 + 0x10);
    } while (lVar8 != 0);
    plVar6 = (long *)(lVar11 + 0x10);
  }
  *plVar6 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  puVar4 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar4 = 0x23;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x23;
  }
  local_90 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  local_90 = local_90 + 0x10;
  local_88 = "mPointBuffer";
  local_60 = 0;
  puStack_78 = &DAT_0408cafb;
  local_94 = 0;
  pcStack_68 = "Max=10";
  plVar6 = param_1 + 0xc;
  *plVar6 = (long)(PTR_DAT_04bd0d40 + 0x10);
  local_9c = 0x40a0000000000000;
  param_1[0xd] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_80 = local_90;
  local_70 = local_90;
  if (*(long *)puVar1 != 0) {
    lVar8 = FUN_038cb610(*(long *)puVar1,plVar6);
    param_1[0xd] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar6 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)plVar6);
      *plVar10 = (long)plVar6;
      *plVar6 = lVar9;
      plVar6[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar6;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  plVar6 = param_1 + 0x10;
  *plVar6 = (long)(puVar2 + 0x10);
  (**(code **)(local_90 + 0x18))(&local_90);
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = (long)local_88;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = local_60;
  *plVar6 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0xc] = (long)&PTR_FUN_049f98e0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  *plVar6 = (long)&PTR_LAB_049f99a0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar2 = PTR_DAT_04bb3058;
  uVar5 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                    (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),0);
  if (((uVar5 & 1) != 0) && (__ptr = (void *)param_1[0x1c], __ptr != (void *)0x0)) {
    if (*(long *)puVar1 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
  }
  param_1[0x1c] = 0;
  local_38 = (undefined8 *)0x0;
  local_58 = 0;
  nn::os::GetCurrentStackInfo((ulong *)&local_38,&local_58);
  if ((&local_9c < local_38) || ((undefined8 *)(local_58 + (long)local_38) <= &local_9c)) {
    if (*(long *)puVar1 != 0) {
      if (*(int *)PTR_DAT_04bd0ca0 != 0) {
        puVar7 = *(undefined8 **)(PTR_DAT_04bd0ca0 + 8);
        lVar8 = (long)*(int *)PTR_DAT_04bd0ca0 << 3;
        do {
          uVar5 = (**(code **)(*(long *)*puVar7 + 0x88))((long *)*puVar7,&local_9c);
          if ((uVar5 & 1) != 0) goto LAB_01a08d6c;
          puVar7 = puVar7 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      if (*(int *)PTR_DAT_04bd0d70 != 0) {
        puVar7 = *(undefined8 **)(PTR_DAT_04bd0d70 + 8);
        lVar8 = (long)*(int *)PTR_DAT_04bd0d70 << 3;
        do {
          uVar5 = (**(code **)(*(long *)*puVar7 + 0x88))((long *)*puVar7,&local_9c);
          if ((uVar5 & 1) != 0) goto LAB_01a08d6c;
          puVar7 = puVar7 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    puVar7 = &local_9c;
    goto LAB_01a08e64;
  }
LAB_01a08d6c:
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    puVar7 = malloc(0xc);
  }
  else {
    plVar6 = *(long **)(*(long *)puVar2 + 0x330);
    if (plVar6 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar11 != 0) {
        plVar6 = (long *)(lVar11 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      puVar7 = (undefined8 *)0x0;
      if (plVar6 == (long *)0x0) goto LAB_01a08e54;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xc,8);
  }
LAB_01a08e54:
  *(undefined4 *)(puVar7 + 1) = local_94;
  *puVar7 = local_9c;
LAB_01a08e64:
  param_1[0x1c] = (long)puVar7;
  return;
}

