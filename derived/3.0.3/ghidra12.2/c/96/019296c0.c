
void FUN_019296c0(int *param_1,uint param_2,int *param_3,long param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  uint local_68;
  
  puVar4 = PTR_PTR_04bb2238;
  puVar3 = PTR_DAT_04bb2020;
  if (0 < (int)param_2) {
    uVar6 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    do {
      local_90 = *(long *)(param_4 + 8);
      uStack_80 = *(undefined8 *)(puVar4 + 8);
      local_68 = *(uint *)(param_4 + 0x20);
      local_98 = puVar1;
      local_88 = puVar1;
      local_78 = puVar1;
      uStack_70 = uStack_80;
      if (*param_1 < param_1[1]) {
        plVar5 = *(long **)(param_1 + 4);
        if (plVar5 != (long *)0x0) {
          *(long *)(param_1 + 4) = *plVar5;
        }
        *plVar5 = (long)puVar2;
        (**(code **)(puVar3 + 0x28))(&local_98);
        plVar5[3] = 0;
        plVar5[1] = local_90;
        plVar5[2] = 0;
        plVar5[5] = 0;
        *(undefined4 *)((long)plVar5 + 0x24) = param_5;
        if ((local_68 >> 7 & 1) == 0) {
          *(undefined4 *)(plVar5 + 5) = param_5;
        }
        *(uint *)(plVar5 + 4) = local_68 & 0xfeffffff;
        *plVar5 = (long)&DAT_049dd518;
        if (*param_1 < param_1[1]) {
          *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar5;
          *param_1 = *param_1 + 1;
        }
      }
      else {
        plVar5 = (long *)0x0;
      }
      if ((long)uVar6 < (long)*param_3) {
        (**(code **)(*plVar5 + 0x98))(plVar5,*(undefined8 *)(*(long *)(param_3 + 2) + uVar6 * 8));
      }
      uVar6 = uVar6 + 1;
      *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
    } while (param_2 != uVar6);
  }
  return;
}

