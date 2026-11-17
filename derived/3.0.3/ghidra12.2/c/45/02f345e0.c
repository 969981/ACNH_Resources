
void FUN_02f345e0(long param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  long *plVar7;
  undefined *local_40;
  undefined4 local_38;
  
  bVar1 = *param_2;
  bVar6 = bVar1;
  if (7 < bVar1) {
    bVar6 = 0xff;
  }
  *(byte *)(param_1 + 0x1f8) = bVar6;
  if (bVar1 < 8) {
    uVar3 = FUN_02582d8c(param_1 + 0x1f8,1);
    puVar2 = PTR_DAT_04bb4fb8;
    if (uVar3 < 8) {
      if ((((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0') &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) &&
          (uVar3 = FUN_02582d8c(param_1 + 0x1f8,1), uVar3 < 8)) &&
         (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) {
        uVar3 = *(uint *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 8);
        if (9 < (int)uVar3) {
          uVar3 = 10;
        }
        uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        goto LAB_02f346b4;
      }
    }
  }
  uVar3 = 0;
LAB_02f346b4:
  *(uint *)(param_1 + 0x218) = uVar3;
  if ((*(uint *)(param_1 + 0xa8) < 7) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0xa8) & 0x1f) & 0x58U) != 0)) {
    if (uVar3 == 0) {
      FUN_02f347cc(param_1);
      if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
        *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 1;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x210);
      plVar7 = *(long **)(*(long *)(lVar4 + 0x230) + (ulong)(2 < *(uint *)(lVar4 + 0x228)) * 0x10);
      if (plVar7 != (long *)0x0) {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        if (uVar3 < 10) {
          local_38 = 6;
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
          puVar5 = (undefined8 *)(plVar7[3] + 0x1b8);
        }
        else {
          local_38 = 7;
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
          puVar5 = (undefined8 *)(plVar7[3] + 0x1c0);
        }
        (*(code *)*puVar5)(plVar7[1]);
        lVar4 = *(long *)(param_1 + 0x210);
        uVar3 = *(uint *)(param_1 + 0x218);
      }
      *(uint *)(lVar4 + 0x260) = uVar3;
      *(uint *)(lVar4 + 0x264) = uVar3;
      *(undefined4 *)(lVar4 + 0x268) = 0;
      *(undefined1 *)(lVar4 + 0x290) = 0;
      *(undefined1 *)(lVar4 + 0x2a0) = 0;
      FUN_03125a4c();
    }
  }
  return;
}

