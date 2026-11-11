
void FUN_0047a3a0(long *param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[4] = -0x8000000000000000;
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(PTR_DAT_04bd5b98 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  FUN_0043d3a0(param_1 + 8);
  param_1[10] = 0;
  param_1[0xb] = -0x8000000000000000;
  param_1[0xc] = param_4;
  if (param_4 != 0) {
    FUN_004435a0(param_4);
  }
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = param_5;
  if (param_3 == 0) {
    lVar3 = FUN_00446e60();
    param_1[0xe] = lVar3;
    lVar3 = param_1[0xc];
  }
  else {
    lVar3 = param_1[0xc];
  }
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)FUN_00438810(0x58);
    puVar1[2] = 1;
    puVar1[3] = 0;
    puVar1[4] = 0x8000000000000000;
    puVar1[5] = 0;
    puVar1[6] = 0x8000000000000000;
    *puVar1 = &PTR_LAB_048653e0;
    puVar1[1] = 0xffffffff;
    FUN_0043d3a0(puVar1 + 7);
    puVar1[9] = 0;
    puVar1[10] = 0x8000000000000000;
    puVar2 = (undefined8 *)param_1[0xc];
    if ((puVar2 != puVar1) && (param_1[0xc] = (long)puVar1, puVar2 != (undefined8 *)0x0)) {
      FUN_004435c0();
      return;
    }
  }
  return;
}

