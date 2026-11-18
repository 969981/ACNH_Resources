
void FUN_0363a574(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 local_68 [2];
  undefined2 local_66;
  undefined4 local_64;
  long *local_60;
  undefined4 local_58;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar7 = malloc(0x40);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      plVar7 = (long *)0x0;
      if (plVar6 == (long *)0x0) goto LAB_0363a5fc;
    }
    plVar7 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x40,8);
  }
LAB_0363a5fc:
  puVar3 = PTR_DAT_04bca440;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  *plVar7 = (long)(puVar3 + 0x10);
  plVar6 = *(long **)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa0) = plVar7;
  puVar3 = PTR_DAT_04bdf328;
  if (plVar6 != (long *)0x0) {
    puVar10 = (undefined8 *)plVar6[5];
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = *(long **)PTR_DAT_04bdf328;
      (**(code **)*puVar10)(puVar10);
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar10);
    }
    plVar6[4] = 0;
    plVar6[5] = 0;
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    pvVar8 = malloc(0xc80);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0xc80,8);
  }
  FUN_03602b84();
  plVar7 = *(long **)(param_1 + 0xa8);
  *(void **)(param_1 + 0xa8) = pvVar8;
  puVar4 = PTR_DAT_04bdf380;
  if (plVar7 == (long *)0x0) {
LAB_0363a754:
    lVar9 = *(long *)puVar2;
    if (lVar9 != 0) goto LAB_0363a75c;
LAB_0363a7b8:
    plVar7 = malloc(0x640);
  }
  else {
    FUN_036031f0(plVar7);
    nn::os::FinalizeMutex((MutexType *)(plVar7 + 0x18b));
    nn::os::FinalizeLightEvent((LightEventType *)(plVar7 + 0x187));
    plVar7[0x13a] = (long)(puVar4 + 0x10);
    FUN_04002c24(plVar7 + 0x13a);
    *plVar7 = (long)(PTR_DAT_04bdf2f0 + 0x10);
    if ((*(byte *)(plVar7 + 7) & 1) != 0) {
      (**(code **)(*(long *)plVar7[8] + 0x18))((long *)plVar7[8],plVar7[9]);
    }
    if (*(long *)puVar2 != 0) {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,plVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar7);
      }
      goto LAB_0363a754;
    }
    free(plVar7);
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) goto LAB_0363a7b8;
LAB_0363a75c:
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0363a7c4;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x640,8);
  }
LAB_0363a7c4:
  puVar1 = PTR_DAT_04bdf2f8;
  *(undefined8 *)((long)plVar7 + 0xc) = 0;
  *(undefined8 *)((long)plVar7 + 0x14) = 0;
  *(undefined8 *)((long)plVar7 + 0x1c) = 0;
  *(undefined8 *)((long)plVar7 + 0x24) = 0;
  *(undefined8 *)((long)plVar7 + 0x2c) = 0;
  *(undefined4 *)((long)plVar7 + 0x34) = 0;
  plVar7[7] = 0x1e;
  *(undefined1 *)(plVar7 + 0x10) = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  lVar9 = *(long *)puVar3;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0x1e;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x18] = 0;
  plVar7[8] = lVar9;
  plVar7[9] = 0;
  plVar7[0xd] = lVar9;
  plVar7[0xe] = 0;
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0x19),true,0);
  lVar9 = *(long *)puVar3;
  *(undefined4 *)(plVar7 + 0x1d) = 0;
  *(undefined2 *)((long)plVar7 + 0xec) = 0;
  *(undefined4 *)(plVar7 + 0x43) = 1;
  plVar7[0x47] = 0;
  plVar7[0x48] = 0;
  plVar7[0x45] = 8;
  plVar7[0x46] = 0;
  plVar7[0x4c] = 0;
  plVar7[0x4d] = 0;
  plVar7[0x44] = lVar9;
  plVar7[0x49] = lVar9;
  plVar7[0x4a] = 8;
  plVar7[0x4b] = 0;
  puVar1 = PTR_DAT_04bcaa18 + 0x10;
  DAT_05aa9b60 = plVar7;
  plVar7[0x4e] = 0;
  plVar7[0x4f] = 0;
  *plVar7 = (long)puVar1;
  FUN_03fff7e0(plVar7 + 0x50);
  plVar7[0x50] = (long)(PTR_DAT_04bcaa10 + 0x10);
  plVar6 = *(long **)(param_1 + 0xb0);
  *(long **)(param_1 + 0xb0) = plVar7;
  if (plVar6 != (long *)0x0) {
    *(int *)(plVar6 + 0x6a) = (int)plVar6[0x6a] + 1;
    if ((int)plVar6[199] != 0) {
      FUN_03fffbc0(plVar6 + 0x50);
    }
    plVar6[0x69] = 0;
    plVar6[0x59] = 0;
    plVar6[0x5a] = 0;
    plVar6[0x61] = 0;
    plVar6[0x62] = 0;
    plVar6[0x51] = 0;
    plVar6[0x52] = 0;
    if (plVar6[100] != 0) {
      (**(code **)(**(long **)puVar3 + 0x18))();
      plVar6[100] = 0;
    }
    if (plVar6[3] != 0) {
      (**(code **)(**(long **)puVar3 + 0x18))();
      plVar6[4] = 0;
      plVar6[5] = 0;
      plVar6[3] = 0;
    }
    *(undefined1 *)(plVar6 + 0x10) = 0;
    (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    plVar7 = malloc(0x5c0);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0363a99c;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x5c0,8);
  }
