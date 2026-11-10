
bool FUN_00264418(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined1 auStack_50 [16];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  FUN_002ba498(&local_40,*(undefined8 *)PTR_DAT_04bc1510);
  iVar3 = local_40;
  if (local_40 != 0) {
    lVar7 = *(long *)(param_1 + 0xb8);
    lVar6 = *(long *)(DAT_04c5fbb0 + 0x30);
    plVar4 = (long *)FUN_00228380();
    iVar1 = 0;
    if (*plVar4 != 0) {
      iVar1 = (int)((lVar6 - lVar7) / *plVar4);
    }
    if (-1 < iVar1) {
      DAT_04c5fd0b = (undefined1)*(undefined4 *)(param_1 + 0xa0);
      DAT_04c5fcfc = iVar1;
    }
    FUN_00265e60();
    piVar8 = *(int **)(param_1 + 0x58);
    if (piVar8 != (int *)0x0) {
      if (2 < *piVar8 - 2U) {
        local_40 = 0x6439;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
        FUN_002296c4(auStack_50,&local_40);
        FUN_00220ff8(piVar8,auStack_50);
      }
      uVar5 = FUN_0026c550(DAT_04c603c8);
      if ((uVar5 & 1) == 0) {
        local_40 = 0x6439;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
        puVar2 = PTR_DAT_04bccf00;
        *(int *)(PTR_DAT_04bccf00 + 0x11c) = local_40;
        *(undefined4 *)(puVar2 + 300) = *(undefined4 *)(param_1 + 0xb4);
      }
      FUN_0026c264(DAT_04c603c8);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    FUN_00221064(*(undefined8 *)(param_1 + 0x60));
    FUN_00220f24(*(undefined8 *)(param_1 + 0x60));
  }
  return iVar3 != 0;
}

