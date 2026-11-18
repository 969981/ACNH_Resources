
void FUN_032bc960(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  puVar7 = *(undefined8 **)(param_1 + 0x30);
  FUN_032d1220(*puVar7);
  puVar9 = DAT_0572e5c8;
  plVar8 = (long *)puVar7[1];
  if ((plVar8 != (long *)0x0) && (*plVar8 == 0)) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    plVar2 = (long *)*puVar9;
    if ((long *)*puVar9 == (long *)0x0) {
      *puVar9 = plVar8;
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)plVar6[2];
      } while ((long *)plVar6[2] != (long *)0x0);
      plVar6[2] = (long)plVar8;
      plVar8[1] = (long)plVar6;
      puVar9 = (undefined8 *)*plVar6;
    }
    *plVar8 = (long)puVar9;
    nn::os::UnlockMutex(pMVar1);
  }
  lVar4 = **(long **)(param_1 + 0x30);
  lVar5 = (*(long **)(param_1 + 0x30))[5];
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x68);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    return;
  }
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x10));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x18));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x10),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x18),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x78));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x80));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x78),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x80),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0xe0));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0xe8));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0xe0),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0xe8),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x148));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x150));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x148),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x150),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x1b0));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x1b8));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x1b0),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x1b8),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x218));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x220));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x218),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x220),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x280));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x288));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x280),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x288),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x2e8));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x2f0));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x2e8),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x2f0),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x350));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x358));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x350),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x358),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x3b8));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x3c0));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x3b8),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x3c0),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x420));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x428));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x420),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x428),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x488));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x490));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x488),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x490),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x4f0));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x4f8));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x4f0),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x4f8),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x558));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x560));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x558),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x560),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x5c0));
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x5c8));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x5c0),lVar5);
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x5c8),lVar5);
  FUN_032d1220(*(undefined8 *)(lVar3 + 0x650));
  FUN_032d1c90(lVar4,*(undefined8 *)(lVar3 + 0x650),lVar5);
  return;
}

