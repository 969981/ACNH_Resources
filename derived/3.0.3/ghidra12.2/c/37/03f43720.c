
void FUN_03f43720(undefined8 *param_1)

{
  undefined8 *__dest;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  size_t __n;
  long *plVar4;
  
  plVar4 = (long *)param_1[0x30];
  *param_1 = &PTR_FUN_04ba9180;
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(plVar4 + 1) >> 1 & 1) == 0) {
      if ((*(byte *)(plVar4 + 1) & 1) != 0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      uVar1 = *(uint *)(plVar4 + 0xd);
      if (0 < (int)uVar1) {
        __dest = (undefined8 *)plVar4[0xe];
        uVar3 = 0;
        __n = (long)(int)uVar1 * 8;
        do {
          __n = __n - 8;
          if ((undefined8 *)*__dest == param_1) {
            iVar2 = (int)uVar3;
            if ((-1 < iVar2) && (iVar2 < (int)uVar1)) {
              if (iVar2 + 1 < (int)uVar1) {
                memmove(__dest,__dest + 1,__n);
                uVar1 = *(uint *)(plVar4 + 0xd);
              }
              *(uint *)(plVar4 + 0xd) = uVar1 - 1;
            }
            break;
          }
          uVar3 = uVar3 + 1;
          __dest = __dest + 1;
        } while (uVar1 != uVar3);
      }
      if ((*(byte *)(plVar4 + 1) & 1) != 0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
    }
    if ((*(byte *)((long)param_1 + 0x104) >> 4 & 1) == 0) {
      if ((long *)param_1[0x30] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x30] + 0x18))();
      }
      param_1[0x30] = 0;
    }
  }
  FUN_038e1c80(param_1 + 0x2a);
  FUN_038e1c80(param_1 + 0x24);
  FUN_038e267c(param_1);
  return;
}

