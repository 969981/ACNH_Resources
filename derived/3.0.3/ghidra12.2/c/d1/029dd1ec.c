
void FUN_029dd1ec(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  pcVar1 = (char *)(param_1 + 0x42b4);
  pcVar2 = (char *)(param_1 + 0x2bb4);
  pcVar3 = (char *)(param_1 + 0x14dc);
  FUN_038e1a84(param_1 + 0x9a20);
  FUN_03b74380(param_1 + 0x9850);
  FUN_03b74380(param_1 + 0x9680);
  FUN_03b74380(param_1 + 0x9390);
  FUN_03b74380(param_1 + 0x9100);
  FUN_03b74380(param_1 + 0x8e10);
  FUN_03b74380(param_1 + 0x8ac0);
  FUN_03b74380(param_1 + 34000);
  FUN_03b74380(param_1 + 0x8300);
  FUN_03b74380(param_1 + 0x8130);
  FUN_03b74380(param_1 + 0x7e40);
  FUN_03b74380(param_1 + 0x7bb0);
  FUN_03b74380(param_1 + 0x78c0);
  FUN_03b74380(param_1 + 0x7570);
  FUN_03b74380(param_1 + 0x6f80);
  FUN_03b74380(param_1 + 0x6db0);
  FUN_03b74380(param_1 + 0x6be0);
  FUN_03b74380(param_1 + 0x68f0);
  FUN_03b74380(param_1 + 0x6660);
  FUN_03b74380(param_1 + 0x6370);
  FUN_03b74380(param_1 + 0x6020);
  FUN_03b74380(param_1 + 0x5a30);
  FUN_03b74380(param_1 + 0x5860);
  FUN_03b74380(param_1 + 0x5690);
  FUN_03b74380(param_1 + 0x53a0);
  FUN_03b74380(param_1 + 0x5110);
  FUN_03b74380(param_1 + 20000);
  FUN_03b74380(param_1 + 0x4ad0);
  FUN_03b74380(param_1 + 0x44e0);
  puVar4 = PTR_DAT_04bb3350;
  if (*(char *)(param_1 + 0x2e00) != '\0') {
    lVar7 = *(long *)(param_1 + 0x2e08);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x2e10)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x2e08) = 0;
    *(undefined1 *)(param_1 + 0x2e00) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  if (*(char *)(param_1 + 0x1700) != '\0') {
    lVar7 = *(long *)(param_1 + 0x1708);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x1710)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x1708) = 0;
    *(undefined1 *)(param_1 + 0x1700) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x38)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  return;
}

