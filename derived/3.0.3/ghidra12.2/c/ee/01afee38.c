
undefined8 FUN_01afee38(undefined8 param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  ushort uVar6;
  
  uVar4 = FUN_01afcfa0();
  if ((int)uVar4 != 0) {
    iVar2 = FUN_01b006b0(param_1);
    if (iVar2 == 2) {
      iVar2 = FUN_01afcfa0(param_1);
      if ((iVar2 == 0) || (puVar5 = (ushort *)FUN_01afd600(param_1), puVar5 == (ushort *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar1 = *puVar5 >> 3 & 3;
        uVar6 = 0;
        if (uVar1 != 3) {
          uVar6 = uVar1;
        }
      }
      if ((uVar6 == 1) && (uVar3 = FUN_01ae3a80(param_1), uVar3 < 0xdc)) {
        *param_2 = uVar3;
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

