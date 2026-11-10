
undefined8
FUN_00113480(short param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5,uint param_6,
            ulong param_7,long param_8,int *param_9)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 != 0) {
    if ((*param_2 >> 6 & 1) == 0) goto LAB_001135b0;
    uVar5 = 4;
    if ((*param_2 & 0x10) != 0) {
      uVar5 = 8;
    }
    pbVar6 = param_2 + (uVar5 >> 3);
    uVar8 = 0x20 - (param_5 & 0xffff);
    param_3 = param_2 + (((ulong)*pbVar6 << 0x18 | (ulong)pbVar6[1] << 0x10 | (ulong)pbVar6[2] << 8
                         | (ulong)pbVar6[3]) >> ((ulong)(uVar8 - (uVar5 & 4)) & 0x3f) &
                        0xffffffffUL >> ((ulong)uVar8 & 0x3f));
  }
  if (param_3 < param_4) {
    uVar5 = 0x20 - (param_5 & 0xffff);
    do {
      while( true ) {
        bVar3 = *param_3;
        if ((char)bVar3 < '\0') break;
        bVar4 = (bVar3 & 0x10) != 0;
        iVar7 = 4;
        if (bVar4) {
          iVar7 = 8;
        }
        iVar2 = 1;
        if (bVar4) {
          iVar2 = (bVar3 & 0xf) + 2;
        }
        param_3 = param_3 + ((ulong)((iVar2 << 3 | 7U) +
                                     (param_6 & (int)((uint)bVar3 << 0x1a) >> 0x1f) +
                                     (param_5 & (int)((uint)bVar3 << 0x19) >> 0x1f) + iVar7 >> 3) &
                            0xff);
        if (param_4 <= param_3) goto LAB_001135b0;
      }
      if ((bVar3 >> 6 & 1) == 0) {
        if ((bVar3 >> 5 & 1) == 0) {
          return 0xa262;
        }
        uVar5 = 4;
        if ((bVar3 & 0x10) != 0) {
          uVar5 = 8;
        }
        uVar8 = (*(uint *)(param_3 + (uVar5 >> 3)) & 0xff00ff00) >> 8 |
                (*(uint *)(param_3 + (uVar5 >> 3)) & 0xff00ff) << 8;
        pbVar6 = param_4 + ((uVar8 >> 0x10 | uVar8 << 0x10) >>
                            (ulong)((0x20 - (param_6 & 0xffff)) - (uVar5 & 4) & 0x1f) &
                           0xffffffffU >> (ulong)(-(param_6 & 0xffff) & 0x1f));
        if ((char)*pbVar6 < '\0') goto LAB_00113644;
        goto LAB_001135c0;
      }
      uVar8 = 4;
      if ((bVar3 & 0x10) != 0) {
        uVar8 = 8;
      }
      pbVar6 = param_3 + (uVar8 >> 3);
      param_3 = param_3 + (((ulong)*pbVar6 << 0x18 | (ulong)pbVar6[1] << 0x10 |
                            (ulong)pbVar6[2] << 8 | (ulong)pbVar6[3]) >>
                           ((ulong)(uVar5 - (uVar8 & 4)) & 0x3f) &
                          0xffffffffUL >> ((ulong)uVar5 & 0x3f));
    } while (param_3 < param_4);
  }
LAB_001135b0:
  pbVar6 = param_4 + (param_7 & 0xffffffff);
  if (-1 < (char)*pbVar6) {
LAB_001135c0:
    bVar3 = *(byte *)(param_8 + 0x33);
    if ((*(byte *)(param_8 + 0x1c) & 3) != 0) {
      bVar3 = bVar3 + 1;
    }
    uVar5 = 0x10 - *(byte *)(param_8 + 0x2f);
    uVar1 = (ulong)*(byte *)(param_8 + 0x32) + (ulong)*(byte *)(param_8 + 0x30) +
            (ulong)*(byte *)(param_8 + 0x31) + (ulong)bVar3 + 1;
    uVar8 = (uint)uVar1;
    do {
      pbVar6 = pbVar6 + ((long)(short)((CONCAT11(pbVar6[uVar1 >> 3],(pbVar6 + (uVar1 >> 3))[1]) >>
                                        (ulong)(uVar5 - (uVar8 & 7) & 0x1f) &
                                       (ushort)(0xffff >> (ulong)(uVar5 & 0x1f))) +
                                      ((ushort)(uVar8 + *(byte *)(param_8 + 0x2f) + 7 >> 3) & 0xff))
                        & 0xffffffff);
    } while (-1 < (char)*pbVar6);
  }
LAB_00113644:
  *param_9 = (int)pbVar6 - (int)param_4;
  return 1;
}

