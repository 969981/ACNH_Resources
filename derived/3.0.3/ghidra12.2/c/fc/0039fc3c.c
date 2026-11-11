
void FUN_0039fc3c(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        return;
      }
      lVar2 = 2;
    }
    else {
      lVar2 = 1;
    }
  }
  else {
    lVar2 = 0;
  }
  FUN_00348260(param_2,*(undefined8 *)
                        (*(long *)(*(long *)(param_1 + 0x20) +
                                  *(long *)(PTR_DAT_04bd0028 + lVar2 * 8)) + 0x68),0x1ff);
  return;
}

