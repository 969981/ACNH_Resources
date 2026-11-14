
void FUN_01729298(undefined8 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 2) = 0x20;
  param_1[1] = pcVar1;
  uVar2 = s_DeliveryPass_040a0f37._0_8_;
  if (pcVar1 != "DeliveryPass") {
    *(undefined4 *)((long)param_1 + 0x1c) = 0x73736150;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined8 *)pcVar1 = uVar2;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_LAB_048f9700;
  *(undefined4 *)((long)param_1 + 0x3c) = *param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((long)param_1 + 0x44) = *param_3;
  *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((long)param_1 + 0x4c) = param_4;
  return;
}

