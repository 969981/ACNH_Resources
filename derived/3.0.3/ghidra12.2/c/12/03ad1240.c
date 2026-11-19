
void FUN_03ad1240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  
  FUN_039424e0(param_2,param_3,param_4);
  FUN_039427b0(0x3f800000,param_2,param_1 + 0x4c,param_1 + 0x58,param_5);
  FUN_039427b0(0x3f800000,param_2,param_1 + 0x58,param_1 + 100,param_5);
  FUN_039427b0(0x3f800000,param_2,param_1 + 100,param_1 + 0x70,param_5);
  FUN_039427b0(0x3f800000,param_2,param_1 + 0x70,param_1 + 0x4c,param_5);
  FUN_039427b0(0x3f800000,param_2,param_1 + 0x7c,param_1 + 0x88,param_5);
  FUN_039427b0(0x3f800000,param_2,param_1 + 0x88,param_1 + 0x94,param_5);
  FUN_039427b0(0x3f800000,param_2,param_1 + 0x94,param_1 + 0xa0,param_5);
  FUN_039427b0(0x3f800000,param_2,param_1 + 0xa0,param_1 + 0x7c,param_5);
  uVar4 = (ulong)*(uint *)(param_1 + 0x48);
  puVar1 = (uint *)(param_1 + 0x18);
  puVar8 = puVar1 + uVar4 * 6;
  if (1 < *(uint *)(param_1 + 0x48)) {
    puVar8 = puVar1;
  }
  if (0 < (int)puVar8[4]) {
    uVar7 = 0;
    do {
      uVar2 = uVar7;
      if (*puVar8 <= uVar7) {
        uVar2 = 0;
      }
      puVar8 = *(uint **)(*(long *)(puVar8 + 2) + (ulong)uVar2 * 8);
      uVar2 = puVar8[4];
      if (uVar2 != 0) {
        uVar6 = uVar2 - 1;
        if (*puVar8 <= uVar6) {
          uVar6 = 0;
        }
        puVar5 = (undefined8 *)(*(long *)(puVar8 + 2) + (long)(int)uVar6 * 0xc);
        local_80 = *puVar5;
        local_78 = *(undefined4 *)(puVar5 + 1);
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            local_90 = &DAT_3f8000003f800000;
            uStack_88 = 0x3f80000000000000;
            uVar3 = uVar6;
            if (*puVar8 <= uVar6) {
              uVar3 = 0;
            }
            puVar5 = (undefined8 *)(*(long *)(puVar8 + 2) + (ulong)uVar3 * 0xc);
            FUN_039427b0(0x3f800000,param_2,&local_80,puVar5,&local_90);
            local_78 = *(undefined4 *)(puVar5 + 1);
            uVar6 = uVar6 + 1;
            local_80 = *puVar5;
          } while (uVar2 != uVar6);
          uVar4 = (ulong)*(uint *)(param_1 + 0x48);
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar1 + uVar4 * 6;
      if (1 < uVar4) {
        puVar8 = puVar1;
      }
    } while ((int)uVar7 < (int)puVar8[4]);
  }
  return;
}

