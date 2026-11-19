
undefined2 * FUN_039d9df0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined4 *puVar7;
  
  uVar1 = param_2 + 0x1a8;
  nn::os::LockMutex((MutexType *)(param_1 + 0x380));
  uVar2 = uVar1;
  if (uVar1 < 0x301) {
    uVar2 = 0x300;
  }
  uVar5 = 8;
  if (0x300 < uVar1) {
    uVar5 = 0xfffffff8;
  }
  puVar4 = (undefined2 *)
           (**(code **)(**(long **)(param_1 + 0x38) + 0x30))(*(long **)(param_1 + 0x38),uVar2,uVar5)
  ;
  if (puVar4 == (undefined2 *)0x0) {
    do {
      if (*(int *)(param_1 + 0x30) == 0) {
        puVar4 = (undefined2 *)0x0;
        goto LAB_039d9f78;
      }
      if (*(int *)(param_1 + 0x30) < 1) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = *(long **)(param_1 + 0x28);
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      }
      lVar3 = 0;
      if (plVar6 != (long *)0x0) {
        lVar3 = (long)plVar6 - (long)*(int *)(param_1 + 0x34);
      }
      FUN_039d9660(param_1,lVar3);
      puVar4 = (undefined2 *)
               (**(code **)(**(long **)(param_1 + 0x38) + 0x30))
                         (*(long **)(param_1 + 0x38),uVar2,uVar5);
    } while (puVar4 == (undefined2 *)0x0);
  }
  *puVar4 = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 0x70) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(byte *)(puVar4 + 1) = *(byte *)(puVar4 + 1) & 0xf8;
  *(undefined8 *)(puVar4 + 0xcc) = 0;
  puVar7 = (undefined4 *)(puVar4 + 0x74);
  *puVar7 = 0;
  *(undefined8 *)(puVar4 + 0x24) = 0;
  *(undefined2 **)(puVar4 + 0x10) = puVar4 + 0x10;
  *(undefined2 **)(puVar4 + 0x14) = puVar4 + 0x10;
  *(undefined8 *)(puVar4 + 0x1c) = 0;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x2c) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x34) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x3c) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x44) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x4c) = 0;
  *(undefined8 *)(puVar4 + 0x50) = 0;
  *(undefined8 *)(puVar4 + 0x54) = 0;
  *(undefined8 *)(puVar4 + 0x58) = 0;
  *(undefined8 *)(puVar4 + 0x5c) = 0;
  *(undefined8 *)(puVar4 + 0x60) = 0;
  *(undefined8 *)(puVar4 + 100) = 0;
  *(undefined8 *)(puVar4 + 0x68) = 0;
  *(undefined8 *)(puVar4 + 0x6c) = 0;
  *(ulong *)(puVar4 + 0xa4) = (long)puVar4 + 0x1a7U & 0xfffffffffffffff8;
  *(ulong *)(puVar4 + 0xa8) = uVar2 - 0x1a8;
  *(undefined8 *)(puVar4 + 0xac) = 0;
  *(undefined8 *)(puVar4 + 0xb0) = 0;
  *(undefined8 *)(puVar4 + 0xb4) = 0;
  *(undefined8 *)(puVar4 + 0xb8) = 0;
  *(undefined8 *)(puVar4 + 0xbc) = 0;
  *(undefined8 *)(puVar4 + 0xc0) = 0;
  *(undefined8 *)(puVar4 + 0xc4) = 0;
  *(undefined8 *)(puVar4 + 200) = 0;
  FUN_039dd310(puVar4 + 4,(int)puVar4 - (int)param_1);
  *(undefined2 **)(puVar4 + 0xb8) = puVar4 + 0x24;
  *puVar7 = 0;
  *(undefined4 *)(puVar4 + 0xbe) = 1;
  *(undefined4 **)(puVar4 + 0xcc) = puVar7;
LAB_039d9f78:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x380));
  return puVar4;
}

