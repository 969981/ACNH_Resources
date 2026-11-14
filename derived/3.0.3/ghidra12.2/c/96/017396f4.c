
void FUN_017396f4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar4 = *(long *)(lVar1 + 0xa8);
    *(long *)(lVar1 + 0xa8) = lVar3;
    __ptr = *(void **)(param_1 + 0x18);
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (lVar4 != 1) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      *(long *)(lVar3 + 0xa8) = lVar4;
    }
  }
  return;
}

