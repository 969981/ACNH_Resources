
bool FUN_002729c4(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_44;
  byte local_43;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar1 = PTR_DAT_04bc1510;
  lVar5 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar5 = *(long *)(lVar5 + 0x98);
  if (((lVar5 != 0) && (bVar3 = FUN_0026bfe0(DAT_04c603c8), bVar3 < 0x20)) &&
     (*(byte *)(lVar5 + 0x38) == bVar3)) {
    plVar6 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,param_2);
    if (plVar6 != (long *)0x0) {
      uVar7 = FUN_002aaa54(param_1);
      local_38 = 0;
      local_34 = 0;
      uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      local_54 = CONCAT44(local_54._4_4_,uVar4);
      lVar5 = FUN_002a9fb0(uVar7,&local_54,plVar6 + 2,2,&local_38);
      bVar2 = lVar5 != 0;
      if (lVar5 == 0) {
        local_4c = 0;
        local_54 = 0x400000000000;
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_54);
        return false;
      }
      local_44 = 0x48;
      local_43 = bVar3;
      FUN_002a9f34(&local_54,uVar7,&local_44);
      if ((int)local_54 != 0) {
        return bVar2;
      }
      local_58 = 0;
      local_5c = 0x100;
      local_6c[0] = (**(code **)(*param_1 + 0x18))(param_1);
      lVar5 = FUN_002a9fb0(uVar7,local_6c,plVar6 + 2,2,&local_5c);
      if (lVar5 == 0) {
        return bVar2;
      }
      FUN_002a9f34(local_6c,uVar7,&local_44);
      FUN_00229780(&local_54,local_6c);
      return bVar2;
    }
  }
  return false;
}

