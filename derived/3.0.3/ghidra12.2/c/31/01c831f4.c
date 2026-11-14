
void FUN_01c831f4(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar4 = FUN_006bd550("AppStreamingBroadcast",0);
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  plVar9 = (long *)(param_1 + 0xe0);
  *plVar9 = (long)puVar1;
  *(undefined4 *)(param_1 + 0xd8) = uVar4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(long *)(param_1 + 0xe8) = 0;
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar5 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar9);
    *(long *)(param_1 + 0xe8) = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar8 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar9);
      *plVar7 = (long)plVar8;
      *plVar8 = lVar6;
      plVar8[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar8;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  lVar5 = *(long *)puVar3;
  *(long **)(param_1 + 0x110) = plVar9;
  *(undefined8 *)(param_1 + 0x118) = 0;
  puVar2 = param_1 + 0x140;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined ***)(param_1 + 0xe0) = &PTR_LAB_04a43dc8;
  *(undefined ***)(param_1 + 0x120) = &PTR_LAB_04a440d0;
  *(undefined1 **)(param_1 + 0x128) = param_1;
  *(undefined1 **)(param_1 + 0x130) = &LAB_01c833f0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined **)(param_1 + 0x140) = puVar1;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_038cb610(lVar5,puVar2);
    *(long *)(param_1 + 0x148) = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar8 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar8;
      plVar9 = (long *)(puVar2 + *(int *)(lVar5 + 0x84));
      *plVar8 = (long)plVar9;
      *plVar9 = lVar6;
      plVar9[1] = (long)plVar8;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar9;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  *(undefined ***)(param_1 + 0x140) = &PTR_LAB_04a43dc8;
  *(undefined1 **)(param_1 + 400) = &LAB_01c83c40;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 100;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined1 **)(param_1 + 0x170) = puVar2;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined ***)(param_1 + 0x180) = &PTR_LAB_04a440d0;
  *(undefined1 **)(param_1 + 0x188) = param_1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_01c845c4(param_1);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}

