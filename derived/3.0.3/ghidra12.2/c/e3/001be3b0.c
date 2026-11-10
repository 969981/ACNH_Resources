
void FUN_001be3b0(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  FUN_001b74e0();
  puVar2 = PTR_DAT_04bcc608;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  puVar4 = (undefined8 *)FUN_00187df4(0x20);
  puVar5 = (undefined8 *)param_1[0x5a];
  puVar12 = (undefined8 *)param_1[0x59];
  puVar10 = puVar4;
  puVar11 = puVar4;
  if (puVar5 != puVar12) {
    do {
      puVar6 = puVar5 + -2;
      uVar1 = puVar5[-1];
      puVar11 = puVar10 + -2;
      *puVar11 = *puVar6;
      puVar10[-1] = uVar1;
      puVar5 = puVar6;
      puVar10 = puVar11;
    } while (puVar6 != puVar12);
    puVar5 = (undefined8 *)param_1[0x59];
  }
  param_1[0x59] = (long)puVar11;
  param_1[0x5a] = (long)puVar4;
  param_1[0x5b] = (long)(puVar4 + 4);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00187e4c();
  }
  FUN_001e1b74(param_1 + 0x5d);
  FUN_001d8eb8(param_1 + 0x5f,"UDP Incoming Queue Size");
  param_1[0x67] = 0;
  puVar2 = PTR_DAT_04bcc610;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x66] = (long)(puVar2 + 0x10);
  FUN_0018a200(param_1 + 0x6b,"Transport Job",1000,&DAT_0407ebb1);
  FUN_001d66f4(param_1 + 0x87);
  FUN_001bce7c(param_1 + 0x8b);
  param_1[0xa1] = 0;
  param_1[0xa3] = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *(undefined1 *)((long)param_1 + 0x524) = 0;
  param_1[0xa3] = (long)&PTR_FUN_048393d8;
  FUN_00196a24(param_1 + 0xa3,(int)param_1[0x13],0);
  param_1[0xab] = (long)&DAT_0483c008;
  FUN_0019c050();
  lVar7 = FUN_00185a6c(0x30);
  if (lVar7 != 0) {
    FUN_001d8eb8(lVar7,"UDP Outgoing Queue Size");
  }
  param_1[0x65] = lVar7;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  uVar9 = (uint)(byte)*PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 != 0) {
    puVar8 = (uint *)FUN_03876070(DAT_04c58c60);
    uVar9 = *puVar8;
  }
  *(uint *)(param_1 + 0x86) = uVar9;
  param_1[0xa2] = 0;
  if (*(char *)((long)param_1 + 0x441) != '\0') {
    lVar7 = *(long *)(param_1[0x8a] + 0xc0);
    if (lVar7 != 0) {
      bVar3 = FUN_001baef0(lVar7 + 0xf0,*(undefined4 *)(param_1[0x8a] + 8),1);
      *(byte *)((long)param_1 + 0x441) = (bVar3 ^ 0xff) & 1;
    }
  }
  lVar7 = param_1[0x8a];
  *(long **)(lVar7 + 0xc0) = param_1;
  if ((char)param_1[0x88] != '\0') {
    bVar3 = FUN_001bb090(param_1 + 0x1e,lVar7,1,0);
    *(byte *)((long)param_1 + 0x441) = bVar3 & 1;
  }
  if (*(char *)((long)param_1 + 0x469) != '\0') {
    lVar7 = *(long *)(param_1[0x8c] + 0x10);
    if (lVar7 != 0) {
      bVar3 = FUN_001baef0(lVar7 + 0xf0,*(undefined4 *)(param_1[0x8c] + 8),0xf);
      *(byte *)((long)param_1 + 0x469) = (bVar3 ^ 0xff) & 1;
    }
    FUN_001a666c(param_1 + 0x8b);
  }
  lVar7 = param_1[0x8c];
  *(long **)(lVar7 + 0x10) = param_1;
  if ((char)param_1[0x8d] != '\0') {
    bVar3 = FUN_001bb090(param_1 + 0x1e,lVar7,0xf,0);
    *(byte *)((long)param_1 + 0x469) = bVar3 & 1;
  }
  memset(param_1 + 0xaa,0,8);
  FUN_001dfe20();
  return;
}

