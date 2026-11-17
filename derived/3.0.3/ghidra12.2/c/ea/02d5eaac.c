
long * FUN_02d5eaac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar9 = *(long *)(param_1 + 0xb8);
  if (lVar9 == 0) {
    lVar10 = 1;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) goto LAB_02d5eb6c;
LAB_02d5eb2c:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar9 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto LAB_02d5eb7c;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar9;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
LAB_02d5eb6c:
      plVar7 = malloc(0x1c3f8);
      goto LAB_02d5eb7c;
    }
    plVar7 = *(long **)(param_1 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_02d5eb2c;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1c3f8,8);
LAB_02d5eb7c:
  FUN_0357e480(plVar7,param_2,param_4);
  puVar4 = PTR_DAT_04bd4738;
  puVar5 = PTR_DAT_04bc7fa8;
  plVar7[0x3868] = 0;
  plVar7[0x3869] = (long)(puVar4 + 0x10);
  puVar4 = PTR_DAT_04bb37e0;
  *(undefined2 *)(plVar7 + 0x386d) = 0;
  *(undefined4 *)(plVar7 + 0x386e) = 0;
  plVar7[0x386f] = 0;
  *(undefined4 *)(plVar7 + 0x3870) = 0;
  plVar7[0x3871] = 0;
  *(undefined4 *)(plVar7 + 0x3872) = 0;
  plVar7[0x386c] = 0xffffffff;
  *(undefined1 *)((long)plVar7 + 0x1c394) = 0xff;
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[0x386a] = 0xffffffff;
  plVar7[0x386b] = 0xffffffff;
  *(undefined2 *)(plVar7 + 0x3873) = *(undefined2 *)puVar4;
  *(undefined *)((long)plVar7 + 0x1c39a) = puVar4[2];
  *(undefined *)((long)plVar7 + 0x1c39b) = puVar4[3];
  uVar2 = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(plVar7 + 0x3879) = 0;
  plVar7[0x3877] = 0;
  plVar7[0x3878] = 0;
  plVar7[0x3874] = 0;
  plVar7[0x3875] = 0;
  plVar7[0x3876] = 0;
  *(undefined4 *)((long)plVar7 + 0x1c39c) = uVar2;
  *(undefined2 *)(plVar7 + 0x3877) = 0xfffe;
  FUN_0277d4ac(plVar7 + 0x3877);
  *(undefined1 *)(plVar7 + 0x3878) = 0xff;
  *(undefined8 *)((long)plVar7 + 0x1c3c4) = 0;
  *(undefined4 *)((long)plVar7 + 0x1c3cc) = 0;
  FUN_03454a44(plVar7 + 0x3869);
  *(undefined4 *)(plVar7 + 0x387b) = 0xffffffff;
  plVar7[0x387a] = -0x100000000;
  plVar7[0x387e] = 0;
  *(undefined8 *)((long)plVar7 + 0x1c3dc) = 0;
  *(undefined8 *)((long)plVar7 + 0x1c3e3) = 0;
  nn::os::LockMutex((MutexType *)(param_3 + 0x188));
  plVar8 = (long *)(param_3 + 0x50);
  lVar9 = *plVar8;
  plVar1 = (long *)((long)*(int *)(param_3 + 100) + (long)plVar7);
  *plVar8 = (long)plVar1;
  *plVar1 = lVar9;
  plVar1[1] = (long)plVar8;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar1;
  }
  *(int *)(param_3 + 0x60) = *(int *)(param_3 + 0x60) + 1;
  plVar7[9] = param_3;
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x188));
  plVar7[0x13] = param_1;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,param_4);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar10 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar10;
  }
  return plVar7;
}

