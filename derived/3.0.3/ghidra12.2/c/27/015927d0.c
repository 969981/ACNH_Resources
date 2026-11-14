
void FUN_015927d0(int *param_1,int param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined4 local_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  puVar2 = PTR_DAT_04bb2020;
  iVar4 = param_2 - *param_1;
  if (iVar4 != 0 && *param_1 <= param_2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uStack_c8 = *(undefined8 *)(param_3 + 8);
      local_a0 = *(undefined4 *)(param_3 + 0x20);
      puVar3 = *(undefined8 **)(param_1 + 4);
      puStack_b8 = PTR_DAT_04c4b988;
      puStack_a8 = PTR_DAT_04c4b988;
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar3;
      }
      local_d0 = puVar1;
      local_c0 = puVar1;
      local_b0 = puVar1;
      FUN_0158dc00(puVar3,&local_d0,&local_c0,param_4);
      *puVar3 = &PTR_LAB_049ac9e0;
      local_98 = puVar2 + 0x10;
      pcStack_90 = "mParam";
      local_68 = 8;
      puStack_80 = &DAT_040f97d6;
      puStack_70 = &DAT_0407ebb1;
      local_88 = local_98;
      local_78 = local_98;
      FUN_0158de64(puVar3 + 0x44,&local_98,puVar3);
      *puVar3 = &PTR_LAB_049add00;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar3;
        *param_1 = *param_1 + 1;
      }
      iVar4 = iVar4 + -1;
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffc;
    } while (iVar4 != 0);
  }
  return;
}

