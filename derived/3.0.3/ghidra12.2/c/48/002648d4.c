
undefined8 FUN_002648d4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  plVar5 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  puVar3 = PTR_DAT_04bcd350;
  uVar4 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x4c) == 5)) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(DAT_04c5fbb0 + 0x30);
  plVar5 = (long *)FUN_00228380();
  iVar1 = 0;
  if (*plVar5 != 0) {
    iVar1 = (int)((lVar6 - lVar8) / *plVar5);
  }
  if (-1 < iVar1) {
    DAT_04c5fd0b = (undefined1)*(undefined4 *)(param_1 + 0xa0);
    DAT_04c5fcfc = iVar1;
  }
  FUN_00265e60();
  piVar9 = *(int **)(param_1 + 0x58);
  if (piVar9 != (int *)0x0) {
    if (2 < *piVar9 - 2U) {
      local_24 = 0;
      local_44 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(auStack_34,&local_44);
      FUN_00220ff8(piVar9,auStack_34);
    }
    uVar7 = FUN_0026c550(*(undefined8 *)puVar3);
    if ((uVar7 & 1) == 0) {
      local_24 = 0;
      local_44 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      puVar2 = PTR_DAT_04bccf00;
      *(undefined4 *)(PTR_DAT_04bccf00 + 0x11c) = local_44;
      *(undefined4 *)(puVar2 + 300) = *(undefined4 *)(param_1 + 0xb4);
    }
    FUN_0026c264(*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_00221064(*(undefined8 *)(param_1 + 0x60));
  FUN_00220f24(*(undefined8 *)(param_1 + 0x60));
  return 1;
}

