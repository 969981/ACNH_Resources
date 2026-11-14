
void FUN_01cacc7c(long param_1)

{
  undefined1 uStack_1;
  
  FUN_038e1a84(param_1 + 0x198);
  if (*(uint *)(param_1 + 400) != 0xffffffff) {
    (*(code *)(&PTR_LAB_04a454c8)[*(uint *)(param_1 + 400)])(&uStack_1,param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  return;
}

