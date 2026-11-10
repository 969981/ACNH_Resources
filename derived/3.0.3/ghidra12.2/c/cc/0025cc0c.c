
undefined8 FUN_0025cc0c(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  int local_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0') {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_002210f0();
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x420) = 0;
    }
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd670;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalDestroyNetworkJob::WaitForCancel";
    return 0;
  }
  FUN_0024e4dc(local_30,*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x408));
  if (local_30[0] != 0) {
    return 5;
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    lVar1 = param_1 + 0x70;
    pcVar2 = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
    puVar3 = PTR_LAB_04bcd680;
  }
  else {
    FUN_00258d78(*(undefined8 *)(param_1 + 0x88));
    lVar1 = param_1 + 0x78;
    pcVar2 = "LocalDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateSessionMessage";
    puVar3 = PTR_LAB_04bcd678;
  }
  FUN_002282f0(lVar1);
  *(undefined **)(param_1 + 0x30) = puVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

