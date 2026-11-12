
undefined8 FUN_0097ce60(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_74 [12];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  
  if (DAT_04cfae30 == 0) {
    return 0;
  }
  lVar4 = *(long *)(DAT_04cfae30 + 0x90);
  if ((lVar4 == 0) || ((int)*(uint *)(param_1 + 8) < 0)) {
LAB_0097cfc4:
    uVar3 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0xc) < 0) {
      return 0;
    }
    if (*(uint *)(lVar4 + 0x38) <= *(uint *)(param_1 + 8) ||
        *(uint *)(lVar4 + 0x3c) <= *(uint *)(param_1 + 0xc)) {
      return 0;
    }
    FUN_00962530(lVar4,param_1,local_74);
    puVar1 = PTR_DAT_04bb46c8;
    local_74[0] = (uint)local_44;
    lVar4 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_74[0]);
    if (((lVar4 == 0) ||
        (pcVar2 = (char *)FUN_009823a0(lVar4,0xb,0xe7e965db,DAT_04cfabf0), pcVar2 == (char *)0x0))
       || (*pcVar2 == '\0')) {
      local_74[0] = (uint)local_43;
      lVar4 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
      if (((lVar4 == 0) ||
          (pcVar2 = (char *)FUN_009823a0(lVar4,0xb,0xe7e965db,DAT_04cfabf0), pcVar2 == (char *)0x0))
         || (*pcVar2 == '\0')) {
        local_74[0] = (uint)local_42;
        lVar4 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
        if (((lVar4 == 0) ||
            (pcVar2 = (char *)FUN_009823a0(lVar4,0xb,0xe7e965db,DAT_04cfabf0), pcVar2 == (char *)0x0
            )) || (*pcVar2 == '\0')) {
          local_74[0] = (uint)local_41;
          lVar4 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
          if (((lVar4 == 0) ||
              (pcVar2 = (char *)FUN_009823a0(lVar4,0xb,0xe7e965db,DAT_04cfabf0),
              pcVar2 == (char *)0x0)) || (*pcVar2 == '\0')) goto LAB_0097cfc4;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

