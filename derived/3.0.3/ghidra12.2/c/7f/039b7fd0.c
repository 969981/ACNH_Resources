
void FUN_039b7fd0(long param_1,uint param_2,long param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  FUN_039b3110(*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198,param_1,param_3,param_4,
               param_5 & 0xffffffff);
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(short *)(lVar3 + 0x6a) != 0) {
    uVar5 = param_5 >> 1 & 1;
    if (param_3 == 0) {
      if ((param_5 & 2) == 0) {
        lVar11 = 0;
        uVar9 = 0;
        lVar10 = 0x52;
        do {
          if (*(ushort *)(*(long *)(lVar3 + 0x28) + lVar10) == param_2) {
            lVar3 = *(long *)(param_1 + 0x20) + lVar11;
            FUN_039b8d60(lVar3,param_1,uVar5,param_7);
            FUN_039ba290(lVar3,*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198,param_7);
            uVar6 = (ulong)*(ushort *)(*(long *)(lVar3 + 8) + 0x52);
            FUN_038d1270(lVar3 + 0x1070,"%s>%s>%d(%s)",*(long *)(*(long *)(param_1 + 0x10) + 8) + 2,
                         *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + uVar6 * 0xa8 + 8) +
                         2,uVar9 & 0xffffffff,
                         (&PTR_DAT_04b6a7f8)
                         [(ulong)*(byte *)(*(long *)(param_1 + 0x18) + uVar6 * 0x198 + 0x70) & 7]);
            FUN_039bb558(lVar3,*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198);
            lVar3 = *(long *)(param_1 + 0x10);
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 0x1118;
          lVar10 = lVar10 + 0x60;
        } while (uVar9 < *(ushort *)(lVar3 + 0x6a));
      }
      else {
        lVar8 = 0;
        uVar9 = 0;
        lVar11 = 0x1110;
        lVar10 = 0x52;
        do {
          if (*(ushort *)(*(long *)(lVar3 + 0x28) + lVar10) == param_2) {
            pbVar1 = (byte *)(*(long *)(param_1 + 0x20) + lVar11);
            lVar3 = *(long *)(param_1 + 0x20) + lVar8;
            *pbVar1 = *pbVar1 | 1;
            FUN_039b8d60(lVar3,param_1,uVar5,param_7);
            FUN_039ba290(lVar3,*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198,param_7);
            uVar6 = (ulong)*(ushort *)(*(long *)(lVar3 + 8) + 0x52);
            FUN_038d1270(pbVar1 + -0xa0,"%s>%s>%d(%s)",*(long *)(*(long *)(param_1 + 0x10) + 8) + 2,
                         *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + uVar6 * 0xa8 + 8) +
                         2,uVar9 & 0xffffffff,
                         (&PTR_DAT_04b6a7f8)
                         [(ulong)*(byte *)(*(long *)(param_1 + 0x18) + uVar6 * 0x198 + 0x70) & 7]);
            FUN_039bb558(lVar3,*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198);
            lVar3 = *(long *)(param_1 + 0x10);
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 0x1118;
          lVar8 = lVar8 + 0x1118;
          lVar10 = lVar10 + 0x60;
        } while (uVar9 < *(ushort *)(lVar3 + 0x6a));
      }
    }
    else if ((param_5 & 2) == 0) {
      lVar7 = 0;
      lVar10 = 0;
      uVar9 = 0;
      lVar8 = 0x1110;
      lVar11 = 0x52;
      do {
        if (*(ushort *)(*(long *)(lVar3 + 0x28) + lVar11) == param_2) {
          lVar3 = *(long *)(param_1 + 0x20) + lVar7;
          pbVar1 = (byte *)(*(long *)(param_1 + 0x20) + lVar8);
          lVar4 = *(long *)(*(long *)(param_3 + 0x118) + lVar10);
          *(long *)(lVar4 + 0x48) = lVar3;
          *(long *)(lVar3 + 8) = lVar4;
          *pbVar1 = *pbVar1 | 1;
          FUN_039b8d60(lVar3,param_1,uVar5,param_7);
          FUN_039ba290(lVar3,*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198,param_7);
          uVar6 = (ulong)*(ushort *)(*(long *)(lVar3 + 8) + 0x52);
          FUN_038d1270(pbVar1 + -0xa0,"%s>%s>%d(%s)",*(long *)(*(long *)(param_1 + 0x10) + 8) + 2,
                       *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + uVar6 * 0xa8 + 8) + 2
                       ,uVar9 & 0xffffffff,
                       (&PTR_DAT_04b6a7f8)
                       [(ulong)*(byte *)(*(long *)(param_1 + 0x18) + uVar6 * 0x198 + 0x70) & 7]);
          FUN_039bb558(lVar3,*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198);
          lVar3 = *(long *)(param_1 + 0x10);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x1118;
        lVar10 = lVar10 + 0x70;
        lVar7 = lVar7 + 0x1118;
        lVar11 = lVar11 + 0x60;
      } while (uVar9 < *(ushort *)(lVar3 + 0x6a));
    }
    else {
      lVar7 = 0;
      lVar10 = 0;
      uVar9 = 0;
      lVar8 = 0x1110;
      lVar11 = 0x52;
      do {
        if (*(ushort *)(*(long *)(lVar3 + 0x28) + lVar11) == param_2) {
          lVar3 = *(long *)(param_1 + 0x20) + lVar7;
          pbVar1 = (byte *)(*(long *)(param_1 + 0x20) + lVar8);
          lVar4 = *(long *)(*(long *)(param_3 + 0x118) + lVar10);
          *(long *)(lVar4 + 0x48) = lVar3;
          *(long *)(lVar3 + 8) = lVar4;
          *pbVar1 = *pbVar1 | 1;
          FUN_039b8d60(lVar3,param_1,uVar5,param_7);
          FUN_039ba290(lVar3,*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198,param_7);
          uVar6 = (ulong)*(ushort *)(*(long *)(lVar3 + 8) + 0x52);
          FUN_038d1270(pbVar1 + -0xa0,"%s>%s>%d(%s)",*(long *)(*(long *)(param_1 + 0x10) + 8) + 2,
                       *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + uVar6 * 0xa8 + 8) + 2
                       ,uVar9 & 0xffffffff,
                       (&PTR_DAT_04b6a7f8)
                       [(ulong)*(byte *)(*(long *)(param_1 + 0x18) + uVar6 * 0x198 + 0x70) & 7]);
          FUN_039bb558(lVar3,*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x198);
          lVar3 = *(long *)(param_1 + 0x10);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x1118;
        lVar10 = lVar10 + 0x70;
        lVar7 = lVar7 + 0x1118;
        lVar11 = lVar11 + 0x60;
      } while (uVar9 < *(ushort *)(lVar3 + 0x6a));
    }
  }
  plVar2 = *(long **)(DAT_05ae9b00 + 0x48);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x039b84d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2,param_7);
  return;
}

