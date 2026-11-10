
void FUN_003331e0(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  
  if ((param_2 != (code *)0x0) && (0 < *(int *)(param_1 + 0x98))) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x28) + lVar1 * 8);
      local_48 = *(undefined8 *)(lVar2 + 0x90);
      (*param_2)(&local_48,*(undefined8 *)(lVar2 + 0x88),param_3);
      *(undefined8 *)(lVar2 + 0x90) = 0xffffffffffffffff;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x98));
  }
  return;
}

