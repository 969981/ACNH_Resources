
undefined4 FUN_02044554(float *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined *local_e8;
  char *pcStack_e0;
  undefined4 local_d8;
  char local_d4 [8];
  char local_cc [8];
  char local_c4 [8];
  undefined7 local_bc;
  undefined4 uStack_b5;
  undefined1 local_b1;
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  undefined *local_40;
  char *pcStack_38;
  
  local_118 = 0xffffffff00000000;
  local_d8 = 0x80;
  local_104 = 0x3f800000;
  local_50 = 7;
  pcStack_e0 = local_d4;
  local_55 = 0;
  local_48 = 0;
  local_110 = *param_1;
  fStack_10c = param_1[1];
  local_4c = 0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_fc = 0;
  local_f4 = 0;
  local_108 = param_1[2] + 10.0;
  local_b1 = 0;
  local_bc = s_FtrMikeStand_None_None_FtrMikeSt_040e5294._24_7_;
  local_c4 = (char  [8])s_FtrMikeStand_None_None_FtrMikeSt_040e5294._16_8_;
  local_cc = (char  [8])s_FtrMikeStand_None_None_FtrMikeSt_040e5294._8_8_;
  local_d4 = (char  [8])s_FtrMikeStand_None_None_FtrMikeSt_040e5294._0_8_;
  uStack_b5 = 0x646e6174;
  uVar3 = FUN_0224b5e0(*(undefined8 *)PTR_DAT_04bb60a8,&local_118,0);
  puVar2 = PTR_DAT_04bb4850;
  fVar7 = *param_1;
  fVar8 = param_1[2];
  lVar5 = *(long *)PTR_DAT_04bb4848;
  *(undefined1 *)(lVar5 + 0x900) = 0;
  *(undefined1 *)(lVar5 + 0x902) = 1;
  iVar1 = (int)((float)(int)(fVar7 + -77.5) / 5.0) - (uint)(fVar7 + -77.5 < 0.0);
  *(int *)(lVar5 + 0x8e8) = iVar1;
  *(int *)(lVar5 + 0x8f8) = iVar1 + 0x1f;
  lVar6 = *(long *)puVar2;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  iVar1 = (int)((float)(int)(fVar8 + -77.5) / 5.0) - (uint)(fVar8 + -77.5 < 0.0);
  *(int *)(lVar5 + 0x8ec) = iVar1;
  *(int *)(lVar5 + 0x8fc) = iVar1 + 0x1f;
  pcStack_38 = "FlightBalloonEnable";
  uVar4 = FUN_0273f0a0(&local_40);
  if ((uVar4 & 1) != 0) {
    *(undefined2 *)(lVar6 + 8) = 0x100;
  }
  *(undefined1 *)(*(long *)PTR_DAT_04bb3968 + 0x3429) = 1;
  return uVar3;
}

