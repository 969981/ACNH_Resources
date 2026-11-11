
void FUN_00475ed0(undefined8 *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04865138;
  puVar2 = param_1 + 0x93;
  lVar3 = 0x40;
  do {
    if (*(int *)(puVar2 + 8) != 0) {
      (**(code **)(*(long *)param_1[1] + 0x30))
                ((long *)param_1[1],puVar2,*(int *)(puVar2 + 8),
                 *(undefined4 *)(&DAT_04140f44 + lVar3));
      *(undefined4 *)(puVar2 + 8) = 0;
    }
    puVar2 = puVar2 + -9;
    bVar1 = lVar3 != 0;
    lVar3 = lVar3 + -4;
  } while (bVar1);
  FUN_00421d50(param_1);
  return;
}

