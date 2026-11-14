
undefined8 FUN_01a1db70(float *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_38 = 0;
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_3c = 0;
  local_48 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_44 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  FUN_00948e68(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_50,&local_18,(long)&local_38 + 4,&local_38,
               &local_3c);
  puVar1 = PTR_DAT_04bb46c8;
  local_14 = local_18;
  lVar3 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_18);
  puVar2 = PTR_DAT_04bb5d10;
  if (((lVar3 == 0) ||
      (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
      pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
    local_14 = local_38._4_4_;
    lVar3 = FUN_009807cc(*(long *)puVar1 + 8,local_38._4_4_);
    if (((lVar3 == 0) ||
        (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)puVar2),
        pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
      local_14 = (undefined4)local_38;
      lVar3 = FUN_009807cc(*(long *)puVar1 + 8,local_38 & 0xffffffff);
      if (((lVar3 == 0) ||
          (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)puVar2),
          pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
        local_14 = local_3c;
        lVar3 = FUN_009807cc(*(long *)puVar1 + 8,local_3c);
        if (((lVar3 == 0) ||
            (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)puVar2),
            pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
          return 0;
        }
      }
    }
  }
  return 1;
}

