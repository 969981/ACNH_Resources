
undefined8 *
FUN_038cbcc0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar1 = param_2 + 0x21;
  FUN_038ca450(param_2,param_1,0,param_4,param_5,1,param_6);
  *(undefined4 *)(param_2 + 0x1d) = 0;
  *param_2 = &PTR_LAB_04b64758;
  param_2[0x1b] = param_2 + 0x1b;
  param_2[0x1c] = param_2 + 0x1b;
  puVar6 = (undefined8 *)0x0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  if ((*(uint *)(param_2 + 0x1a) & 1) != 0) {
    puVar6 = param_2 + 0x12;
    nn::os::LockMutex((MutexType *)(param_2 + 0x16));
  }
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (uint)(param_3 + 0x1ffffffef8U >> 5);
    uVar2 = uVar3 - 1;
    if (0 < (int)uVar3) {
      param_2[0x1e] = puVar1;
      if (1 < uVar3) {
        if (uVar2 == 1) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          plVar5 = param_2 + 0x25;
          do {
            uVar4 = uVar4 + 2;
            plVar5[-4] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 4);
            plVar5 = plVar5 + 8;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar4);
        }
        if ((uVar2 & 1) != 0) {
          puVar1[uVar4 * 4] = puVar1 + uVar4 * 4 + 4;
        }
      }
      puVar1[(int)(uVar2 * 4)] = 0;
      param_2[0x1f] = puVar1;
      *(uint *)(param_2 + 0x20) = uVar3;
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    nn::os::UnlockMutex((MutexType *)(puVar6 + 4));
  }
  return param_2;
}

