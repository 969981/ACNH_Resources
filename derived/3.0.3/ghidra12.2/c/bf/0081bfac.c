
undefined8 * FUN_0081bfac(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_73;
  undefined4 local_6c;
  int iStack_68;
  int local_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  undefined4 local_54;
  long lStack_50;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined *local_30;
  undefined *puStack_28;
  
  if ((*(byte *)(param_2 + 3) >> 1 & 1) == 0) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    local_90 = 1;
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_74 = 0;
    local_54 = 0;
    uStack_48 = 0;
    local_6c = 0;
    iStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_98 = PTR_DAT_04bdf0b0 + 0x10;
    local_5c = 0;
    local_44 = 0;
    local_78 = 0x1010100;
    local_73 = 0x1010101;
    local_3c = 0;
    local_34 = 0;
    puStack_28 = PTR_DAT_04bb2120;
    lStack_50 = param_1 + 0x20;
    lVar1 = param_1 + 0x130;
    if (**(char **)(param_4 + 8) != '\0') {
      lVar1 = param_4;
    }
    local_80 = *(undefined8 *)(lVar1 + 8);
    iVar2 = *(int *)(param_2 + 9);
    local_30 = local_88;
    if (iVar2 == -1) {
      FUN_0081afa0(param_2 + 2,param_3,&local_98,1);
    }
    else {
      local_64 = iVar2 >> 0x1f;
      iStack_68 = iVar2;
      FUN_0081b190(param_2 + 2,param_3,&local_98,1);
    }
    uVar3 = FUN_03f2eb0c(param_2 + 2);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  return param_2;
}

