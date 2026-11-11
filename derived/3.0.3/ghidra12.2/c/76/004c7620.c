
void FUN_004c7620(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x60);
  plVar2 = *(long **)PTR_PTR_04bd4d20;
  if (lVar1 != 0) {
    (**(code **)(*plVar2 + 0x18))
              (plVar2,lVar1,
               (-(*(ulong *)(lVar1 + 8) >> 0x1f & 1) & 0xfffffff000000000 |
               (*(ulong *)(lVar1 + 8) & 0xffffffff) << 4) + 0x10);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x5c)) && (*(long *)(param_1 + 0x50) != 0)) {
    FUN_00421f90(plVar2,*(long *)(param_1 + 0x50),0x10,*(uint *)(param_1 + 0x5c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x4c)) && (*(long *)(param_1 + 0x40) != 0)) {
    FUN_00421f90(plVar2,*(long *)(param_1 + 0x40),8,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x3c)) && (*(long *)(param_1 + 0x30) != 0)) {
    FUN_00421f90(plVar2,*(long *)(param_1 + 0x30),8,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x2c)) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_00421f90(plVar2,*(long *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  return;
}

