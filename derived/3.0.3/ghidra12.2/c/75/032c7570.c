
void FUN_032c7570(long param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  FUN_032c6ccc();
  uVar7 = (ulong)*(ushort *)((long)param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x50) = 1;
  puVar3 = PTR_DAT_04bc8e68;
  puVar2 = PTR_DAT_04bb2120;
  if (uVar7 == 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else {
    uVar6 = 0;
    puVar5 = PTR_DAT_04bc8e68 + 0x10;
    do {
      if (uVar6 < *(ushort *)((long)param_2 + 0x12)) {
        puVar4 = (undefined *)(param_2[6] + (ulong)*(uint *)(param_2[6] + uVar6 * 4));
      }
      else {
        puVar4 = (undefined *)0x0;
      }
      puVar1 = puVar2;
      if (puVar4 != (undefined *)0x0) {
        puVar1 = puVar4;
      }
      puVar4 = (undefined *)FUN_00364e0c(param_2,uVar6 & 0xffffffff);
      puStack_78 = puVar2;
      if (puVar4 != (undefined *)0x0) {
        puStack_78 = puVar4;
      }
      uStack_88 = *(undefined8 *)(param_3 + 8);
      puStack_98 = puVar2;
      if ((undefined *)*param_2 != (undefined *)0x0) {
        puStack_98 = (undefined *)*param_2;
      }
      local_a0 = puVar5;
      local_90 = puVar5;
      local_80 = puVar5;
      local_70 = puVar5;
      puStack_68 = puVar1;
      FUN_032c7320(param_1,&local_70,&local_80,&local_90,&local_a0);
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
    if (*(char *)(param_1 + 0x50) != '\0') {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 0x50) = 0;
      do {
        puStack_a8 = puVar2;
        if ((undefined *)*param_2 != (undefined *)0x0) {
          puStack_a8 = (undefined *)*param_2;
        }
        if (uVar6 < *(ushort *)((long)param_2 + 0x12)) {
          puVar5 = (undefined *)(param_2[6] + (ulong)*(uint *)(param_2[6] + uVar6 * 4));
        }
        else {
          puVar5 = (undefined *)0x0;
        }
        local_c0 = puVar3 + 0x10;
        puStack_b8 = puVar2;
        if (puVar5 != (undefined *)0x0) {
          puStack_b8 = puVar5;
        }
        local_b0 = puVar3 + 0x10;
        FUN_032c7160(param_1,&local_b0,&local_c0);
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
  }
  return;
}

