
void FUN_00252d34(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  FUN_00227af0(auStack_30,param_2,param_1 + 8);
  *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  return;
}

