
long FUN_038afe50(long param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar5 == 0) {
      return 0;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pbVar6 = (byte *)param_2[1];
    (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))((long *)(lVar5 + 0x20));
    if (pbVar6 == *(byte **)(lVar5 + 0x28)) break;
    pbVar6 = *(byte **)(lVar5 + 0x28);
    pbVar3 = (byte *)param_2[1];
    lVar4 = 0x7ffff;
    while( true ) {
      bVar2 = *pbVar3;
      if (bVar2 != *pbVar6) break;
      if ((bVar2 == 0) ||
         (bVar1 = lVar4 == 0, pbVar6 = pbVar6 + 1, pbVar3 = pbVar3 + 1, lVar4 = lVar4 + -1, bVar1))
      goto LAB_038aff04;
    }
    lVar4 = 8;
    if (*pbVar6 <= bVar2) {
      lVar4 = 0x10;
    }
    lVar5 = *(long *)(lVar5 + lVar4);
  }
LAB_038aff04:
  lVar5 = *(long *)(param_1 + 0xb8);
  if (lVar5 == 0) {
    return 0;
  }
  while( true ) {
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pbVar6 = (byte *)param_2[1];
    (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))((long *)(lVar5 + 0x20));
    if (pbVar6 == *(byte **)(lVar5 + 0x28)) break;
    pbVar6 = *(byte **)(lVar5 + 0x28);
    pbVar3 = (byte *)param_2[1];
    lVar4 = 0x7ffff;
    while( true ) {
      bVar2 = *pbVar3;
      if (bVar2 != *pbVar6) break;
      if ((bVar2 == 0) ||
         (bVar1 = lVar4 == 0, pbVar6 = pbVar6 + 1, pbVar3 = pbVar3 + 1, lVar4 = lVar4 + -1, bVar1))
      goto LAB_038affa0;
    }
    lVar4 = 8;
    if (*pbVar6 <= bVar2) {
      lVar4 = 0x10;
    }
    lVar5 = *(long *)(lVar5 + lVar4);
    if (lVar5 == 0) {
      return 0;
    }
  }
LAB_038affa0:
  return lVar5 + 0x30;
}

