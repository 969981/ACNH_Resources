
void FUN_0092a910(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_FUN_049285f8;
  lVar4 = DAT_04cf1b28;
  if (DAT_04cf1b20 == param_1) {
    DAT_04cf1b20 = (long *)0x0;
    *(undefined **)(DAT_04cf1b28 + 8) = PTR_DAT_04bb5a40 + 0x10;
    *(undefined **)(lVar4 + 0x3a0) = PTR_DAT_04bb5a48 + 0x10;
    if (0 < *(int *)(lVar4 + 0x3d8)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x3e0) + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = *(undefined8 *)(lVar4 + 1000);
        *(undefined8 **)(lVar4 + 1000) = puVar3;
      } while (lVar5 < *(int *)(lVar4 + 0x3d8));
    }
    *(undefined4 *)(lVar4 + 0x3d8) = 0;
    puVar1 = PTR_DAT_04bb5a60;
    *(undefined8 *)(lVar4 + 0x398) = 0;
    puVar1 = puVar1 + 0x10;
    *(undefined8 *)(lVar4 + 0x360) = 0;
    *(undefined8 *)(lVar4 + 0x328) = 0;
    *(undefined8 *)(lVar4 + 0x2f0) = 0;
    *(undefined8 *)(lVar4 + 0x2b8) = 0;
    *(undefined8 *)(lVar4 + 0x280) = 0;
    *(undefined8 *)(lVar4 + 0x248) = 0;
    *(undefined8 *)(lVar4 + 0x210) = 0;
    DAT_04cf1b28 = 0;
    *(undefined **)(lVar4 + 0x368) = puVar1;
    *(undefined **)(lVar4 + 0x330) = puVar1;
    *(undefined **)(lVar4 + 0x2f8) = puVar1;
    *(undefined **)(lVar4 + 0x2c0) = puVar1;
    *(undefined **)(lVar4 + 0x288) = puVar1;
    *(undefined **)(lVar4 + 0x250) = puVar1;
    *(undefined **)(lVar4 + 0x218) = puVar1;
    *(undefined **)(lVar4 + 200) = puVar1;
    *(undefined8 *)(lVar4 + 0x1d8) = 0;
    *(undefined **)(lVar4 + 0x1e0) = puVar1;
    *(undefined8 *)(lVar4 + 0x1a0) = 0;
    *(undefined **)(lVar4 + 0x1a8) = puVar1;
    *(undefined8 *)(lVar4 + 0x168) = 0;
    *(undefined **)(lVar4 + 0x170) = puVar1;
    *(undefined8 *)(lVar4 + 0x130) = 0;
    *(undefined **)(lVar4 + 0x138) = puVar1;
    *(undefined8 *)(lVar4 + 0xf8) = 0;
    *(undefined **)(lVar4 + 0x100) = puVar1;
  }
  lVar4 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      return;
    }
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

