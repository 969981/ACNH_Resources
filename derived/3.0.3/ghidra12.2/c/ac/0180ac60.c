
void FUN_0180ac60(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_04bbd410;
  puVar3 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bbd410 != 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    plVar7 = malloc(0x48);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x48,8);
    }
  }
  lVar10 = *(long *)puVar1;
  plVar11 = plVar7 + 5;
  *plVar11 = (long)(PTR_DAT_04bd0d40 + 0x10);
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[6] = 0;
  if (lVar10 != 0) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar2 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xa8);
    }
    lVar10 = *plVar2;
    plVar7[6] = lVar10;
    if (lVar10 != 0) {
      if ((*(uint *)(lVar10 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar10 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar10 + 0xb0));
      }
      plVar9 = (long *)(lVar10 + 0x70);
      lVar8 = *plVar9;
      plVar2 = (long *)((long)*(int *)(lVar10 + 0x84) + (long)plVar11);
      *plVar9 = (long)plVar2;
      *plVar2 = lVar8;
      plVar2[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar2;
      }
      *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  puVar3 = PTR_DAT_04bbe540;
  puVar1 = PTR_DAT_04bbe530 + 0x10;
  *(long **)PTR_DAT_04bbe538 = plVar11;
  puVar5 = PTR_DAT_04bbe548;
  plVar7[5] = (long)puVar1;
  *plVar7 = (long)(puVar3 + 0x10);
  plVar7[1] = (long)(puVar5 + 0x10);
  *(long **)puVar4 = plVar7;
  return;
}

