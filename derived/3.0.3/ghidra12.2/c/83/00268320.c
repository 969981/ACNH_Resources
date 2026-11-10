
bool FUN_00268320(long *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  cVar1 = *(char *)((long)param_1 + 0x6c);
  if (cVar1 == '\0') {
    lVar2 = param_1[0xd];
    lVar5 = *(long *)PTR_DAT_04bcb8c0;
    plVar4 = (long *)FUN_00228380();
    param_1[0xc] = *(long *)(lVar5 + 0x30) + *plVar4 * (long)(int)lVar2;
    if (param_2 != 0) {
      param_1[0xb] = param_2;
      FUN_00220f78(param_2);
    }
    *(undefined4 *)(param_1 + 0x12) = param_3;
    *(undefined1 *)((long)param_1 + 0x6c) = 1;
    puVar3 = PTR_DAT_04bcd350;
    FUN_0026ad54(*(undefined8 *)PTR_DAT_04bcd350,param_3);
    (**(code **)(*param_1 + 0x10))(param_1,1);
    FUN_0026bf14(*(undefined8 *)puVar3);
    param_1[6] = (long)FUN_002683e8;
    param_1[7] = 0;
    param_1[8] = (long)"LeaveWithHostMigrationJob::CheckHostMigrationProcess";
  }
  return cVar1 == '\0';
}

