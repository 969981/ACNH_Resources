
uint FUN_00278618(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined1 auStack_44 [16];
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bcd350;
  if (*(char *)((long)param_1 + 100) != '\0') {
    return 0;
  }
  lVar5 = *(long *)PTR_DAT_04bcd350;
  plVar6 = *(long **)(lVar5 + 0x20);
  if (*(char *)((long)plVar6 + 0x104) != '\0') {
    FUN_0027fa50(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6,0);
    lVar5 = *(long *)puVar2;
  }
  plVar6 = *(long **)(lVar5 + 0x38);
  if ((plVar6 != (long *)0x0) && (*(char *)((long)plVar6 + 0x84) != '\0')) {
    FUN_00279f24(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6,0);
    lVar5 = *(long *)puVar2;
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  iVar3 = FUN_002212bc(uVar7);
  if ((iVar3 == 4) || (iVar3 = FUN_002212bc(uVar7), iVar3 == 1)) {
    return 0;
  }
  plVar6 = *(long **)(*(long *)puVar2 + 8);
  uVar4 = FUN_002212e4(plVar6);
  lVar5 = DAT_04c5fbb0;
  if ((uVar4 & 1) == 0) {
    lVar1 = param_1[0xc];
    plVar6 = (long *)FUN_00228380();
    uVar7 = *(undefined8 *)puVar2;
    param_1[0xb] = *(long *)(lVar5 + 0x30) + *plVar6 * (long)(int)lVar1;
    *(undefined1 *)((long)param_1 + 100) = 1;
    FUN_0026ad54(uVar7,3);
    (**(code **)(*param_1 + 0x10))(param_1,1);
    FUN_0026bf14(*(undefined8 *)puVar2);
    param_1[6] = (long)FUN_002787d4;
    param_1[7] = 0;
    param_1[8] = (long)"ProcessDestroyMeshJob::SendDestroyResponse";
  }
  else {
    local_34 = 0;
    local_54 = 0x6439;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
    FUN_002296c4(auStack_44,&local_54);
    FUN_002665d0(plVar6,auStack_44);
    (**(code **)(*plVar6 + 0x10))(plVar6,1);
    *(undefined1 *)((long)param_1 + 100) = 1;
  }
  return (uVar4 ^ 1) & 1;
}

