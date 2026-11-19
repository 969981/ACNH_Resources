
void FUN_038774a0(int *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_78 [16];
  undefined4 local_68 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 *local_38;
  
  local_68[0] = 0;
  lVar1 = *(long *)(DAT_05ae6a60 + 0x18);
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_68);
  (**(code **)(*(long *)(lVar1 + 0x18) + 0x18))((long *)(lVar1 + 0x18));
  FUN_00227930(local_68,*(undefined8 *)(lVar1 + 0x20));
  local_40 = *(undefined4 *)(lVar1 + 0x10);
  local_48 = param_2;
  local_38 = local_68;
  FUN_002bf77c(auStack_78,DAT_04c611a0,&local_48);
  FUN_00229780(param_1,auStack_78);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  return;
}

