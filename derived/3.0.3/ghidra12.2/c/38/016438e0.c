
void FUN_016438e0(uint *param_1,uint param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined **local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined *puStack_80;
  undefined **local_78;
  undefined *puStack_70;
  undefined4 local_68;
  
  uVar1 = *param_1;
  iVar4 = param_2 - uVar1;
  if ((int)param_2 < (int)uVar1) {
    if (param_2 < uVar1 || iVar4 == 0) {
      lVar3 = (long)(int)param_2;
      do {
        puVar2 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar3 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar3 = lVar3 + 1;
        *puVar2 = *(undefined8 *)(param_1 + 4);
        *(undefined8 **)(param_1 + 4) = puVar2;
      } while (lVar3 < (int)*param_1);
      *param_1 = param_2;
    }
  }
  else if (iVar4 != 0 && (int)uVar1 <= (int)param_2) {
    do {
      uStack_90 = *(undefined8 *)(param_3 + 8);
      local_98 = &PTR_LAB_048f9770;
      local_68 = *(undefined4 *)(param_3 + 0x20);
      puVar2 = *(undefined8 **)(param_1 + 4);
      local_88 = &PTR_LAB_048f9770;
      puStack_80 = PTR_DAT_04c4b988;
      local_78 = &PTR_LAB_048f9770;
      puStack_70 = PTR_DAT_04c4b988;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar2;
      }
      FUN_016014b0(puVar2,&local_98,&local_88,param_4);
      *puVar2 = &PTR_FUN_049b5650;
      if ((int)*param_1 < (int)param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar2;
        *param_1 = *param_1 + 1;
      }
      iVar4 = iVar4 + -1;
      *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) & 0xfffffffc;
    } while (iVar4 != 0);
  }
  return;
}

