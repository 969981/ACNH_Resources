
void FUN_0023d7ec(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_3b0 [16];
  undefined8 local_3a0;
  undefined4 local_398;
  int local_390 [4];
  undefined1 auStack_380 [24];
  undefined4 local_368;
  undefined2 local_364;
  undefined1 local_362;
  undefined1 local_361;
  undefined1 auStack_360 [576];
  undefined1 auStack_120 [16];
  undefined4 local_110;
  ErrorResultVariant aEStack_10c [12];
  int local_100 [4];
  undefined *local_f0;
  int local_e8;
  int local_d8;
  undefined1 auStack_d0 [96];
  undefined1 auStack_70 [16];
  int local_60 [4];
  undefined4 local_44;
  undefined8 local_40;
  int in_stack_ffffffffffffffc8;
  
  switch(*(undefined4 *)((long)param_2 + 0xc)) {
  case 3:
    break;
  case 4:
    FUN_0023fef0(&local_f0);
    FUN_00240070(local_100,&local_f0,*param_2,*(undefined2 *)(param_2 + 1));
    if ((local_100[0] == 0) && (local_e8 == 4)) {
      plVar11 = *(long **)(DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168);
      iVar3 = FUN_00232c24(plVar11);
      if (local_d8 == iVar3) {
        FUN_002b4370(auStack_d0);
        uVar9 = FUN_0021fea0();
        if ((uVar9 & 1) != 0) {
          lVar5 = FUN_002b43ec(auStack_d0);
          lVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11);
          (**(code **)(*plVar11 + 0xf8))(plVar11,lVar5);
          lVar7 = FUN_002ba788(DAT_04c61168);
          lVar7 = FUN_002b43ec(lVar7 + 8);
          (**(code **)(*plVar11 + 0xe8))(plVar11,lVar5 == lVar7);
          uVar8 = FUN_00232c2c(plVar11);
          FUN_002415c4(uVar8,auStack_d0);
          lVar7 = DAT_04c60f48;
          if (lVar5 != lVar6 && lVar6 != 0) {
            uVar2 = FUN_00232c24(plVar11);
            FUN_0029d210(&local_110,lVar7,uVar2,lVar5);
          }
          local_110 = 0;
          local_44 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_10c,(Result *)&local_44);
          FUN_002296c4(auStack_120,&local_110);
          FUN_00220f8c(param_1 + 0x1318,auStack_120);
        }
      }
    }
    local_f0 = PTR_DAT_04bcd300 + 0x10;
    FUN_002b4104(auStack_d0);
    return;
  case 5:
    FUN_00240180(local_60 + 4);
    FUN_002402d8(local_60,local_60 + 4,*param_2,*(undefined2 *)(param_2 + 1));
    puVar1 = PTR_DAT_04bcd350;
    if ((local_60[0] == 0) && (*(short *)(param_2 + 1) == 0x10)) {
      plVar11 = *(long **)(*(long *)PTR_DAT_04bcb8b8 +
                           (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162) * 8 + 0x168);
      iVar3 = FUN_0026c5a0(*(undefined8 *)PTR_DAT_04bcd350);
      uVar9 = FUN_0026b3b4(*(undefined8 *)puVar1);
      if ((iVar3 == 1) &&
         ((((uVar9 & 1) == 0 && (iVar3 = FUN_00232c24(plVar11), in_stack_ffffffffffffffc8 == iVar3))
          && (uVar9 = (**(code **)(*plVar11 + 0xe0))(plVar11), (uVar9 & 1) != 0)))) {
        FUN_0023c1f0(auStack_70,param_1,param_3);
        return;
      }
    }
    return;
  case 6:
    FUN_0024036c(auStack_380);
    FUN_00240560(local_390,auStack_380,*param_2,*(undefined2 *)(param_2 + 1));
    if ((local_390[0] == 0) && ((int)local_40 + 0x18U == (uint)*(ushort *)(param_2 + 1))) {
      plVar11 = *(long **)(DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168);
      uVar9 = FUN_0026b3b4(DAT_04c603c8);
      if (((uVar9 & 1) == 0) &&
         (FUN_0023aee8(param_1 + 0xc90,auStack_360,local_40 & 0xffffffff,local_368,local_364,
                       local_362,local_361,param_3),
         (uint)*(byte *)(param_1 + 0x1276) == ~(-1 << (ulong)(*(byte *)(param_1 + 0x1277) & 0x1f))))
      {
        plVar10 = (long *)FUN_00232c34(plVar11);
        (**(code **)(*plVar10 + 0x78))(&local_3a0,plVar10,param_1 + 0xc94,0x5dc);
        plVar10 = (long *)FUN_00232c34(plVar11);
        iVar3 = (**(code **)(*plVar10 + 0x18))();
        iVar4 = FUN_00232c24(plVar11);
        if ((iVar3 == iVar4) && (uVar9 = (**(code **)(*plVar11 + 0xe0))(plVar11), (uVar9 & 1) == 0))
        {
          plVar10 = (long *)FUN_00232c2c(plVar11);
          (**(code **)(*plVar10 + 0x78))(&local_3a0,plVar10,param_1 + 0xc94,0x5dc);
          plVar10 = (long *)FUN_00232c2c(plVar11);
          local_398 = 0;
          local_3a0 = 0x80000000;
          (**(code **)(*plVar10 + 0x58))(plVar10,&local_3a0);
          if (*(int *)(param_1 + 0x1358) == 1) {
            local_3a0 = local_3a0 & 0xffffffff00000000;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((long)&local_3a0 + 4),(Result *)(local_60 + 0xb));
            FUN_002296c4(auStack_3b0,&local_3a0);
            FUN_00220f8c(param_1 + 0x1358,auStack_3b0);
          }
        }
        plVar11 = (long *)FUN_00232c2c(plVar11);
        local_398 = 0;
        local_3a0 = 0x80000000;
        (**(code **)(*plVar11 + 0x58))(plVar11,&local_3a0);
        return;
      }
    }
    return;
  case 7:
    FUN_0024065c(local_60 + 0xe);
    FUN_00240738(local_60 + 10,local_60 + 0xe,*param_2,*(undefined2 *)(param_2 + 1));
  default:
    return;
  }
  FUN_0023fd04(local_60 + 4);
  FUN_0023fe5c(local_60,local_60 + 4,*param_2,*(undefined2 *)(param_2 + 1));
  if ((local_60[0] == 0) && (*(short *)(param_2 + 1) == 0x10)) {
    plVar11 = *(long **)(DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168);
    iVar3 = FUN_0026c5a0(DAT_04c603c8);
    if ((iVar3 == 1) &&
       ((iVar3 = FUN_00232c24(plVar11), in_stack_ffffffffffffffc8 == iVar3 &&
        (uVar9 = (**(code **)(*plVar11 + 0xe0))(plVar11), (uVar9 & 1) != 0)))) {
      FUN_0023bf00(auStack_70,param_1,param_3);
      return;
    }
  }
  return;
}

