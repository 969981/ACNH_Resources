
bool FUN_00272468(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_3c;
  byte local_3b;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar1 = PTR_DAT_04bc1510;
  lVar4 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar4 = *(long *)(lVar4 + 0x98);
  if (lVar4 == 0) {
    return false;
  }
  bVar2 = FUN_0026bfe0(DAT_04c603c8);
  if (bVar2 < 0x20) {
    if (*(byte *)(lVar4 + 0x38) != bVar2) {
      return false;
    }
    plVar5 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    lVar4 = (**(code **)(*plVar5 + 0x50))(plVar5,param_2);
    if (lVar4 == 0) {
      plVar5 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
      local_44 = 0;
      local_4c = 0x200000000000;
      (**(code **)(*plVar5 + 0x90))(plVar5,&local_4c);
      return false;
    }
    plVar5 = (long *)FUN_002aaa54(param_1);
    local_38 = 0;
    local_34 = 0;
    uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
    local_4c = CONCAT44(local_4c._4_4_,uVar3);
    lVar4 = (**(code **)(*plVar5 + 0x68))(plVar5,&local_4c,param_2,2,&local_38);
    if (lVar4 != 0) {
      local_3c = 0x40;
      local_3b = bVar2;
      FUN_002a9f34(&local_4c,plVar5,&local_3c);
      return (int)local_4c == 0;
    }
  }
  return false;
}

