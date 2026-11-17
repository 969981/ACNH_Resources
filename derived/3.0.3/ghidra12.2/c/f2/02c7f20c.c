
void FUN_02c7f20c(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_04bbba70 + 0x10;
  *(undefined **)(param_1 + 0x1c6a0) = puVar1;
  *(undefined **)(param_1 + 0x1c6c0) = puVar1;
  *(undefined **)(param_1 + 0x1c6e0) = puVar1;
  *(undefined **)(param_1 + 0x1c700) = puVar1;
  *(undefined **)(param_1 + 0x1c720) = puVar1;
  *(undefined **)(param_1 + 0x1c740) = puVar1;
  switch(*(undefined4 *)(param_1 + 0x1c66c)) {
  case 0:
    *(undefined **)(param_1 + 0x1c6a0) = &DAT_04ab2e28;
    puVar2 = &LAB_02c7f354;
    break;
  default:
    goto switchD_02c7f258_caseD_1;
  case 2:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
    *(undefined **)(param_1 + 0x1c6a0) = &DAT_04ab2e28;
    puVar2 = &LAB_02c7f368;
    break;
  case 3:
  case 5:
    *(long *)(param_1 + 0x1c6a8) = param_1;
    *(undefined1 **)(param_1 + 0x1c6b0) = &LAB_02c7f384;
    *(undefined **)(param_1 + 0x1c6a0) = &DAT_04ab2e28;
    *(undefined8 *)(param_1 + 0x1c6b8) = 0;
    *(undefined **)(param_1 + 0x1c6c0) = &DAT_04ab2e28;
    puVar3 = (undefined8 *)(param_1 + 0x1c6d8);
    *(long *)(param_1 + 0x1c6c8) = param_1;
    *(undefined1 **)(param_1 + 0x1c6d0) = &LAB_02c7f368;
    goto LAB_02c7f27c;
  case 4:
  case 6:
    *(long *)(param_1 + 0x1c6e8) = param_1;
    *(undefined **)(param_1 + 0x1c6e0) = &DAT_04ab2e28;
    *(undefined1 **)(param_1 + 0x1c6f0) = &LAB_02c7f384;
    pcVar4 = (code *)&LAB_02c7f988;
    goto LAB_02c7f324;
  case 7:
    *(long *)(param_1 + 0x1c6e8) = param_1;
    *(code **)(param_1 + 0x1c6f0) = FUN_02c7fb40;
    pcVar4 = FUN_02c7fe2c;
    *(undefined **)(param_1 + 0x1c6e0) = &DAT_04ab2e28;
LAB_02c7f324:
    *(undefined8 *)(param_1 + 0x1c6f8) = 0;
    *(undefined **)(param_1 + 0x1c700) = &DAT_04ab2e28;
    *(code **)(param_1 + 0x1c710) = pcVar4;
    *(undefined **)(param_1 + 0x1c720) = &DAT_04ab2e28;
    puVar3 = (undefined8 *)(param_1 + 0x1c738);
    *(long *)(param_1 + 0x1c708) = param_1;
    *(undefined8 *)(param_1 + 0x1c718) = 0;
    *(long *)(param_1 + 0x1c728) = param_1;
    *(undefined1 **)(param_1 + 0x1c730) = &LAB_02c7f368;
    goto LAB_02c7f27c;
  }
  *(long *)(param_1 + 0x1c6a8) = param_1;
  *(undefined1 **)(param_1 + 0x1c6b0) = puVar2;
  puVar3 = (undefined8 *)(param_1 + 0x1c6b8);
LAB_02c7f27c:
  *puVar3 = 0;
switchD_02c7f258_caseD_1:
  return;
}

