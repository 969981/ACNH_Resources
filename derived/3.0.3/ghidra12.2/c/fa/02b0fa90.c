
void FUN_02b0fa90(long param_1,uint param_2,byte param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **local_88;
  byte local_80;
  undefined **local_78;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  plVar1 = (long *)(param_1 + 8) + param_2;
  if (6 < param_2) {
    plVar1 = (long *)(param_1 + 8);
  }
  if ((long *)*plVar1 == (long *)0x0) {
    return;
  }
  local_68._0_4_ = param_2;
  lVar7 = (**(code **)(*(long *)*plVar1 + 0x38))();
  puVar3 = PTR_DAT_04bb6298;
  if (lVar7 == 0) {
    return;
  }
  bVar6 = param_3 & 1;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_02b0fb34:
    local_48 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    pcStack_60 = PTR_DAT_04bb2010 + 0x10;
    local_58 = 0;
    local_88 = &PTR_FUN_04aa18d8;
    local_78 = &local_68;
    iVar5 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    local_80 = bVar6;
    puStack_50 = pcStack_60;
    if (iVar5 != 0) {
      lVar11 = (long)iVar5 << 3;
      puVar10 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_88)(&local_88,*puVar10);
        lVar11 = lVar11 + -8;
        puVar10 = puVar10 + 1;
      } while (lVar11 != 0);
    }
  }
  else {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_02b0fb34;
  }
  FUN_011e4000(lVar7,param_3 & 1);
  sVar4 = *(short *)puVar3;
  if (sVar4 == -1) {
    uVar8 = *(undefined8 *)PTR_DAT_04bb47e0;
  }
  else {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    uVar8 = *(undefined8 *)PTR_DAT_04bb47e0;
    if ((*(uint *)(puVar3 + 4) & 1) != 0) {
      FUN_019533a0(uVar8,(param_3 ^ 0xff) & 1);
      goto LAB_02b0fc3c;
    }
  }
  FUN_019535ac(uVar8,param_3 & 1);
  FUN_0142b170(param_3 & 1);
LAB_02b0fc3c:
  FUN_02979890(param_3 & 1);
  FUN_0229142c(*(undefined8 *)PTR_DAT_04bb4848,lVar7,param_3 & 1);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  lVar7 = *(long *)PTR_DAT_04bb4850;
  pcStack_60 = "FlightBalloonEnable";
  uVar9 = FUN_0273f0a0(&local_68);
  if (((uVar9 & 1) != 0) || ((param_3 & 1) != 0)) {
    *(byte *)(lVar7 + 8) = bVar6;
    *(undefined1 *)(lVar7 + 9) = 1;
  }
  return;
}

