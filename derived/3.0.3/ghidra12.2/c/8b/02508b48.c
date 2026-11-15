
void FUN_02508b48(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  *param_1 = &PTR_FUN_04a81fc8;
  lVar12 = DAT_054ee400;
  if (DAT_054ee3f0 == param_1) {
    DAT_054ee3f0 = (undefined8 *)0x0;
    plVar6 = (long *)(DAT_054ee400 + 0xf4d8);
    plVar7 = (long *)(DAT_054ee400 + 0xccf8);
    plVar8 = (long *)(DAT_054ee400 + 0xe0e8);
    plVar9 = (long *)(DAT_054ee400 + 0xb908);
    plVar10 = (long *)(DAT_054ee400 + 0xa518);
    plVar1 = (long *)(DAT_054ee400 + 0x130a8);
    plVar11 = (long *)(DAT_054ee400 + 0x9120);
    plVar2 = (long *)(DAT_054ee400 + 0x11cb8);
    plVar3 = (long *)(DAT_054ee400 + 0x108c8);
    puVar4 = PTR_DAT_04bc2f78 + 0x10;
    *(undefined **)(DAT_054ee400 + 0x131a8) = puVar4;
    puVar5 = PTR_DAT_04bbc2c8 + 0x10;
    *plVar1 = (long)puVar5;
    FUN_03f457c4(lVar12 + 0x13180);
    *(undefined **)(lVar12 + 0x11db8) = puVar4;
    *plVar2 = (long)puVar5;
    FUN_03f457c4(lVar12 + 0x11d90);
    *(undefined **)(lVar12 + 0x109c8) = puVar4;
    *plVar3 = (long)puVar5;
    FUN_03f457c4(lVar12 + 68000);
    *(undefined **)(lVar12 + 0xf5d8) = puVar4;
    *plVar6 = (long)puVar5;
    FUN_03f457c4(lVar12 + 0xf5b0);
    *(undefined **)(lVar12 + 0xe1e8) = puVar4;
    *plVar8 = (long)puVar5;
    FUN_03f457c4(lVar12 + 0xe1c0);
    *(undefined **)(lVar12 + 0xcdf8) = puVar4;
    *plVar7 = (long)puVar5;
    FUN_03f457c4(lVar12 + 0xcdd0);
    *(undefined **)(lVar12 + 0xba08) = puVar4;
    *plVar9 = (long)puVar5;
    FUN_03f457c4(lVar12 + 0xb9e0);
    *(undefined **)(lVar12 + 0xa618) = puVar4;
    *plVar10 = (long)puVar5;
    FUN_03f457c4(lVar12 + 0xa5f0);
    *(undefined **)(lVar12 + 0x9220) = puVar4;
    *plVar11 = (long)puVar5;
    FUN_03f457c4(lVar12 + 0x91f8);
    *(undefined **)(lVar12 + 0x7e30) = puVar4;
    *(undefined **)(lVar12 + 0x7d30) = puVar5;
    FUN_03f457c4(lVar12 + 0x7e08);
    *(undefined **)(lVar12 + 0x6a40) = puVar4;
    *(undefined **)(lVar12 + 0x6940) = puVar5;
    FUN_03f457c4(lVar12 + 0x6a18);
    *(undefined **)(lVar12 + 0x5650) = puVar4;
    *(undefined **)(lVar12 + 0x5550) = puVar5;
    FUN_03f457c4(lVar12 + 0x5628);
    *(undefined **)(lVar12 + 0x4260) = puVar4;
    *(undefined **)(lVar12 + 0x4160) = puVar5;
    FUN_03f457c4(lVar12 + 0x4238);
    *(undefined **)(lVar12 + 0x2e70) = puVar4;
    *(undefined **)(lVar12 + 0x2d70) = puVar5;
    FUN_03f457c4(lVar12 + 0x2e48);
    *(undefined **)(lVar12 + 0x1a80) = puVar4;
    *(undefined **)(lVar12 + 0x1980) = puVar5;
    FUN_03f457c4(lVar12 + 0x1a58);
    *(undefined **)(lVar12 + 0x690) = puVar4;
    *(undefined **)(lVar12 + 0x590) = puVar5;
    FUN_03f457c4(lVar12 + 0x668);
    DAT_054ee400 = 0;
  }
  lVar12 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar12 != 0) {
    if (lVar12 == 1) {
      return;
    }
    if ((*(uint *)(lVar12 + 0xd0) & 1) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar12 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar12 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar12 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
    if (lVar13 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

