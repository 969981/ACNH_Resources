
long * FUN_006bf6b4(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  puVar2 = PTR_DAT_04bb21b8;
  if (*(long **)PTR_DAT_04bb21b8 != (long *)0x0) {
    return *(long **)PTR_DAT_04bb21b8;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar6 = malloc(0x38);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x38,8);
    }
  }
  lVar9 = *(long *)puVar3;
  plVar10 = plVar6 + 3;
  *plVar10 = (long)(PTR_DAT_04bd0d40 + 0x10);
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[4] = 0;
  if (lVar9 != 0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar1 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0xa8);
    }
    lVar9 = *plVar1;
    plVar6[4] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar8 = (long *)(lVar9 + 0x70);
      lVar7 = *plVar8;
      plVar1 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar10);
      *plVar8 = (long)plVar1;
      *plVar1 = lVar7;
      plVar1[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar1;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar5 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      }
    }
  }
  puVar3 = PTR_DAT_04bc1498;
  *(long **)PTR_DAT_04bc1490 = plVar10;
  *plVar6 = (long)(puVar3 + 0x10);
  plVar6[1] = 0;
  puVar3 = PTR_DAT_04bc1488;
  *(long **)puVar2 = plVar6;
  plVar6[2] = 0;
  plVar6[3] = (long)(puVar3 + 0x10);
  return plVar6;
}

