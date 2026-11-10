
undefined8 FUN_001f719c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_30 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar1 + 0x18);
  if ((ulong)(lVar5 - lVar2) < 2) {
    *(undefined1 *)(param_1 + 8) = 1;
    return 1;
  }
  uVar3 = *(ushort *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
  uVar6 = (ulong)uVar3;
  *(long *)(param_1 + 0x18) = lVar2 + 2;
  if ((ulong)(lVar5 - (lVar2 + 2)) < uVar6) {
    *(undefined1 *)(param_1 + 8) = 1;
    return 0;
  }
  if (uVar3 != 0) {
    FUN_0018b7a0(param_2,uVar6);
    if ((DAT_04c58b98 != 0) || (DAT_04c58980 == 0)) {
      FUN_00197494(param_1,*(undefined8 *)(param_2 + 0x18),uVar6);
      *(undefined1 *)(uVar6 + *(long *)(param_2 + 0x18) + -1) = 0;
      return 1;
    }
    FUN_0018c218(auStack_30,uVar6 + 1);
    uVar4 = FUN_0018c394(auStack_30);
    FUN_00197494(param_1,uVar4,uVar6);
    FUN_0018c360(auStack_30,*(undefined8 *)(param_2 + 0x18),uVar3,0);
    FUN_0018c280(auStack_30);
  }
  return 1;
}

