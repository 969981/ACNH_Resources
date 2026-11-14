
void FUN_01921fb0(uint *param_1,uint param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined *local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined4 *puStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined3 uStack_e0;
  undefined1 local_dd;
  undefined1 local_a5;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined4 local_70;
  
  uVar3 = *param_1;
  iVar6 = param_2 - uVar3;
  if ((int)param_2 < (int)uVar3) {
    if (param_2 < uVar3 || iVar6 == 0) {
      lVar5 = (long)(int)param_2;
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar5 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar5 = lVar5 + 1;
        *puVar4 = *(undefined8 *)(param_1 + 4);
        *(undefined8 **)(param_1 + 4) = puVar4;
      } while (lVar5 < (int)*param_1);
      *param_1 = param_2;
    }
  }
  else if (iVar6 != 0 && (int)uVar3 <= (int)param_2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      uStack_128 = *(undefined8 *)(param_3 + 8);
      local_100 = *(undefined4 *)(param_3 + 0x20);
      puVar4 = *(undefined8 **)(param_1 + 4);
      uStack_118 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar4;
      }
      local_130 = puVar1;
      local_120 = puVar1;
      local_110 = puVar1;
      uStack_108 = uStack_118;
      FUN_01907f30(puVar4,&local_130,param_4);
      *puVar4 = &PTR_FUN_049db838;
      local_a5 = 0;
      local_dd = 0;
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_98 = "mGroupName";
      puStack_88 = &DAT_0407ebb1;
      puStack_78 = &DAT_0407ebb1;
      local_70 = 8;
      local_e8 = 0x40;
      local_e4 = 0x616e6e55;
      uStack_e0 = 0x64656d;
      local_f8 = puVar2;
      puStack_f0 = &local_e4;
      local_90 = local_a0;
      local_80 = local_a0;
      FUN_00744dd0(puVar4 + 0xa5,&local_a0,&local_f8,puVar4);
      *puVar4 = &PTR_FUN_049db6b0;
      if ((int)*param_1 < (int)param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
        *param_1 = *param_1 + 1;
      }
      iVar6 = iVar6 + -1;
      *(uint *)(puVar4 + 4) = *(uint *)(puVar4 + 4) & 0xfffffffc;
    } while (iVar6 != 0);
  }
  return;
}

