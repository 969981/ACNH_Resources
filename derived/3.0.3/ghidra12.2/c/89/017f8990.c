
uint FUN_017f8990(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((*(ushort *)(param_1 + 0x1cc) >> 1 & 1) != 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x130);
  if (uVar3 == 0) {
    uVar2 = FUN_017f1590(param_1,3);
    puVar1 = PTR_DAT_04bb46d0;
    uVar4 = FUN_017c1f40(*(undefined8 *)PTR_DAT_04bb46d0,uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_017f1590(param_1,2);
      uVar4 = FUN_017c1f40(*(undefined8 *)puVar1,uVar2);
      if ((uVar4 & 1) == 0) {
        uVar2 = FUN_017f1590(param_1,0);
        uVar3 = FUN_017c1f40(*(undefined8 *)puVar1,uVar2);
        return uVar3 & 1;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

