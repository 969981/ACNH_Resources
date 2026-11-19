
void FUN_038bd890(long param_1,undefined8 *param_2)

{
  void *__dest;
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined *local_70;
  char *pcStack_68;
  
  FUN_038e18e4();
  uVar11 = param_2[4];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(long *)(param_1 + 0x58) = param_1 + 0x58;
  *(long *)(param_1 + 0x60) = param_1 + 0x58;
  __dest = (void *)(param_1 + 0x128);
  lVar1 = param_1 + 0x208;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long *)(param_1 + 0x70) = param_1 + 0x70;
  *(long *)(param_1 + 0x78) = param_1 + 0x70;
  *(long *)(param_1 + 0x88) = param_1 + 0x88;
  *(long *)(param_1 + 0x90) = param_1 + 0x88;
  *(long *)(param_1 + 0xa0) = param_1 + 0xa0;
  *(long *)(param_1 + 0xa8) = param_1 + 0xa0;
  *(long *)(param_1 + 0xb8) = param_1 + 0xb8;
  *(long *)(param_1 + 0xc0) = param_1 + 0xb8;
  *(long *)(param_1 + 0xd0) = param_1 + 0xd0;
  *(long *)(param_1 + 0xd8) = param_1 + 0xd0;
  uVar7 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x147) = 0;
  *(undefined4 *)(param_1 + 0x118) = uVar7;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x15f) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x177) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 399) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0x1ffffffff;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = *param_2;
  uVar11 = param_2[1];
  uVar5 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(long *)(param_1 + 0x248) = lVar1;
  *(undefined8 *)(param_1 + 0x1f8) = uVar4;
  *(undefined8 *)(param_1 + 0x200) = uVar6;
  *(undefined8 *)(param_1 + 0x1e8) = uVar11;
  *(undefined8 *)(param_1 + 0x1f0) = uVar5;
  puVar9 = PTR_DAT_04bb2020;
  *(undefined **)(param_1 + 0x250) = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  *(undefined8 **)(param_1 + 600) = &DAT_0407ebb1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined **)(param_1 + 0x208) = puVar2;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  if (lVar10 != 0) {
    lVar10 = FUN_038cb610(lVar10,lVar1);
    *(long *)(param_1 + 0x210) = lVar10;
    if (lVar10 != 0) {
      if ((*(uint *)(lVar10 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar10 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar10 + 0xb0));
      }
      plVar13 = (long *)(lVar10 + 0x70);
      lVar12 = *plVar13;
      plVar3 = (long *)(*(int *)(lVar10 + 0x84) + lVar1);
      *plVar13 = (long)plVar3;
      *plVar3 = lVar12;
      plVar3[1] = (long)plVar13;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar3;
      }
      *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  puVar2 = PTR_DAT_04bb24a8;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined **)(param_1 + 0x208) = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bb24b0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined **)(param_1 + 0x260) = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bd0ca0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  uVar8 = *(uint *)puVar2;
  if (0 < (int)uVar8) {
    uVar15 = 0;
    do {
      pcStack_68 = "sead::TaskMgr";
      if (uVar15 < *(uint *)puVar2) {
        uVar11 = *(undefined8 *)(*(long *)(puVar2 + 8) + uVar15 * 8);
      }
      else {
        uVar11 = 0;
      }
      local_70 = puVar9 + 0x10;
      uVar11 = FUN_038c6d48(0,&local_70,uVar11,8,1,0);
      *(undefined8 *)(param_1 + 0xe8 + uVar15 * 8) = uVar11;
      uVar15 = uVar15 + 1;
    } while (uVar8 != uVar15);
  }
  FUN_038bdb80(param_1);
  memcpy(__dest,(void *)param_2[2],0xb8);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 1;
  *(long *)(param_1 + 0x1c0) = param_1 + 0x120;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x1b0) == 0) {
    FUN_038beb3c(param_1,__dest,0);
  }
  else {
    FUN_038c0344(*(long *)(param_1 + 0x1b0),__dest);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

