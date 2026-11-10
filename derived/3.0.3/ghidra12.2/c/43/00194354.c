
void FUN_00194354(long *param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
                 undefined4 param_6,undefined8 param_7,undefined4 param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_04bcbc48 + 0x10;
  *param_1 = (long)puVar1;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 7) = param_2;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar2 = PTR_DAT_04bcc020 + 0x10;
  *(undefined4 *)((long)param_1 + 100) = param_3;
  param_1[0xd] = param_4;
  plVar5 = param_1 + 0xe;
  *plVar5 = (long)puVar1;
  *param_1 = (long)puVar2;
  *(undefined4 *)(param_1 + 0xf) = 1;
  lVar3 = DAT_04be21f8;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *plVar5 = (long)&PTR_FUN_048393d8;
  param_1[0x11] = 0;
  param_1[0x12] = lVar3;
  lVar3 = FUN_00196a4c(plVar5);
  param_1[0x10] = lVar3;
  *(undefined2 *)((long)param_1 + 0xa1) = 0;
  plVar6 = param_1 + 0x15;
  *plVar6 = (long)puVar1;
  *(undefined4 *)(param_1 + 0x16) = 1;
  lVar3 = DAT_04be21f8;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *plVar6 = (long)&PTR_FUN_048393d8;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = lVar3;
  lVar3 = FUN_00196a4c(plVar6);
  plVar4 = param_1 + 0x1f;
  *plVar4 = (long)puVar1;
  param_1[0x17] = lVar3;
  *(undefined2 *)((long)param_1 + 0xd9) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = param_6;
  *(undefined4 *)(param_1 + 0x1d) = param_8;
  param_1[0x1e] = param_9;
  param_1[0x1f] = (long)&PTR_FUN_048393d8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  lVar3 = DAT_04be21f8;
  *(undefined1 *)((long)param_1 + 0x104) = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = lVar3;
  lVar3 = FUN_00196a4c(plVar4);
  param_1[0x21] = lVar3;
  *(undefined2 *)((long)param_1 + 0x129) = 0;
  FUN_00193c08(plVar5,param_5);
  FUN_00193c08(plVar6,param_7);
  FUN_00193030(plVar4,*(long *)(param_5 + 0x10) + *(long *)(param_5 + 0x28),
               *(undefined8 *)(param_5 + 0x18),0xffffffffffffffff);
  *(undefined1 *)((long)param_1 + 0x61) = 0;
  return;
}

