
void FUN_003c00d0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  
  FUN_003c0010();
  puVar2 = DAT_04c63a20;
  FUN_003c0010();
  if (puVar2 != &DAT_04c63a18) {
    do {
      plVar1 = (long *)(puVar2 + -8);
      puVar2 = *(undefined **)(puVar2 + 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_2 + param_3);
      FUN_003c0010();
    } while (puVar2 != &DAT_04c63a18);
  }
  return;
}

