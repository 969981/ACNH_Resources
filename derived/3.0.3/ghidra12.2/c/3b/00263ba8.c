
undefined8 FUN_00263ba8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    return 0;
  }
  FUN_00221064(*(undefined8 *)(param_1 + 0x60));
  FUN_00220f24(*(undefined8 *)(param_1 + 0x60));
  FUN_00266460();
  plVar6 = *(long **)(DAT_04c603c8 + 0x20);
  if (*(char *)((long)plVar6 + 0x104) != '\0') {
    FUN_0027fa50(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6,0);
  }
  if (**(int **)(param_1 + 0x58) == 1) {
    FUN_00221064();
  }
  lVar4 = DAT_04c603c8;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar3 = FUN_0026c550(lVar4);
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0xb8);
    lVar4 = *(long *)(DAT_04c5fbb0 + 0x30);
    plVar6 = (long *)FUN_00228380();
    puVar2 = PTR_DAT_04bccf00;
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar4 - lVar5) / *plVar6);
    }
    if (-1 < iVar1) {
      *(int *)(PTR_DAT_04bccf00 + 0x124) = iVar1;
      puVar2[0x133] = (char)*(undefined4 *)(param_1 + 0xa0);
    }
    FUN_00265e60();
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
    *(undefined4 *)(puVar2 + 0x11c) = 0x6c05;
    *(undefined4 *)(puVar2 + 300) = *(undefined4 *)(param_1 + 0xb4);
    puVar2[0x133] = (char)*(undefined4 *)(param_1 + 0xa0);
  }
  FUN_0026c264(DAT_04c603c8);
  return 1;
}

