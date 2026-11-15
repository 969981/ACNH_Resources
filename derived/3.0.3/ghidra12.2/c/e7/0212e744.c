
void FUN_0212e744(long param_1)

{
  undefined8 local_3c;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0212f0f0();
  if (((*(long *)(param_1 + 0x248) != 0) &&
      ((*(byte *)(*(long *)(param_1 + 0x2d0) + 0xad54) >> 1 & 1) != 0)) &&
     (*(uint *)(*(long *)(param_1 + 0x2d0) + 0xad44) < 2)) {
    local_3c = 0;
    local_34 = 0xff;
    local_30 = 0;
    uStack_28 = 0xfffe;
    FUN_0277d4ac(&uStack_28);
    local_3c = CONCAT44(local_3c._4_4_,8);
    FUN_0212ea40(param_1,&local_3c);
  }
  FUN_0212f3f4(param_1);
  FUN_0212f570(param_1);
  return;
}

