
void FUN_01649400(uint *param_1,uint param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar3 = PTR_PTR_04bb2238;
  uVar2 = *param_1;
  iVar6 = param_2 - uVar2;
  if ((int)param_2 < (int)uVar2) {
    if (param_2 < uVar2 || iVar6 == 0) {
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
  else if (iVar6 != 0 && (int)uVar2 <= (int)param_2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uStack_80 = *(undefined8 *)(param_3 + 8);
      uStack_70 = *(undefined8 *)(puVar3 + 8);
      local_58 = *(undefined4 *)(param_3 + 0x20);
      puVar4 = *(undefined8 **)(param_1 + 4);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar4;
      }
      local_88 = puVar1;
      local_78 = puVar1;
      local_68 = puVar1;
      uStack_60 = uStack_70;
      FUN_01646578(puVar4,&local_88,param_4);
      *puVar4 = &PTR_LAB_049b60e8;
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

