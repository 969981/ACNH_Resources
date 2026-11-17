
void FUN_02b89c80(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  uint local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "Actor";
  local_50 = local_88;
  local_48 = param_2;
  FUN_00751ec0(param_1,&local_88,&local_50,0);
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x1a] = (long)"mHeight";
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)param_1 + 0xc4) = 0x3f800000;
  *param_1 = (long)&PTR_LAB_04aa5dc8;
  *(undefined4 *)(param_1 + 0x1d) = 8;
  plVar5 = param_1 + 5;
  lVar7 = *plVar5;
  if (*plVar5 != 0) {
    do {
      lVar6 = lVar7;
      lVar7 = *(long *)(lVar6 + 0x10);
    } while (lVar7 != 0);
    plVar5 = (long *)(lVar6 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x19);
  param_1[0x1c] = (long)param_1;
  puVar3 = (undefined4 *)(**(code **)(param_1[0x19] + 0xf0))();
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x1d) >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  local_88 = puVar1 + 0x10;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfeffffff;
  puVar1 = PTR_DAT_04bb60a0;
  param_1[0x22] = 0;
  local_80 = "mBridgeSizeArray";
  param_1[0x20] = (long)"mBridgeSizeArray";
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  plVar5 = param_1 + 0x1f;
  *plVar5 = (long)(puVar1 + 0x10);
  puStack_70 = &DAT_0407ebb1;
  puStack_60 = &DAT_0407ebb1;
  *(undefined4 *)(param_1 + 0x23) = 8;
  local_58 = 8;
  local_78 = local_88;
  local_68 = local_88;
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  param_1[0x4d] = 0;
  param_1[0x31] = (long)(param_1 + 0x38);
  param_1[0x38] = (long)(param_1 + 0x3f);
  param_1[0x3f] = (long)(param_1 + 0x46);
  param_1[0x46] = (long)(param_1 + 0x4d);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = (long)(param_1 + 0x2a);
  param_1[0x29] = (long)(param_1 + 0x2a);
  param_1[0x2a] = (long)(param_1 + 0x31);
  if (param_1 + 0x54 != (long *)0x0) {
    param_1[0x27] = (long)(param_1 + 0x54);
    *(undefined4 *)((long)param_1 + 0x134) = 6;
  }
  param_1[0x1f] = (long)&PTR_LAB_04aa5f38;
  iVar9 = 6;
  puVar1 = PTR_DAT_04bb3050 + 0x10;
  do {
    if ((int)param_1[0x26] < *(int *)((long)param_1 + 0x134)) {
      plVar8 = (long *)param_1[0x28];
      if (plVar8 != (long *)0x0) {
        param_1[0x28] = *plVar8;
      }
      *plVar8 = (long)puVar1;
      (**(code **)(local_88 + 0x18))(&local_88);
      plVar8[3] = 0;
      plVar8[1] = (long)local_80;
      plVar8[2] = 0;
      plVar8[6] = 0;
      *(undefined8 *)((long)plVar8 + 0x24) = 0;
      if ((local_58 >> 7 & 1) == 0) {
        plVar8[6] = 0;
      }
      *plVar8 = (long)&DAT_04aa60b8;
      *(uint *)(plVar8 + 4) = local_58 & 0xfeffffff;
      if ((int)param_1[0x26] < *(int *)((long)param_1 + 0x134)) {
        *(long **)(param_1[0x27] + (long)(int)param_1[0x26] * 8) = plVar8;
        *(int *)(param_1 + 0x26) = (int)param_1[0x26] + 1;
      }
    }
    else {
      plVar8 = (long *)0x0;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,plVar5);
    iVar9 = iVar9 + -1;
    *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  } while (iVar9 != 0);
  param_1[0x5c] = 0;
  param_1[0x5b] = (long)"mSlopeSize";
  param_1[0x5d] = 0;
  puVar1 = PTR_DAT_04bbd520;
  *(undefined4 *)(param_1 + 0x5e) = 8;
  param_1[0x60] = 0;
  param_1[0x5a] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  puVar4 = (undefined8 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x5e) >> 7 & 1) == 0) {
    param_1[0x60] = 0;
  }
  *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

