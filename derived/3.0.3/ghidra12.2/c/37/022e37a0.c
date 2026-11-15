
undefined8 FUN_022e37a0(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  int *piVar7;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  uint local_68;
  long local_60;
  undefined1 local_58;
  undefined4 local_54;
  int local_34;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  piVar7 = (int *)(param_1 + 0x38);
  piVar7[0] = 0;
  piVar7[1] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_60 = 0;
  *(undefined4 *)(param_1 + 0x48) = 7;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_78 = *(undefined4 *)(param_2 + 0x10);
  local_80 = *(undefined8 *)(param_2 + 8);
  pbVar6 = (byte *)(param_1 + 0x10);
  local_68 = 0;
  if (*(uint *)(param_2 + 0x24) < 10) {
    local_68 = *(uint *)(param_2 + 0x24);
  }
  local_6c = *(undefined4 *)(param_2 + 0x1c);
  local_74 = *(undefined8 *)(param_2 + 0x14);
  local_58 = 0;
  local_54 = 0;
  if (*pbVar6 < 8) {
    uVar2 = FUN_02582d8c(pbVar6,1);
    puVar1 = PTR_DAT_04bb4fb8;
    if (((uVar2 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) {
      uVar2 = FUN_02582d8c(pbVar6,1);
      if (uVar2 < 8) {
        lVar4 = *(long *)puVar1 + (ulong)uVar2 * 0x13f0;
        lVar5 = 0;
        if (*(char *)(lVar4 + 0x13d4) != '\0') {
          lVar5 = lVar4;
        }
      }
      else {
        lVar5 = 0;
      }
      lVar4 = 0;
      if (lVar5 != 0) {
        lVar4 = lVar5 + 8;
      }
    }
    else {
      lVar4 = 0;
    }
    local_60 = 0;
    if (lVar4 != 0) {
      local_60 = lVar4 + 0x588;
    }
  }
  FUN_022eb410(param_1 + 0x18,&local_80);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if ((*(int *)(param_1 + 0x40) == 0) && (local_34 = *piVar7, local_34 != 0)) goto LAB_022e3914;
  }
  else if (*(uint *)(param_1 + 0x28) < 2) {
LAB_022e3914:
    local_78 = *(undefined4 *)(param_1 + 0x68);
    local_80 = *(undefined8 *)(param_1 + 0x60);
    local_34 = CONCAT31(local_34._1_3_,1);
    uVar3 = FUN_022e26e0(param_1,&local_80,&local_34);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 5;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x1c);
    return 0;
  }
  return 2;
}

