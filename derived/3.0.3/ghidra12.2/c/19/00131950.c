
undefined8 FUN_00131950(long param_1,long param_2,short param_3,short *param_4)

{
  short *psVar1;
  short *psVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined8 uVar6;
  short *psVar7;
  
  psVar1 = (short *)(param_1 + 0x6c63c);
  if ((long)*psVar1 < 300) {
    psVar2 = (short *)(param_1 + (long)*psVar1 * 0x70 + 0x6428c);
    sVar4 = FUN_0012df60(param_1,param_2,psVar2,0x70);
    if (sVar4 < 0) {
      uVar6 = 0x9b60;
    }
    else {
      sVar4 = *psVar1;
      if (0 < sVar4) {
        psVar7 = (short *)(param_1 + 0x6428c);
        do {
          if ((*psVar7 == *psVar2) && (sVar5 = FUN_00100410(psVar7,psVar2), sVar5 == 0)) {
            *param_4 = *psVar1 - sVar4;
            return 1;
          }
          sVar4 = sVar4 + -1;
          psVar7 = psVar7 + 0x38;
        } while (0 < sVar4);
        sVar4 = *psVar1;
      }
      *psVar1 = sVar4 + 1;
      *param_4 = sVar4;
      uVar3 = *(ushort *)(param_2 + 0x80) & 0xf0ff;
      *(ushort *)(param_2 + 0x80) = uVar3;
      if (((param_3 == 0) ||
          ((ushort)((*(ushort *)(param_2 + 0x7a) & 0x7f) + (*(ushort *)(param_2 + 0x70) & 0x7f)) !=
           param_3)) || (*(char *)(param_2 + 0x74) == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        *(ushort *)(param_2 + 0x80) = uVar3 | 0x800;
      }
    }
  }
  else {
    uVar6 = 0x9460;
  }
  return uVar6;
}

