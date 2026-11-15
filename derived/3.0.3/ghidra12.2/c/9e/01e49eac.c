
uint FUN_01e49eac(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = FUN_0076ae60();
  if ((uVar1 & 1) != 0) {
    if ((*(int *)(param_1 + 0x4b8) == 0) || (*(int *)(param_1 + 0x378) != 0x23)) {
      puVar2 = &DAT_040a6963;
    }
    else {
      puVar2 = &DAT_040ae7d8;
    }
    FUN_038d13f0(param_2,"Busy[%s]\n",puVar2);
  }
  return uVar1 & 1;
}

