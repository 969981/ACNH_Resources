
undefined8 FUN_002684d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar7 = PTR_DAT_04bc1510;
  lVar2 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar2 = *(long *)(lVar2 + 0x98);
  if (lVar2 == 0) {
    pcVar8 = "LeaveWithHostMigrationJob::CleanupMesh";
    puVar7 = PTR_LAB_04bcdae0;
  }
  else {
    lVar3 = FUN_002ba790(*(undefined8 *)puVar7);
    puVar7 = PTR_LAB_04bcdad8;
    puVar1 = PTR_DAT_04bcd350;
    lVar9 = *(long *)(lVar3 + 0x20);
    if (lVar9 == lVar3 + 0x18) {
      pcVar8 = "LeaveWithHostMigrationJob::WaitDisconnectStations";
    }
    else {
      pcVar8 = "LeaveWithHostMigrationJob::WaitDisconnectStations";
      do {
        if (*(long *)(lVar9 + 0x10) != lVar2) {
          uVar4 = FUN_00269a70(*(undefined8 *)puVar1,*(undefined1 *)(*(long *)(lVar9 + 0x10) + 0x38)
                              );
          if ((uVar4 & 1) != 0) {
            FUN_00269b00(*(undefined8 *)puVar1,*(undefined1 *)(*(long *)(lVar9 + 0x10) + 0x38));
          }
          plVar5 = *(long **)(lVar9 + 0x10);
          lVar6 = plVar5[0x14];
          if (lVar6 != 0) {
            FUN_00266890(&local_60,lVar6,plVar5);
            if ((int)local_60 == 0) {
              FUN_002211bc(lVar6,0);
              goto LAB_00268560;
            }
            plVar5 = *(long **)(lVar9 + 0x10);
          }
          local_60 = 0x200000000000;
          local_58 = 0;
          (**(code **)(*plVar5 + 0x28))(plVar5,&local_60);
        }
LAB_00268560:
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != lVar3 + 0x18);
    }
  }
  *(undefined **)(param_1 + 0x30) = puVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
  return 0;
}

