
void FUN_01b8dcd0(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined2 *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_d8;
  undefined8 *puStack_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b4 [7];
  undefined1 local_75;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6c [12];
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar6 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_6);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_0265c2a0(param_5);
  if (lVar7 == 0) {
    return;
  }
  if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar8 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar8)();
    uVar4 = uVar4 ^ 1;
  }
  if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar8)();
    uVar5 = uVar5 ^ 1;
  }
  puVar1 = (undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
  local_6e = *(undefined1 *)(puVar1 + 1);
  local_70 = *puVar1;
  bVar3 = FUN_020fd7d8(&local_70);
  if (param_3 < 0xf) {
    local_c0 = local_b4;
    local_75 = 0;
    puVar8 = *(undefined8 **)(PTR_s_Package_04bb6d28 + (ulong)param_3 * 8 + 0x148);
    local_b8 = 0x40;
    if (local_c0 == puVar8) goto LAB_01b8de94;
  }
  else {
    puVar8 = &DAT_0407ebb1;
  }
  local_75 = 0;
  local_b8 = 0x40;
  local_c8 = PTR_DAT_04bb2030 + 0x10;
  local_c0 = local_b4;
  lVar10 = 0;
  do {
    if (*(char *)((long)puVar8 + lVar10) == '\0') {
LAB_01b8de74:
      iVar9 = (int)lVar10;
joined_r0x01b8de78:
      if (0x3f < iVar9) {
        iVar9 = 0x3f;
      }
      goto LAB_01b8de80;
    }
    if (*(char *)((long)puVar8 + lVar10 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01b8de74;
    }
    if (*(char *)((long)puVar8 + lVar10 + 2) == '\0') {
      iVar9 = (int)lVar10 + 2;
      goto joined_r0x01b8de78;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  iVar9 = 0;
LAB_01b8de80:
  memcpy(local_c0,puVar8,(long)iVar9);
  *(undefined1 *)((long)local_b4 + (long)iVar9) = 0;
LAB_01b8de94:
  iVar9 = local_b8;
  puVar8 = local_c0;
  puVar2 = PTR_DAT_04bb2bc0;
  local_c8 = PTR_DAT_04bb2bc0 + 0x10;
  local_110 = PTR_DAT_04bb2020 + 0x10;
  puStack_108 = &DAT_040a6751;
  if (bVar3 < 8) {
    puStack_d0 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar3 * 8 + 0x20);
  }
  else {
    puStack_d0 = &DAT_0407ebb1;
  }
  local_6c[0] = 0;
  *(undefined1 *)((long)local_c0 + (long)local_b8 + -1) = 0;
  local_d8 = local_110;
  (**(code **)(puVar2 + 0x28))(&local_c8);
  lVar10 = 0;
  do {
    if (*(char *)((long)local_c0 + lVar10) == '\0') goto LAB_01b8df50;
    if (*(char *)((long)local_c0 + lVar10 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01b8df50;
    }
    if (*(char *)((long)local_c0 + lVar10 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01b8df50;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01b8df50:
  FUN_038d0770(puVar8,0,iVar9,puVar8,lVar10,&local_110,&local_d8,local_6c);
  FUN_006d8678(&local_110,"1%02d",param_4);
  FUN_01b8cb50(param_1,param_2,&local_c8,&local_110,&local_70,
               *(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90),param_7);
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

