
void FUN_03c04274(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_FUN_04b7c668;
  lVar8 = DAT_05aec430;
  puVar2 = PTR_DAT_04bd0d40;
  if (DAT_05aec428 != param_1) goto LAB_03c04e6c;
  DAT_05aec428 = (long *)0x0;
  puVar5 = *(undefined8 **)(DAT_05aec430 + 0x518);
  lVar6 = *(long *)(DAT_05aec430 + 0x510);
  *(undefined ***)(DAT_05aec430 + 0x4f0) = &PTR_FUN_04b7c688;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x528), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x528) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x518);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x510);
    }
    *(undefined8 *)(lVar8 + 0x510) = 0;
    *(undefined8 *)(lVar8 + 0x518) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x4f8);
  *(undefined **)(lVar8 + 0x4f0) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c04394:
    *(undefined8 *)(lVar8 + 0x4f8) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x4f0);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c04394;
  }
  puVar5 = *(undefined8 **)(lVar8 + 0x4b8);
  lVar6 = *(long *)(lVar8 + 0x4b0);
  *(undefined ***)(lVar8 + 0x490) = &PTR_FUN_04b7c6a8;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x4c8), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x4c8) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x4b8);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x4b0);
    }
    *(undefined8 *)(lVar8 + 0x4b0) = 0;
    *(undefined8 *)(lVar8 + 0x4b8) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x498);
  *(undefined **)(lVar8 + 0x490) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c0446c:
    *(undefined8 *)(lVar8 + 0x498) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x490);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c0446c;
  }
  puVar1 = PTR_DAT_04bc1068;
  puVar5 = *(undefined8 **)(lVar8 + 0x458);
  lVar6 = *(long *)(lVar8 + 0x450);
  *(undefined **)(lVar8 + 0x430) = PTR_DAT_04bc1068 + 0x10;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x468), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x468) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x458);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x450);
    }
    *(undefined8 *)(lVar8 + 0x450) = 0;
    *(undefined8 *)(lVar8 + 0x458) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x438);
  *(undefined **)(lVar8 + 0x430) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c04548:
    *(undefined8 *)(lVar8 + 0x438) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x430);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c04548;
  }
  puVar5 = *(undefined8 **)(lVar8 + 0x3f8);
  *(undefined **)(lVar8 + 0x3d0) = puVar1 + 0x10;
  lVar6 = *(long *)(lVar8 + 0x3f0);
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x408), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x408) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x3f8);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x3f0);
    }
    *(undefined8 *)(lVar8 + 0x3f0) = 0;
    *(undefined8 *)(lVar8 + 0x3f8) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x3d8);
  *(undefined **)(lVar8 + 0x3d0) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c0461c:
    *(undefined8 *)(lVar8 + 0x3d8) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x3d0);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c0461c;
  }
  puVar1 = PTR_DAT_04bcbba0;
  puVar5 = *(undefined8 **)(lVar8 + 0x398);
  lVar6 = *(long *)(lVar8 + 0x390);
  *(undefined **)(lVar8 + 0x370) = PTR_DAT_04bcbba0 + 0x10;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x3a8), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x3a8) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x398);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x390);
    }
    *(undefined8 *)(lVar8 + 0x390) = 0;
    *(undefined8 *)(lVar8 + 0x398) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x378);
  *(undefined **)(lVar8 + 0x370) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c046f8:
    *(undefined8 *)(lVar8 + 0x378) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x370);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c046f8;
  }
  puVar5 = *(undefined8 **)(lVar8 + 0x338);
  *(undefined **)(lVar8 + 0x310) = puVar1 + 0x10;
  lVar6 = *(long *)(lVar8 + 0x330);
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x348), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x348) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x338);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x330);
    }
    *(undefined8 *)(lVar8 + 0x330) = 0;
    *(undefined8 *)(lVar8 + 0x338) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x318);
  *(undefined **)(lVar8 + 0x310) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c047cc:
    *(undefined8 *)(lVar8 + 0x318) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x310);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c047cc;
  }
  puVar5 = *(undefined8 **)(lVar8 + 0x2d0);
  lVar6 = *(long *)(lVar8 + 0x2c8);
  *(undefined ***)(lVar8 + 0x2a8) = &PTR_FUN_04b7c6c8;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x2e0), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x2e0) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x2d0);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x2c8);
    }
    *(undefined8 *)(lVar8 + 0x2c8) = 0;
    *(undefined8 *)(lVar8 + 0x2d0) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x2b0);
  *(undefined **)(lVar8 + 0x2a8) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c048a4:
    *(undefined8 *)(lVar8 + 0x2b0) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x2a8);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c048a4;
  }
  puVar5 = *(undefined8 **)(lVar8 + 0x270);
  lVar6 = *(long *)(lVar8 + 0x268);
  *(undefined ***)(lVar8 + 0x248) = &PTR_LAB_04b7c6e8;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x280), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x280) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x270);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x268);
    }
    *(undefined8 *)(lVar8 + 0x268) = 0;
    *(undefined8 *)(lVar8 + 0x270) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x250);
  *(undefined **)(lVar8 + 0x248) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c0497c:
    *(undefined8 *)(lVar8 + 0x250) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x248);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c0497c;
  }
  puVar5 = *(undefined8 **)(lVar8 + 0x210);
  *(undefined ***)(lVar8 + 0x1e8) = &PTR_LAB_04b7c6e8;
  lVar6 = *(long *)(lVar8 + 0x208);
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x220), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x220) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x210);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x208);
    }
    *(undefined8 *)(lVar8 + 0x208) = 0;
    *(undefined8 *)(lVar8 + 0x210) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x1f0);
  *(undefined **)(lVar8 + 0x1e8) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c04a4c:
    *(undefined8 *)(lVar8 + 0x1f0) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x1e8);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c04a4c;
  }
  lVar6 = *(long *)(lVar8 + 0x1a8);
  puVar5 = *(undefined8 **)(lVar8 + 0x1b0);
  *(undefined ***)(lVar8 + 0x188) = &PTR_LAB_04b7c6e8;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x1c0), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x1c0) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x1b0);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x1a8);
    }
    *(undefined8 *)(lVar8 + 0x1a8) = 0;
    *(undefined8 *)(lVar8 + 0x1b0) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 400);
  *(undefined **)(lVar8 + 0x188) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c04b18:
    *(undefined8 *)(lVar8 + 400) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x188);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c04b18;
  }
  lVar6 = *(long *)(lVar8 + 0x148);
  puVar5 = *(undefined8 **)(lVar8 + 0x150);
  *(undefined ***)(lVar8 + 0x128) = &PTR_LAB_04b7c6e8;
  if ((puVar5 != (undefined8 *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x160), lVar3 != 0))
  {
    *(undefined8 *)(lVar8 + 0x160) = 0;
    if (lVar6 != 0) {
      *(undefined8 **)(lVar6 + 8) = puVar5;
      puVar5 = *(undefined8 **)(lVar8 + 0x150);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(lVar8 + 0x148);
    }
    *(undefined8 *)(lVar8 + 0x148) = 0;
    *(undefined8 *)(lVar8 + 0x150) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x130);
  *(undefined **)(lVar8 + 0x128) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c04be4:
    *(undefined8 *)(lVar8 + 0x130) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x128);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c04be4;
  }
  *(undefined8 *)(lVar8 + 200) = &PTR_LAB_04b7c6e8;
  plVar7 = *(long **)(lVar8 + 0xf0);
  plVar4 = (long *)(lVar8 + 0xe8);
  lVar6 = *plVar4;
  if ((plVar7 != (long *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x100), lVar3 != 0)) {
    *(undefined8 *)(lVar8 + 0x100) = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar7;
      plVar7 = *(long **)(lVar8 + 0xf0);
    }
    if (plVar7 != (long *)0x0) {
      *plVar7 = *plVar4;
    }
    *plVar4 = 0;
    *(undefined8 *)(lVar8 + 0xf0) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0xd0);
  *(undefined **)(lVar8 + 200) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c04cb4:
    *(undefined8 *)(lVar8 + 0xd0) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 200);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c04cb4;
  }
  *(undefined8 *)(lVar8 + 0x68) = &PTR_LAB_04b7c708;
  plVar7 = *(long **)(lVar8 + 0x90);
  plVar4 = (long *)(lVar8 + 0x88);
  lVar6 = *plVar4;
  if ((plVar7 != (long *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0xa0), lVar3 != 0)) {
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar7;
      plVar7 = *(long **)(lVar8 + 0x90);
    }
    if (plVar7 != (long *)0x0) {
      *plVar7 = *plVar4;
    }
    *plVar4 = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x70);
  *(undefined **)(lVar8 + 0x68) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c04d8c:
    *(undefined8 *)(lVar8 + 0x70) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 0x68);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c04d8c;
  }
  *(long *)(lVar8 + 8) = (long)(puVar1 + 0x10);
  plVar7 = *(long **)(lVar8 + 0x30);
  plVar4 = (long *)(lVar8 + 0x28);
  lVar6 = *plVar4;
  if ((plVar7 != (long *)0x0 || lVar6 != 0) && (lVar3 = *(long *)(lVar8 + 0x40), lVar3 != 0)) {
    *(undefined8 *)(lVar8 + 0x40) = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar7;
      plVar7 = *(long **)(lVar8 + 0x30);
    }
    if (plVar7 != (long *)0x0) {
      *plVar7 = *plVar4;
    }
    *plVar4 = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar8 + 0x10);
  *(undefined **)(lVar8 + 8) = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_03c04e60:
    *(undefined8 *)(lVar8 + 0x10) = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + lVar8 + 8);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
    goto LAB_03c04e60;
  }
  DAT_05aec430 = 0;
LAB_03c04e6c:
  lVar8 = param_1[1];
  *param_1 = (long)(puVar2 + 0x10);
  if (lVar8 != 0) {
    if (lVar8 == 1) {
      return;
    }
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)param_1);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

