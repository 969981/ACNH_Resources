
undefined8 FUN_00a7f49c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *__src;
  ulong __n;
  undefined1 auStack_830 [2048];
  
  __src = (void *)param_2[1];
  if (__src == (void *)0x0) {
    memset((void *)*param_2,0,0x800);
LAB_00a7f554:
    uVar4 = 1;
  }
  else {
    uVar1 = *(uint *)((long)param_2 + 0x1c);
    uVar3 = uVar1 >> 2;
    if ((((uVar3 < 0xa41) || (uVar1 >> 3 < 0x52d)) || (uVar3 < 0xa73)) ||
       ((uVar1 >> 4 < 0x2a3 || (uVar3 < 0xaa5)))) {
      iVar2 = *(int *)(param_2 + 3);
    }
    else {
      iVar2 = *(int *)(param_2 + 3);
    }
    if (iVar2 == 1) {
      __n = param_2[2];
      if (__n < 0x801) {
        if (__n != 0x800) {
          memset(auStack_830,0,0x800);
        }
        memcpy(auStack_830,__src,__n);
        memcpy((void *)*param_2,auStack_830,0x800);
        goto LAB_00a7f554;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

