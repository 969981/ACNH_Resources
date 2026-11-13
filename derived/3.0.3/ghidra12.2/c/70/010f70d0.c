
ulong FUN_010f70d0(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  pbVar6 = (byte *)param_1[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  if (pbVar6 != (byte *)param_2[1]) {
    pbVar6 = (byte *)param_2[1];
    pbVar4 = (byte *)param_1[1];
    lVar5 = 0x7ffff;
    while( true ) {
      bVar2 = *pbVar4;
      if (bVar2 != *pbVar6) break;
      if ((bVar2 == 0) ||
         (bVar1 = lVar5 == 0, pbVar6 = pbVar6 + 1, pbVar4 = pbVar4 + 1, lVar5 = lVar5 + -1, bVar1))
      goto LAB_010f7160;
    }
    if (bVar2 < *pbVar6) {
      return 0xffffffff;
    }
  }
LAB_010f7160:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pbVar6 = (byte *)param_2[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  if (pbVar6 == (byte *)param_1[1]) {
    uVar3 = 0;
  }
  else {
    pbVar6 = (byte *)param_1[1];
    pbVar4 = (byte *)param_2[1];
    lVar5 = 0x7ffff;
    while( true ) {
      bVar2 = *pbVar4;
      if (bVar2 != *pbVar6) break;
      if (bVar2 == 0) {
        return 0;
      }
      bVar1 = lVar5 == 0;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
      lVar5 = lVar5 + -1;
      if (bVar1) {
        return 0;
      }
    }
    uVar3 = (ulong)(bVar2 < *pbVar6);
  }
  return uVar3;
}

