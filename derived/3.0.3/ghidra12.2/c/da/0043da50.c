
bool FUN_0043da50(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_1030 [4095];
  undefined1 local_31;
  
  FUN_0043a1a0(auStack_1030,0x1000,0x1000,"in \'%s\', condition: \'%s\'. %s",param_4,param_5,param_6
              );
  local_31 = 0;
  iVar1 = FUN_00422280(param_1,auStack_1030,param_2,param_3);
  return iVar1 != 0;
}

