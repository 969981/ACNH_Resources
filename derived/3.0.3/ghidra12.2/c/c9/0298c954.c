
void FUN_0298c954(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  pcVar1 = (char *)(param_1 + 0x7134);
  pcVar2 = (char *)(param_1 + 0x5a4c);
  pcVar3 = (char *)(param_1 + 0x4364);
  FUN_038e1a84(param_1 + 0x7340);
  puVar4 = PTR_DAT_04bb3350;
  if (*(char *)(param_1 + 0x5c80) != '\0') {
    lVar7 = *(long *)(param_1 + 0x5c88);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x5c90)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x5c88) = 0;
    *(undefined1 *)(param_1 + 0x5c80) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x2c7c);
  if (*(char *)(param_1 + 0x4598) != '\0') {
    lVar7 = *(long *)(param_1 + 0x45a0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x45a8)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x45a0) = 0;
    *(undefined1 *)(param_1 + 0x4598) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x1594);
  if (*(char *)(param_1 + 0x2eb0) != '\0') {
    lVar7 = *(long *)(param_1 + 0x2eb8);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x2ec0)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x2eb8) = 0;
    *(undefined1 *)(param_1 + 0x2eb0) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  if (*(char *)(param_1 + 0x17c8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x17d0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x17d8)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x17d0) = 0;
    *(undefined1 *)(param_1 + 0x17c8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    lVar7 = *(long *)(param_1 + 0xe8);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xf0)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  return;
}

