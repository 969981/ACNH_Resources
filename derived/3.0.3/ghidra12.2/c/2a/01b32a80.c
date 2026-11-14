
void FUN_01b32a80(long *param_1,undefined8 *param_2,long param_3,int param_4,long *param_5,
                 byte param_6)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 auStack_558 [56];
  undefined1 auStack_520 [56];
  undefined1 auStack_4e8 [56];
  undefined1 local_4b0 [56];
  undefined *local_478;
  undefined8 *puStack_470;
  undefined *local_440;
  undefined *puStack_438;
  undefined1 local_3e4;
  undefined1 local_388;
  undefined8 local_384;
  undefined4 local_37c;
  undefined1 local_378;
  undefined1 local_374;
  undefined1 auStack_372 [674];
  undefined2 local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  int local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  int local_6c;
  
  lVar16 = param_1[0x1fc];
  local_6c = param_4;
  if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
     (puVar13 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar13 == (undefined8 *)0x0)) {
    uVar12 = 1;
  }
  else {
    uVar12 = (**(code **)*puVar13)();
    uVar12 = uVar12 ^ 1;
  }
  local_b8 = 0x40;
  local_75 = 0;
  local_c8 = PTR_DAT_04bb2f70 + 0x10;
  local_c0 = local_b4;
  (**(code **)(*param_5 + 0x18))(param_5);
  puVar22 = (undefined1 *)param_5[1];
  if (local_b4 != puVar22) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar17 = 0;
    do {
      if (*(char *)(param_5[1] + lVar17) == '\0') goto LAB_01b32b8c;
      lVar2 = param_5[1] + lVar17;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_01b32b8c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_01b32b8c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_01b32b8c:
    iVar8 = (int)lVar17;
    if (local_b8 <= (int)lVar17) {
      iVar8 = local_b8 + -1;
    }
    memcpy(local_b4,puVar22,(long)iVar8);
    local_b4[iVar8] = 0;
  }
  local_c8 = PTR_DAT_04bb2bc0 + 0x10;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puStack_438 = &DAT_040a6751;
  local_440 = puVar1;
  bVar11 = FUN_020fd7d8();
  iVar8 = local_b8;
  puVar22 = local_c0;
  if (bVar11 < 8) {
    puStack_470 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar11 * 8 + 0x20);
  }
  else {
    puStack_470 = &DAT_0407ebb1;
  }
  local_4b0[0] = 0;
  local_478 = puVar1;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  puVar9 = local_c0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  lVar17 = 0;
  do {
    if (local_c0[lVar17] == '\0') goto LAB_01b32c8c;
    if (local_c0[lVar17 + 1] == '\0') {
      lVar17 = lVar17 + 1;
      goto LAB_01b32c8c;
    }
    if (local_c0[lVar17 + 2] == '\0') {
      lVar17 = lVar17 + 2;
      goto LAB_01b32c8c;
    }
    lVar17 = lVar17 + 3;
  } while (lVar17 != 0x80001);
  lVar17 = 0;
LAB_01b32c8c:
  FUN_038d0770(puVar22,0,iVar8,puVar9,lVar17,&local_440,&local_478,local_4b0);
  iVar10 = local_6c;
  uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  uVar4 = DAT_05582b74 ^ DAT_05582b74 << 0xb;
  uVar5 = DAT_05582b78 ^ DAT_05582b78 << 0xb;
  uVar6 = DAT_05582b7c ^ DAT_05582b7c << 0xb;
  uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
  uVar7 = uVar3 ^ uVar3 << 0xb;
  DAT_05582b70 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  uVar19 = (ulong)DAT_05582b70;
  DAT_05582b74 = uVar5 >> 8 ^ DAT_05582b70 >> 0x13 ^ uVar5 ^ DAT_05582b70;
  uVar20 = (ulong)DAT_05582b74;
  DAT_05582b78 = uVar6 >> 8 ^ DAT_05582b74 >> 0x13 ^ uVar6 ^ DAT_05582b74;
  uVar21 = (ulong)DAT_05582b78;
  DAT_05582b7c = uVar7 >> 8 ^ DAT_05582b78 >> 0x13 ^ uVar7 ^ DAT_05582b78;
  uVar18 = (ulong)DAT_05582b7c;
  uVar14 = (ulong)DAT_05582b7c;
  iVar8 = **(int **)PTR_DAT_04bb3448;
  local_440 = (undefined *)CONCAT44(local_440._4_4_,iVar8);
  if (iVar8 != local_6c) {
    if ((*(long *)PTR_DAT_04bb2720 == 0) ||
       (lVar17 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar17 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar17 + 0xd0);
    }
    FUN_01bdeff8(*(long *)PTR_DAT_04bb28f8 + 0x2688,local_6c,uVar15);
  }
  local_440 = (undefined *)((ulong)local_440 & 0xffffffffffff0000);
  local_3e4 = 0;
  local_388 = 0;
  local_384 = 0xfffe00000000;
  local_37c = 0;
  FUN_0277d4ac((long)&local_384 + 4);
  local_378 = 0;
  local_374 = 0;
  memset(auStack_372,0,0x2a2);
  local_d0 = 0xfffe;
  lVar17 = *(long *)(lVar16 + 8);
  lVar2 = *(long *)(lVar16 + 0x10);
  FUN_006d8678(&local_478,"0%02d",(int)((ulong)uVar3 * 5 >> 0x20) + 1);
  FUN_006d8678(local_4b0,"1%02d",(int)(uVar19 * 5 >> 0x20) + 1);
  FUN_006d8678(auStack_4e8,"2%02d",(int)(uVar20 * 5 >> 0x20) + 1);
  FUN_006d8678(auStack_520,"3%02d",(int)(uVar21 * 5 >> 0x20) + 1);
  FUN_006d8678(auStack_558,"4%02d",(int)(uVar18 + uVar14 * 4 >> 0x20) + 1);
  uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  DAT_05582b7c = uVar3;
  uVar14 = FUN_027b0354(&local_440,param_2 + 2,lVar2 + lVar17,param_3,&local_c8,&local_478,local_4b0
                        ,auStack_4e8,auStack_520,auStack_558,*param_1 + 0x10,uVar3,param_6 & 1,0);
  if (iVar8 != iVar10) {
    FUN_01bdf1d8(*(long *)PTR_DAT_04bb28f8 + 0x2688);
  }
  if ((uVar14 & 1) != 0) {
    FUN_01b48d90(&local_440,0);
    *(undefined1 *)((long)param_2 + 0x22) = 1;
    if ((param_6 & 1) != 0) {
      FUN_01b3310c(*param_2,(long)&local_384 + 4,param_3 + 0x1c);
    }
  }
  if ((((uVar12 & 1) == 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  return;
}

