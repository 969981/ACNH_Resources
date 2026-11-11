
void FUN_0043c130(ulong *param_1,ulong param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  if ((param_3 != -1) || ((uVar4 & 0xfffffffffffffffe) != param_2)) {
    if (param_2 == 0) {
      *param_1 = 0;
    }
    else {
      if (-1 < param_3) {
        uVar2 = FUN_0043a430(param_2,param_3);
        *param_1 = uVar2 | 1;
        if ((uVar4 & 1) == 0) {
          return;
        }
        goto LAB_0043c188;
      }
      uVar2 = FUN_0043a3e0(param_2);
      *param_1 = uVar2 | 1;
    }
    if ((uVar4 & 1) != 0) {
LAB_0043c188:
      lVar3 = FUN_0043c4e0(DAT_04c6f050);
      lVar1 = DAT_04c6f058;
      if (lVar3 != 0) {
        lVar1 = lVar3;
      }
      FUN_00438ad0(*(undefined8 *)(lVar1 + 0x58),uVar4 - 1);
      return;
    }
  }
  return;
}

