
void FUN_006ca820(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  FUN_03c11314(param_1,param_2,"WarningMgr");
  puVar1 = PTR_DAT_04bb2768 + 0xe8;
  *param_1 = (long)(PTR_DAT_04bb2768 + 0x10);
  param_1[0x45] = (long)puVar1;
  FUN_038e18e4(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  FUN_038e3114(param_1 + 0x4f,0,0x7fff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_038e3114(param_1 + 0x59,0,0x7fff);
  puVar1 = PTR_DAT_04bb2028;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  lVar5 = -0xc60;
  do {
    lVar8 = lVar5 + 0x60;
    *(undefined4 *)((long)param_1 + lVar5 + 0xfc0) = 0x20;
    *(undefined1 *)((long)param_1 + lVar5 + 0xfe3) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0xfb0) = puVar1 + 0x10;
    *(long *)((long)param_1 + lVar5 + 0xfb8) = (long)param_1 + lVar5 + 0xfc4;
    *(undefined1 *)((long)param_1 + lVar5 + 0xfa8) = 1;
    *(undefined1 *)((long)param_1 + lVar5 + 0xfc4) = 0;
    *(undefined1 **)((long)param_1 + lVar5 + 0xfe8) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)param_1 + lVar5 + 0xff0) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)param_1 + lVar5 + 0xff8) = &DAT_3f8000003f800000;
    *(undefined4 *)((long)param_1 + lVar5 + 0x1000) = 0xb4;
    puVar4 = PTR_DAT_04bd0d40;
    lVar5 = lVar8;
  } while (lVar8 != 0);
  plVar2 = param_1 + 0x1f5;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f5] = (long)(puVar4 + 0x10);
  if (DAT_05ae7600 != 0) {
    lVar5 = FUN_038cb610(DAT_05ae7600,plVar2);
    param_1[0x1f6] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar3 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar2);
      *plVar7 = (long)plVar3;
      *plVar3 = lVar6;
      plVar3[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar3;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  param_1[0x1f9] = 0;
  param_1[0x1f5] = (long)&PTR_FUN_048f9de8;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = (long)plVar2;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = (long)&PTR_LAB_048f9da8;
  FUN_038e18e4(param_1 + 0x201);
  return;
}

