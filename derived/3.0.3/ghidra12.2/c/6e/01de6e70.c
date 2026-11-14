
undefined8 FUN_01de6e70(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int local_38;
  byte local_33;
  
  if (param_2 != (byte *)0x0) {
    *param_2 = 0xff;
  }
  puVar1 = PTR_DAT_04bc10a8;
  lVar2 = FUN_01cab720(*(undefined8 *)PTR_DAT_04bc10a8,4);
  uVar4 = 0;
  if (lVar2 != 0) {
    local_33 = 0xff;
    uVar3 = FUN_01cac0d8(*(undefined8 *)puVar1,&local_38,4);
    if (((uVar3 & 1) == 0) || (local_38 != 8)) {
      if (*(int *)(DAT_05358908 + 0x38) != 0 && *(char *)(DAT_05358908 + 0xfd8) == '\0') {
        plVar5 = *(long **)(DAT_05ae6a60 + 0x30);
        uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (((uVar3 & 1) == 0) && (uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5), (uVar3 & 1) == 0))
        {
          FUN_0387de70(plVar5,&DAT_05b03f00,0xe,0x15,0x1e);
        }
      }
      uVar4 = 0;
    }
    else {
      FUN_01cab920(*(undefined8 *)puVar1,param_1,0,8,4);
      if (param_2 != (byte *)0x0) {
        if (7 < local_33) {
          local_33 = 0xff;
        }
        *param_2 = local_33;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

