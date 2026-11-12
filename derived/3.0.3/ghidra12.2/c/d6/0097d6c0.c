
uint FUN_0097d6c0(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  uint local_74 [12];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  
  if ((((DAT_04cfae30 != 0) && (lVar2 = *(long *)(DAT_04cfae30 + 0x90), lVar2 != 0)) &&
      (-1 < (int)*(uint *)(param_1 + 8))) &&
     ((-1 < (int)*(uint *)(param_1 + 0xc) &&
      (*(uint *)(param_1 + 8) < *(uint *)(lVar2 + 0x38) &&
       *(uint *)(param_1 + 0xc) < *(uint *)(lVar2 + 0x3c))))) {
    FUN_00962530(lVar2,param_1,local_74);
    puVar1 = PTR_DAT_04bb46c8;
    local_74[0] = (uint)local_44;
    lVar2 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_74[0]);
    if ((lVar2 == 0) ||
       ((pcVar3 = (char *)FUN_009823a0(lVar2,0xd,0x58da05ed,DAT_04cfabd8), pcVar3 == (char *)0x0 ||
        (*pcVar3 == '\0')))) {
      local_74[0] = (uint)local_43;
      lVar2 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
      if ((lVar2 == 0) ||
         ((pcVar3 = (char *)FUN_009823a0(lVar2,0xd,0x58da05ed,DAT_04cfabd8), pcVar3 == (char *)0x0
          || (*pcVar3 == '\0')))) {
        local_74[0] = (uint)local_42;
        lVar2 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
        if ((lVar2 == 0) ||
           ((pcVar3 = (char *)FUN_009823a0(lVar2,0xd,0x58da05ed,DAT_04cfabd8), pcVar3 == (char *)0x0
            || (*pcVar3 == '\0')))) {
          local_74[0] = (uint)local_41;
          lVar2 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
          if ((lVar2 == 0) ||
             ((pcVar3 = (char *)FUN_009823a0(lVar2,0xd,0x58da05ed,DAT_04cfabd8),
              pcVar3 == (char *)0x0 || (*pcVar3 == '\0')))) {
            param_2 = 0;
            goto LAB_0097d838;
          }
        }
      }
    }
    param_2 = 1;
  }
LAB_0097d838:
  return param_2 & 1;
}

