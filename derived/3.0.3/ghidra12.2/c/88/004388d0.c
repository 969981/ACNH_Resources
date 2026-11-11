
void FUN_004388d0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar1 = DAT_04c6f058;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  lVar2 = (long)param_2;
  if (lVar3 != 0xffffffff) {
    lVar2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0043893c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x58) + 0x18))(*(long **)(lVar1 + 0x58),param_1,lVar2);
  return;
}

