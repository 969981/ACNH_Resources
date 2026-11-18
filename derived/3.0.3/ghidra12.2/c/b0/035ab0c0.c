
undefined8 FUN_035ab0c0(uint param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_74 [12];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  
  local_88 = &DAT_048f9750;
  if (-1 < (int)param_1) {
    if ((int)param_2 < 0) {
      return 1;
    }
    lVar3 = *(long *)(*(long *)(param_3 + 8) + 0x68);
    if (*(uint *)(lVar3 + 0x38) <= param_1 || *(uint *)(lVar3 + 0x3c) <= param_2) {
      return 1;
    }
    local_80 = param_1;
    uStack_7c = param_2;
    FUN_00962530(lVar3,&local_88,local_74);
    puVar1 = PTR_DAT_04bb46c8;
    local_74[0] = (uint)local_44;
    lVar3 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_74[0]);
    if (((lVar3 == 0) ||
        (pcVar2 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,DAT_04cfabd8), pcVar2 == (char *)0x0))
       || (*pcVar2 == '\0')) {
      local_74[0] = (uint)local_43;
      lVar3 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
      if (((lVar3 == 0) ||
          (pcVar2 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,DAT_04cfabd8), pcVar2 == (char *)0x0))
         || (*pcVar2 == '\0')) {
        local_74[0] = (uint)local_42;
        lVar3 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
        if (((lVar3 == 0) ||
            (pcVar2 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,DAT_04cfabd8), pcVar2 == (char *)0x0
            )) || (*pcVar2 == '\0')) {
          local_74[0] = (uint)local_41;
          lVar3 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
          if (((lVar3 == 0) ||
              (pcVar2 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,DAT_04cfabd8),
              pcVar2 == (char *)0x0)) || (*pcVar2 == '\0')) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

