
uint FUN_008c85f8(long param_1,byte *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte local_28 [4];
  undefined4 local_24;
  
  uVar2 = *(uint *)(param_1 + 0x410);
  if (uVar2 == 0) {
    uVar4 = FUN_00a738a0(param_2,0);
    if ((uVar4 & 1) != 0) {
      uVar2 = *(uint *)(param_1 + 0x410);
      goto LAB_008c862c;
    }
  }
  else {
LAB_008c862c:
    if (((uVar2 & 0xfffffffe) == 0x1a) && (DAT_04c487d4 != -1)) {
      local_24 = 1;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 1 & 1) != 0) goto LAB_008c86d8;
    }
    if (uVar2 != 0x18) {
      if (uVar2 != 0xc) {
        uVar2 = 0;
        goto LAB_008c86e4;
      }
      local_28[0] = *param_2;
      if (7 < local_28[0]) {
        local_28[0] = 0xff;
      }
      uVar2 = FUN_033f97e0();
      uVar4 = FUN_00a738a0(local_28,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_00a738a0(local_28,0);
        uVar2 = uVar2 & uVar3;
        goto LAB_008c86e4;
      }
    }
  }
LAB_008c86d8:
  uVar2 = 1;
LAB_008c86e4:
  return uVar2 & 1;
}

