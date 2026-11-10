
undefined8 FUN_002515d4(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  lVar1 = *(long *)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(lVar1 + 0x28) != '\0') {
    if (*piVar2 == 1) {
      FUN_002210f0(piVar2);
    }
    uVar4 = 0;
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd5a8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
switchD_00251654_caseD_1:
    return uVar4;
  }
  uVar4 = 5;
  switch(*piVar2) {
  case 1:
    goto switchD_00251654_caseD_1;
  case 2:
    plVar6 = *(long **)(*(long *)PTR_DAT_04bcb8b8 +
                        (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162) * 8 + 0x168);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x140))();
    (**(code **)(*plVar6 + 0x148))(plVar6,uVar4);
    local_58 = 0;
    local_60 = 0x10;
    FUN_00220138(*(long *)(param_1 + 0x78) + 0x2a8,&local_60);
    puVar3 = PTR_LAB_04bcd5b0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitUntilAllClientsConnection";
    *(undefined **)(param_1 + 0x30) = puVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_002282f0(param_1 + 0x70);
    return 0;
  case 3:
    FUN_002296c4(auStack_30,piVar2 + 1);
    puVar5 = auStack_30;
    break;
  case 4:
    FUN_002296c4(auStack_40,piVar2 + 1);
    puVar5 = auStack_40;
    break;
  default:
    local_14 = 0;
    local_60 = CONCAT44(local_60._4_4_,0x10c08);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_14);
    FUN_002296c4(auStack_50,&local_60);
    puVar5 = auStack_50;
  }
  FUN_00220ff8(lVar1,puVar5);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_00251328(param_1);
  return 1;
}

