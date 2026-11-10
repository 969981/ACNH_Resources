
void FUN_001fbdb4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 uStack_28;
  
  local_40[0] = 0;
  *param_1 = (long)(PTR_DAT_04bcc9f8 + 0x10);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_30 = local_40;
  uStack_28 = 0x10;
  local_48 = puVar1;
  FUN_0018b070(&local_48,"Protocol",0xffffffffffffffff);
  FUN_00185de0(param_1 + 1,&local_48);
  local_48 = puVar1;
  FUN_0018b1a0(&local_48);
  FUN_0019ce58(param_1 + 10);
  puVar2 = PTR_DAT_04bcca00;
  puVar1 = PTR_DAT_04bcbd70;
  if (*PTR_DAT_04bcca00 == '\0') {
    *(undefined **)PTR_DAT_04bcbc80 = PTR_FUN_04bcc240;
    *(undefined **)puVar1 = PTR_FUN_04bcc238;
    *puVar2 = 1;
    return;
  }
  return;
}

