
undefined1 FUN_03881588(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined2 local_34;
  int local_30 [4];
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
    puVar1 = PTR_DAT_04bcb7d8;
    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x60) + 0x5c) = 0;
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
    if ((uVar2 & 1) != 0) {
      local_38 = *(undefined4 *)(param_1 + 0x18);
      local_40 = PTR_DAT_04bcb830 + 0x10;
      local_34 = *(undefined2 *)(param_1 + 0x1c);
      FUN_03882660(local_30,&local_40);
      if (local_30[0] == 0) {
        (**(code **)(**(long **)(*(long *)puVar1 + 0x60) + 0x20))();
        (**(code **)(**(long **)(*(long *)puVar1 + 0x60) + 0x28))();
        lVar3 = *(long *)puVar1;
        local_30[0] = 0;
        *(long *)(lVar3 + 0x98) = param_1;
        *(uint *)(lVar3 + 0xa4) = *(uint *)(lVar3 + 0xa4) | 1;
        uVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
        if ((uVar2 & 1) != 0) {
          *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
          goto LAB_03881678;
        }
      }
    }
    puVar4 = &DAT_05ae6794;
  }
  else {
LAB_03881678:
    puVar4 = &DAT_05ae6790;
  }
  return *puVar4;
}

