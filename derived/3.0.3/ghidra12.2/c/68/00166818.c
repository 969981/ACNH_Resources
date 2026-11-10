
undefined8 FUN_00166818(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x4c8);
  FUN_00143a90((undefined8 *)(param_2 + 0x4c8),*(undefined8 *)(param_2 + 0x4d0),param_1,
               param_1 + 0x30);
  if ((**(int **)(param_2 + 0x680) == 1) &&
     (puVar1 = *(undefined8 **)(param_2 + 0x4c8), puVar2 != puVar1)) {
    *(byte *)(param_2 + 0x68c) = *(byte *)(param_2 + 0x68c) & 0xfb;
    FUN_00147570(*puVar1,0,6);
  }
  return 0;
}

