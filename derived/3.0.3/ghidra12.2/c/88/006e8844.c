
undefined8 FUN_006e8844(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined *local_40;
  long lStack_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  lVar3 = *(long *)*param_2;
  *(long *)(param_1 + 0x50) = lVar3;
  lVar2 = param_2[1];
  *(long *)(param_1 + 0x58) = lVar2;
  if (((lVar3 == 0) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x4c) = *PTR_DAT_04bb2950;
  local_30 = PTR_LAB_04bb2a30;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  uStack_28 = 0;
  local_40 = PTR_DAT_04bb2a38 + 0x10;
  lStack_38 = param_1;
  uVar1 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_40,
                       (undefined1 *)(param_1 + 0x4c),0,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return 1;
}

