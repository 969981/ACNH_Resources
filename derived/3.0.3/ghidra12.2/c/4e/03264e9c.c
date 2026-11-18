
bool FUN_03264e9c(long param_1,long param_2)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 local_28;
  undefined1 local_24;
  
  iVar3 = -1;
  puVar1 = &DAT_05586008;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    puVar1 = (undefined2 *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
  }
  local_2c = *puVar1;
  local_2a = *(undefined1 *)(puVar1 + 1);
  local_29 = *(undefined1 *)((long)puVar1 + 3);
  local_30 = 0xffffffff;
  local_28 = *(undefined4 *)(puVar1 + 2);
  local_24 = 2;
  sVar2 = (short)(*(int **)(param_1 + 0x10))[1];
  if (sVar2 != 8) {
    if (sVar2 == 0x100) {
      iVar3 = FUN_03426770(&local_2c,param_2 + 4);
    }
    else if (**(int **)(param_1 + 0x10) == 6) {
      iVar3 = FUN_0343e030(&local_2c,param_2 + 4,0);
      if (iVar3 == 0) {
        iVar3 = FUN_03426770(&local_2c,param_2 + 4);
      }
    }
    else {
      iVar3 = FUN_03427390(&local_30);
    }
  }
  return iVar3 < 1;
}

