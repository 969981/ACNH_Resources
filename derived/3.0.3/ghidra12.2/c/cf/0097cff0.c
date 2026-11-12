
undefined8 FUN_0097cff0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
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
  if ((lVar4 != 0) && (-1 < (int)*(uint *)(param_1 + 8))) {
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
    puVar2 = PTR_DAT_04bb5d20;
    if (((lVar4 != 0) &&
        (pcVar3 = (char *)FUN_009823a0(lVar4,0xc,0x9cb82a1e,*(undefined8 *)PTR_DAT_04bb5d20),
        pcVar3 != (char *)0x0)) && (*pcVar3 != '\0')) {
      local_74[0] = (uint)local_43;
      lVar4 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
      if (((lVar4 != 0) &&
          (pcVar3 = (char *)FUN_009823a0(lVar4,0xc,0x9cb82a1e,*(undefined8 *)puVar2),
          pcVar3 != (char *)0x0)) && (*pcVar3 != '\0')) {
        local_74[0] = (uint)local_42;
        lVar4 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
        if (((lVar4 != 0) &&
            (pcVar3 = (char *)FUN_009823a0(lVar4,0xc,0x9cb82a1e,*(undefined8 *)puVar2),
            pcVar3 != (char *)0x0)) && (*pcVar3 != '\0')) {
          local_74[0] = (uint)local_41;
          lVar4 = FUN_009807cc(*(long *)puVar1 + 8,local_74[0]);
          if (((lVar4 != 0) &&
              (pcVar3 = (char *)FUN_009823a0(lVar4,0xc,0x9cb82a1e,*(undefined8 *)puVar2),
              pcVar3 != (char *)0x0)) && (*pcVar3 != '\0')) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

