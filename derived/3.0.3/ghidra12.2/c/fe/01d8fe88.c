
/* WARNING: Removing unreachable block (ram,0x01d90188) */

void FUN_01d8fe88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  puVar2 = PTR_DAT_04bb2020;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  local_88 = puVar2 + 0x10;
  pcStack_80 = "NetDreamLandMgr";
  plVar4 = (long *)FUN_038c6d48(&LAB_03200000,&local_88,param_2,8,1,0);
  *(long **)(param_1 + 0x50) = plVar4;
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar4 = malloc(0x20);
  }
  else {
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_01d8ff58;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
LAB_01d8ff58:
  puVar1 = PTR_DAT_04bb29b8;
  *(undefined4 *)(plVar4 + 1) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0xa0) = plVar4;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    pvVar7 = malloc(0xa71af0);
joined_r0x01d9003c:
    if (pvVar7 != (void *)0x0) {
      plVar4[2] = (long)pvVar7;
      *(undefined4 *)(plVar4 + 1) = 0xa71af0;
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x50);
    if (plVar6 != (long *)0x0) {
LAB_01d8ffb0:
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa71af0,0x10);
      goto joined_r0x01d9003c;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_01d8ffb0;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar4 = malloc(0x20);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_01d90050;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
LAB_01d90050:
  *(undefined4 *)(plVar4 + 1) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  lVar9 = *(long *)puVar3;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(long **)(param_1 + 0x98) = plVar4;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x100000);
joined_r0x01d90120:
    if (pvVar7 != (void *)0x0) {
      plVar4[2] = (long)pvVar7;
      *(undefined4 *)(plVar4 + 1) = 0x100000;
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x50);
    if (plVar6 != (long *)0x0) {
LAB_01d900a0:
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x100000,8);
      goto joined_r0x01d90120;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_01d900a0;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    puVar8 = malloc(0x4220);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar8 = (undefined8 *)0x0;
        goto LAB_01d90134;
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x4220,8);
  }
LAB_01d90134:
  *puVar8 = 0;
  *(undefined1 *)(puVar8 + 1) = 0;
  puVar1 = PTR_DAT_04bd4738 + 0x10;
  *(undefined2 *)(puVar8 + 7) = 0;
  *(undefined4 *)(puVar8 + 8) = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0;
  puVar8[2] = 0;
  puVar8[3] = puVar1;
  puVar8[6] = 0xffffffff;
  puVar8[4] = 0xffffffff;
  puVar8[5] = 0xffffffff;
  puVar1 = PTR_DAT_04bb2a60 + 0x10;
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  *(undefined1 *)(puVar8 + 0x10) = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = puVar1;
  memset(puVar8 + 0x11,0,0x4198);
  local_88 = *(undefined **)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x88) = puVar8;
  FUN_006d8954(puVar8,&local_88);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    pvVar7 = malloc(0xeb5f8);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar7 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xeb5f8,8);
  }
  FUN_006d73f0();
  pcStack_80 = *(char **)(param_1 + 0x98);
  local_78 = *(undefined **)(param_1 + 0xa0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0x96);
  local_88 = *(undefined **)(param_1 + 0x50);
  *(void **)(param_1 + 0x90) = pvVar7;
  FUN_006d7540(pvVar7,&local_88);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x5b8);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_01d902b0;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x5b8,8);
  }
