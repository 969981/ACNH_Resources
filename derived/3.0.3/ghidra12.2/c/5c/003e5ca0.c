
void FUN_003e5ca0(undefined8 *param_1,undefined4 param_2,void *param_3,undefined8 param_4,
                 uint param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(uint *)(param_1 + 7) = param_5 & 0xff;
  if ((param_5 >> 1 & 1) != 0) {
    memset(param_3,DAT_04c11a90,(ulong)(uint)((int)param_4 - (int)param_3));
  }
  lVar2 = FUN_003e5c30(&PTR_LOOP_04c11aa0,param_1);
  puVar3 = (undefined *)*param_1;
  ppuVar1 = &PTR_LOOP_04c11aa0;
  if (lVar2 != 0) {
    ppuVar1 = (undefined **)(lVar2 + 0x28);
  }
  *param_1 = *ppuVar1;
  *(undefined ***)(puVar3 + 8) = ppuVar1;
  *(undefined8 **)(*ppuVar1 + 8) = param_1;
  *ppuVar1 = puVar3;
  return;
}

