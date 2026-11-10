
void FUN_003229d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x160); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x80)) {
    *(undefined8 *)(lVar1 + 0x4c8) = param_2[1];
    *(undefined8 *)(lVar1 + 0x4c0) = *param_2;
  }
  return;
}

