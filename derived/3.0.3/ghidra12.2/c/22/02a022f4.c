
void FUN_02a022f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_038e1a84(param_1 + 0x17f8);
  FUN_038e1a84(param_1 + 0x16e8);
  puVar1 = PTR_DAT_04bb3350;
  if (*(char *)(param_1 + 0x50) != '\0') {
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 == 0) {
      lVar3 = 1;
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar3 = *(long *)(lVar2 + 0xa8);
      *(long *)(lVar2 + 0xa8) = lVar4;
    }
    if ((0 < *(int *)(param_1 + 0x60)) && (*(char *)(param_1 + 0x1504) != '\0')) {
      *(char *)(param_1 + 0x1504) = '\0';
    }
    if (lVar3 != 1) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar4 + 0xa8) = lVar3;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x1504) != '\0') {
    *(char *)(param_1 + 0x1504) = '\0';
  }
  FUN_03838610(param_1 + 0x10);
  return;
}

