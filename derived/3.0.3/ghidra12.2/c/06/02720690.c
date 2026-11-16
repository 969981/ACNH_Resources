
void FUN_02720690(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *__s;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_04bc35c8;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar5 != 0) {
      param_1[4] = lVar5;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x597b8);
  lVar7 = 0x11;
  lVar5 = 0x53c8;
  lVar8 = 0x5400;
  lVar9 = 0x5438;
  puVar1 = PTR_DAT_04bc30c8 + 0x10;
  lVar6 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar6 + 0x68) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x40) = 0;
    puVar4 = (undefined8 *)((long)param_1 + lVar6 + 0x38);
    *puVar4 = &PTR_LAB_04a8ec10;
    *(undefined8 *)((long)param_1 + lVar6 + 0x58) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x60) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x48) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x50) = 0;
    FUN_02720e18((long)param_1 + lVar6 + 0x70,puVar4,0);
    lVar2 = *(long *)((long)param_1 + lVar6 + 0x48);
    lVar3 = *(long *)((long)param_1 + lVar6 + 0x50);
    *(undefined8 *)((long)param_1 + lVar6 + 0x53d0) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x53e0) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x53e8) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x53f0) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x53f8) = 0;
    *(long *)((long)param_1 + lVar6 + 0x53d8) = lVar2 + 0x1630;
    if (lVar3 != 0) {
      *(long *)((long)param_1 + lVar6 + 0x53e8) = lVar3;
    }
    *(undefined8 *)((long)param_1 + lVar6 + 0x5408) = 0;
    *(long *)((long)param_1 + lVar6 + 0x5410) = lVar2 + 0x1634;
    *(undefined **)((long)param_1 + lVar6 + 0x53c8) = &DAT_04a8ed00;
    lVar3 = (long)param_1 + lVar8;
    *(undefined8 *)((long)param_1 + lVar6 + 0x5418) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x5430) = 0;
    lVar7 = lVar7 + -1;
    *(long *)((long)param_1 + lVar6 + 0x5420) = (long)param_1 + lVar5;
    *(long *)((long)param_1 + lVar6 + 0x5448) = lVar2 + 0x1635;
    *(undefined **)((long)param_1 + lVar6 + 0x5400) = &DAT_04a8ee20;
    lVar2 = (long)param_1 + lVar9;
    lVar5 = lVar5 + 0x5438;
    *(undefined8 *)((long)param_1 + lVar6 + 0x5428) = 0;
    lVar8 = lVar8 + 0x5438;
    lVar9 = lVar9 + 0x5438;
    *(undefined8 *)((long)param_1 + lVar6 + 0x5440) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x5450) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x5460) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x5468) = 0;
    *(long *)((long)param_1 + lVar6 + 0x50) = lVar2;
    *(long *)((long)param_1 + lVar6 + 0x5458) = lVar3;
    *(undefined **)((long)param_1 + lVar6 + 0x5438) = puVar1;
    *(undefined ***)((long)param_1 + lVar6 + 0x38) = &PTR_LAB_04a8ebe0;
    lVar6 = lVar6 + 0x5438;
  } while (lVar7 != 0);
  *param_1 = (long)&PTR_LAB_04a8ebb0;
  lVar5 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar5 != 0) {
    param_1[0xb] = lVar5;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0xa8e);
  if (lVar5 != 0) {
    param_1[0xa92] = lVar5;
  }
  param_1[0xa90] = param_1[0xa90] + param_3 + 0x1638;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1515);
  if (lVar5 != 0) {
    param_1[0x1519] = lVar5;
  }
  param_1[0x1517] = param_1[0x1517] + param_3 + 0x2c70;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1f9c);
  if (lVar5 != 0) {
    param_1[0x1fa0] = lVar5;
  }
  param_1[0x1f9e] = param_1[0x1f9e] + param_3 + 0x42a8;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x2a23);
  if (lVar5 != 0) {
    param_1[0x2a27] = lVar5;
  }
  param_1[0x2a25] = param_1[0x2a25] + param_3 + 0x58e0;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x34aa);
  if (lVar5 != 0) {
    param_1[0x34ae] = lVar5;
  }
  param_1[0x34ac] = param_1[0x34ac] + param_3 + 0x6f18;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x3f31);
  if (lVar5 != 0) {
    param_1[0x3f35] = lVar5;
  }
  param_1[0x3f33] = param_1[0x3f33] + param_3 + 0x8550;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x49b8);
  if (lVar5 != 0) {
    param_1[0x49bc] = lVar5;
  }
  param_1[0x49ba] = param_1[0x49ba] + param_3 + 0x9b88;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x543f);
  if (lVar5 != 0) {
    param_1[0x5443] = lVar5;
  }
  param_1[0x5441] = param_1[0x5441] + param_3 + 0xb1c0;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x5ec6);
  if (lVar5 != 0) {
    param_1[0x5eca] = lVar5;
  }
  param_1[0x5ec8] = param_1[0x5ec8] + param_3 + 0xc7f8;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x694d);
  if (lVar5 != 0) {
    param_1[0x6951] = lVar5;
  }
  param_1[0x694f] = param_1[0x694f] + param_3 + 0xde30;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x73d4);
  if (lVar5 != 0) {
    param_1[0x73d8] = lVar5;
  }
  param_1[0x73d6] = param_1[0x73d6] + param_3 + 0xf468;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x7e5b);
  if (lVar5 != 0) {
    param_1[0x7e5f] = lVar5;
  }
  param_1[0x7e5d] = param_1[0x7e5d] + param_3 + 0x10aa0;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x88e2);
  if (lVar5 != 0) {
    param_1[0x88e6] = lVar5;
  }
  param_1[0x88e4] = param_1[0x88e4] + param_3 + 0x120d8;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x9369);
  if (lVar5 != 0) {
    param_1[0x936d] = lVar5;
  }
  param_1[0x936b] = param_1[0x936b] + param_3 + 0x13710;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0x9df0);
  if (lVar5 != 0) {
    param_1[0x9df4] = lVar5;
  }
  param_1[0x9df2] = param_1[0x9df2] + param_3 + 0x14d48;
  FUN_026400e0();
  lVar5 = param_1[3];
  param_1[3] = (long)(param_1 + 0xa877);
  if (lVar5 != 0) {
    param_1[0xa87b] = lVar5;
  }
  param_1[0xa879] = param_1[0xa879] + param_3 + 0x16380;
  FUN_026400e0();
  return;
}

