
long FUN_038c84d4(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  
  uVar5 = (**(code **)(*param_1 + 0x88))();
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x1a) & 1) == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = param_1 + 0x12;
    nn::os::LockMutex((MutexType *)(param_1 + 0x16));
  }
  uVar5 = param_2 - 0x20;
  if ((*(ulong *)(param_2 + -8) & 1) != 0) {
    uVar5 = *(ulong *)(param_2 + -8) - 1;
  }
  uVar6 = param_3 + 7U & 0xfffffffffffffff8;
  lVar8 = *(ulong *)(uVar5 + 0x18) - uVar6;
  if (*(ulong *)(uVar5 + 0x18) < uVar6) {
    lVar8 = 0;
    goto joined_r0x038c86a8;
  }
  if (lVar8 == 0) {
    lVar8 = uVar5 + *(ushort *)(uVar5 + 0x12) + 0x20;
    goto joined_r0x038c86a8;
  }
  uVar1 = lVar8 + (ulong)*(ushort *)(uVar5 + 0x12);
  if (uVar1 < 0x20) {
    lVar8 = uVar5 + 0x20;
    *(short *)(uVar5 + 0x12) = (short)uVar1;
    if ((uVar1 & 0xffff) != 0) {
      *(ulong *)(uVar1 + lVar8 + -8) = uVar5 | 1;
      lVar8 = (ulong)*(ushort *)(uVar5 + 0x12) + lVar8;
    }
    goto joined_r0x038c86a8;
  }
  puVar2 = (undefined8 *)(uVar1 + uVar5);
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar8 = param_1[0x1a];
  puVar2[3] = uVar6;
  *(short *)(puVar2 + 2) = (short)((ulong)lVar8 >> 0x10);
  plVar4 = param_1 + 0x1e;
  plVar3 = (long *)((long)puVar2 + (long)*(int *)((long)param_1 + 0x104));
  if ((int)param_1[0x11] == 1) {
    lVar8 = *plVar4;
    *plVar4 = (long)plVar3;
    *plVar3 = lVar8;
    plVar3[1] = (long)plVar4;
    if (lVar8 != 0) {
      puVar7 = (undefined8 *)(lVar8 + 8);
LAB_038c860c:
      *puVar7 = plVar3;
    }
  }
  else {
    puVar7 = (undefined8 *)param_1[0x1f];
    param_1[0x1f] = (long)plVar3;
    *plVar3 = (long)plVar4;
    plVar3[1] = (long)puVar7;
    if (puVar7 != (undefined8 *)0x0) goto LAB_038c860c;
  }
  *(int *)(param_1 + 0x20) = (int)param_1[0x20] + 1;
  plVar4 = (long *)((long)*(int *)((long)param_1 + 0x104) + uVar5);
  if (*plVar4 != 0) {
    *(long *)(*plVar4 + 8) = plVar4[1];
  }
  if ((long *)plVar4[1] != (long *)0x0) {
    *(long *)plVar4[1] = *plVar4;
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  *(int *)(param_1 + 0x20) = (int)param_1[0x20] + -1;
  *(undefined2 *)(uVar5 + 0x12) = 0;
  *(ulong *)(uVar5 + 0x18) = uVar1 - 0x20;
  FUN_038c8240(param_1,uVar5);
  lVar8 = uVar1 + 0x20 + uVar5 + (ulong)*(ushort *)((long)puVar2 + 0x12);
joined_r0x038c86a8:
  if (plVar9 != (long *)0x0) {
    nn::os::UnlockMutex((MutexType *)(plVar9 + 4));
  }
  return lVar8;
}

