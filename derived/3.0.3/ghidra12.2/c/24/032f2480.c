
uint FUN_032f2480(undefined8 param_1,long param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  short *psVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return 0x8001;
  }
  puVar1 = (ushort *)(param_2 + 0x83e00);
  puVar2 = (ushort *)(param_2 + 0x79e88);
  if (*(short *)(param_2 + 0x79e94) == 0) {
    psVar6 = (short *)0x0;
  }
  else {
    psVar6 = (short *)0x0;
    if (*(short *)(param_2 + 0x85b50) != 0) {
      psVar6 = (short *)(param_2 + 0x85b50);
    }
  }
  uVar5 = 0;
  if (*(char *)(param_2 + 0x79e99) != '\0') {
    uVar5 = 0x300;
  }
  *puVar2 = *puVar2 & 0xfcff | uVar5;
  if ((param_3 & 0xffff) == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = param_2 + 0x79cc8;
    if (*puVar1 != 0) {
      lVar3 = 0;
    }
    uVar4 = FUN_00100790(param_2 + 8,param_2 + 0x79ea0 + (ulong)*puVar1 * 0x88,psVar6,lVar3,puVar2);
    uVar7 = (uint)(short)uVar4;
    if (((uVar4 >> 0xf & 1) == 0) && (uVar7 != 0)) {
      uVar5 = *puVar1 + 1;
      *puVar1 = uVar5;
      if ((param_3 & 0xffff) < 2) {
        uVar7 = 1;
      }
      else {
        uVar7 = 1;
        do {
          uVar4 = FUN_00100790(param_2 + 8,param_2 + 0x79ea0 + (ulong)uVar5 * 0x88,psVar6,0,puVar2);
          if ((uVar4 >> 0xf & 1) != 0) {
            return (int)(short)uVar4;
          }
          if ((int)(short)uVar4 == 0) {
            return uVar7;
          }
          uVar7 = uVar7 + 1;
          uVar5 = *puVar1 + 1;
          *puVar1 = uVar5;
        } while ((uVar7 & 0xffff) < (param_3 & 0xffff));
        uVar7 = param_3;
      }
    }
  }
  return uVar7;
}

