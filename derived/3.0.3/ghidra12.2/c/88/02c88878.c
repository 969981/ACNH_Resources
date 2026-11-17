
void FUN_02c88878(long param_1,short *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb3170;
  puVar2 = PTR_DAT_04bb2230;
  pcVar1 = (char *)(param_1 + 0x1cb38);
  if (*param_2 == -2) {
    if (*pcVar1 != '\0') {
      FUN_033ba890(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),0);
      *pcVar1 = '\0';
    }
  }
  else {
    if (*pcVar1 == '\0') {
      local_40 = 0;
      local_48 = 0xfffe00000000;
      FUN_0277d4ac((ulong)&local_48 | 4);
      local_3c = *(undefined2 *)puVar3;
      local_38 = 0;
      local_40 = *(undefined4 *)(param_2 + 2);
      local_48 = CONCAT44(*(undefined4 *)param_2,(undefined4)local_48);
      FUN_033bd990(*(undefined8 *)(*(long *)puVar2 + 0x30),&local_48);
      *pcVar1 = '\x01';
    }
    local_48 = 0xfffe;
    FUN_0277d4ac(&local_48);
    local_40 = CONCAT22(local_40._2_2_,*(undefined2 *)puVar3);
    local_48 = *(undefined8 *)param_2;
    FUN_033ba168(*(undefined8 *)(*(long *)puVar2 + 0x30),&local_48);
  }
  return;
}

