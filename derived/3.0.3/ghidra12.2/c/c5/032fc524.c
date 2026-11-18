
void FUN_032fc524(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_70;
  undefined **local_68;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar5 + 0x528);
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((param_2 & 1) == 0) {
    lVar1 = lVar6 + 0x230;
  }
  else {
    lVar1 = lVar6 + 0x2d8;
  }
  if (lVar4 != lVar1) {
    if (((lVar4 != 0) && (-1 < *(int *)(lVar6 + 0x30))) && (*(long **)(lVar4 + 0x80) != (long *)0x0)
       ) {
      (**(code **)(**(long **)(lVar4 + 0x80) + 0x20))();
    }
    *(long *)(lVar6 + 0x28) = lVar1;
    *(undefined4 *)(lVar6 + 0x30) = 0xffffffff;
  }
  lVar4 = *(long *)(lVar5 + 0x6e0);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x15f0) = 1;
    if ((*(long *)(lVar4 + 0x28) != 0) &&
       ((-1 < *(int *)(lVar4 + 0x38) &&
        (plVar3 = *(long **)(*(long *)(lVar4 + 0x28) + 0x80), plVar3 != (long *)0x0)))) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *(undefined4 *)(lVar4 + 0x38) = 0xffffffff;
    *(long *)(lVar4 + 0x30) = lVar4 + 0x238;
  }
  lVar4 = *(long *)PTR_DAT_04bc8ed0;
  FUN_032a5fc0(lVar4,0);
  if (*(int *)(lVar4 + 0xa8) == 0 || *(int *)(lVar4 + 0xa8) == 3) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    local_50 = PTR_LAB_04bc9260;
    uStack_48 = 0;
    local_70 = PTR_DAT_04bc8e60 + 0x10;
    local_60 = PTR_DAT_04bc9290 + 0x10;
    local_68 = &local_60;
    lStack_58 = lVar4;
    FUN_032c7c30(*(undefined8 *)(lVar4 + 0x40),1,0,&local_70,0,0);
    if (local_68 != (undefined **)0x0) {
      (**(code **)(*local_68 + 8))();
    }
    *(undefined4 *)(lVar4 + 0xa8) = 3;
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 != lVar4 + 0x238) {
        if (((lVar5 != 0) && (-1 < *(int *)(lVar4 + 0x38))) &&
           (*(long **)(lVar5 + 0x80) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar5 + 0x80) + 0x20))();
        }
        *(long *)(lVar4 + 0x30) = lVar4 + 0x238;
        *(undefined4 *)(lVar4 + 0x38) = 0xffffffff;
      }
    }
    lVar4 = *(long *)(param_1 + 0xbf8);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x30);
      if (lVar5 != lVar4 + 0x240) {
        if (((lVar5 != 0) && (-1 < *(int *)(lVar4 + 0x40))) &&
           (*(long **)(lVar5 + 0x80) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar5 + 0x80) + 0x20))();
        }
        *(long *)(lVar4 + 0x38) = lVar4 + 0x240;
        *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
      }
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 != lVar4 + 0x238) {
        if (((lVar5 != 0) && (-1 < *(int *)(lVar4 + 0x38))) &&
           (*(long **)(lVar5 + 0x80) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar5 + 0x80) + 0x20))();
        }
        *(long *)(lVar4 + 0x30) = lVar4 + 0x238;
        *(undefined4 *)(lVar4 + 0x38) = 0xffffffff;
      }
    }
  }
  return;
}

