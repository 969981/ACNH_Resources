
undefined8 FUN_002569f0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 auStack_50 [32];
  
  *(undefined4 *)(param_1 + 0x22) = 1;
  puVar7 = PTR_DAT_04bc1510;
  plVar2 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined1 *)((long)param_1 + 0x86));
  plVar2 = (long *)FUN_002ba790(*(undefined8 *)puVar7);
  lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,(char)param_1[0x12]);
  if (lVar4 == 0) {
    *(undefined1 *)((long)param_1 + 0x161) = 1;
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar5 & 1) == 0) goto LAB_00256b1c;
LAB_00256b70:
    if (*(char *)((long)param_1 + 0x161) == '\0') {
      iVar1 = FUN_00278ea4(param_1);
      plVar2 = (long *)FUN_00228380();
      param_1[0xb] = param_1[0xb] + *plVar2 * 10000;
      if (iVar1 == 1) {
        pcVar6 = "LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost";
        puVar7 = PTR_LAB_04bcd918;
        goto LAB_00256b88;
      }
      if (iVar1 == 2) {
        pcVar6 = "LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient";
        puVar7 = PTR_LAB_04bcd910;
        goto LAB_00256b88;
      }
    }
  }
  else {
    FUN_0021f508(auStack_50,*(long *)(param_1[0x2b] + 0x18) + 0x2c8);
    if (lVar3 == 0) {
      FUN_0021fef8(param_1 + 0x23);
      FUN_0021f54c(param_1 + 0x27,lVar4 + 0x18);
      uVar5 = FUN_0021fea0(param_1 + 0x27);
    }
    else {
      plVar2 = param_1 + 0x23;
      FUN_0021f54c(plVar2,lVar3 + 0x18);
      local_54 = 0;
      local_5c = 0x20;
      FUN_00220138(auStack_50,&local_5c);
      local_54 = 0;
      local_5c = 0x20;
      FUN_00220138(plVar2,&local_5c);
      lVar4 = lVar4 + 0x18;
      local_54 = 0;
      local_5c = 0x20;
      FUN_00220138(lVar4,&local_5c);
      uVar5 = FUN_002200e4(plVar2,auStack_50);
      if (((uVar5 & 1) == 0) && (uVar5 = FUN_0021fea0(auStack_50), (uVar5 & 1) != 0)) {
        uVar5 = FUN_002200e4(auStack_50,lVar4);
        if ((uVar5 & 1) == 0) {
          local_54 = 0;
          local_5c = 0x20;
          FUN_00220138(auStack_50,&local_5c);
          local_54 = 0;
          local_5c = 0x20;
          FUN_00220138(lVar4,&local_5c);
          *(undefined1 *)((long)param_1 + 0x161) = 1;
          uVar5 = FUN_0021fea0(param_1 + 0x27);
        }
        else {
          FUN_0021f54c(param_1 + 0x27,auStack_50);
          uVar5 = FUN_0021fea0(param_1 + 0x27);
        }
      }
      else {
        FUN_0021f54c(param_1 + 0x27,lVar4);
        uVar5 = FUN_0021fea0(param_1 + 0x27);
      }
    }
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x161) = 1;
    }
    FUN_0021f584(auStack_50);
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar5 & 1) != 0) goto LAB_00256b70;
LAB_00256b1c:
    *(undefined1 *)((long)param_1 + 0x161) = 1;
  }
  pcVar6 = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
  puVar7 = PTR_LAB_04bcd478;
LAB_00256b88:
  param_1[6] = (long)puVar7;
  param_1[7] = 0;
  param_1[8] = (long)pcVar6;
  return 0;
}

