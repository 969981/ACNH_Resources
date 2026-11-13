
undefined8 FUN_00dc8eac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_04bb46b0;
  if (lVar1 == 0) {
    FUN_028ef070();
  }
  else {
    FUN_026f5bc4(lVar1);
    FUN_028ef070();
    FUN_026f64f0(lVar1);
    FUN_026f5cac(lVar1);
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return 1;
}

