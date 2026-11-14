
undefined8 FUN_01c477b0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bb4828;
  if (0 < *(int *)(param_1 + 0x78)) {
    uVar6 = 0;
    local_24 = param_2;
    do {
      if (uVar6 < *(uint *)(param_1 + 0x58)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x60) + uVar6 * 8);
      }
      else {
        lVar3 = 0;
      }
      uVar4 = (**(code **)(*(long *)(lVar3 + 0x60) + 0x118))((long *)(lVar3 + 0x60),&local_24);
      if ((uVar4 & 1) != 0) {
        if (uVar6 < *(uint *)(param_1 + 0x58)) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x60) + uVar6 * 8);
        }
        else {
          lVar3 = 0;
        }
        uVar5 = *(undefined8 *)puVar1;
        puVar2 = (undefined2 *)(**(code **)(*(long *)(lVar3 + 0x30) + 0xf0))();
        local_48 = *puVar2;
        local_46 = 0;
        local_44 = 0;
        FUN_0277d4ac(&local_48);
        uVar4 = FUN_01c27f3c(uVar5,&local_48,1);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x78));
  }
  return 0;
}

