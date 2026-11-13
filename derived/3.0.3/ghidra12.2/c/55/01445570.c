
void FUN_01445570(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint local_14;
  
  puVar1 = (uint *)(param_1 + 0x75);
  if ((*puVar1 & 1) == 0) {
    if ((*puVar1 >> 1 & 1) == 0) goto LAB_01445658;
    uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1);
    FUN_01434cb0(param_1,1,uVar2 & 1,0);
    local_14 = 1;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1);
    FUN_01434cb0(param_1,0,uVar2 & 1,0);
    local_14 = 0;
  }
  if ((local_14 < 3) && (local_14 < 0x20)) {
    *puVar1 = *puVar1 & (1 << (ulong)local_14 ^ 0xffffffffU);
  }
LAB_01445658:
  uVar3 = (**(code **)(*param_1 + 0x338))(param_1);
  if ((uVar3 & 1) != 0) {
    if (DAT_0556aa70 != 0) {
      *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 0x10;
    }
    if ((int)param_1[0x6d] != 4) {
      FUN_03ebb160(param_1 + 0x6c);
    }
  }
  return;
}

