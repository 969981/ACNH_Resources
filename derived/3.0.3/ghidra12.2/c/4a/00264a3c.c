
undefined8 FUN_00264a3c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined4 local_48;
  ErrorResultVariant local_44 [4];
  undefined8 local_40;
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  uVar4 = FUN_00263ba8();
  puVar2 = PTR_DAT_04bcb8c0;
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (*(short *)(param_1 + 0x6c) != 0) {
    uVar4 = FUN_0026c550(DAT_04c603c8);
    if ((uVar4 & 1) == 0) {
      PTR_DAT_04bccf00[0x130] = *(undefined1 *)(param_1 + 0x6c);
    }
    puVar3 = PTR_LAB_04bcda40;
    lVar8 = *(long *)puVar2;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitAllConnection";
    *(undefined **)(param_1 + 0x30) = puVar3;
    *(undefined4 *)(param_1 + 0xa0) = 2;
    plVar5 = (long *)FUN_00228380();
    *(long *)(param_1 + 0xc0) = *(long *)(lVar8 + 0x30) + *plVar5 * 10000;
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar8 = *(long *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
  plVar5 = (long *)FUN_00228380();
  iVar1 = 0;
  if (*plVar5 != 0) {
    iVar1 = (int)((lVar8 - lVar7) / *plVar5);
  }
  if (-1 < iVar1) {
    DAT_04c5fd0b = (undefined1)*(undefined4 *)(param_1 + 0xa0);
    DAT_04c5fcfc = iVar1;
  }
  piVar9 = *(int **)(param_1 + 0x58);
  if (piVar9 == (int *)0x0) goto LAB_00264d8c;
  switch(*(undefined1 *)(param_1 + 0x8c)) {
  case 0:
    uVar10 = 0x6c3d;
    if (2 < *piVar9 - 2U) {
      local_48 = 0x6c3d;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(local_44,(Result *)&local_24);
      FUN_002296c4(auStack_58,&local_48);
      puVar6 = auStack_58;
LAB_00264d2c:
      FUN_00220ff8(piVar9,puVar6);
    }
    break;
  case 1:
    uVar10 = 0x6838;
    if (2 < *piVar9 - 2U) {
      local_48 = 0x6838;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(local_44,(Result *)&local_24);
      FUN_002296c4(auStack_34,&local_48);
      puVar6 = auStack_34;
      goto LAB_00264d2c;
    }
    break;
  case 2:
    plVar5 = *(long **)(DAT_04c603c8 + 0x110);
    if (plVar5 != (long *)0x0) {
      local_40 = 0;
      local_48 = 0x14;
      local_44[0] = (ErrorResultVariant)0xfd;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_48);
      piVar9 = *(int **)(param_1 + 0x58);
    }
    if (2 < *piVar9 - 2U) {
      local_24 = 0;
      local_48 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant(local_44,(Result *)&local_24);
      FUN_002296c4(auStack_68,&local_48);
      FUN_00220ff8(piVar9,auStack_68);
    }
    uVar4 = FUN_0026c550(DAT_04c603c8);
    if ((uVar4 & 1) == 0) {
      local_48 = 0x6439;
      goto LAB_00264d4c;
    }
    goto LAB_00264d78;
  default:
    uVar10 = 0x10c3e;
    if (2 < *piVar9 - 2U) {
      local_48 = 0x10c3e;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(local_44,(Result *)&local_24);
      FUN_002296c4(auStack_98,&local_48);
      puVar6 = auStack_98;
      goto LAB_00264d2c;
    }
    break;
  case 4:
    uVar10 = 0x6439;
    if (2 < *piVar9 - 2U) {
      local_48 = 0x6439;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(local_44,(Result *)&local_24);
      FUN_002296c4(auStack_78,&local_48);
      puVar6 = auStack_78;
      goto LAB_00264d2c;
    }
    break;
  case 5:
    uVar10 = 0x6c53;
    if (2 < *piVar9 - 2U) {
      local_48 = 0x6c53;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(local_44,(Result *)&local_24);
      FUN_002296c4(auStack_88,&local_48);
      puVar6 = auStack_88;
      goto LAB_00264d2c;
    }
  }
  uVar4 = FUN_0026c550(DAT_04c603c8);
  if ((uVar4 & 1) == 0) {
    local_48 = uVar10;
LAB_00264d4c:
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(local_44,(Result *)&local_24);
    puVar2 = PTR_DAT_04bccf00;
    *(undefined4 *)(PTR_DAT_04bccf00 + 0x11c) = local_48;
    *(undefined4 *)(puVar2 + 300) = *(undefined4 *)(param_1 + 0xb4);
  }
LAB_00264d78:
  FUN_0026c264(DAT_04c603c8);
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_00264d8c:
  FUN_00221064(*(undefined8 *)(param_1 + 0x60));
  FUN_00220f24(*(undefined8 *)(param_1 + 0x60));
  return 1;
}