LAB_01d902b0:
  *(undefined8 *)((long)pvVar7 + 0x1f) = 0;
  *(undefined8 *)((long)pvVar7 + 0x2a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x101) = 0;
  *(undefined8 *)((long)pvVar7 + 0x121) = 0;
  *(undefined8 *)((long)pvVar7 + 0x10a) = 0;
  *(undefined8 *)((long)pvVar7 + 8) = 0;
  *(undefined8 *)((long)pvVar7 + 0x32) = 0;
  *(undefined8 *)((long)pvVar7 + 0x3a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x41) = 0;
  *(undefined8 *)((long)pvVar7 + 0x4a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x52) = 0;
  *(undefined8 *)((long)pvVar7 + 0x5a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x61) = 0;
  *(undefined8 *)((long)pvVar7 + 0x6a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x72) = 0;
  *(undefined8 *)((long)pvVar7 + 0x7a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x81) = 0;
  *(undefined8 *)((long)pvVar7 + 0xa1) = 0;
  *(undefined8 *)((long)pvVar7 + 0x9a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x92) = 0;
  *(undefined8 *)((long)pvVar7 + 0x8a) = 0;
  *(undefined8 *)((long)pvVar7 + 0xc1) = 0;
  *(undefined8 *)((long)pvVar7 + 0xba) = 0;
  *(undefined8 *)((long)pvVar7 + 0xb2) = 0;
  *(undefined8 *)((long)pvVar7 + 0xaa) = 0;
  *(undefined8 *)((long)pvVar7 + 0xe1) = 0;
  *(undefined8 *)((long)pvVar7 + 0xda) = 0;
  *(undefined8 *)((long)pvVar7 + 0xd2) = 0;
  *(undefined8 *)((long)pvVar7 + 0xca) = 0;
  *(undefined8 *)((long)pvVar7 + 0xfa) = 0;
  *(undefined8 *)((long)pvVar7 + 0xf2) = 0;
  *(undefined8 *)((long)pvVar7 + 0xea) = 0;
  *(undefined8 *)((long)pvVar7 + 0x112) = 0;
  *(undefined8 *)((long)pvVar7 + 0x11a) = 0;
  *(undefined4 *)((long)pvVar7 + 0x18a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x10) = 0;
  *(undefined8 *)((long)pvVar7 + 0x18) = 0;
  *(undefined8 *)((long)pvVar7 + 0x17a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x182) = 0;
  *(undefined8 *)((long)pvVar7 + 0x16a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x172) = 0;
  *(undefined8 *)((long)pvVar7 + 0x15a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x162) = 0;
  *(undefined8 *)((long)pvVar7 + 0x14a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x152) = 0;
  *(undefined8 *)((long)pvVar7 + 0x13a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x142) = 0;
  *(undefined8 *)((long)pvVar7 + 0x12a) = 0;
  *(undefined8 *)((long)pvVar7 + 0x132) = 0;
  memset((void *)((long)pvVar7 + 0x1aa),0,0x408);
  *(void **)(param_1 + 0xa8) = pvVar7;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    puVar8 = malloc(0x18);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0;
    *(undefined8 **)(param_1 + 0x68) = puVar8;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      puVar8 = (undefined8 *)0x0;
      if (plVar4 != (long *)0x0) goto LAB_01d903ac;
    }
    else {
LAB_01d903ac:
      puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
    }
    lVar9 = *(long *)puVar3;
    *(undefined4 *)(puVar8 + 2) = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined8 **)(param_1 + 0x68) = puVar8;
    if (lVar9 != 0) {
      plVar4 = *(long **)(param_1 + 0x50);
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar9 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x28,8);
      goto LAB_01d90438;
    }
  }
  plVar4 = malloc(0x28);
LAB_01d90438:
  *(undefined4 *)(plVar4 + 2) = 0;
  puVar1 = PTR_DAT_04bb5140;
  local_78 = PTR_DAT_04bb2120;
  plVar4[3] = 0;
  plVar4[4] = 0;
  pcStack_80 = puVar2 + 0x10;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0;
  *(long **)(param_1 + 0x58) = plVar4;
  local_88 = *(undefined **)(param_1 + 0x50);
  local_58 = 0;
  local_68 = "WaveSimulation";
  uStack_60 = 0;
  local_70 = pcStack_80;
  FUN_0082c840(plVar4,&local_88);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar4 = malloc(0x20);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
  *plVar4 = (long)(PTR_DAT_04bc1008 + 0x10);
  *(long **)(param_1 + 0x70) = plVar4;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    puVar8 = malloc(0x18);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
  }
  puVar8[2] = 0;
  *puVar8 = 0x400000024;
  puVar8[1] = 0;
  *(undefined8 **)(param_1 + 0x80) = puVar8;
  *(undefined1 *)(param_1 + 0x261) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return;
}

