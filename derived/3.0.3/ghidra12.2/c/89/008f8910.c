
undefined4 FUN_008f8910(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined **local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb3238;
  lVar4 = *(long *)(param_1 + 0x288);
  local_58 = &PTR_FUN_04926aa0;
  local_48 = &local_34;
  if (lVar4 == param_1 + 0x280) {
    puVar3 = &DAT_04c9a0c8;
  }
  else {
    puVar3 = (undefined4 *)(lVar4 + -8);
    uStack_50 = param_2;
    local_34 = param_3;
    do {
      uVar2 = (*(code *)*local_58)(&local_58,puVar3);
      if ((uVar2 & 1) != 0) goto LAB_008f8998;
      lVar4 = *(long *)(lVar4 + 8);
      puVar3 = (undefined4 *)(lVar4 + -8);
    } while (puVar3 != (undefined4 *)(param_1 + 0x278));
    puVar3 = (undefined4 *)puVar1;
  }
LAB_008f8998:
  return *puVar3;
}

