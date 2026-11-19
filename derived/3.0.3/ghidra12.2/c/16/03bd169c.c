
void FUN_03bd169c(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b7b440;
  if (param_1[0x133] != 0) {
    __ptr = (void *)(param_1[0x133] + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x133] = 0;
  }
  if (*(char *)((long)param_1 + 0x64e31) != '\0') {
    if (DAT_05aec200 != (long *)0x0) {
      (**(code **)(*DAT_05aec200 + 8))();
    }
    DAT_05aec200 = (long *)0x0;
  }
  FUN_038e1a84(param_1 + 0xc6af);
  FUN_038e1a84(param_1 + 0xc38d);
  FUN_038e1a84(param_1 + 0xc06b);
  FUN_038e1a84(param_1 + 0xbd49);
  FUN_038e1a84(param_1 + 0xba27);
  FUN_038e1a84(param_1 + 0xb705);
  FUN_038e1a84(param_1 + 0xb3e3);
  FUN_038e1a84(param_1 + 0xb0c1);
  FUN_038e1a84(param_1 + 0xad9f);
  FUN_038e1a84(param_1 + 0xaa7d);
  FUN_038e1a84(param_1 + 0xa75b);
  FUN_038e1a84(param_1 + 0xa439);
  FUN_038e1a84(param_1 + 0xa117);
  FUN_038e1a84(param_1 + 0x9df5);
  FUN_038e1a84(param_1 + 0x9ad3);
  FUN_038e1a84(param_1 + 0x97b1);
  FUN_038e1a84(param_1 + 0x948f);
  FUN_038e1a84(param_1 + 0x916d);
  FUN_038e1a84(param_1 + 0x8e4b);
  FUN_038e1a84(param_1 + 0x8b29);
  FUN_038e1a84(param_1 + 0x8807);
  FUN_038e1a84(param_1 + 0x84e5);
  FUN_038e1a84(param_1 + 0x81c3);
  FUN_038e1a84(param_1 + 0x7ea1);
  FUN_038e1a84(param_1 + 0x7b7f);
  FUN_038e1a84(param_1 + 0x785d);
  FUN_038e1a84(param_1 + 0x753b);
  FUN_038e1a84(param_1 + 0x7219);
  FUN_038e1a84(param_1 + 0x6ef7);
  FUN_038e1a84(param_1 + 0x6bd5);
  FUN_038e1a84(param_1 + 0x68b3);
  FUN_038e1a84(param_1 + 0x6591);
  FUN_038e1a84(param_1 + 0x626f);
  FUN_038e1a84(param_1 + 0x5f4d);
  FUN_038e1a84(param_1 + 0x5c2b);
  FUN_038e1a84(param_1 + 0x5909);
  FUN_038e1a84(param_1 + 0x55e7);
  FUN_038e1a84(param_1 + 0x52c5);
  FUN_038e1a84(param_1 + 0x4fa3);
  FUN_038e1a84(param_1 + 0x4c81);
  FUN_038e1a84(param_1 + 0x495f);
  FUN_038e1a84(param_1 + 0x463d);
  FUN_038e1a84(param_1 + 0x431b);
  FUN_038e1a84(param_1 + 0x3ff9);
  FUN_038e1a84(param_1 + 0x3cd7);
  FUN_038e1a84(param_1 + 0x39b5);
  FUN_038e1a84(param_1 + 0x3693);
  FUN_038e1a84(param_1 + 0x3371);
  FUN_038e1a84(param_1 + 0x304f);
  FUN_038e1a84(param_1 + 0x2d2d);
  FUN_038e1a84(param_1 + 0x2a0b);
  FUN_038e1a84(param_1 + 0x26e9);
  FUN_038e1a84(param_1 + 0x23c7);
  FUN_038e1a84(param_1 + 0x20a5);
  FUN_038e1a84(param_1 + 0x1d83);
  FUN_038e1a84(param_1 + 0x1a61);
  FUN_038e1a84(param_1 + 0x173f);
  FUN_038e1a84(param_1 + 0x141d);
  FUN_038e1a84(param_1 + 0x10fb);
  FUN_038e1a84(param_1 + 0xdd9);
  FUN_038e1a84(param_1 + 0xab7);
  FUN_038e1a84(param_1 + 0x795);
  FUN_038e1a84(param_1 + 0x473);
  FUN_038e1a84(param_1 + 0x151);
  FUN_03beb51c(param_1);
  return;
}

