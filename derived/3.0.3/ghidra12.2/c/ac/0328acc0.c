
void FUN_0328acc0(long param_1,undefined8 *param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04bc8f38;
  puVar4 = PTR_DAT_04bc8f30;
  puVar3 = PTR_DAT_04bb2120;
  local_48 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if (param_3 != 0) {
    puVar2 = param_2 + param_3;
    puVar1 = PTR_DAT_04bc8e68 + 0x10;
    do {
      puStack_68 = puVar3;
      if ((undefined *)*param_2 != (undefined *)0x0) {
        puStack_68 = (undefined *)*param_2;
      }
      local_70 = puVar1;
      plVar7 = (long *)FUN_032d3050(&local_48,local_48,&local_70);
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined8 *)puVar4 = 0;
        __cxa_guard_release(puVar5);
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
      if (puVar8 != (undefined8 *)puVar4) {
        do {
          puVar8 = (undefined8 *)*puVar8;
        } while (puVar8 != (undefined8 *)puVar4 && puVar8 != (undefined8 *)0x0);
      }
      param_2 = param_2 + 1;
      plVar7[10] = *param_4;
      *(byte *)(plVar7 + 0xb) = *(byte *)(plVar7 + 0xb) | 0x10;
    } while (param_2 != puVar2);
  }
  FUN_03288880(param_1);
  return;
}

