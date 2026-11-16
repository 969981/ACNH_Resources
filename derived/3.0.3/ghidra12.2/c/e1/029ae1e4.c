
void FUN_029ae1e4(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  pcVar1 = (char *)(param_1 + 0x2b6c);
  pcVar2 = (char *)(param_1 + 0x14cc);
  FUN_038e1a84(param_1 + 0x2d78);
  puVar3 = PTR_DAT_04bb3350;
  if (*(char *)(param_1 + 0x16b8) != '\0') {
    lVar6 = *(long *)(param_1 + 0x16c0);
    if (lVar6 == 0) {
      lVar5 = 1;
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar5 = *(long *)(lVar4 + 0xa8);
      *(long *)(lVar4 + 0xa8) = lVar6;
    }
    if ((0 < *(int *)(param_1 + 0x16c8)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar5 != 1) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      *(long *)(lVar6 + 0xa8) = lVar5;
    }
    *(undefined8 *)(param_1 + 0x16c0) = 0;
    *(undefined1 *)(param_1 + 0x16b8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) {
      lVar5 = 1;
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      lVar5 = *(long *)(lVar4 + 0xa8);
      *(long *)(lVar4 + 0xa8) = lVar6;
    }
    if ((0 < *(int *)(param_1 + 0x28)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar5 != 1) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      *(long *)(lVar6 + 0xa8) = lVar5;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  return;
}

