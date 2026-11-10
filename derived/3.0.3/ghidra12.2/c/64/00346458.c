
bool FUN_00346458(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = (undefined4 *)
           (**(code **)(**(long **)(lVar2 + 0x9b0) + 0x10))(*(long **)(lVar2 + 0x9b0),4,0x80);
  if (puVar1 != (undefined4 *)0x0) {
    *(long *)(lVar2 + 0x9b8) = *(long *)(lVar2 + 0x9b8) + 4;
    *(int *)(lVar2 + 0x9c0) = *(int *)(lVar2 + 0x9c0) + 1;
    *puVar1 = 0;
    *(undefined4 **)(*param_1 + 0x4a8) = puVar1;
    *puVar1 = *(undefined4 *)(*(long *)(*(long *)(*param_1 + 0x240) + 0x348) + 0x1c);
  }
  return puVar1 != (undefined4 *)0x0;
}

