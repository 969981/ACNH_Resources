
void FUN_0037374c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00369da0(param_1,&DAT_040a4215);
  if (lVar1 != 0) {
    uVar2 = FUN_0037394c(param_1,param_2,&DAT_040a4215,0);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  lVar1 = FUN_00369da0(param_1,&DAT_0406ffa2);
  if (lVar1 != 0) {
    uVar2 = FUN_0037394c(param_1,param_2,&DAT_0406ffa2,0);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  lVar1 = FUN_00369da0(param_1,&DAT_040fcedb);
  if (lVar1 != 0) {
    uVar2 = FUN_0037394c(param_1,param_2,&DAT_040fcedb,0);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
  }
  return;
}

