
undefined8 FUN_01d920e0(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *__src;
  undefined8 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x18) = 0;
  if (*(long *)(param_1 + 0x50) != 0 && *(int *)(param_1 + 0x10) == 0) {
    if (((*(int *)(DAT_05358908 + 0x78) == 0) || (*(int *)(DAT_05358908 + 0xc4) - 1U < 2)) ||
       (*param_2 == 0)) {
      uVar1 = 0;
    }
    else {
      *(long *)(param_1 + 0xc0) = *param_2;
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0xa0) + 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(param_1 + 0x248) = 3;
      if ((*(long *)(param_1 + 0xe8) != 0) && (*(int *)(param_1 + 0xe0) != 0)) {
        iVar3 = 0;
        do {
          __src = (long *)(*(long *)(param_1 + 0xe8) + (long)iVar3 * 0x1cb8);
          if (*__src == *(long *)(param_1 + 0xc0)) {
            memcpy(*(void **)(param_1 + 200),__src,0x1cb8);
            uVar1 = 9;
            goto LAB_01d921c4;
          }
          iVar3 = iVar3 + 1;
        } while (*(int *)(param_1 + 0xe0) != iVar3);
      }
      uVar1 = 7;
      *(undefined4 *)(param_1 + 0x240) = 9;
LAB_01d921c4:
      FUN_03ebb160(param_1 + 8,uVar1);
      uVar1 = 1;
    }
  }
  return uVar1;
}

