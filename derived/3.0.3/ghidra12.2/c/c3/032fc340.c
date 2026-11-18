
void FUN_032fc340(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *local_60;
  undefined **local_58;
  undefined *local_50;
  long lStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x528);
  lVar2 = *(long *)(lVar3 + 0x20);
  if (lVar2 != lVar3 + 0x230) {
    if (((lVar2 != 0) && (-1 < *(int *)(lVar3 + 0x30))) && (*(long **)(lVar2 + 0x80) != (long *)0x0)
       ) {
      (**(code **)(**(long **)(lVar2 + 0x80) + 0x20))();
    }
    *(long *)(lVar3 + 0x28) = lVar3 + 0x230;
    *(undefined4 *)(lVar3 + 0x30) = 0xffffffff;
  }
  lVar2 = *(long *)PTR_DAT_04bc8ed0;
  FUN_032a5fc0(lVar2,0);
  if (*(int *)(lVar2 + 0xa8) == 0 || *(int *)(lVar2 + 0xa8) == 3) {
    iVar1 = *(int *)(param_1 + 0x38);
  }
  else {
    local_40 = PTR_LAB_04bc9260;
    uStack_38 = 0;
    local_60 = PTR_DAT_04bc8e60 + 0x10;
    local_50 = PTR_DAT_04bc9290 + 0x10;
    local_58 = &local_50;
    lStack_48 = lVar2;
    FUN_032c7c30(*(undefined8 *)(lVar2 + 0x40),1,0,&local_60,0,0);
    if (local_58 != (undefined **)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    *(undefined4 *)(lVar2 + 0xa8) = 3;
    iVar1 = *(int *)(param_1 + 0x38);
  }
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x28);
      if (lVar3 != lVar2 + 0x238) {
        if (((lVar3 != 0) && (-1 < *(int *)(lVar2 + 0x38))) &&
           (*(long **)(lVar3 + 0x80) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar3 + 0x80) + 0x20))();
        }
        *(long *)(lVar2 + 0x30) = lVar2 + 0x238;
        *(undefined4 *)(lVar2 + 0x38) = 0xffffffff;
      }
    }
    lVar2 = *(long *)(param_1 + 0xbf8);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x30);
      if (lVar3 != lVar2 + 0x240) {
        if (((lVar3 != 0) && (-1 < *(int *)(lVar2 + 0x40))) &&
           (*(long **)(lVar3 + 0x80) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar3 + 0x80) + 0x20))();
        }
        *(long *)(lVar2 + 0x38) = lVar2 + 0x240;
        *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
      }
    }
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x28);
      if (lVar3 != lVar2 + 0x238) {
        if (((lVar3 != 0) && (-1 < *(int *)(lVar2 + 0x38))) &&
           (*(long **)(lVar3 + 0x80) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar3 + 0x80) + 0x20))();
        }
        *(long *)(lVar2 + 0x30) = lVar2 + 0x238;
        *(undefined4 *)(lVar2 + 0x38) = 0xffffffff;
      }
    }
  }
  return;
}

