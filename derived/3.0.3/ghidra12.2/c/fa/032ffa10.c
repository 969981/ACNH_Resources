
undefined8 FUN_032ffa10(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  *(byte *)(param_1 + 0x16969) =
       0x22 < (ulong)*(uint *)(DAT_05355a60 + 0x3c) |
       (byte)(0x3ffdf77fc >> ((ulong)*(uint *)(DAT_05355a60 + 0x3c) & 0x3f)) & 1;
  FUN_033269b0(*(undefined8 *)(param_1 + 0x528));
  switch(*(undefined4 *)(param_1 + 0x1050)) {
  case 0:
  case 3:
    FUN_032ffb8c(param_1);
    break;
  case 1:
    FUN_032ffe5c(param_1);
    break;
  case 2:
    FUN_032fff44(param_1);
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    FUN_0330014c(param_1,param_2);
  }
  lVar4 = **(long **)PTR_DAT_04bc8f40;
  if (lVar4 != 0) {
    uVar1 = crc32b(0xffffffff,0x73,0x4c11db7);
    uVar1 = crc32b(uVar1,0x77,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6b,0x4c11db7);
    uVar1 = crc32b(uVar1,0x62,0x4c11db7);
    uVar2 = crc32b(uVar1,100,0x4c11db7);
    do {
      while (~uVar2 < *(uint *)(lVar4 + 0x20)) {
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == 0) goto LAB_032ffb38;
      }
      if (~uVar2 <= *(uint *)(lVar4 + 0x20)) goto LAB_032ffb44;
      lVar4 = *(long *)(lVar4 + 0x10);
    } while (lVar4 != 0);
  }
LAB_032ffb38:
  FUN_032ad3e0(*(long **)PTR_DAT_04bc8f40,"swkbd");
LAB_032ffb44:
  if (((*(long *)(param_1 + 0x20) != 0) && (-1 < *(int *)(param_1 + 0x30))) &&
     (plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 0x80), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(long *)(param_1 + 0x28) = param_1 + 0xe0;
  *(undefined2 *)(param_1 + 0x16430) = 0;
  return 1;
}

