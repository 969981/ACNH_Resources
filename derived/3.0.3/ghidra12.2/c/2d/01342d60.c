
void FUN_01342d60(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined *local_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88 [2];
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  undefined2 local_6a;
  undefined2 local_68;
  
  puVar6 = PTR_DAT_04bb2010;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x150) != 0)) {
    uVar3 = *(uint *)(param_1 + 0x260);
    if (0 < (int)uVar3) {
      uVar11 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      puVar2 = PTR_DAT_04bc4608 + 0x10;
      do {
        if (uVar11 < *(uint *)(param_1 + 0x240)) {
          lVar8 = *(long *)(*(long *)(param_1 + 0x248) + uVar11 * 8);
        }
        else {
          lVar8 = 0;
        }
        puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x60) + 0xf0))();
        if (uVar11 < *(uint *)(param_1 + 0x240)) {
          lVar8 = *(long *)(*(long *)(param_1 + 0x248) + uVar11 * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar4 = *puVar9;
        puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x90) + 0xf0))((long *)(lVar8 + 0x90))
        ;
        uVar5 = *puVar9;
        if (uVar11 < *(uint *)(param_1 + 0x240)) {
          lVar8 = *(long *)(*(long *)(param_1 + 0x248) + uVar11 * 8);
        }
        else {
          lVar8 = 0;
        }
        pbVar10 = (byte *)(**(code **)(*(long *)(lVar8 + 0xc0) + 0xf0))();
        local_68 = 0;
        local_88[0] = 0x1b;
        local_70 = (uint)*pbVar10;
        if (uVar11 < *(uint *)(param_1 + 0x240)) {
          lVar8 = *(long *)(*(long *)(param_1 + 0x248) + uVar11 * 8);
        }
        else {
          lVar8 = 0;
        }
        local_80 = puVar1;
        local_78 = uVar4;
        uStack_74 = uVar5;
        puVar7 = (undefined2 *)(**(code **)(*(long *)(lVar8 + 0x30) + 0xf0))();
        local_6a = *puVar7;
        local_a0 = puVar6 + 0x10;
        local_a8 = 0;
        local_a4 = 0;
        local_90 = 0;
        local_8c = 0;
        uStack_98 = 0;
        local_b0 = puVar2;
        FUN_02a8f958(&local_b0,local_88);
        FUN_02a59250(param_2 + 0x148,&local_b0);
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
  }
  return;
}

