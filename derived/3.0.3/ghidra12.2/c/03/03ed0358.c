
undefined8
FUN_03ed0358(undefined8 param_1,undefined8 *param_2,long param_3,long *param_4,undefined2 param_5,
            uint param_6)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 local_70;
  long lStack_68;
  
  uVar7 = (ulong)param_6;
  uVar1 = uVar7;
  if (3 < param_6) {
    uVar1 = 0;
  }
  plVar5 = *(long **)(param_3 + uVar1 * 8);
  if (plVar5 != (long *)0x0) {
    puVar6 = (undefined8 *)(param_3 + 0x28) + uVar7;
    if (3 < param_6) {
      puVar6 = (undefined8 *)(param_3 + 0x28);
    }
    puVar6 = (undefined8 *)*puVar6;
    *(undefined4 *)((long)puVar6 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    FUN_03ed0160(plVar5,param_2,puVar6);
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0xf) = 0xff;
    puVar6[0x10] = 0xbf800000;
    puVar6[0x11] = 0xbf800000bf800000;
    *(undefined4 *)((long)puVar6 + 0x7c) = 0;
    *(undefined2 *)((long)puVar6 + 0x7a) = 0;
    *(undefined4 *)(puVar6 + 10) = 0;
    *(undefined8 *)((long)puVar6 + 0x54) = 0;
    *(undefined2 *)((long)puVar6 + 0x5c) = 0;
    puVar6[0x12] = 0;
    puVar6[4] = 0xffffffffffffffff;
    puVar6[5] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[0xc] = 0xffffffff;
    puVar6[0xd] = 0;
  }
  uVar4 = FUN_03ebfbe0(param_2[1],param_4,param_2[3],param_3);
  puVar6 = (undefined8 *)(param_3 + 0x28) + uVar7;
  if (3 < param_6) {
    puVar6 = (undefined8 *)(param_3 + 0x28);
  }
  *puVar6 = uVar4;
  puVar2 = (undefined2 *)(param_3 + 0x20) + uVar7;
  if (3 < param_6) {
    puVar2 = (undefined2 *)(param_3 + 0x20);
  }
  *(long **)(param_3 + uVar1 * 8) = param_4;
  *puVar2 = param_5;
  if (plVar5 == param_4) {
    local_70 = *param_2;
    lStack_68 = param_2[1];
    uVar3 = (**(code **)(*param_4 + 0x78))
                      (*(undefined4 *)(lStack_68 + 0xa8),param_4,&local_70,uVar4);
    *(undefined4 *)(param_2[3] + 0x4c) = uVar3;
  }
  return uVar4;
}

