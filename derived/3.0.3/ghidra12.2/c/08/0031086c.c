
uint FUN_0031086c(long param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [28];
  undefined4 local_4c;
  undefined1 auStack_48 [24];
  long local_30;
  byte local_28 [4];
  undefined4 local_24;
  
  local_28[0] = param_4;
  local_24 = param_3;
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_30);
  }
  else {
    FUN_0018c9b0(&local_30,0);
  }
  *(long *)PTR_DAT_04bcbcb0 = local_30;
  if (param_4 < 0x65) {
    if ((((param_4 == 0) || (param_4 == 100)) || (*(long *)(param_1 + 0x1d0) == 0)) ||
       (29999 < local_30 - *(long *)(param_1 + 0x1d0))) {
      *(long *)(param_1 + 0x1d0) = local_30;
      uVar1 = FUN_00310980(param_1 + 0x140,param_2,&local_24,local_28);
      return uVar1 & 1;
    }
    local_4c = 0x80010011;
    FUN_0018aa70(auStack_68,&local_4c);
    puVar2 = auStack_68;
  }
  else {
    local_4c = 0x8001000a;
    FUN_0018aa70(auStack_48,&local_4c);
    puVar2 = auStack_48;
  }
  uVar1 = FUN_00198714(param_2,puVar2);
  return uVar1 & 1;
}

