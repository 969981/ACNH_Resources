
void FUN_0043c580(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = nn::os::GetTlsValue(DAT_04c6f1a4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_0043c5f0();
    uVar3 = (**(code **)(*plVar2 + 0x60))();
    FUN_00438ad0(uVar3,lVar1);
  }
  nn::os::SetTlsValue(DAT_04c6f1a4,0);
  return;
}

