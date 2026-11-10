
void FUN_002ac58c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x8f8) * 0x20;
  *(uint *)(param_1 + 0x8f8) = *(uint *)(param_1 + 0x8f8) + 1;
  *(undefined8 *)(lVar1 + 0x518) = param_2;
  *(undefined8 *)(lVar1 + 0x520) = param_3;
  *(undefined8 *)(lVar1 + 0x528) = param_4;
  *(undefined1 *)(lVar1 + 0x530) = param_6;
  *(undefined1 *)(lVar1 + 0x531) = param_7;
  *(undefined1 *)(lVar1 + 0x532) = param_8;
  *(undefined1 *)(lVar1 + 0x533) = param_5;
  return;
}

