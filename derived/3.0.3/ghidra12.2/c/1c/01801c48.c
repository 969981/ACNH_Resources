
void FUN_01801c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
  if ((lVar1 == 0) || (lVar1 = FUN_0074f690(lVar1,&DAT_0528cfd0), lVar1 == 0)) {
    return;
  }
  FUN_039a8120(param_2,*(undefined8 *)(lVar1 + 8),PTR_DAT_04bbe3e8,param_3,0);
  return;
}

