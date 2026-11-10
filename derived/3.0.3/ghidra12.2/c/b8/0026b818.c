
void FUN_0026b818(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(long *)(param_2 + 0x80) != 0) {
    *(undefined1 *)(*(long *)(param_2 + 0x80) + 0xb9) = 1;
  }
  if (*(int *)(param_2 + 0x108) == 4) {
    if (*(int *)(param_2 + 0xd8) == 1) {
      FUN_002210f0();
      local_24 = 0;
      goto LAB_0026b864;
    }
  }
  local_24 = 0x10c08;
LAB_0026b864:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

