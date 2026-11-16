
void FUN_029fe514(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_04bb3350;
  pcVar1 = (char *)(param_1 + 0x233bc);
  pcVar2 = (char *)(param_1 + 0x21d1c);
  pcVar3 = (char *)(param_1 + 0x2067c);
  if (*(char *)(param_1 + 0x21f08) != '\0') {
    lVar7 = *(long *)(param_1 + 0x21f10);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x21f18)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x21f10) = 0;
    *(undefined1 *)(param_1 + 0x21f08) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x1efdc);
  if (*(char *)(param_1 + 0x20868) != '\0') {
    lVar7 = *(long *)(param_1 + 0x20870);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x20878)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x20870) = 0;
    *(undefined1 *)(param_1 + 0x20868) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x1d93c);
  if (*(char *)(param_1 + 0x1f1c8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x1f1d0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x1f1d8)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x1f1d0) = 0;
    *(undefined1 *)(param_1 + 0x1f1c8) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x1c29c);
  if (*(char *)(param_1 + 0x1db28) != '\0') {
    lVar7 = *(long *)(param_1 + 0x1db30);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x1db38)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x1db30) = 0;
    *(undefined1 *)(param_1 + 0x1db28) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x1abfc);
  if (*(char *)(param_1 + 0x1c488) != '\0') {
    lVar7 = *(long *)(param_1 + 0x1c490);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x1c498)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x1c490) = 0;
    *(undefined1 *)(param_1 + 0x1c488) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x1955c);
  if (*(char *)(param_1 + 0x1ade8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x1adf0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x1adf8)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x1adf0) = 0;
    *(undefined1 *)(param_1 + 0x1ade8) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x17ebc);
  if (*(char *)(param_1 + 0x19748) != '\0') {
    lVar7 = *(long *)(param_1 + 0x19750);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x19758)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x19750) = 0;
    *(undefined1 *)(param_1 + 0x19748) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x1681c);
  if (*(char *)(param_1 + 0x180a8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x180b0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x180b8)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x180b0) = 0;
    *(undefined1 *)(param_1 + 0x180a8) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x1517c);
  if (*(char *)(param_1 + 0x16a08) != '\0') {
    lVar7 = *(long *)(param_1 + 0x16a10);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x16a18)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x16a10) = 0;
    *(undefined1 *)(param_1 + 0x16a08) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x13adc);
  if (*(char *)(param_1 + 0x15368) != '\0') {
    lVar7 = *(long *)(param_1 + 0x15370);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x15378)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x15370) = 0;
    *(undefined1 *)(param_1 + 0x15368) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x1243c);
  if (*(char *)(param_1 + 0x13cc8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x13cd0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x13cd8)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x13cd0) = 0;
    *(undefined1 *)(param_1 + 0x13cc8) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x10d9c);
  if (*(char *)(param_1 + 0x12628) != '\0') {
    lVar7 = *(long *)(param_1 + 0x12630);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x12638)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x12630) = 0;
    *(undefined1 *)(param_1 + 0x12628) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0xf6fc);
  if (*(char *)(param_1 + 0x10f88) != '\0') {
    lVar7 = *(long *)(param_1 + 0x10f90);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x10f98)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x10f90) = 0;
    *(undefined1 *)(param_1 + 0x10f88) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0xe05c);
  if (*(char *)(param_1 + 0xf8e8) != '\0') {
    lVar7 = *(long *)(param_1 + 0xf8f0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xf8f8)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xf8f0) = 0;
    *(undefined1 *)(param_1 + 0xf8e8) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0xc9bc);
  if (*(char *)(param_1 + 0xe248) != '\0') {
    lVar7 = *(long *)(param_1 + 0xe250);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xe258)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xe250) = 0;
    *(undefined1 *)(param_1 + 0xe248) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0xb31c);
  if (*(char *)(param_1 + 0xcba8) != '\0') {
    lVar7 = *(long *)(param_1 + 0xcbb0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xcbb8)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xcbb0) = 0;
    *(undefined1 *)(param_1 + 0xcba8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x9c7c);
  if (*(char *)(param_1 + 0xb508) != '\0') {
    lVar7 = *(long *)(param_1 + 0xb510);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xb518)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xb510) = 0;
    *(undefined1 *)(param_1 + 0xb508) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x85dc);
  if (*(char *)(param_1 + 0x9e68) != '\0') {
    lVar7 = *(long *)(param_1 + 0x9e70);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x9e78)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x9e70) = 0;
    *(undefined1 *)(param_1 + 0x9e68) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x6f3c);
  if (*(char *)(param_1 + 0x87c8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x87d0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x87d8)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x87d0) = 0;
    *(undefined1 *)(param_1 + 0x87c8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x589c);
  if (*(char *)(param_1 + 0x7128) != '\0') {
    lVar7 = *(long *)(param_1 + 0x7130);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x7138)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x7130) = 0;
    *(undefined1 *)(param_1 + 0x7128) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x41fc);
  if (*(char *)(param_1 + 0x5a88) != '\0') {
    lVar7 = *(long *)(param_1 + 0x5a90);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x5a98)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x5a90) = 0;
    *(undefined1 *)(param_1 + 0x5a88) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x2b5c);
  if (*(char *)(param_1 + 0x43e8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x43f0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x43f8)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x43f0) = 0;
    *(undefined1 *)(param_1 + 0x43e8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x14bc);
  if (*(char *)(param_1 + 0x2d48) != '\0') {
    lVar7 = *(long *)(param_1 + 0x2d50);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x2d58)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x2d50) = 0;
    *(undefined1 *)(param_1 + 0x2d48) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  if (*(char *)(param_1 + 0x16a8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x16b0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x16b8)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x16b0) = 0;
    *(undefined1 *)(param_1 + 0x16a8) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  if (*(char *)(param_1 + 8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x18)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  return;
}

