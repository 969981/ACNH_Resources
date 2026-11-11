
uint FUN_0044a640(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    do {
      if ((*(byte *)(param_1 + 2) >> 4 & 1) != 0) {
        puVar5 = (ulong *)FUN_00426db0(param_1,0x100000);
        uVar7 = (uint)*puVar5;
        if ((~uVar7 & 0xfff0000) == 0) {
          uVar1 = FUN_0044a640(*(undefined8 *)(param_1 + 8));
          uVar6 = FUN_004274f0(param_1);
          if ((uVar6 & 0x80) != 0 && (int)uVar1 < 9) {
            uVar1 = 8;
          }
          uVar6 = FUN_00428440(param_1);
          if (((uVar6 & 0x1f) == 7) && (iVar2 = FUN_00428570(param_1), 0 < iVar2)) {
            iVar2 = 0;
            do {
              FUN_004285f0(param_1,iVar2);
              uVar3 = FUN_00427030();
              if ((int)uVar1 <= (int)uVar3) {
                uVar1 = uVar3;
              }
              iVar2 = iVar2 + 1;
              iVar4 = FUN_00428570(param_1);
            } while (iVar2 < iVar4);
          }
          uVar7 = uVar7 & 0xf0000000 | uVar7 & 0xffff | (uVar1 & 0xfff) << 0x10;
          *puVar5 = (ulong)uVar7;
        }
        return uVar7 >> 0x10 & 0xfff;
      }
      param_1 = *(long *)(param_1 + 8);
    } while (param_1 != 0);
  }
  return 1;
}

