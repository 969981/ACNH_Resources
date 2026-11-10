
void FUN_0021f39c(int param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 - 2U < 0x19) {
    lVar3 = *(long *)(&DAT_0410d148 + (long)(int)(param_1 - 2U) * 8);
    plVar2 = *(long **)(&DAT_04c5eff0 + lVar3 * 8);
    iVar1 = (int)plVar2[0x20];
  }
  else {
    lVar3 = 0x19;
    iVar1 = (int)DAT_04c5f0b8[0x20];
    plVar2 = DAT_04c5f0b8;
  }
  if (iVar1 != 0) {
    (**(code **)(*plVar2 + 0xb0))();
    plVar2 = *(long **)(&DAT_04c5eff0 + lVar3 * 8);
  }
  (**(code **)(*plVar2 + 0x20))();
  *(undefined8 *)(&DAT_04c5eff0 + lVar3 * 8) = 0;
  return;
}

