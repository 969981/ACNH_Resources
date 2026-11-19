
void FUN_03c3dba4(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined *local_78;
  char *pcStack_70;
  undefined1 auStack_68 [4];
  uint local_64;
  uint local_54 [2];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_24;
  
  FUN_038e18e4(param_1 + 4);
  puVar2 = PTR_DAT_04bb3518;
  uVar4 = *(undefined8 *)(*(long *)PTR_DAT_04bb3518 + 0x108);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SceneGeneralMain";
  local_78 = puVar1;
  FUN_03c53c60(auStack_68,&local_78);
  local_54[0] = local_64;
  local_24 = 1 << (ulong)(local_64 & 0x1f);
  FUN_03c53c60(local_54,&local_78);
  uVar3 = FUN_03c54ed0(uVar4,&local_78,local_44,local_54[0],local_4c,&local_24,uStack_48,0);
  *param_1 = uVar3;
  uVar4 = *(undefined8 *)(*(long *)puVar2 + 0x108);
  pcStack_70 = "SceneGeneralSub1";
  local_78 = puVar1;
  FUN_03c53c60(auStack_68,&local_78);
  local_54[0] = local_64;
  local_24 = 1 << (ulong)(local_64 & 0x1f);
  FUN_03c53c60(local_54,&local_78);
  uVar3 = FUN_03c54ed0(uVar4,&local_78,local_44,local_54[0],local_4c,&local_24,uStack_48,0);
  param_1[1] = uVar3;
  uVar4 = *(undefined8 *)(*(long *)puVar2 + 0x108);
  pcStack_70 = "SceneGeneralSub2";
  local_78 = puVar1;
  FUN_03c53c60(auStack_68,&local_78);
  local_54[0] = local_64;
  local_24 = 1 << (ulong)(local_64 & 0x1f);
  FUN_03c53c60(local_54,&local_78);
  uVar3 = FUN_03c54ed0(uVar4,&local_78,local_44,local_54[0],local_4c,&local_24,uStack_48,0);
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

