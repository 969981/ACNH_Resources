
void FUN_029e2934(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bb3350;
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
      lVar3 = 1;
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar3 = *(long *)(lVar2 + 0xa8);
      *(long *)(lVar2 + 0xa8) = lVar4;
    }
    if ((0 < *(int *)(param_1 + 0x20)) && (*(char *)(param_1 + 0x14c4) != '\0')) {
      *(char *)(param_1 + 0x14c4) = '\0';
    }
    if (lVar3 != 1) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar4 + 0xa8) = lVar3;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0x14c4) != '\0') {
    *(char *)(param_1 + 0x14c4) = '\0';
  }
  return;
}

