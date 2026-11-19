
void FUN_03c53594(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 local_98;
  undefined *puStack_90;
  undefined *local_88;
  char *pcStack_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  FUN_038e18e4();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_038e3114(param_1 + 0x48,0,0x7fff);
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_038e3114(param_1 + 0x98,0,0x7fff);
  puVar7 = PTR_DAT_04bb4eb8;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  puVar5 = PTR_DAT_04bb2698;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  puVar6 = PTR_DAT_04bb3350;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  puVar4 = PTR_DAT_04bb2120;
  puVar3 = PTR_DAT_04bb2020;
  if (*(long *)puVar7 == 0) {
    lVar15 = *(long *)puVar5;
    if (lVar15 == 0) {
      puVar12 = malloc(0x48);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      plVar11 = (long *)(lVar15 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar12 = (undefined4 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x48,8);
      }
    }
    lVar15 = *(long *)puVar5;
    plVar11 = (long *)(puVar12 + 10);
    *plVar11 = (long)(PTR_DAT_04bd0d40 + 0x10);
    *(undefined8 *)(puVar12 + 0xe) = 0;
    *(undefined8 *)(puVar12 + 0x10) = 0;
    *(long *)(puVar12 + 0xc) = 0;
    if (lVar15 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      plVar1 = (long *)(lVar15 + 8);
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 0xa8);
      }
      lVar15 = *plVar1;
      *(long *)(puVar12 + 0xc) = lVar15;
      if (lVar15 != 0) {
        if ((*(uint *)(lVar15 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar15 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar15 + 0xb0));
        }
        plVar14 = (long *)(lVar15 + 0x70);
        lVar13 = *plVar14;
        plVar1 = (long *)((long)*(int *)(lVar15 + 0x84) + (long)plVar11);
        *plVar14 = (long)plVar1;
        *plVar1 = lVar13;
        plVar1[1] = (long)plVar14;
        if (lVar13 != 0) {
          *(long **)(lVar13 + 8) = plVar1;
        }
        *(int *)(lVar15 + 0x80) = *(int *)(lVar15 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    puVar8 = PTR_DAT_04bd0da8;
    *(undefined **)(puVar12 + 2) = puVar3 + 0x10;
    *(undefined **)(puVar12 + 4) = puVar4;
    puVar9 = PTR_DAT_04bd0db0;
    *(undefined8 *)(puVar12 + 6) = 0;
    *(undefined1 *)(puVar12 + 8) = 0;
    *(long **)puVar9 = plVar11;
    *puVar12 = 0;
    *(undefined **)(puVar12 + 10) = puVar8 + 0x10;
    *(undefined4 **)puVar7 = puVar12;
  }
  puStack_90 = puVar3 + 0x10;
  lVar10 = *(long *)puVar5;
  local_68 = 0;
  local_88 = puVar4;
  pcStack_80 = "System/RegionLangMask.txt";
  local_78 = "System/DevRegionLang.txt";
  local_98 = *(undefined8 *)PTR_PTR_04bd0db8;
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
  puVar2 = (undefined8 *)(lVar10 + 8);
  if (lVar15 != 0) {
    puVar2 = (undefined8 *)(lVar15 + 0xa8);
  }
  local_70 = *puVar2;
  FUN_038cdff0(*(undefined8 *)puVar7,&local_98);
  return;
}

