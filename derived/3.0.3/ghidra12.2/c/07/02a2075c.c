
void FUN_02a2075c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  
  if (*(long *)PTR_DAT_04bc3ee8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x70);
  }
  if (*(long *)(lVar6 + 8) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 8) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 8))();
    *(undefined8 *)(lVar6 + 8) = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0x30);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x10) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    *(undefined8 *)(lVar6 + 0x10) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x68);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(lVar6 + 0x18) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x18) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x18))();
    *(undefined8 *)(lVar6 + 0x18) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0xa0);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(long *)(lVar6 + 0x20) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x20) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x20))();
    *(undefined8 *)(lVar6 + 0x20) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0xd8);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(lVar6 + 0x28) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x28) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x28))();
    *(undefined8 *)(lVar6 + 0x28) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x110);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(long *)(lVar6 + 0x30) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x30) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x30))();
    *(undefined8 *)(lVar6 + 0x30) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x148);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x38) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x38))();
    *(undefined8 *)(lVar6 + 0x38) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x180);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  if (*(long *)(lVar6 + 0x40) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x40) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x40))();
    *(undefined8 *)(lVar6 + 0x40) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x1b8);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  if (*(long *)(lVar6 + 0x48) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x48) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x48))();
    *(undefined8 *)(lVar6 + 0x48) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x1f0);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  if (*(long *)(lVar6 + 0x50) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(lVar6 + 0x50) + 0x10);
    if (DAT_05aebc00 == '\0') {
      uVar3 = FUN_03b38a74();
      FUN_003b6364(uVar3,uVar4,0);
    }
    else {
      *(undefined8 *)(*(long *)(DAT_05aebb88 + 0x168) + uVar4 * 8 + 8) = 0;
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x50))();
    *(undefined8 *)(lVar6 + 0x50) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x228);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  return;
}

