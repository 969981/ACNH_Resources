
void FUN_032d2bc0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [31];
  undefined1 local_65;
  
  puVar2 = PTR_DAT_04bc6348;
  lVar5 = FUN_032ca1a0(*(undefined8 *)PTR_DAT_04bc6348,param_4);
  if (lVar5 == 0) {
    pcVar8 = *(char **)(*(long *)(param_6 + 0x20) + 0x30);
    local_65 = 0;
    local_88 = 0x20;
    local_90 = local_84;
    if (local_84 == pcVar8) {
      lVar5 = 0x1f;
    }
    else {
      lVar5 = 0;
      do {
        if (pcVar8[lVar5] == '\0') {
LAB_032d2c80:
          iVar9 = (int)lVar5;
joined_r0x032d2c84:
          if (0x1f < iVar9) {
            iVar9 = 0x1f;
          }
          goto LAB_032d2c8c;
        }
        if (pcVar8[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_032d2c80;
        }
        if (pcVar8[lVar5 + 2] == '\0') {
          iVar9 = (int)lVar5 + 2;
          goto joined_r0x032d2c84;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      iVar9 = 0;
LAB_032d2c8c:
      memcpy(local_84,pcVar8,(long)iVar9);
      local_84[iVar9] = '\0';
      lVar5 = (long)local_88 + -1;
      pcVar8 = local_90;
    }
    puVar1 = PTR_DAT_04bb2028;
    local_98 = PTR_DAT_04bb2028 + 0x10;
    pcVar8[lVar5] = '\0';
    (**(code **)(puVar1 + 0x28))(&local_98);
    if (local_90 == "SwkbdTextArea") {
      bVar3 = true;
    }
    else {
      lVar5 = 0;
      do {
        pcVar8 = local_90 + lVar5;
        bVar3 = *pcVar8 == "SwkbdTextArea"[lVar5];
        bVar4 = lVar5 != 0xc;
        lVar5 = lVar5 + 1;
      } while ((bVar3 && *pcVar8 != '\0') && bVar4);
    }
    FUN_032c9ff4(*(undefined8 *)puVar2,param_4,*(undefined8 *)PTR_DAT_04bc6338,bVar3);
  }
  lVar5 = FUN_032ca1a0(*(undefined8 *)puVar2,param_4);
  if (lVar5 != 0) {
    lVar5 = param_1[0xc];
    plVar6 = (long *)FUN_032ca1a0(*(undefined8 *)puVar2,param_4);
    uVar7 = (**(code **)(*plVar6 + 0x18))();
    FUN_00362d10(lVar5,uVar7);
    param_1[8] = param_1[0xc];
    uVar7 = FUN_0036ad3c(param_1,param_4);
    (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3,uVar7,param_1[0xc],param_6,param_5);
  }
  return;
}

