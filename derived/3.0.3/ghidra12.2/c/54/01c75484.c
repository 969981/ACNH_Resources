
void FUN_01c75484(long param_1)

{
  long lVar1;
  undefined1 uStack_1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(uint *)(lVar1 + 0xb0) != 0xffffffff) {
    (*(code *)(&PTR_LAB_04a430c8)[*(uint *)(lVar1 + 0xb0)])(&uStack_1,lVar1 + 0x58);
  }
  *(undefined4 *)(lVar1 + 0xb0) = 0;
  *(undefined4 *)(lVar1 + 0x298) = 0;
  return;
}

