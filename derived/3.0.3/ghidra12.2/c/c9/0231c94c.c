
void FUN_0231c94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  short sVar2;
  ulong uVar3;
  uint uVar4;
  byte local_38 [4];
  undefined4 local_34;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_0231c9c4:
    local_38[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    FUN_02669430(local_38);
    uVar3 = FUN_025579bc((byte *)(param_1 + 0x1ee8),param_2,param_3);
    uVar4 = *(uint *)(param_1 + 0x17cc);
    if ((uVar3 & 1) != 0) {
      uVar4 = uVar4 | 0x40;
      goto LAB_0231ca0c;
    }
  }
  else {
    local_34 = 0x15;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_0231c9c4;
    uVar4 = *(uint *)(param_1 + 0x17cc);
  }
  uVar4 = uVar4 & 0xffffffbf;
LAB_0231ca0c:
  *(uint *)(param_1 + 0x17cc) = uVar4;
  return;
}

