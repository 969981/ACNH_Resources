
void FUN_03b0ec50(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0x40) + 0x10) + 0x38);
  if (*(char *)(param_1 + 0x15c) == '\x01') {
    if (*(uint *)(lVar1 + 0x38) <= *(uint *)(param_1 + 0x160)) goto LAB_03b0ecc8;
    if (*(uint *)(lVar1 + 0x38) <= *(uint *)(param_1 + 0x160) + 1) {
      *(undefined1 *)(param_1 + 0x15c) = 2;
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(lVar1 + 0x38);
      *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 4;
      goto LAB_03b0ecc8;
    }
  }
  else if ((*(char *)(param_1 + 0x15c) != '\0') &&
          (*(uint *)(lVar1 + 0x38) <= *(uint *)(param_1 + 0x160))) goto LAB_03b0ecc8;
  FUN_03b0ed20(param_1);
LAB_03b0ecc8:
  if (*(char *)(param_1 + 0x15c) != '\x02') {
    *(undefined1 *)(param_3 + 0x28) = 1;
  }
  FUN_003899fc(param_1,param_2,param_3,param_4 & 1);
  return;
}

