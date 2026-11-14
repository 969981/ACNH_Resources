
void FUN_01b32650(long *param_1,undefined8 *param_2,long param_3,int param_4,long *param_5,
                 undefined4 param_6,byte param_7)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined *local_4e8;
  undefined *puStack_4e0;
  undefined1 local_48c;
  undefined1 local_430;
  undefined8 local_42c;
  undefined4 local_424;
  undefined1 local_420;
  undefined1 local_41c;
  undefined1 auStack_41a [674];
  undefined2 local_178;
  undefined *local_170;
  undefined1 *local_168;
  int local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  int local_114;
  undefined1 auStack_110 [56];
  undefined1 local_d8 [56];
  undefined *local_a0;
  undefined8 *puStack_98;
  
  lVar12 = param_1[0x1fc];
  local_114 = param_4;
  if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar9 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar9)();
    uVar8 = uVar8 ^ 1;
  }
  local_160 = 0x40;
  local_11d = 0;
  local_170 = PTR_DAT_04bb2f70 + 0x10;
  local_168 = local_15c;
  (**(code **)(*param_5 + 0x18))(param_5);
  puVar15 = (undefined1 *)param_5[1];
  if (local_15c != puVar15) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar13 = 0;
    do {
      if (*(char *)(param_5[1] + lVar13) == '\0') goto LAB_01b3275c;
      lVar2 = param_5[1] + lVar13;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01b3275c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01b3275c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01b3275c:
    iVar4 = (int)lVar13;
    if (local_160 <= (int)lVar13) {
      iVar4 = local_160 + -1;
    }
    memcpy(local_15c,puVar15,(long)iVar4);
    local_15c[iVar4] = 0;
  }
  local_170 = PTR_DAT_04bb2bc0 + 0x10;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puStack_4e0 = &DAT_040a6751;
  local_4e8 = puVar1;
  bVar7 = FUN_020fd7d8(param_2 + 2);
  iVar4 = local_160;
  puVar15 = local_168;
  if (bVar7 < 8) {
    puStack_98 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar7 * 8 + 0x20);
  }
  else {
    puStack_98 = &DAT_0407ebb1;
  }
  local_d8[0] = 0;
  local_a0 = puVar1;
  (**(code **)(local_170 + 0x18))(&local_170);
  puVar5 = local_168;
  (**(code **)(local_170 + 0x18))(&local_170);
  lVar13 = 0;
  do {
    if (local_168[lVar13] == '\0') goto LAB_01b3285c;
    if (local_168[lVar13 + 1] == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_01b3285c;
    }
    if (local_168[lVar13 + 2] == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_01b3285c;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  lVar13 = 0;
LAB_01b3285c:
  FUN_038d0770(puVar15,0,iVar4,puVar5,lVar13,&local_4e8,&local_a0,local_d8);
  iVar6 = local_114;
  puVar1 = PTR_DAT_04bb28f8;
  iVar4 = **(int **)PTR_DAT_04bb3448;
  local_4e8 = (undefined *)CONCAT44(local_4e8._4_4_,iVar4);
  if (iVar4 != local_114) {
    if ((*(long *)PTR_DAT_04bb2720 == 0) ||
       (lVar13 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar13 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar13 + 0xd0);
    }
    FUN_01bdeff8(*(long *)PTR_DAT_04bb28f8 + 0x2688,local_114,uVar11);
  }
  local_4e8 = (undefined *)((ulong)local_4e8 & 0xffffffffffff0000);
  local_48c = 0;
  local_430 = 0;
  local_42c = 0xfffe00000000;
  local_424 = 0;
  FUN_0277d4ac((long)&local_42c + 4);
  local_420 = 0;
  local_41c = 0;
  memset(auStack_41a,0,0x2a2);
  local_178 = 0xfffe;
  lVar13 = *(long *)(lVar12 + 8);
  lVar2 = *(long *)(lVar12 + 0x10);
  lVar14 = *param_1;
  uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  DAT_05582b7c = uVar3;
  FUN_006d8678(&local_a0,"0%02d",param_6);
  FUN_006d8678(local_d8,"1%02d",param_6);
  FUN_006d8678(auStack_110,"2%02d",param_6);
  uVar10 = FUN_027b0054(&local_4e8,param_2 + 2,lVar2 + lVar13,param_3,&local_170,&local_a0,local_d8,
                        auStack_110,lVar14 + 0x10,uVar3,param_7 & 1,0);
  if (iVar4 != iVar6) {
    FUN_01bdf1d8(*(long *)puVar1 + 0x2688);
  }
  if ((uVar10 & 1) != 0) {
    FUN_01b48d90(&local_4e8,0);
    *(undefined1 *)((long)param_2 + 0x22) = 1;
    if ((param_7 & 1) != 0) {
      FUN_01b3310c(*param_2,(long)&local_42c + 4,param_3 + 0x1c);
    }
  }
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

