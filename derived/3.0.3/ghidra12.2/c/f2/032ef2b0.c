
int FUN_032ef2b0(long param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  long lVar1;
  short sVar2;
  undefined8 uVar3;
  uint uVar4;
  short sVar5;
  short *psVar6;
  
  lVar1 = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0xb52e9) = 0;
  uVar3 = DAT_05731078;
  if (param_3 != 0) {
    uVar4 = FUN_032ef9a0(param_1,lVar1,param_3,(short *)(param_1 + 0x79cd8),0xde);
    if ((uVar4 >> 0xf & 1) == 0) {
      sVar5 = 0;
      if (*(short *)(param_1 + 0x79cd8) != 0) {
        sVar5 = 0;
        psVar6 = (short *)(param_1 + 0x79cda);
        do {
          sVar2 = *psVar6;
          sVar5 = sVar5 + 1;
          psVar6 = psVar6 + 1;
        } while (sVar2 != 0);
      }
      *(short *)(param_1 + 0x79db6) = sVar5;
      uVar4 = FUN_032eff90(uVar3,lVar1,0,param_4,param_5,param_6);
      if ((uVar4 >> 0xf & 1) == 0) {
        *(undefined1 *)(param_1 + 0xb52e9) = 1;
        return (int)(short)uVar4;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x79db6) = 0;
    }
  }
  FUN_032ef500(uVar3,lVar1,*(undefined1 *)(param_1 + 0xb52e8));
  FUN_032ef500(uVar3,lVar1,*(undefined1 *)(param_1 + 0x70390));
  memset((void *)(param_1 + 0x87b50),0,0x2d630);
  return 0xffff;
}

