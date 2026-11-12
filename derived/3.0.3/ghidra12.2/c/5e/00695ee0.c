
undefined8 FUN_00695ee0(long *param_1,long param_2,ulong param_3,byte *param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  
  if (param_5 == 0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = 0;
    pbVar5 = param_4;
    lVar6 = param_5;
    do {
      while( true ) {
        bVar1 = *pbVar5;
        if ((((bVar1 - 0x30 < 10 || (bVar1 & 0xffffffdf) - 0x41 < 0x1a) ||
             (uVar2 = (uint)bVar1, uVar2 - 0x2d < 2)) || (uVar2 == 0x7e)) || (uVar2 == 0x5f)) break;
        uVar3 = uVar3 + 3;
        lVar6 = lVar6 + -1;
        pbVar5 = pbVar5 + 1;
        if (lVar6 == 0) goto LAB_00695f78;
      }
      uVar3 = uVar3 + 1;
      lVar6 = lVar6 + -1;
      pbVar5 = pbVar5 + 1;
    } while (lVar6 != 0);
LAB_00695f78:
    if (param_3 <= uVar3) {
      return 0;
    }
    if (param_5 != 0) {
      lVar6 = 0;
      do {
        while( true ) {
          bVar1 = *param_4;
          uVar2 = (uint)bVar1;
          if (((uVar2 - 0x30 < 10 || (uVar2 & 0xffffffdf) - 0x41 < 0x1a) || (uVar2 - 0x2d < 2)) ||
             ((uVar2 == 0x7e || (bVar1 == 0x5f)))) break;
          nn::util::SNPrintf((char *)(param_2 + lVar6),4,"%%%02X");
          lVar4 = lVar6 + 3;
          param_5 = param_5 + -1;
          param_4 = param_4 + 1;
          lVar6 = lVar4;
          if (param_5 == 0) goto LAB_0069600c;
        }
        lVar4 = lVar6 + 1;
        *(byte *)(param_2 + lVar6) = bVar1;
        param_5 = param_5 + -1;
        param_4 = param_4 + 1;
        lVar6 = lVar4;
      } while (param_5 != 0);
      goto LAB_0069600c;
    }
  }
  lVar4 = 0;
LAB_0069600c:
  *(undefined1 *)(param_2 + lVar4) = 0;
  *param_1 = lVar4;
  return 1;
}

