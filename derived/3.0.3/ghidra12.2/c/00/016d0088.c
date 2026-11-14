
bool FUN_016d0088(char *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined *local_68;
  char *local_60;
  undefined4 local_58;
  char local_54 [7];
  undefined1 local_4d;
  undefined *local_48;
  undefined1 *puStack_40;
  undefined4 local_38;
  undefined1 local_34 [7];
  undefined1 local_2d;
  undefined2 local_28;
  undefined4 local_26;
  undefined1 local_22;
  
  local_80[0] = 0;
  local_4d = 0;
  local_54[0] = '\0';
  local_68 = PTR_DAT_04bb3768 + 0x10;
  local_7c = 0xffffffff;
  local_60 = local_54;
  puStack_40 = local_34;
  local_58 = 8;
  local_38 = 8;
  local_2d = 0;
  local_34[0] = 0;
  local_28 = 0;
  local_22 = 0;
  local_26 = 0x101;
  if ((*(int *)(param_1 + 4) != -1) && (DAT_05574040 != 0)) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    local_48 = local_68;
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar2 == 0) {
        return false;
      }
      lVar2 = lVar2 + 0x70;
    }
    else {
      if (puVar4 == (undefined8 *)0x0) {
        return false;
      }
      if ((long *)puVar4[0x26] == (long *)0x0) {
        return false;
      }
      lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      if (lVar2 == 0) {
        return false;
      }
    }
    puVar1 = &LAB_002057b0 + lVar2;
    if (*param_1 != '\0') {
      puVar1 = (undefined1 *)(lVar2 + 0x20b9e8);
    }
    uVar3 = FUN_016d4af0(local_80,param_1,puVar1 + (long)*(int *)(param_1 + 4) * 0xc40);
    if ((uVar3 & 1) != 0) {
      return *local_60 != '\0';
    }
  }
  return false;
}

