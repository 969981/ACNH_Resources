
/* WARNING: Removing unreachable block (ram,0x0339006c) */
/* WARNING: Removing unreachable block (ram,0x03390088) */

void FUN_0339002c(long param_1,int param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 == 0) && (DAT_05739db8 != 0)) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0xa0) != '\0') {
      *(undefined1 *)(lVar1 + 0xa1) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0x1c70) = *(undefined2 *)(param_3 + 8);
  *(undefined2 *)(param_1 + 0x1c72) = *(undefined2 *)(param_3 + 10);
  *(undefined4 *)(param_1 + 0x1c78) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x1c7c) = *(undefined4 *)(param_3 + 0x14);
  *(undefined8 *)(param_1 + 0x1c80) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x1c88) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x1c90) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x1c98) = *(undefined8 *)(param_3 + 0x30);
  *(undefined1 *)(param_1 + 0x1ca0) = *(undefined1 *)(param_3 + 0x38);
  return;
}

