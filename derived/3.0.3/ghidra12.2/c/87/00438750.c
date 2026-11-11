
void FUN_00438750(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_0043c4e0(DAT_04c6f050);
  lVar1 = DAT_04c6f058;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x004387a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x58) + 0x10))(*(long **)(lVar1 + 0x58),param_1,param_2);
  return;
}

