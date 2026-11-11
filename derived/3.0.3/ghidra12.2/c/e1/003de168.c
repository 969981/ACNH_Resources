
long FUN_003de168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [8];
  int local_e0;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  byte local_36;
  byte local_35;
  undefined1 local_34;
  undefined2 local_33;
  
  local_38 = 0;
  local_3c = 0;
  uVar3 = FUN_003c92d0(param_2,auStack_48,*param_4,param_4[1],param_4[2]);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar4 = FUN_003c8fec(param_3,local_44);
  FUN_003d40cc(auStack_110,uVar4,0);
  uVar3 = FUN_003d41bc(auStack_110,auStack_e8,0);
  lVar5 = 0;
  if ((uVar3 & 1) != 0) {
    if (1 < local_e0) {
      local_e0 = 2;
    }
    lVar5 = FUN_003bfac0(local_e0,param_4[5],*(undefined8 *)(param_4 + 6),
                         *(undefined8 *)(param_4 + 8));
    if (lVar5 != 0) {
      lVar1 = lVar5 + 0x20;
      *(char *)(lVar5 + 0x170) = (char)param_4[1];
      *(undefined1 *)(lVar5 + 0x171) = local_37;
      fVar6 = (float)NEON_ucvtf((uint)local_36);
      fVar7 = (float)NEON_ucvtf((uint)*(byte *)(param_4 + 2));
      *(float *)(lVar5 + 0x174) = fVar6 * 0.007874016;
      *(float *)(lVar5 + 0x178) = fVar7 * 0.007874016;
      *(undefined4 *)(lVar5 + 0x150) = local_40;
      FUN_003bfdb4(lVar1,(undefined1)local_3c);
      FUN_003bfdc8(lVar1,local_3c._3_1_);
      FUN_003bfddc(lVar1,local_3c._1_1_);
      FUN_003bfe60(lVar1,local_3c._2_1_);
      FUN_003bfe68(lVar1,local_38);
      iVar2 = param_4[4];
      *(undefined2 *)(lVar5 + 0x172) = local_33;
      *(undefined1 *)(lVar5 + 0xc5) = local_34;
      *(float *)(lVar5 + 0x148) = (float)(int)(iVar2 + (uint)local_35 + -0x40) / 63.0;
      FUN_003bf948(lVar5,param_4[0xc]);
      FUN_003bf958(lVar5,*(undefined8 *)(param_4 + 10));
      FUN_003bf590(lVar5,auStack_e8,param_4[3],0,0);
    }
  }
  return lVar5;
}

