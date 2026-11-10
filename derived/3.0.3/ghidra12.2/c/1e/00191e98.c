
void FUN_00191e98(long *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    lVar4 = *param_1;
    pbVar3 = *(byte **)(lVar4 + 0x18);
    if (*(byte **)(lVar4 + 0x20) < pbVar3 + 1) {
      FUN_0018f1a8(lVar4,1);
      pbVar3 = *(byte **)(lVar4 + 0x18);
    }
    *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
    *pbVar3 = bVar2;
  }
  else {
    if (param_2 < 0x800) {
      lVar4 = *param_1;
      pbVar3 = *(byte **)(lVar4 + 0x18);
      if (*(byte **)(lVar4 + 0x20) < pbVar3 + 1) {
        FUN_0018f1a8(lVar4,1);
        pbVar3 = *(byte **)(lVar4 + 0x18);
      }
      *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
      *pbVar3 = (byte)(param_2 >> 6) | 0xc0;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
    else {
      lVar4 = *param_1;
      pbVar3 = *(byte **)(lVar4 + 0x18);
      if (param_2 >> 0x10 == 0) {
        if (*(byte **)(lVar4 + 0x20) < pbVar3 + 1) {
          FUN_0018f1a8(lVar4,1);
          pbVar3 = *(byte **)(lVar4 + 0x18);
        }
        *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
        *pbVar3 = (byte)(param_2 >> 0xc) | 0xe0;
        lVar4 = *param_1;
        pbVar3 = *(byte **)(lVar4 + 0x18);
        pbVar1 = *(byte **)(lVar4 + 0x20);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        if (pbVar1 < pbVar3 + 1) {
          FUN_0018f1a8(lVar4,1);
          pbVar3 = *(byte **)(lVar4 + 0x18);
        }
        *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
        *pbVar3 = (byte)(param_2 >> 6) & 0x3f | 0x80;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        lVar4 = *param_1;
        pbVar3 = *(byte **)(lVar4 + 0x18);
        if (*(byte **)(lVar4 + 0x20) < pbVar3 + 1) {
          FUN_0018f1a8(lVar4,1);
          pbVar3 = *(byte **)(lVar4 + 0x18);
        }
        *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
        *pbVar3 = bVar2 & 0x3f | 0x80;
        goto LAB_0019207c;
      }
      if (*(byte **)(lVar4 + 0x20) < pbVar3 + 1) {
        FUN_0018f1a8(lVar4,1);
        pbVar3 = *(byte **)(lVar4 + 0x18);
      }
      *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
      *pbVar3 = (byte)(param_2 >> 0x12) | 0xf0;
      lVar4 = *param_1;
      pbVar3 = *(byte **)(lVar4 + 0x18);
      pbVar1 = *(byte **)(lVar4 + 0x20);
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      if (pbVar1 < pbVar3 + 1) {
        FUN_0018f1a8(lVar4,1);
        pbVar3 = *(byte **)(lVar4 + 0x18);
      }
      *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
      *pbVar3 = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      lVar4 = *param_1;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      pbVar3 = *(byte **)(lVar4 + 0x18);
      if (*(byte **)(lVar4 + 0x20) < pbVar3 + 1) {
        FUN_0018f1a8(lVar4,1);
        pbVar3 = *(byte **)(lVar4 + 0x18);
      }
      *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
      *pbVar3 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
    lVar4 = *param_1;
    pbVar3 = *(byte **)(lVar4 + 0x18);
    if (*(byte **)(lVar4 + 0x20) < pbVar3 + 1) {
      FUN_0018f1a8(lVar4,1);
      pbVar3 = *(byte **)(lVar4 + 0x18);
    }
    *(byte **)(lVar4 + 0x18) = pbVar3 + 1;
    *pbVar3 = bVar2 & 0x3f | 0x80;
  }
LAB_0019207c:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}

