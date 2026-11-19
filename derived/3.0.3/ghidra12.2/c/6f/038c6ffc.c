
undefined8 * FUN_038c6ffc(undefined8 *param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((param_2 & 0xfffffffffffffff8) < 0x129) {
    return (undefined8 *)0x0;
  }
  FUN_038ca450(param_1,param_3,0,param_1,param_2 & 0xfffffffffffffff8,1,param_4 & 1);
  *(undefined2 *)((long)param_1 + 0xd4) = 0;
  *param_1 = &PTR_FUN_04b64448;
  puVar1 = param_1 + 0x1b;
  param_1[0x1b] = puVar1;
  param_1[0x1c] = puVar1;
  param_1[0x1f] = param_1 + 0x1e;
  param_1[0x20] = 0xffffffff00000000;
  param_1[0x1d] = 0xffffffff00000000;
  param_1[0x1e] = param_1 + 0x1e;
  if ((*(uint *)(param_1 + 0x1a) & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    uVar3 = *(uint *)(param_1 + 0x1a);
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x16));
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x16));
    uVar3 = *(uint *)(param_1 + 0x1a);
  }
  if ((uVar3 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = param_1 + 0x12;
    nn::os::LockMutex((MutexType *)(param_1 + 0x16));
  }
  if (*(int *)(param_1 + 0x11) == 1) {
    puVar4 = param_1 + 0x21;
  }
  else {
    puVar4 = (undefined8 *)param_1[6];
  }
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[3] = param_1[7] + -0x128;
  *(undefined2 *)(puVar4 + 2) = 0xffff;
  plVar2 = (long *)((long)*(int *)((long)param_1 + 0xec) + (long)puVar4);
  lVar5 = param_1[0x1b];
  param_1[0x1b] = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)puVar1;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x1d) = *(int *)(param_1 + 0x1d) + 1;
  if (puVar6 != (undefined8 *)0x0) {
    nn::os::UnlockMutex((MutexType *)(puVar6 + 4));
  }
  return param_1;
}

