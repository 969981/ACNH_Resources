
void FUN_038bbc40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  do {
    *(undefined8 *)(param_1 + 0x78) = param_2;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar1 != 0)) {
      FUN_038bbc40(lVar1,param_2);
    }
  } while ((*(long *)(param_1 + 0x30) != 0) &&
          (param_1 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), param_1 != 0));
  return;
}

