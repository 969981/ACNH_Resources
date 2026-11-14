
void FUN_01a0e3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                 uint param_5,long param_6)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  puVar3 = PTR_PTR_04bb2238;
  uVar2 = *param_4;
  if ((int)param_5 < (int)uVar2) {
    if (param_5 <= uVar2) {
      lVar6 = (long)(int)param_5;
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_4 + 2) + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = *(undefined8 *)(param_4 + 4);
        *(undefined8 **)(param_4 + 4) = puVar4;
      } while (lVar6 < (int)*param_4);
      *param_4 = param_5;
    }
  }
  else {
    iVar5 = param_5 - uVar2;
    if (iVar5 != 0 && (int)uVar2 <= (int)param_5) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_5c = param_1;
      uStack_58 = param_2;
      local_54 = param_3;
      do {
        uStack_90 = *(undefined8 *)(param_6 + 8);
        uStack_80 = *(undefined8 *)(puVar3 + 8);
        local_68 = *(undefined4 *)(param_6 + 0x20);
        puVar4 = *(undefined8 **)(param_4 + 4);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(param_4 + 4) = *puVar4;
        }
        local_98 = puVar1;
        local_88 = puVar1;
        local_78 = puVar1;
        uStack_70 = uStack_80;
        FUN_006fdfc0(puVar4,&local_98,&local_5c,0);
        *puVar4 = &DAT_049f9d00;
        if ((int)*param_4 < (int)param_4[1]) {
          *(undefined8 **)(*(long *)(param_4 + 2) + (long)(int)*param_4 * 8) = puVar4;
          *param_4 = *param_4 + 1;
        }
        iVar5 = iVar5 + -1;
        *(uint *)(puVar4 + 4) = *(uint *)(puVar4 + 4) & 0xfffffffc;
      } while (iVar5 != 0);
    }
  }
  return;
}

