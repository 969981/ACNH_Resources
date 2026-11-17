
void FUN_02b83e94(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x550) == 0x1f) {
    if (*(int *)(param_1 + 0xc7c) != 0) {
      local_28 = 0;
      local_30 = 0;
      FUN_02a8f1dc(param_1 + 0xc70,&local_30);
      if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
         (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
        uVar2 = 0xc3fa0000;
      }
      else {
        local_8[0] = 0;
        if (DAT_04c487d4 == -1) {
          local_4 = 7;
        }
        else {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          local_4 = 7;
          if ((*puVar1 & 2) != 0) {
            local_4 = 5;
          }
        }
        uVar2 = FUN_00962700(*(long *)(DAT_04cfae30 + 0xa8),&local_30,&local_4,1,local_8);
      }
      local_30 = CONCAT44(uVar2,(undefined4)local_30);
      FUN_03699270(param_1 + 0x558,&local_30);
    }
  }
  return;
}

