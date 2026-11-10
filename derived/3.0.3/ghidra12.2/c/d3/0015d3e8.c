
undefined8 FUN_0015d3e8(long *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 auStack_b0 [128];
  long local_18;
  
  FUN_00158f30(param_1,0);
  uVar1 = FUN_00165ac4(param_1,0);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((-1 < *(char *)((long)param_1 + 0x41e)) &&
     ((((int)param_1[0x2f] != 2 || ((char)param_1[0x83] != '\0')) &&
      (uVar2 = FUN_00166714(param_1), (uVar2 & 1) == 0)))) {
    lVar3 = *param_1;
    if ((*(byte *)(lVar3 + 0xf66) >> 5 & 1) != 0) {
      if ((*(byte *)((long)param_1 + 0x41d) >> 2 & 1) == 0) {
        local_b8 = 0x34504354;
      }
      else {
        local_b8 = 0x36504354;
      }
      local_b4 = 0;
      memset(auStack_b0,0,0x80);
      FUN_001460b8(auStack_b0,0x80,"PROXY %s %s %s %li %li\r\n",&local_b8,lVar3 + 0x16a0,
                   lVar3 + 0x1668,*(undefined8 *)(lVar3 + 0x16d0),*(undefined8 *)(lVar3 + 0x1698));
      local_18 = FUN_00143330(1,0x18);
      if (local_18 == 0) {
        return 0x1b;
      }
      uVar1 = FUN_0015e3d4(&local_18,auStack_b0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_0015e108(&local_18,param_1,*param_1 + 0x1638,0,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    if ((*(byte *)(param_1[0x89] + 0x80) >> 1 & 1) == 0) {
      *param_2 = 1;
    }
    else {
      uVar1 = FUN_0015d55c(param_1,param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
  }
  return 0;
}

