
uint FUN_01e28188(void)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
      (*(int *)(DAT_0537d558 + 0x80) != 1)) &&
     ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d &&
      ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c || (*(int *)(DAT_05351250 + 0xb0) == 0)))))
     ) {
    uVar4 = (ulong)(short)DAT_04c487d4;
    if (uVar4 == 0xffffffffffffffff) {
LAB_01e282fc:
      local_18 = 0x14;
      uVar4 = FUN_0290cbcc(&local_18);
      if ((uVar4 & 1) == 0) {
        local_1c = 0x17;
        uVar3 = FUN_0290cbcc(&local_1c);
        uVar3 = uVar3 ^ 1;
        goto LAB_01e28314;
      }
    }
    else {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)(short)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) == 0) {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
        if (0xff < DAT_04c487d4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 5 & 1) == 0) {
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
          if (0xff < DAT_04c487d4) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 0x11 & 1) == 0) {
            local_14 = 0x15;
            puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
            if (0xff < DAT_04c487d4) {
              puVar2 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar2 >> 0x15 & 1) == 0) goto LAB_01e282fc;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_01e28314:
  return uVar3 & 1;
}

