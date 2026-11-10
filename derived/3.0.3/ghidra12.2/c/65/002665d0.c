
void FUN_002665d0(long *param_1,int *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 local_24;
  
  uVar4 = FUN_002212e4();
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_0022131c(param_1), (uVar4 & 1) != 0)) {
    *(undefined1 *)(param_1 + 9) = 1;
    do {
      FUN_00227860(param_1,2);
      uVar4 = FUN_002212e4(param_1);
    } while ((uVar4 & 1) != 0);
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_00221064(param_1[0xc]);
  FUN_00220f24(param_1[0xc]);
  FUN_00266460();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((int)param_1[0xd] != 0) {
    lVar5 = FUN_0026c894(DAT_04c603c8);
    if (lVar5 != 0) {
      uVar6 = FUN_0026c894(DAT_04c603c8);
      FUN_002840f0(uVar6,(int)param_1[0xd]);
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  uVar1 = *(ushort *)((long)param_1 + 0x6e);
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  if (uVar1 != 0) {
    lVar5 = param_1[0x13];
    uVar4 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        *(undefined4 *)(lVar5 + uVar11) = 0;
        uVar11 = uVar11 + 4;
      } while (((ulong)uVar1 & 0xfffc) != uVar11);
    }
    if ((uVar1 & 3) != 0) {
      puVar9 = (undefined1 *)(lVar5 + uVar11);
      do {
        uVar4 = uVar4 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
  }
  if ((int)param_1[0x19] == 1) {
    FUN_002210f0();
  }
  if ((int *)param_1[0xb] == (int *)0x0) goto LAB_00266810;
  if (*(int *)param_1[0xb] == 1) {
    lVar10 = param_1[0x17];
    lVar5 = *(long *)(DAT_04c5fbb0 + 0x30);
    plVar7 = (long *)FUN_00228380();
    puVar2 = PTR_DAT_04bccf00;
    iVar8 = 0;
    if (*plVar7 != 0) {
      iVar8 = (int)((lVar5 - lVar10) / *plVar7);
    }
    if (-1 < iVar8) {
      *(int *)(PTR_DAT_04bccf00 + 0x124) = iVar8;
      puVar2[0x133] = (char)param_1[0x14];
    }
    FUN_00265e60();
    piVar12 = (int *)param_1[0xb];
    bVar3 = 2 < *piVar12 - 2U;
    if (*param_2 == 0) {
      if (bVar3) {
        local_24 = 0;
        local_60 = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_24);
        FUN_002296c4(auStack_50,&local_60);
        FUN_00220ff8(piVar12,auStack_50);
      }
      uVar4 = FUN_0026c550(DAT_04c603c8);
      if ((uVar4 & 1) == 0) {
        local_24 = 0;
        local_60 = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_24);
        iVar8 = local_60;
        goto LAB_002667f0;
      }
    }
    else {
      if (bVar3) {
        FUN_002296c4(auStack_40,param_2);
        FUN_00220ff8(piVar12,auStack_40);
      }
      uVar4 = FUN_0026c550(DAT_04c603c8);
      if ((uVar4 & 1) == 0) {
        iVar8 = *param_2;
LAB_002667f0:
        *(int *)(puVar2 + 0x11c) = iVar8;
        *(undefined4 *)(puVar2 + 300) = *(undefined4 *)((long)param_1 + 0xb4);
      }
    }
    FUN_0026c264(DAT_04c603c8);
  }
  param_1[0xb] = 0;
LAB_00266810:
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

