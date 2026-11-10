
undefined2 FUN_001fc320(uint param_1,uint param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0xffff;
  if (((int)param_1 < 4) && (param_2 < 3)) {
    uVar1 = *(undefined2 *)(PTR_DAT_04bcca10 + (ulong)param_2 * 2 + (ulong)param_1 * 6);
  }
  return uVar1;
}

