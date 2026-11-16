
void FUN_029d8a40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bb3350;
  if (*(char *)(param_1 + 0xa80) != '\0') {
    lVar4 = *(long *)(param_1 + 0xa88);
    if (lVar4 == 0) {
      lVar3 = 1;
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar3 = *(long *)(lVar2 + 0xa8);
      *(long *)(lVar2 + 0xa8) = lVar4;
    }
    if ((0 < *(int *)(param_1 + 0xa90)) && (*(char *)(param_1 + 0x1f34) != '\0')) {
      *(char *)(param_1 + 0x1f34) = '\0';
    }
    if (lVar3 != 1) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar4 + 0xa8) = lVar3;
    }
    *(undefined8 *)(param_1 + 0xa88) = 0;
    *(undefined1 *)(param_1 + 0xa80) = 0;
  }
  if (*(char *)(param_1 + 0x1f34) != '\0') {
    *(char *)(param_1 + 0x1f34) = '\0';
  }
  FUN_03838610(param_1 + 0xa40);
  FUN_03f2d448(param_1 + 0xd0);
  FUN_03f2d448(param_1 + 0x90);
  FUN_03f2d448(param_1 + 0x50);
  return;
}

