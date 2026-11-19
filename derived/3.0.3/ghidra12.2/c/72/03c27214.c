
void FUN_03c27214(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **local_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [4];
  uint local_54;
  uint local_44 [2];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_14;
  
  FUN_03c11314(param_1,param_2,&DAT_040d40fc);
  *param_1 = &PTR_LAB_04b7e600;
  param_1[0x45] = &PTR_LAB_04b7e6d8;
  FUN_038e18e4(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  FUN_038e3114(param_1 + 0x4f,0,0x7fff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_038e3114(param_1 + 0x59,0,0x7fff);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x67] = &PTR_LAB_04b7e6f8;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = &PTR_LAB_04b7e718;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  lVar2 = *(long *)PTR_DAT_04bb3518;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  uVar3 = *(undefined8 *)(lVar2 + 0x108);
  local_68 = &PTR_LAB_048f9770;
  puStack_60 = &DAT_040d40fc;
  FUN_03c53c60(auStack_58,&local_68);
  local_44[0] = local_54;
  local_14 = 1 << (ulong)(local_54 & 0x1f);
  FUN_03c53c60(local_44,&local_68);
  uVar1 = FUN_03c54ed0(uVar3,&local_68,local_34,local_44[0],local_3c,&local_14,uStack_38,0);
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined4 *)((long)param_1 + 0x32c) = uVar1;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)((long)param_1 + 0x374) = 0;
  *(undefined1 *)((long)param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  *(undefined1 *)((long)param_1 + 0x484) = 0;
  *(undefined1 *)((long)param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(undefined4 *)((long)param_1 + 0x3eb) = 0;
  return;
}

