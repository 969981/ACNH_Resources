
bool FUN_01de4130(long param_1,uint param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_04bb36f0;
  uVar5 = param_2;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= param_2) {
    uVar5 = 0;
  }
  cVar1 = *(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar5 * 0x38 + 0x2c);
  if (cVar1 != '\0') {
    if (DAT_05384b38 == 0) {
      *(undefined1 *)(param_1 + 0x39) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x39) = 0;
      lVar8 = *(long *)(*(long *)PTR_DAT_04bb21c8 + 0x2a8);
      *(undefined8 *)(lVar8 + 0x58) = 0;
      *(undefined8 *)(lVar8 + 0x60) = 0;
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(undefined8 *)(lVar8 + 0x70) = 0;
      *(undefined8 *)(lVar8 + 200) = 0;
      *(undefined8 *)(lVar8 + 0x78) = 0;
      *(undefined8 *)(lVar8 + 0x80) = 0;
      *(undefined4 *)(lVar8 + 0xd0) = 0;
      *(undefined8 *)(lVar8 + 0x88) = 0;
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0xa0) = 0;
      *(undefined8 *)(lVar8 + 0xa8) = 0;
      *(undefined8 *)(lVar8 + 0xb0) = 0;
      *(undefined8 *)(lVar8 + 0x50) = 0;
      *(undefined8 *)(lVar8 + 0xb8) = 0;
      *(undefined8 *)(lVar8 + 0xc0) = 0;
      **(undefined1 **)(lVar8 + 0xe0) = 0;
      if (0 < DAT_05384b38) {
        uVar5 = *(uint *)(lVar8 + 0xd0);
        lVar4 = 0;
        do {
          uVar7 = (ulong)uVar5;
          if (0xf < uVar5) {
            uVar7 = 0;
          }
          lVar6 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          ((undefined8 *)(lVar8 + 0x50))[uVar7] = **(undefined8 **)(DAT_05384b40 + lVar6);
          lVar6 = (long)DAT_05384b38;
          uVar5 = *(int *)(lVar8 + 0xd0) + 1;
          *(uint *)(lVar8 + 0xd0) = uVar5;
        } while (lVar4 < lVar6);
      }
      *(undefined1 *)(lVar8 + 0x4c) = *PTR_DAT_04bb2950;
      local_50 = PTR_LAB_04bb2a30;
      *(undefined2 *)(lVar8 + 0x4d) = 0;
      uStack_48 = 0;
      local_60 = PTR_DAT_04bb2a38 + 0x10;
      lStack_58 = lVar8;
      uVar3 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_60,
                           (undefined1 *)(lVar8 + 0x4c),0,0,0);
      lVar4 = *(long *)puVar2;
      *(undefined4 *)(lVar8 + 0x44) = uVar3;
      *(uint *)(param_1 + 0x14) = param_2;
      *(undefined8 *)(param_1 + 0x18) = &PTR_LAB_04a5bc48;
      *(long *)(param_1 + 0x20) = lVar8;
      *(long *)(param_1 + 0x28) = param_1;
      *(undefined1 *)(param_1 + 0x10) = 1;
      uVar5 = param_2;
      if (*(uint *)(lVar4 + 0x20) <= param_2) {
        uVar5 = 0;
      }
      *(undefined8 **)(*(long *)(lVar4 + 0x28) + (long)(int)uVar5 * 0x38 + 0x18) =
           (undefined8 *)(param_1 + 0x18);
      uVar5 = param_2;
      if (*(uint *)(lVar4 + 0x20) <= param_2) {
        uVar5 = 0;
      }
      *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar5 * 0x38 + 0x28) = 1;
      uVar5 = param_2;
      if (*(uint *)(lVar4 + 0x20) <= param_2) {
        uVar5 = 0;
      }
      *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar5 * 0x38 + 0x2c) = 0;
      uVar5 = param_2;
      if (*(uint *)(lVar4 + 0x20) <= param_2) {
        uVar5 = 0;
      }
      *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar5 * 0x38 + 0x2d) = 0;
      uVar5 = param_2;
      if (*(uint *)(lVar4 + 0x20) <= param_2) {
        uVar5 = 0;
      }
      *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar5 * 0x38) = 0x18;
      if (*(uint *)(lVar4 + 0x20) <= param_2) {
        param_2 = 0;
      }
      *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)param_2 * 0x38 + 0x2f) = 0;
    }
  }
  return cVar1 != '\0';
}

