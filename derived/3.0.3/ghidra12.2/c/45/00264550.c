
undefined8 FUN_00264550(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined1 auStack_40 [16];
  undefined4 local_24;
  
  uVar4 = FUN_00263ba8();
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  lVar5 = FUN_002ba790(DAT_04c61168);
  puVar2 = PTR_DAT_04bcb8c0;
  lVar8 = *(long *)PTR_DAT_04bcb8c0;
  if (*(long *)(lVar5 + 0x98) == 0) {
    lVar5 = *(long *)(lVar8 + 0x30);
    lVar8 = *(long *)(param_1 + 0xb8);
    plVar6 = (long *)FUN_00228380();
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar5 - lVar8) / *plVar6);
    }
    if (-1 < iVar1) {
      DAT_04c5fd0b = (undefined1)*(undefined4 *)(param_1 + 0xa0);
      DAT_04c5fcfc = iVar1;
    }
    piVar9 = *(int **)(param_1 + 0x58);
    if (piVar9 == (int *)0x0) goto LAB_002647b8;
    if (2 < *piVar9 - 2U) {
      local_24 = 0;
      local_50 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      FUN_002296c4(auStack_40,&local_50);
      FUN_00220ff8(piVar9,auStack_40);
    }
    uVar4 = FUN_0026c550(DAT_04c603c8);
    if ((uVar4 & 1) == 0) {
      local_24 = 0;
      local_50 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      puVar2 = PTR_DAT_04bccf00;
      *(undefined4 *)(PTR_DAT_04bccf00 + 0x11c) = local_50;
      *(undefined4 *)(puVar2 + 300) = *(undefined4 *)(param_1 + 0xb4);
    }
    uVar7 = DAT_04c603c8;
  }
  else {
    plVar6 = (long *)FUN_00228380();
    puVar3 = PTR_DAT_04bcd350;
    lVar5 = *plVar6;
    lVar8 = *(long *)(lVar8 + 0x30);
    uVar7 = FUN_0026c420(*(undefined8 *)PTR_DAT_04bcd350);
    uVar4 = FUN_00273520(uVar7,lVar8 + lVar5 * 10000,param_1 + 0x68);
    if ((uVar4 & 1) != 0) {
      uVar7 = FUN_0026c420(*(undefined8 *)puVar3);
      FUN_00273a0c(uVar7,param_1);
      *(undefined4 *)(param_1 + 0x88) = 0x1010101;
      *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitRequestAck";
      *(code **)(param_1 + 0x30) = FUN_002647e0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    lVar8 = *(long *)(param_1 + 0xb8);
    lVar5 = *(long *)(*(long *)puVar2 + 0x30);
    plVar6 = (long *)FUN_00228380();
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar5 - lVar8) / *plVar6);
    }
    if (-1 < iVar1) {
      DAT_04c5fd0b = (undefined1)*(undefined4 *)(param_1 + 0xa0);
      DAT_04c5fcfc = iVar1;
    }
    piVar9 = *(int **)(param_1 + 0x58);
    if (piVar9 == (int *)0x0) goto LAB_002647b8;
    if (2 < *piVar9 - 2U) {
      local_50 = 0x6439;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      FUN_002296c4(auStack_60,&local_50);
      FUN_00220ff8(piVar9,auStack_60);
    }
    uVar4 = FUN_0026c550(*(undefined8 *)puVar3);
    if ((uVar4 & 1) == 0) {
      local_50 = 0x6439;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      puVar2 = PTR_DAT_04bccf00;
      *(undefined4 *)(PTR_DAT_04bccf00 + 0x11c) = local_50;
      *(undefined4 *)(puVar2 + 300) = *(undefined4 *)(param_1 + 0xb4);
    }
    uVar7 = *(undefined8 *)puVar3;
  }
  FUN_0026c264(uVar7);
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_002647b8:
  FUN_00221064(*(undefined8 *)(param_1 + 0x60));
  FUN_00220f24(*(undefined8 *)(param_1 + 0x60));
  return 1;
}

