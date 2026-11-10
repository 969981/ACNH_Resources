
byte * FUN_0017c170(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (param_3 <= param_2) {
    return (byte *)0x0;
  }
  if ((*param_2 != 0) && ((ulong)((long)param_3 - (long)param_2) < 0x40001)) {
    *param_1 = param_2;
    bVar1 = *param_2;
    bVar2 = bVar1 >> 5 & 1;
    *(byte *)((long)param_1 + 0x1a) = bVar2;
    *(byte *)(param_1 + 3) = bVar1 >> 6;
    if (((bVar1 & 0x1f) != 0x1f) &&
       (*(byte *)((long)param_1 + 0x19) = bVar1 & 0x1f, param_2 + 1 < param_3)) {
      bVar1 = param_2[1];
      pbVar3 = param_2 + 2;
      uVar4 = (ulong)bVar1;
      if ((char)bVar1 < '\0') {
        uVar5 = bVar1 & 0x7f;
        if ((bVar1 & 0x7f) == 0) {
          if (bVar2 == 0) {
            return (byte *)0x0;
          }
          local_30 = 0;
          uStack_28 = 0;
          param_1[1] = pbVar3;
          local_40 = 0;
          uStack_38 = 0;
          while( true ) {
            if (param_3 <= pbVar3) {
              return (byte *)0x0;
            }
            if (*pbVar3 == 0) break;
            pbVar3 = (byte *)FUN_0017c170(&local_40,pbVar3,param_3);
            if (pbVar3 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          param_1[2] = pbVar3;
          return pbVar3 + 1;
        }
        if ((ulong)((long)param_3 - (long)pbVar3) < (ulong)uVar5) {
          return (byte *)0x0;
        }
        uVar4 = 0;
        param_2 = param_2 + (ulong)(byte)((char)uVar5 - 1) + 3;
        do {
          if ((uVar4 & 0xff000000) != 0) {
            return (byte *)0x0;
          }
          uVar5 = uVar5 - 1;
          uVar4 = (ulong)*pbVar3 | uVar4 << 8;
          pbVar3 = pbVar3 + 1;
        } while ((uVar5 & 0xff) != 0);
      }
      else {
        param_2 = pbVar3;
      }
      if (uVar4 <= (ulong)((long)param_3 - (long)param_2)) {
        param_1[1] = param_2;
        param_1[2] = param_2 + uVar4;
        return param_2 + uVar4;
      }
    }
  }
  return (byte *)0x0;
}

