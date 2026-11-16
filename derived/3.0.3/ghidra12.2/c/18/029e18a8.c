
void FUN_029e18a8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    lVar5 = 1;
    lVar4 = param_1[3];
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar4;
    lVar4 = param_1[3];
  }
  if (lVar4 != 0) {
    __ptr = (void *)(lVar4 + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (lVar5 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar5;
  }
  (**(code **)(*(long *)*param_1 + 0x20))();
  *param_1 = 0;
  return;
}

