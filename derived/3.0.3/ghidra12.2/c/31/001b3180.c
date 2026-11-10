
void FUN_001b3180(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined2 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined *local_130;
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [16];
  long local_c0;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined4 local_a0;
  char local_48;
  undefined1 local_47;
  
  FUN_001b8358(auStack_b0);
  uVar5 = DAT_04be223a;
  if (local_48 == '\0') {
    FUN_001b8590(auStack_b0);
    FUN_001e17d0(local_a8,uVar5);
  }
  else {
    FUN_001e17d0(local_a8,DAT_04be223a);
  }
  if (local_48 == '\0') {
    local_47 = 0;
    FUN_001b8590(auStack_b0);
  }
  local_47 = 0;
  local_a0 = 3;
  plVar6 = (long *)FUN_00185a6c(0x38);
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(PTR_DAT_04bcbc48 + 0x10);
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined1 *)((long)plVar6 + 0xc) = 0;
    *plVar6 = (long)&PTR_FUN_048393d8;
    uVar7 = FUN_00196a18();
    FUN_00196a24(plVar6,uVar7,0);
  }
  FUN_00197218(auStack_d0);
  local_128[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_118 = local_128;
  uStack_110 = 0x10;
  local_130 = puVar1;
  FUN_0018b070(&local_130,&DAT_0406f9b4,0xffffffffffffffff);
  FUN_00196c40(auStack_108,&local_130);
  FUN_001975b8(auStack_d0,auStack_108);
  FUN_00196ce0(auStack_108);
  local_130 = puVar1;
  FUN_0018b1a0(&local_130);
  FUN_00193030(plVar6,local_c0,*(undefined8 *)(local_c0 + 0x18),0xffffffffffffffff);
  if (DAT_04be2248 != 0) {
    uVar11 = 0;
    do {
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 == (long *)0x0) {
        plVar8 = *(long **)(param_1 + 0x20);
        if (plVar8 != (long *)0x0) {
          if (local_48 == '\0') {
            FUN_001b8590(auStack_b0);
          }
          (**(code **)(*plVar8 + 0x30))
                    (auStack_108,plVar8,local_a8,(int)plVar8[1],(char)plVar8[3],plVar6,param_3,0);
        }
      }
      else {
        (**(code **)(*plVar8 + 0x18))(plVar8,auStack_b0,plVar6[2] + plVar6[5],plVar6[3],param_3);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < DAT_04be2248);
  }
  plVar8 = plVar6 + 1;
  iVar10 = (int)*plVar8;
  iVar9 = (int)*plVar8 + -1;
  if (iVar10 == (int)*plVar8) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001b338c:
      if ((iVar9 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      FUN_00197350(auStack_d0);
      FUN_001b8504(auStack_b0);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar8;
    iVar9 = iVar10 + -1;
    if ((int)lVar4 == iVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001b338c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar4;
  } while( true );
}

