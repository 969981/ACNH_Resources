
undefined8 FUN_01a1da00(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  FUN_00948e68(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1,&local_18,&local_34,&local_38,&local_3c);
  local_14 = local_18;
  lVar1 = FUN_009807cc(DAT_04cfab78 + 8,local_18);
  if (((lVar1 == 0) ||
      (pcVar2 = (char *)FUN_009823a0(lVar1,0xd,0x58da05ed,DAT_04cfabd8), pcVar2 == (char *)0x0)) ||
     (*pcVar2 == '\0')) {
    local_14 = local_34;
    lVar1 = FUN_009807cc(DAT_04cfab78 + 8,local_34);
    if (((lVar1 == 0) ||
        (pcVar2 = (char *)FUN_009823a0(lVar1,0xd,0x58da05ed,DAT_04cfabd8), pcVar2 == (char *)0x0))
       || (*pcVar2 == '\0')) {
      local_14 = local_38;
      lVar1 = FUN_009807cc(DAT_04cfab78 + 8,local_38);
      if (((lVar1 == 0) ||
          (pcVar2 = (char *)FUN_009823a0(lVar1,0xd,0x58da05ed,DAT_04cfabd8), pcVar2 == (char *)0x0))
         || (*pcVar2 == '\0')) {
        local_14 = local_3c;
        lVar1 = FUN_009807cc(DAT_04cfab78 + 8,local_3c);
        if (((lVar1 == 0) ||
            (pcVar2 = (char *)FUN_009823a0(lVar1,0xd,0x58da05ed,DAT_04cfabd8), pcVar2 == (char *)0x0
            )) || (*pcVar2 == '\0')) {
          return 0;
        }
      }
    }
  }
  return 1;
}

