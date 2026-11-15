
undefined8 FUN_022aef90(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  iVar2 = FUN_0277d6c4();
  if (iVar2 == 0x8f7) {
    uVar4 = 2;
  }
  else {
    iVar2 = FUN_0277d6c4(param_1);
    if ((iVar2 == 0xaea) || (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0xaf0)) {
      uVar4 = 1;
    }
    else {
      iVar2 = FUN_0277d6c4(param_1);
      if (((((iVar2 == 0x8f0) || (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x8a5)) ||
           (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x8a6)) ||
          ((iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x8ed ||
           (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0x8ee)))) ||
         (iVar2 = FUN_0277d6c4(param_1), puVar1 = PTR_DAT_04bb43c0, iVar2 == 0x8ef)) {
        uVar4 = 3;
      }
      else {
        lVar6 = *(long *)PTR_DAT_04bb43c0;
        uVar3 = FUN_0277d6c4(param_1);
        if (*(long *)puVar1 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            FUN_01ad5d04(auStack_48,param_1);
            uVar5 = FUN_01ad6a30(auStack_48,0x54);
            if ((uVar5 & 1) != 0) {
              return 4;
            }
            uVar5 = FUN_01ad6a30(auStack_48,0x4d);
            if ((uVar5 & 1) != 0) {
              return 5;
            }
            uVar5 = FUN_01ad6a30(auStack_48,0x4f);
            if (((uVar5 & 1) != 0) || (uVar5 = FUN_01ad6a30(auStack_48,0x51), (uVar5 & 1) != 0)) {
              return 6;
            }
          }
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

