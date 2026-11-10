
void FUN_002593dc(long param_1,long param_2)

{
  code *pcVar1;
  undefined *local_68;
  undefined1 auStack_60 [36];
  undefined8 local_3c;
  undefined4 local_34;
  
  local_34 = 0;
  local_3c = 0x40;
  FUN_00220138(param_2 + 8,&local_3c);
  pcVar1 = *(code **)(param_1 + 0x528);
  if (pcVar1 != (code *)0x0) {
    FUN_0022726c(&local_68,param_2);
    (*pcVar1)(1,&local_68,*(undefined8 *)(param_1 + 0x530));
    local_68 = PTR_DAT_04bcba18 + 0x10;
    FUN_0021f584(auStack_60);
  }
  return;
}

