
/* WARNING: Type propagation algorithm not settling */

void FUN_00268d18(undefined8 param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  undefined4 local_90 [4];
  undefined1 auStack_80 [16];
  undefined4 local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined1 auStack_60 [16];
  
  puVar1 = PTR_DAT_04bc1510;
  lVar9 = *(long *)PTR_DAT_04bc1510;
  lVar6 = lVar9 + 0x10;
  if (*(char *)(lVar9 + 0x38) == '\0') {
    puVar5 = (undefined8 *)FUN_002aad70(lVar6,0xd0);
    FUN_0026e858();
    iVar3 = FUN_002aadf0(lVar6,puVar5,0x18000000);
    if (iVar3 == *(int *)PTR_DAT_04bcb8c8) {
      (**(code **)*puVar5)(puVar5);
      FUN_002aad48(lVar6,puVar5);
    }
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_2 + 0xf) = iVar3;
  lVar4 = FUN_002ab090(lVar6,iVar3,0x18);
  param_2[0x10] = lVar4;
  FUN_0026e930(auStack_60);
  if (*(char *)(lVar9 + 0x38) == '\0') {
    puVar5 = (undefined8 *)FUN_002aad70(lVar6,0xa8);
    FUN_002841e4();
    iVar3 = FUN_002aadf0(lVar6,puVar5,0x1c000000);
    if (iVar3 == *(int *)PTR_DAT_04bcb8c8) {
      (**(code **)*puVar5)(puVar5);
      FUN_002aad48(lVar6,puVar5);
    }
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_2 + 0x11) = iVar3;
  lVar6 = FUN_002ab090(lVar6,iVar3,0x1c);
  lVar4 = *(long *)puVar1;
  param_2[0x12] = lVar6;
  uVar8 = *(ushort *)(lVar4 + 0x58);
  if (0x1f < uVar8) {
    uVar8 = 0x20;
  }
  *(ushort *)(param_2 + 0x13) = uVar8;
  bVar2 = (**(code **)(*(long *)*param_3 + 0x100))();
  *(byte *)((long)param_2 + 0xae) = bVar2 & 1;
  if (*param_2 == 0) {
    lVar6 = (**(code **)(*(long *)*param_3 + 0x118))();
    *param_2 = lVar6;
    lVar6 = param_2[1];
  }
  else {
    lVar6 = param_2[1];
  }
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(long *)*param_3 + 0x120))();
    param_2[1] = lVar6;
    lVar6 = param_2[2];
  }
  else {
    lVar6 = param_2[2];
  }
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(long *)*param_3 + 0x130))();
    param_2[2] = lVar6;
    lVar6 = param_2[3];
  }
  else {
    lVar6 = param_2[3];
  }
  if (lVar6 == 0) {
    uVar7 = FUN_0021f454();
    lVar6 = FUN_00285d10(0xc0,uVar7);
    if (lVar6 != 0) {
      FUN_0027a9e0(lVar6);
    }
    param_2[3] = lVar6;
    lVar6 = param_2[4];
  }
  else {
    lVar6 = param_2[4];
  }
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(long *)*param_3 + 0x138))();
    param_2[4] = lVar6;
    lVar6 = param_2[5];
  }
  else {
    lVar6 = param_2[5];
  }
  if (lVar6 == 0) {
    uVar7 = FUN_0021f454();
    lVar6 = FUN_00285d10(0x98,uVar7);
    if (lVar6 != 0) {
      FUN_0026c8cc(lVar6);
    }
    param_2[5] = lVar6;
    lVar6 = param_2[6];
  }
  else {
    lVar6 = param_2[6];
  }
  if (lVar6 == 0) {
    uVar7 = FUN_0021f454();
    lVar6 = FUN_00285d10(0x68,uVar7);
    if (lVar6 != 0) {
      FUN_002785c8(lVar6);
    }
    param_2[6] = lVar6;
  }
  *(undefined1 *)((long)param_2 + 0xac) = *(undefined1 *)(param_3 + 1);
  uVar7 = FUN_0021f454();
  lVar6 = FUN_00285d10(0x58,uVar7);
  if (lVar6 != 0) {
    FUN_00280518(lVar6);
  }
  param_2[0x6a] = lVar6;
  FUN_00280550(auStack_60,lVar6,(short)param_2[0x13],param_4 & 1);
  FUN_00282d94(param_2[0x6a],(uint)*(ushort *)(param_2 + 0x13) * (uint)*(ushort *)(param_2 + 0x13));
  FUN_00282d80(param_2[0x6a],500);
  uVar7 = FUN_0021f454();
  lVar6 = FUN_00285d10(0x88,uVar7);
  if (lVar6 != 0) {
    FUN_0027fd20(lVar6);
  }
  param_2[9] = lVar6;
  uVar7 = FUN_0021f454();
  lVar6 = FUN_00285d10(0x5f8,uVar7);
  if (lVar6 == 0) {
    param_2[0x6b] = 0;
    uVar7 = FUN_0021f454();
    lVar6 = FUN_00285d10(0x50,uVar7);
  }
  else {
    FUN_002833c0();
    param_2[0x6b] = lVar6;
    FUN_002833f0(&local_70,lVar6,(ulong)*(ushort *)(param_2 + 0x13) << 1);
    uVar7 = FUN_0021f454();
    lVar6 = FUN_00285d10(0x50,uVar7);
  }
  if (lVar6 == 0) {
    param_2[0x6c] = 0;
    uVar7 = FUN_0021f454();
    lVar6 = FUN_00285d10(0x8d98,uVar7);
  }
  else {
    FUN_00260a74();
    param_2[0x6c] = lVar6;
    FUN_00260bf0(&local_70,lVar6,(short)param_2[0x13]);
    uVar7 = FUN_0021f454();
    lVar6 = FUN_00285d10(0x8d98,uVar7);
  }
  if (lVar6 == 0) {
    param_2[0x6d] = 0;
  }
  else {
    FUN_00261a50();
    param_2[0x6d] = lVar6;
    FUN_00261d00(&local_70,lVar6,(short)param_2[0x13]);
  }
  iVar3 = (**(code **)(*(long *)*param_3 + 0xe0))();
  *(int *)(param_2 + 0x15) = iVar3;
  if (iVar3 - 1U < 2) {
    lVar6 = (**(code **)(*(long *)*param_3 + 0x188))();
    param_2[7] = lVar6;
    lVar4 = (**(code **)(*(long *)*param_3 + 400))();
    lVar6 = param_2[10];
    param_2[8] = lVar4;
  }
  else {
    param_2[7] = 0;
    param_2[8] = 0;
    lVar6 = param_2[10];
  }
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(long *)*param_3 + 0x128))();
    param_2[10] = lVar6;
  }
  local_70 = 0;
  local_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)local_90);
  FUN_002296c4(auStack_80,&local_70);
  FUN_002ba4a4(local_90,lVar9,auStack_80);
  bVar2 = (**(code **)(*(long *)*param_3 + 0x108))();
  *(byte *)((long)param_2 + 0xaf) = bVar2 & 1;
  bVar2 = (**(code **)(*(long *)*param_3 + 0x110))();
  local_70 = 0;
  *(byte *)(param_2 + 0x16) = bVar2 & 1;
  local_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)local_90);
  FUN_002296c4(param_1,&local_70);
  return;
}

