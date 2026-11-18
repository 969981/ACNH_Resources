
void FUN_0332616c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  
  puVar1 = (undefined8 *)(param_1 + 0x398);
  FUN_032c6840(puVar1);
  plVar4 = *(long **)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if (plVar4 != (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x3a8);
    lVar3 = *(long *)(param_1 + 0x3a0);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    if ((undefined8 *)*plVar4 == puVar1) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
  }
  __ptr = *(void **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *puVar1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  *(undefined ***)(param_1 + 0x2d8) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x358) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x358) + 8))();
  }
  if (*(long **)(param_1 + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x328) + 8))();
  }
  if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f8) + 8))();
  }
  *(undefined ***)(param_1 + 0x230) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x2b0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2b0) + 8))();
  }
  if (*(long **)(param_1 + 0x280) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x280) + 8))();
  }
  if (*(long **)(param_1 + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x250) + 8))();
  }
  *(undefined ***)(param_1 + 0x188) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x208) + 8))();
  }
  if (*(long **)(param_1 + 0x1d8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1d8) + 8))();
  }
  if (*(long **)(param_1 + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 8))();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x160) + 8))();
  }
  if (*(long **)(param_1 + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x130) + 8))();
  }
  if (*(long **)(param_1 + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x100) + 8))();
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_04b174e0;
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  }
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 8))();
  }
  if (*(long **)(param_1 + 0x58) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0332638c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 8))();
  return;
}

