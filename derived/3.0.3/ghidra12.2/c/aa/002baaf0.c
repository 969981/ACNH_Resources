
void FUN_002baaf0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  char acStack_170 [64];
  char acStack_130 [64];
  char acStack_f0 [64];
  char acStack_b0 [64];
  
  FUN_002a75ec("[Analysis] --------- BEGIN(Pia Connection info, %d.%03d sec. passed) ---------",
               *(int *)(param_1 + 0x400) / 1000,*(int *)(param_1 + 0x400) % 1000);
  FUN_002a75ec(
              "[Analysis] StationIndex,  RTT[ms],  RttMin[ms],  RttMax[ms],  PacketLoss[%%],  Loss/Total"
              );
  uVar4 = 0;
  piVar5 = (int *)(param_1 + 0x10);
  do {
    if ((char)piVar5[3] != '\0') {
      fVar6 = -1.0;
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      uVar3 = *piVar5 - piVar5[-1];
      if (uVar3 != 0) {
        fVar6 = ((float)(uint)(iVar2 - iVar1) * 100.0) / (float)uVar3;
      }
      if (piVar5[-4] < 0) {
        nn::util::SNPrintf(acStack_b0,0x40,"      ---,");
        if (piVar5[-3] < 0) goto LAB_002bac80;
LAB_002bac30:
        nn::util::SNPrintf(acStack_f0,0x40,"        %4d,");
        if (-1 < piVar5[-2]) goto LAB_002bac48;
LAB_002bac98:
        nn::util::SNPrintf(acStack_130,0x40,"         ---,");
        if (0.0 <= fVar6) goto LAB_002bab94;
LAB_002bacb0:
        nn::util::SNPrintf(acStack_170,0x40,"            ---,");
      }
      else {
        nn::util::SNPrintf(acStack_b0,0x40,"     %4d,");
        if (-1 < piVar5[-3]) goto LAB_002bac30;
LAB_002bac80:
        nn::util::SNPrintf(acStack_f0,0x40,"         ---,");
        if (piVar5[-2] < 0) goto LAB_002bac98;
LAB_002bac48:
        nn::util::SNPrintf(acStack_130,0x40,"        %4d,");
        if (fVar6 < 0.0) goto LAB_002bacb0;
LAB_002bab94:
        nn::util::SNPrintf(acStack_170,0x40,"         %6.2f,",(double)fVar6);
      }
      FUN_002a75ec("[Analysis]         0x%02x,%s%s%s%s%4d/%4d",uVar4 & 0xffffffff,acStack_b0,
                   acStack_f0,acStack_130,acStack_170,iVar2 - iVar1,uVar3);
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 8;
    if (uVar4 == 0x20) {
      FUN_002a75ec("[Analysis] ------------------------------- END -------------------------------")
      ;
      return;
    }
  } while( true );
}

