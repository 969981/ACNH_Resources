
undefined8 FUN_001628cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((-1 < *(long *)(param_1 + 0xfc0)) && (*(long *)(param_1 + 0x7e8) != 0)) {
    if (*(long *)(param_1 + 0xfc0) < *(long *)(param_1 + 0x7e0)) {
      if (*(long *)(param_1 + 0x1128) == 0) {
        *(undefined8 *)(param_1 + 0x1128) = param_2;
        *(undefined8 *)(param_1 + 0x1130) = param_3;
      }
      else {
        iVar1 = FUN_001471a8(param_2,param_3,*(long *)(param_1 + 0x1128),
                             *(undefined8 *)(param_1 + 0x1130));
        if (*(long *)(param_1 + 0x7e8) * 1000 <= (long)iVar1) {
          FUN_0014d5f8(param_1,
                       "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds"
                       ,*(undefined8 *)(param_1 + 0x7e0));
          return 0x1c;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1128) = 0;
    }
  }
  if (*(long *)(param_1 + 0x7e0) != 0) {
    FUN_00147570(param_1,1000,7);
  }
  return 0;
}

