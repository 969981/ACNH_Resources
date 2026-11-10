
bool FUN_0026c934(long *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)((long)param_1 + 0x8d) != '\0') {
    return *(char *)((long)param_1 + 0x8d) == '\0';
  }
  if (param_2 != 0) {
    param_1[0xb] = param_2;
    FUN_00220f78(param_2);
  }
  lVar4 = DAT_04c5fbb0;
  lVar1 = param_1[0xd];
  plVar3 = (long *)FUN_00228380();
  lVar4 = *(long *)(lVar4 + 0x30);
  lVar5 = *plVar3;
  *(undefined1 *)((long)param_1 + 0x8d) = 1;
  *(int *)(param_1 + 0x12) = param_3;
  *(bool *)((long)param_1 + 0x8e) = param_3 != 2;
  param_1[0xc] = lVar4 + lVar5 * (int)lVar1;
  puVar2 = PTR_DAT_04bcd350;
  FUN_0026ad54(*(undefined8 *)PTR_DAT_04bcd350,param_3);
  (**(code **)(*param_1 + 0x10))(param_1,1);
  FUN_0026bf14(*(undefined8 *)puVar2);
  param_1[6] = (long)&LAB_0026ca20;
  param_1[7] = 0;
  param_1[8] = (long)"DestroyMeshJob::SendDestroyMesh";
  return true;
}