LAB_0363a99c:
  *(undefined1 *)(plVar7 + 0x33) = 0;
  puVar1 = PTR_DAT_04bdf2e0;
  plVar7[0x83] = 0;
  plVar7[0x39] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  plVar7[0x3c] = 0;
  *(undefined4 *)(plVar7 + 0x84) = 0;
  plVar7[0x85] = 0;
  plVar7[0x86] = 0;
  plVar7[0x87] = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  plVar7[0x88] = 0;
  plVar7[0x3d] = (long)(puVar4 + 0x10);
  lVar9 = *(long *)puVar3;
  *(undefined4 *)(plVar7 + 0x89) = 0;
  *(undefined4 *)(plVar7 + 0x9b) = 0;
  plVar7[0x9c] = 0;
  plVar7[0x9d] = 0;
  plVar7[0x9e] = 0;
  plVar7[0x37] = 2;
  plVar7[0x38] = 0;
  plVar7[0x35] = 1;
  plVar7[0x36] = lVar9;
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xa3),true,0);
  lVar9 = *(long *)puVar3;
  plVar7[0xac] = 0;
  plVar7[0xab] = 0;
  plVar7[0xa9] = 2;
  plVar7[0xaa] = 0;
  plVar7[0xad] = 0;
  plVar7[0xae] = 0;
  plVar7[0xa7] = 1;
  plVar7[0xb2] = 0;
  plVar7[0xb3] = 0;
  plVar7[0xb0] = 2;
  plVar7[0xb1] = 0;
  plVar7[0xa8] = lVar9;
  plVar7[0xaf] = lVar9;
  plVar6 = *(long **)(param_1 + 0xb8);
  *(long **)(param_1 + 0xb8) = plVar7;
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)(plVar6 + 0xb6) = 1;
    *(undefined4 *)(plVar6 + 0x8a) = 1;
    FUN_04002c24(plVar6 + 0x3d);
    nn::audio::StopAudioOut((AudioOut *)(plVar6 + 1));
    nn::audio::CloseAudioOut((AudioOut *)(plVar6 + 1));
    if (plVar6[0x95] != 0) {
      (**(code **)(**(long **)puVar3 + 0x18))();
    }
    if (plVar6[0x96] != 0) {
      (**(code **)(**(long **)puVar3 + 0x18))();
    }
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar10 = malloc(0x10);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
  }
  *puVar10 = &PTR_LAB_04b41ef8;
  puVar10[1] = param_1;
  pvVar8 = *(void **)(param_1 + 0x1e0);
  *(undefined8 **)(param_1 + 0x1e0) = puVar10;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
  }
  local_68[0] = 1;
  local_64 = 0x4000;
  local_66 = (undefined2)*(undefined4 *)(param_1 + 0x98);
  local_58 = 0xf0;
  local_60 = param_2;
  FUN_0367f904(param_1 + 0xc0,local_68);
  *(undefined4 *)(param_1 + 0x98) = 100;
  lVar9 = *(long *)(param_1 + 0xa0);
  *(undefined2 *)(lVar9 + 8) = 0;
  *(undefined2 *)(lVar9 + 0x38) = 0x100;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  return;
}

