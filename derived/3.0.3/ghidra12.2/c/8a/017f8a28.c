
uint FUN_017f8a28(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((*(ushort *)(param_1 + 0x1cc) >> 1 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 300);
    if (uVar3 == 0) {
      uVar3 = 1;
      uVar2 = FUN_017f1590(param_1,1);
      puVar1 = PTR_DAT_04bb46d0;
      uVar4 = FUN_017c1f40(*(undefined8 *)PTR_DAT_04bb46d0,uVar2);
      if ((uVar4 & 1) == 0) {
        uVar2 = FUN_017f1590(param_1,2);
        uVar4 = FUN_017c1f40(*(undefined8 *)puVar1,uVar2);
        if ((uVar4 & 1) == 0) {
          uVar2 = FUN_017f1590(param_1,0);
          uVar3 = FUN_017c1f40(*(undefined8 *)puVar1,uVar2);
          uVar3 = uVar3 & 1;
        }
        else {
          uVar3 = 1;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

