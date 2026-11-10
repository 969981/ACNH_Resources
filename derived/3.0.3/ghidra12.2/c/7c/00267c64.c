
undefined8 FUN_00267c64(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = FUN_002212bc();
  if (iVar2 == 4) {
    return 0;
  }
  iVar2 = FUN_002212bc(param_1);
  if (iVar2 == 1) {
    return 0;
  }
  iVar2 = FUN_002212bc(param_1);
  if (iVar2 == 3) {
    return 0;
  }
  if (param_2 != 0) {
    param_1[0xd] = param_2;
    FUN_00220f78(param_2);
  }
  lVar5 = DAT_04c5fbb0;
  lVar4 = param_1[0xc];
  plVar3 = (long *)FUN_00228380();
  lVar5 = *(long *)(lVar5 + 0x30);
  *(undefined4 *)(param_1 + 0xf) = param_3;
  param_1[0xb] = lVar5 + *plVar3 * (long)(int)lVar4;
  puVar1 = PTR_DAT_04bcd350;
  FUN_0026ad54(*(undefined8 *)PTR_DAT_04bcd350,param_3);
  (**(code **)(*param_1 + 0x10))(param_1,1);
  lVar4 = *(long *)puVar1;
  param_1[6] = (long)FUN_00267dbc;
  param_1[7] = 0;
  param_1[8] = (long)"LeaveMeshJob::SendLeaveRequest";
  lVar5 = *(long *)(lVar4 + 0x20);
  if (*(char *)(lVar5 + 0x104) != '\0') {
    FUN_0027fa50(lVar5);
    *(undefined1 *)(lVar5 + 0x48) = 1;
    lVar4 = *(long *)puVar1;
  }
  lVar5 = *(long *)(lVar4 + 0x38);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x84) != '\0')) {
    FUN_00279f24(lVar5);
    *(undefined1 *)(lVar5 + 0x48) = 1;
    lVar4 = *(long *)puVar1;
  }
  FUN_0026bf14(lVar4);
  return 1;
}

