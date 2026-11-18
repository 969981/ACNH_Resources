
undefined8 FUN_035a99c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_04bb46c8;
  lVar3 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,*param_1);
  puVar2 = PTR_DAT_04bb5d10;
  if (((lVar3 == 0) ||
      (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
      pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
    if (param_2 == (undefined4 *)0x0) {
      lVar3 = FUN_009807cc(*(long *)puVar1 + 8,param_1[1]);
      if (((lVar3 != 0) &&
          (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
          pcVar4 != (char *)0x0)) && (*pcVar4 != '\0')) {
        return 1;
      }
      lVar3 = FUN_009807cc(*(long *)puVar1 + 8,param_1[2]);
      if (((lVar3 != 0) &&
          (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
          pcVar4 != (char *)0x0)) && (*pcVar4 != '\0')) {
        return 1;
      }
      lVar3 = FUN_009807cc(*(long *)puVar1 + 8,param_1[3]);
      if (((lVar3 == 0) ||
          (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
          pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
        return 0;
      }
      return 1;
    }
    lVar3 = FUN_009807cc(*(long *)puVar1 + 8,param_1[2]);
    puVar2 = PTR_DAT_04bb5d10;
    if (lVar3 == 0) {
      return 0;
    }
    pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10);
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    if (*pcVar4 == '\0') {
      return 0;
    }
    *param_2 = 0;
    lVar3 = FUN_009807cc(*(long *)puVar1 + 8,param_1[3]);
    if (((lVar3 != 0) &&
        (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)puVar2),
        pcVar4 != (char *)0x0)) && (*pcVar4 != '\0')) {
      *param_2 = 1;
      return 1;
    }
    uVar5 = 3;
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      return 1;
    }
    *param_2 = 0;
    lVar3 = FUN_009807cc(*(long *)puVar1 + 8,param_1[2]);
    if (((lVar3 != 0) &&
        (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)puVar2),
        pcVar4 != (char *)0x0)) && (*pcVar4 != '\0')) {
      return 1;
    }
    lVar3 = FUN_009807cc(*(long *)puVar1 + 8,param_1[3]);
    if (((lVar3 == 0) ||
        (pcVar4 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)puVar2),
        pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
      uVar5 = 4;
    }
    else {
      uVar5 = 2;
    }
  }
  *param_2 = uVar5;
  return 1;
}

