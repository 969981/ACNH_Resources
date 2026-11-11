
void FUN_004ae1f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_004867c0();
  param_1[3] = 0;
  param_1[4] = param_2;
  *param_1 = &PTR_LAB_04867f38;
  if (param_2 != 0) {
    FUN_004435a0(param_2);
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 7);
  if (param_1[4] == 0) {
    puVar1 = (undefined8 *)FUN_00438810(0x30);
    FUN_00486770();
    *puVar1 = &PTR_LAB_04867fb8;
    FUN_0049be30(puVar1 + 3,0,0);
    puVar1[4] = param_1;
    *(undefined4 *)(puVar1 + 5) = 0;
    lVar2 = param_1[4];
    param_1[4] = puVar1;
    if (lVar2 != 0) {
      FUN_004435c0();
      return;
    }
  }
  return;
}

