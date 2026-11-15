
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0244b5a8(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte local_14 [4];
  
  local_14[0] = *param_2;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
  uVar1 = DAT_0558600c;
  if (lVar3 == 0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar1;
  }
  else {
    if ((*(long **)(lVar3 + 0x140) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x140), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_028160a8(*(long *)(lVar3 + 0x128) + *(long *)(lVar3 + 0x120));
    uVar1 = puVar5[1];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x140) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x140) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return;
}

