
void FUN_032c8150(undefined4 param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = param_4;
  if (*(uint *)(param_2 + 0x40) <= param_4) {
    uVar1 = 0;
  }
  if ((*(byte *)(*(long *)(param_2 + 0x48) + (long)(int)uVar1) & 1) == 0) {
    if ((*(byte *)(*(long *)(param_2 + 0x48) + (long)(int)uVar1) & 1) == 0) {
      FUN_032c7910(param_2,param_3,param_4);
      uVar1 = param_4;
      if (*(uint *)(param_2 + 0x30) <= param_4) {
        uVar1 = 0;
      }
      lVar2 = *(long *)(*(long *)(param_2 + 0x38) + (long)(int)uVar1 * 8);
      do {
        lVar4 = lVar2;
        plVar3 = *(long **)(lVar4 + 0x28);
        lVar2 = *(long *)(lVar4 + 0x18);
      } while (*(long *)(lVar4 + 0x18) != 0 && plVar3 == (long *)0x0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xd0))(0);
      }
      *(undefined4 *)(lVar4 + 0x6c) = 1;
    }
    if (*(uint *)(param_2 + 0x30) <= param_4) {
      param_4 = 0;
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0x38) + (long)(int)param_4 * 8);
    do {
      lVar4 = lVar2;
      plVar3 = *(long **)(lVar4 + 0x28);
      lVar2 = *(long *)(lVar4 + 0x18);
    } while (*(long *)(lVar4 + 0x18) != 0 && plVar3 == (long *)0x0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0xd0))(param_1);
    }
    *(undefined4 *)(lVar4 + 0x6c) = 1;
  }
  return;
}

