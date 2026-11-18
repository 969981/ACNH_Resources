
long * FUN_03260588(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar9 = *(long *)(param_1 + 0xb8);
  if (lVar9 == 0) {
    lVar10 = 1;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) goto LAB_03260640;
LAB_03260604:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      goto LAB_0326064c;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar9;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
LAB_03260640:
      plVar6 = malloc(0x220);
      goto LAB_0326064c;
    }
    plVar6 = *(long **)(param_1 + 0xb8);
    if (plVar6 == (long *)0x0) goto LAB_03260604;
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x220,8);
LAB_0326064c:
  FUN_03868244(plVar6,param_2,param_4);
  *(undefined2 *)(plVar6 + 0x39) = 0;
  puVar3 = PTR_DAT_04bc5668;
  *(undefined4 *)(plVar6 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
  plVar6[0x3b] = 0;
  *(undefined4 *)(plVar6 + 0x3c) = 0;
  plVar6[0x3d] = 0;
  plVar6[0x3e] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  *(undefined2 *)(plVar6 + 0x40) = 0;
  *(undefined1 *)((long)plVar6 + 0x202) = 0;
  plVar6[0x41] = 0;
  *(undefined4 *)((long)plVar6 + 0x1fc) = 0xffffffff;
  plVar6[0x35] = (long)(puVar4 + 0x10);
  plVar6[0x36] = 0xffffffff;
  *(undefined1 *)(plVar6 + 0x3f) = 0xff;
  plVar6[0x37] = 0xffffffff;
  plVar6[0x38] = 0xffffffff;
  puVar3 = PTR_DAT_04bc8428;
  if (param_4 == 0) {
    plVar6[0x3e] = -1;
    plVar6[0x42] = 0;
    *(undefined4 *)(plVar6 + 0x43) = 0xffffffff;
    *(undefined1 *)((long)plVar6 + 0x21c) = 0;
    *plVar6 = (long)(puVar3 + 0x10);
  }
  else {
    bVar7 = *(byte *)(param_4 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(plVar6 + 0x3f) = bVar7;
    *(undefined4 *)((long)plVar6 + 0x1fc) = *(undefined4 *)(param_4 + 0x10);
    plVar6[0x3e] = -1;
    puVar3 = PTR_DAT_04bc8428;
    plVar6[0x42] = 0;
    *(undefined4 *)(plVar6 + 0x43) = 0xffffffff;
    *(undefined1 *)((long)plVar6 + 0x21c) = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[0x42] = *(long *)(param_4 + 0x18);
  }
  nn::os::LockMutex((MutexType *)(param_3 + 0x188));
  plVar8 = (long *)(param_3 + 0x50);
  lVar9 = *plVar8;
  plVar1 = (long *)((long)*(int *)(param_3 + 100) + (long)plVar6);
  *plVar8 = (long)plVar1;
  *plVar1 = lVar9;
  plVar1[1] = (long)plVar8;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar1;
  }
  *(int *)(param_3 + 0x60) = *(int *)(param_3 + 0x60) + 1;
  plVar6[9] = param_3;
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x188));
  plVar6[0x13] = param_1;
  *(undefined4 *)(plVar6 + 0x15) = 1;
  FUN_0386890c(plVar6,param_4);
  *(undefined4 *)(plVar6 + 0x15) = 2;
  (**(code **)(*plVar6 + 0x48))(plVar6);
  if (lVar10 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar10;
  }
  return plVar6;
}

