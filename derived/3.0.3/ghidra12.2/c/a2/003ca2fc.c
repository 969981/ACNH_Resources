
void FUN_003ca2fc(long param_1,long param_2,ulong param_3,undefined1 param_4,uint param_5,
                 undefined1 param_6)

{
  undefined1 *puVar1;
  
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined1 *)(param_1 + 0x414) = param_4;
  puVar1 = &LAB_003ca370;
  if ((param_5 & 1) == 0) {
    puVar1 = &LAB_003ca3a0;
  }
  *(undefined1 **)(param_1 + 0x418) = puVar1;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined1 *)(param_1 + 0x420) = param_6;
  *(undefined4 *)(param_1 + 0x520) = 0;
  param_3 = param_3 / 3;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(long *)(param_1 + 0x3f0) = param_2;
  *(ulong *)(param_1 + 0x408) = param_3;
  *(ulong *)(param_1 + 0x3f8) = param_3 + param_2;
  *(ulong *)(param_1 + 0x400) = param_3 + param_2 + param_3;
  return;
}

