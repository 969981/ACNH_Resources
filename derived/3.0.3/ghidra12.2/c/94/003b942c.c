
undefined4 FUN_003b942c(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = param_2 >> 0x18;
  switch(uVar1) {
  case 1:
    if (uVar1 == 1) {
      puVar2 = (uint *)(param_1 + *(int *)(param_1 + 4));
      if (((param_2 & 0xffffff) < *puVar2) &&
         ((*(byte *)((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 0x14) &
          1) != 0)) {
        return *(undefined4 *)
                ((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 0x18);
      }
    }
    break;
  case 2:
    if (uVar1 == 2) {
      puVar2 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
      if (((param_2 & 0xffffff) < *puVar2) &&
         ((*(byte *)((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 0x18) &
          1) != 0)) {
        return *(undefined4 *)
                ((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 0x1c);
      }
    }
    break;
  case 3:
    if (uVar1 == 3) {
      puVar2 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
      if (((param_2 & 0xffffff) < *puVar2) &&
         ((*(byte *)((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 0xc) &
          1) != 0)) {
        return *(undefined4 *)
                ((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 0x10);
      }
    }
    break;
  case 4:
    if (uVar1 != 4) {
      return 0xffffffff;
    }
    puVar2 = (uint *)(param_1 + *(int *)(param_1 + 0x2c));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    goto LAB_003b9588;
  case 5:
    if (uVar1 == 5) {
      puVar2 = (uint *)(param_1 + *(int *)(param_1 + 0x1c));
      if (((param_2 & 0xffffff) < *puVar2) &&
         ((*(byte *)((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 8) & 1)
          != 0)) {
        return *(undefined4 *)
                ((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 0xc);
      }
    }
    break;
  case 6:
    if (uVar1 != 6) {
      return 0xffffffff;
    }
    puVar2 = (uint *)(param_1 + *(int *)(param_1 + 0x24));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
LAB_003b9588:
    if ((*(byte *)((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 4) & 1)
        != 0) {
      return *(undefined4 *)
              ((long)puVar2 + (long)(int)puVar2[(ulong)(param_2 & 0xffffff) * 2 + 2] + 8);
    }
  }
  return 0xffffffff;
}

