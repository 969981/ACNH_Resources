
void FUN_029f9060(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  *param_1 = &PTR_LAB_04a99140;
  param_1[1] = 0;
  pcVar1 = (char *)((long)param_1 + 0x2c);
  *(undefined4 *)((long)param_1 + 0xf) = 0;
  param_1[4] = pcVar1;
  *(undefined4 *)(param_1 + 5) = 0x20;
  uVar2 = s_invalid_name_040e8f53._0_8_;
  if (pcVar1 != "invalid_name") {
    *(undefined4 *)((long)param_1 + 0x34) = 0x656d616e;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined8 *)pcVar1 = uVar2;
  }
  param_1[3] = PTR_DAT_04bb2028 + 0x10;
  uVar5 = FUN_006bd550("invalid_name",0);
  puVar3 = PTR_DAT_04bc41d8;
  *(undefined4 *)(param_1 + 10) = uVar5;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0xc] = puVar3 + 0x10;
  param_1[0xd] = 0xffffffff00000000;
  FUN_038e18e4(param_1 + 0x12);
  lVar7 = 0xc6;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  puVar6 = param_1 + 0x1d;
  do {
    *(undefined1 *)(puVar6 + -2) = 0;
    lVar7 = lVar7 + -1;
    *(undefined1 *)(puVar6 + -1) = 0xf6;
    *(undefined2 *)((long)puVar6 + -6) = 0xfff6;
    *puVar6 = 0xfffffffffffffff6;
    puVar4 = PTR_DAT_04bb5838;
    puVar3 = PTR_DAT_04bb5830;
    puVar6 = puVar6 + 3;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x26e) = 0xffffffff;
  param_1[0x26d] = puVar3 + 0x10;
  param_1[0x26f] = puVar4 + 0x10;
  puVar3 = PTR_DAT_04bc4050;
  *(undefined4 *)(param_1 + 0x274) = 0;
  param_1[0x273] = puVar3 + 0x10;
  return;
}

