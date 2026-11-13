
undefined8 FUN_01433290(long param_1,byte *param_2,uint param_3)

{
  uint *puVar1;
  short sVar2;
  ulong uVar3;
  byte bVar4;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  if (*(char *)(param_1 + 0x30a) != '\0') {
    return 0;
  }
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,3);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      local_38 = *(int *)(*(long *)(param_1 + 0x2e8) + 0x2c8);
      iStack_34 = *(int *)(*(long *)(param_1 + 0x2e8) + 0x2cc);
      local_40 = PTR_DAT_04bb2010 + 0x10;
      if ((((*(int *)(DAT_050d57c8 + 0x28) <= local_38) &&
           (local_38 <= *(int *)(DAT_050d57c8 + 0x38))) &&
          (*(int *)(DAT_050d57c8 + 0x2c) <= iStack_34)) &&
         ((iStack_34 <= *(int *)(DAT_050d57c8 + 0x3c) &&
          (uVar3 = FUN_0118b390(&local_40), (uVar3 & 1) == 0)))) {
        return 0;
      }
    }
  }
  uVar3 = FUN_01433400(param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  bVar4 = *param_2;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)(param_1 + 0x2c4) = bVar4;
  if ((param_3 & 1) != 0) {
    *(uint *)(param_1 + 0x2c0) = *(uint *)(param_1 + 0x2c0) | 0x40;
  }
  *(byte *)(param_1 + 0x309) = *(byte *)(param_1 + 0x308);
  *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) ^ 1;
  return 1;
}

