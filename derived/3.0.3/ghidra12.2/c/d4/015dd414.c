
void FUN_015dd414(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar5 = *(long *)(param_1 + 0x960);
  if (lVar5 == 0) {
    lVar4 = 1;
    plVar3 = *(long **)(param_1 + 0x10);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar4 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar5;
    plVar3 = *(long **)(param_1 + 0x10);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    }
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x40))();
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
  }
  if (lVar4 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar4;
  }
  return;
}

