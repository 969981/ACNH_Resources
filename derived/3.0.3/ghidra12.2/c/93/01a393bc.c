
undefined8 FUN_01a393bc(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar3 = FUN_0277d6c4(param_1);
      if (((iVar3 == 0x3759) ||
          ((((iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x375a ||
             (iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x375b)) ||
            (iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x375d)) ||
           ((iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x375e ||
            (iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x375f)))))) ||
         ((iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x3760 ||
          (((iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x3761 ||
            (iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x3765)) ||
           ((iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x3769 ||
            (iVar3 = FUN_0277d6c4(param_1), iVar3 == 0x376a)))))))) {
        return 3;
      }
      FUN_01ad5d04(auStack_48,param_1);
      iVar3 = FUN_01ad9fd0(auStack_48);
      if (iVar3 - 1U < 2) {
        fVar6 = (float)FUN_01ae8c70(auStack_48);
        lVar5 = FUN_01a36028();
        pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0x65d8) + 0xf0))(lVar5 + 0x65d8);
        if (*pfVar4 < fVar6) {
          return 2;
        }
      }
      else if (iVar3 == 3) {
        return 0;
      }
    }
  }
  return 1;
}

