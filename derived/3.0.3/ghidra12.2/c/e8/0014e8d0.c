
int FUN_0014e8d0(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001429c4();
  *(long *)(param_1 + 0x50) = lVar2;
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_0014ae60(param_1,param_2,PTR_LAB_04bcb6b0,PTR_DAT_04bcb6b8,&LAB_0014e948);
    if (iVar1 == 0) {
      *(long *)(*(long *)(param_1 + 0x50) + 0x1120) = param_1;
    }
    else {
      FUN_0014f260();
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return iVar1;
}

