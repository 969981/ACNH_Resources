
ulong * FUN_0043bfc0(ulong *param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar2 = (int)param_2[1];
  uVar5 = *param_1;
  uVar3 = *param_2;
  if (iVar2 != 0 || uVar3 != (uVar5 & 0xfffffffffffffffe)) {
    if (uVar3 == 0) {
      *param_1 = 0;
    }
    else if (iVar2 < 1) {
      uVar3 = FUN_0043a3e0();
      *param_1 = uVar3 | 1;
    }
    else {
      uVar3 = FUN_0043a430(uVar3,iVar2 + -1);
      *param_1 = uVar3 | 1;
    }
    if ((uVar5 & 1) != 0) {
      lVar4 = FUN_0043c4e0(DAT_04c6f050);
      lVar1 = DAT_04c6f058;
      if (lVar4 != 0) {
        lVar1 = lVar4;
      }
      FUN_00438ad0(*(undefined8 *)(lVar1 + 0x58),uVar5 - 1);
    }
  }
  return param_1;
}

