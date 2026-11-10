
bool FUN_002732a4(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_84 [16];
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  byte local_70;
  undefined1 auStack_6f [4];
  undefined1 auStack_6b [7];
  int local_64 [4];
  byte local_54 [4];
  undefined4 local_48;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bc1510;
  lVar4 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar4 = *(long *)(lVar4 + 0x98);
  if (((lVar4 != 0) && (uVar2 = FUN_0026bfe0(DAT_04c603c8), (uVar2 & 0xff) < 0x20)) &&
     ((uint)*(byte *)(lVar4 + 0x38) == (uVar2 & 0xff))) {
    plVar5 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    lVar4 = (**(code **)(*plVar5 + 0x50))(plVar5,param_2);
    if (lVar4 == 0) {
      return false;
    }
    FUN_0027a7c0(local_64,*(undefined8 *)(DAT_04c603c8 + 0x38),uVar2,param_2,local_54,&local_44,
                 &local_48);
    if (local_64[0] == 0) {
      local_73 = (undefined1)uVar2;
      local_74 = 0x4a;
      local_72 = FUN_0026be6c(DAT_04c603c8);
      local_71 = FUN_0026aa40(DAT_04c603c8);
      local_70 = local_54[0] ^ 1;
      FUN_00228480(auStack_6f,local_44);
      FUN_00228480(auStack_6b,local_48);
      uVar6 = FUN_0026c894(DAT_04c603c8);
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      FUN_00283fa0(auStack_84,uVar6,param_4,&local_74,0xd,param_2,uVar3,0,param_3);
      FUN_00229780(local_64,auStack_84);
      return local_64[0] == 0;
    }
  }
  return false;
}

