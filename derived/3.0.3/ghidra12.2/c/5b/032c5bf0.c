
void FUN_032c5bf0(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0 && *(long *)(param_1 + 0x28) == 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      FUN_032c5bf0(lVar2,param_2,0);
    }
    else {
      FUN_032c5cf0(lVar2,param_2,0);
    }
  }
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  do {
    lVar2 = param_1;
    plVar4 = *(long **)(lVar2 + 0x28);
    param_1 = *(long *)(lVar2 + 0x18);
  } while (*(long *)(lVar2 + 0x18) != 0 && plVar4 == (long *)0x0);
  if (plVar4 != (long *)0x0) {
    uVar1 = FUN_0035d97c(plVar4);
    fVar5 = (float)uVar1;
    if (*(float *)(lVar2 + 0x60) <= (float)uVar1) {
      fVar5 = *(float *)(lVar2 + 0x60);
    }
    (**(code **)(*plVar4 + 0xc0))(*(float *)(lVar2 + 100) * fVar5,plVar4);
  }
  *(undefined4 *)(lVar2 + 0x6c) = 2;
  if (*(long **)(lVar2 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x38) + 8))();
  }
  plVar4 = *(long **)(param_2 + 8);
  uVar3 = 0;
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar2 + 0x40);
  }
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  return;
}

