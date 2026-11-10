
void FUN_00232630(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_00240d34(param_1 + 0x18,uVar1);
  *(undefined1 *)(param_1 + 0x2000) = 1;
  FUN_00240b90(param_1 + 0x1718);
  FUN_00240d34(param_1 + 0x1718,param_1 + 0x18);
  FUN_0022d1f4();
  FUN_0022d308();
  FUN_0023b5b0(auStack_30);
  return;
}

