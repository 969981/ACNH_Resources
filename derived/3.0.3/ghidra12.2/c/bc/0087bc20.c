
uint FUN_0087bc20(long param_1,long *param_2,undefined2 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_44;
  
  uVar1 = *(undefined1 *)((long)param_3 + 3);
  uVar2 = *(undefined1 *)(param_3 + 1);
  uVar3 = *param_3;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_44 = FUN_006bd550(param_2[1],0);
  uVar5 = FUN_0088c0d0(param_1 + 8,&local_44);
  uVar4 = FUN_00875c10(param_1,uVar5,uVar3,uVar2,uVar1);
  return uVar4 & 1;
}

