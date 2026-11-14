
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b03ee0(undefined4 *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  long lVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_7e8;
  uint local_7e0;
  uint uStack_7dc;
  undefined **local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  local_7d8 = &PTR_LAB_049ff3a8;
  memset(auStack_7d0,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_7c = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7d8);
  memset(__s,0,0x754);
  local_7e8 = 0x8a5;
  FUN_0277d4ac(&local_7e8);
  FUN_0277dedc(&local_7e8);
  lVar7 = (*(code *)local_7d8[3])(&local_7d8);
  uVar5 = FUN_0277d6c4(&local_7e8);
  if ((uVar5 >> 3 & 0x1fff) < 0x753) {
    lVar8 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar8) = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar5 & 0x1f);
  }
  local_7e8 = 0x8a6;
  FUN_0277d4ac(&local_7e8);
  FUN_0277dedc(&local_7e8);
  lVar7 = (*(code *)local_7d8[3])(&local_7d8);
  uVar5 = FUN_0277d6c4(&local_7e8);
  if ((uVar5 >> 3 & 0x1fff) < 0x753) {
    lVar8 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar8) = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar5 & 0x1f);
  }
  local_7e8 = 0x8ed;
  FUN_0277d4ac(&local_7e8);
  FUN_0277dedc(&local_7e8);
  lVar7 = (*(code *)local_7d8[3])(&local_7d8);
  uVar5 = FUN_0277d6c4(&local_7e8);
  if ((uVar5 >> 3 & 0x1fff) < 0x753) {
    lVar8 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar8) = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar5 & 0x1f);
  }
  local_7e8 = 0x8ee;
  FUN_0277d4ac(&local_7e8);
  FUN_0277dedc(&local_7e8);
  lVar7 = (*(code *)local_7d8[3])(&local_7d8);
  uVar5 = FUN_0277d6c4(&local_7e8);
  if ((uVar5 >> 3 & 0x1fff) < 0x753) {
    lVar8 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar8) = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar5 & 0x1f);
  }
  local_7e8 = 0x8ef;
  FUN_0277d4ac(&local_7e8);
  FUN_0277dedc(&local_7e8);
  lVar7 = (*(code *)local_7d8[3])(&local_7d8);
  uVar5 = FUN_0277d6c4(&local_7e8);
  if ((uVar5 >> 3 & 0x1fff) < 0x753) {
    lVar8 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar8) = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar5 & 0x1f);
  }
  if ((param_2 & 1) == 0) goto LAB_01b04294;
  if (DAT_05574040 == 0) {
LAB_01b041d8:
    lVar7 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar11 + 0x38))();
      lVar7 = 0;
      if (lVar8 != 0) {
        lVar7 = lVar8 + 0x70;
      }
    }
    else {
      if (puVar11 == (undefined8 *)0x0) goto LAB_01b041d8;
      lVar7 = 0;
      if ((long *)puVar11[0x26] != (long *)0x0) {
        lVar7 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar7 + 0x1c24e8) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar7 + 0x1c24e8), puVar11 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar11)();
    uVar5 = uVar5 ^ 1;
  }
  local_7e8 = (ulong)*(ushort *)(*(long *)(lVar7 + 0x1c24d0) + *(long *)(lVar7 + 0x1c24c8) + 0x900);
  FUN_0277d4ac(&local_7e8);
  lVar8 = (*(code *)local_7d8[3])(&local_7d8);
  uVar6 = FUN_0277d6c4(&local_7e8);
  if ((uVar6 >> 3 & 0x1fff) < 0x753) {
    lVar3 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
    *(uint *)(lVar8 + lVar3) = *(uint *)(lVar8 + lVar3) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU)
    ;
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x1c24e8) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x1c24e8) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
LAB_01b04294:
  puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar12 = puVar9[3];
  uVar5 = *puVar9 ^ *puVar9 << 0xb;
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar6 = uVar5 ^ uVar12;
  uVar5 = uVar5 >> 8 ^ uVar12 >> 0x13 ^ uVar6;
  puVar9[2] = uVar12;
  puVar9[3] = uVar5;
  uVar6 = (uVar5 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar12 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
  uVar13 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = uVar13 ^ uVar13 >> 0x1e;
  lVar8 = (*(code *)local_7d8[4])(&local_7d8);
  uVar4 = DAT_0558600c;
  lVar7 = 0;
  iVar10 = 0;
  do {
    puVar9 = (uint *)(lVar8 + lVar7);
    lVar7 = lVar7 + 4;
    uVar1 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    iVar10 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + iVar10;
  } while (lVar7 != 0x754);
  if (iVar10 == 0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar4;
  }
  else {
    if (param_3 != 0) {
      uVar6 = (param_3 ^ param_3 >> 0x1e) * 0x6c078965 + 1;
      uVar12 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
      uVar13 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
      uVar5 = uVar13 ^ uVar13 >> 0x1e;
    }
    uVar1 = uVar5 * 0x6c078965 + 4;
    lVar8 = (*(code *)local_7d8[4])(&local_7d8);
    lVar7 = 0;
    uVar5 = 0;
    do {
      puVar9 = (uint *)(lVar8 + lVar7);
      lVar7 = lVar7 + 4;
      uVar2 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      uVar5 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar5;
    } while (lVar7 != 0x754);
    uVar6 = uVar6 ^ uVar6 << 0xb;
    local_7e8 = CONCAT44(uVar13,uVar12);
    uStack_7dc = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar6 ^ uVar1;
    local_7e0 = uVar1;
    FUN_00889f80(param_1,&local_7d8,(int)((ulong)uStack_7dc * (ulong)uVar5 >> 0x20) + 1);
    FUN_01a4c66c(&local_7e8,param_1);
  }
  return;
}

