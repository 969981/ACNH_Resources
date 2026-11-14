
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b339f0(undefined4 *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  void *__s;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_7c8;
  undefined **local_7c0;
  undefined1 auStack_7b8 [1876];
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  
  lVar13 = param_2[0x1fe];
  if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar10 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar10)();
    uVar8 = uVar8 ^ 1;
  }
  iVar2 = *(int *)(param_3 + 0x24);
  bVar3 = *(byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 1);
  sVar4 = *(short *)(*param_2 + 0x10);
  local_7c0 = &PTR_LAB_049ff3a8;
  memset(auStack_7b8,0,0x754);
  uVar9 = nn::os::GetSystemTick();
  local_64 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  local_60 = (local_64 ^ local_64 >> 0x1e) * 0x6c078965 + 2;
  local_5c = (local_60 ^ local_60 >> 0x1e) * 0x6c078965 + 3;
  local_58 = (local_5c ^ local_5c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7c0);
  memset(__s,0,0x754);
  local_7c8 = 0x1cea;
  FUN_0277d4ac(&local_7c8);
  FUN_0277dedc(&local_7c8);
  lVar11 = (*(code *)local_7c0[3])(&local_7c0);
  uVar9 = FUN_0277d6c4(&local_7c8);
  if ((uVar9 >> 3 & 0x1fff) < 0x753) {
    lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
    *(uint *)(lVar11 + lVar12) = *(uint *)(lVar11 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
  }
  local_7c8 = 0x2546;
  FUN_0277d4ac(&local_7c8);
  FUN_0277dedc(&local_7c8);
  lVar11 = (*(code *)local_7c0[3])(&local_7c0);
  uVar9 = FUN_0277d6c4(&local_7c8);
  if ((uVar9 >> 3 & 0x1fff) < 0x753) {
    lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
    *(uint *)(lVar11 + lVar12) = *(uint *)(lVar11 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
  }
  local_7c8 = 0x2547;
  FUN_0277d4ac(&local_7c8);
  FUN_0277dedc(&local_7c8);
  lVar11 = (*(code *)local_7c0[3])(&local_7c0);
  uVar9 = FUN_0277d6c4(&local_7c8);
  if ((uVar9 >> 3 & 0x1fff) < 0x753) {
    lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
    *(uint *)(lVar11 + lVar12) = *(uint *)(lVar11 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
  }
  local_7c8 = 0x2545;
  FUN_0277d4ac(&local_7c8);
  FUN_0277dedc(&local_7c8);
  lVar11 = (*(code *)local_7c0[3])(&local_7c0);
  uVar9 = FUN_0277d6c4(&local_7c8);
  if ((uVar9 >> 3 & 0x1fff) < 0x753) {
    lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
    *(uint *)(lVar11 + lVar12) = *(uint *)(lVar11 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
  }
  lVar12 = (*(code *)local_7c0[4])(&local_7c0);
  uVar7 = DAT_0558600c;
  lVar11 = 0;
  uVar9 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar11);
    lVar11 = lVar11 + 4;
    uVar5 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    uVar9 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar9;
  } while (lVar11 != 0x754);
  if (uVar9 == 0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar7;
  }
  else {
    uVar5 = (uint)bVar3 + iVar2 + (int)(sVar4 % 10) + 7;
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar5 / uVar9;
    }
    FUN_00889f80(param_1,&local_7c0,(uVar5 - uVar6 * uVar9) + 1);
  }
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

