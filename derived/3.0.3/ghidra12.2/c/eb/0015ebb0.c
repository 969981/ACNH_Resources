
undefined8 FUN_0015ebb0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 local_8;
  
  *(ushort *)(param_1 + 0x15c4) = *(ushort *)(param_1 + 0x15c4) & 0xfeff;
  if ((((*(int *)(param_1 + 0x1500) != 10) && (iVar1 = *(int *)(param_2 + 0x230), iVar1 != 10)) &&
      ((lVar5 = *(long *)(param_1 + 0xa40), 10 < iVar1 || (lVar5 != 1)))) &&
     ((1 < lVar5 || lVar5 == 0 && (iVar1 != 0x14)))) {
    local_8 = param_3;
    lVar5 = FUN_0015fd30(param_2,"Expect");
    if (lVar5 == 0) {
      uVar3 = FUN_0015e3d4(&local_8,"Expect: 100-continue\r\n");
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar4 = *(ushort *)(param_1 + 0x15c4) | 0x100;
    }
    else {
      uVar2 = FUN_0015e58c(lVar5,"Expect:","100-continue");
      uVar4 = 0x100;
      if ((uVar2 & 1) == 0) {
        uVar4 = 0;
      }
      uVar4 = *(ushort *)(param_1 + 0x15c4) & 0xfeff | uVar4;
    }
    *(ushort *)(param_1 + 0x15c4) = uVar4;
  }
  return 0;
}

