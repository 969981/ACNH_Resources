
void FUN_003e5d24(undefined **param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = FUN_003e5c30(&PTR_LOOP_04c11aa0,param_1);
  ppuVar1 = &PTR_LOOP_04c11aa0;
  if (lVar3 != 0) {
    ppuVar1 = (undefined **)(lVar3 + 0x28);
  }
  if (ppuVar1 != param_1) {
    puVar2 = (undefined8 *)param_1[1];
    puVar4 = (undefined *)*puVar2;
    *(undefined8 **)(*param_1 + 8) = puVar2;
    *puVar2 = *param_1;
    *(undefined ***)(puVar4 + 8) = param_1;
    *param_1 = puVar4;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

