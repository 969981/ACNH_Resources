
void FUN_00369b30(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_48 [40];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0037ec98(auStack_48,param_2,param_1);
    FUN_0037e460(*(undefined8 *)(param_1 + 0x18),auStack_48,param_3 & 1);
  }
  return;
}

