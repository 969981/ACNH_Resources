
undefined8 FUN_02d6db1c(long *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)((long)param_1 + 0x25ec) != '\0' || (int)param_1[0x4b1] != 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((int)param_1[0x3e] != -1) {
    return 0;
  }
  if (*(int *)((long)param_1 + 500) != -1) {
    return 0;
  }
  if ((char)param_1[0x4bf] == '\0') {
    if (((DAT_0537d558 == (long *)0x0) || ((int)DAT_0537d558[0x10] != 3)) ||
       (*(byte *)(*DAT_0537d558 + 0x476) < 2)) {
      if (*(int *)((long)param_1 + 0x26cc) == 0x18) {
        (**(code **)(*param_1 + 0xb0))(param_1);
        return 1;
      }
      if (param_1[0x2d0] == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(param_1[0x2d0] + 0x570);
      }
      FUN_0345b550(uVar1,0);
      if (*(int *)((long)param_1 + (ulong)*(byte *)(param_1 + 0x40) * 4 + 0x1f0) == -1) {
        *(undefined4 *)((long)param_1 + (ulong)*(byte *)(param_1 + 0x40) * 4 + 0x1f0) =
             *(undefined4 *)((long)param_1 + 0x26cc);
        return 1;
      }
      return 1;
    }
    if (*(int *)((long)param_1 + 0x25fc) == 3) {
      uVar2 = 0x5d;
    }
    else {
      uVar2 = 0x5c;
    }
    *(undefined4 *)(param_1 + 0x4db) = uVar2;
    uVar2 = 0x13;
  }
  else {
    uVar2 = (undefined4)param_1[0x4d9];
  }
  *param_2 = uVar2;
  return 1;
}

