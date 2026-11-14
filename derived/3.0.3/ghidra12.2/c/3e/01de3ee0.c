
undefined8 FUN_01de3ee0(long param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined *local_68;
  long lStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  
  puVar5 = PTR_DAT_04bb36f0;
  puVar4 = PTR_DAT_04bb2950;
  puVar3 = PTR_DAT_04bb21c8;
  lVar7 = *(long *)PTR_DAT_04bb36f0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar8 = *(uint *)(lVar7 + 0x20);
    lVar7 = *(long *)(lVar7 + 0x28);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar8 = *(uint *)(lVar7 + 0x20);
    lVar7 = *(long *)(lVar7 + 0x28);
    if (uVar8 <= uVar1) {
      uVar1 = 0;
    }
    if (*(char *)(lVar7 + (long)(int)uVar1 * 0x38 + 0x2c) == '\0') {
      return 0;
    }
  }
  uVar1 = param_2;
  if (uVar8 <= param_2) {
    uVar1 = 0;
  }
  if (*(char *)(lVar7 + (long)(int)uVar1 * 0x38 + 0x2c) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x39) = 1;
  uVar2 = *puVar4;
  lVar7 = *(long *)(*(long *)puVar3 + 0x2a0);
  *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(lVar7 + 0x4c) = uVar2;
  local_58 = PTR_LAB_04bb2a30;
  *(undefined2 *)(lVar7 + 0x4d) = 0;
  local_68 = PTR_DAT_04bb2a38 + 0x10;
  uStack_50 = 0;
  lStack_60 = lVar7;
  uVar6 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_68,
                       (undefined1 *)(lVar7 + 0x4c),0,0,0);
  *(undefined4 *)(lVar7 + 0x44) = uVar6;
  *(long *)(param_1 + 0x20) = lVar7;
  *(long *)(param_1 + 0x28) = param_1;
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_04a5bc20;
  lVar7 = *(long *)puVar5;
  *(uint *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x10) = 1;
  uVar8 = param_2;
  if (*(uint *)(lVar7 + 0x20) <= param_2) {
    uVar8 = 0;
  }
  *(undefined8 **)(*(long *)(lVar7 + 0x28) + (long)(int)uVar8 * 0x38 + 0x18) =
       (undefined8 *)(param_1 + 0x18);
  uVar8 = param_2;
  if (*(uint *)(lVar7 + 0x20) <= param_2) {
    uVar8 = 0;
  }
  *(undefined4 *)(*(long *)(lVar7 + 0x28) + (long)(int)uVar8 * 0x38 + 0x28) = 1;
  uVar8 = param_2;
  if (*(uint *)(lVar7 + 0x20) <= param_2) {
    uVar8 = 0;
  }
  *(undefined1 *)(*(long *)(lVar7 + 0x28) + (long)(int)uVar8 * 0x38 + 0x2c) = 0;
  uVar8 = param_2;
  if (*(uint *)(lVar7 + 0x20) <= param_2) {
    uVar8 = 0;
  }
  *(undefined1 *)(*(long *)(lVar7 + 0x28) + (long)(int)uVar8 * 0x38 + 0x2d) = 0;
  uVar8 = param_2;
  if (*(uint *)(lVar7 + 0x20) <= param_2) {
    uVar8 = 0;
  }
  *(undefined4 *)(*(long *)(lVar7 + 0x28) + (long)(int)uVar8 * 0x38) = 0x18;
  if (*(uint *)(lVar7 + 0x20) <= param_2) {
    param_2 = 0;
  }
  *(undefined1 *)(*(long *)(lVar7 + 0x28) + (long)(int)param_2 * 0x38 + 0x2f) = 0;
  if (0 < DAT_05384b38) {
    lVar7 = 0;
    puVar9 = DAT_05384b48;
    do {
      DAT_05384b48 = *(undefined8 **)(DAT_05384b40 + lVar7 * 8);
      lVar7 = lVar7 + 1;
      *DAT_05384b48 = puVar9;
      puVar9 = DAT_05384b48;
    } while (lVar7 < DAT_05384b38);
  }
  DAT_05384b38 = 0;
  return 1;
}

