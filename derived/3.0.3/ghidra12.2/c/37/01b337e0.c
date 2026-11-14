
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b337e0(undefined4 *param_1,long *param_2,undefined4 param_3,long param_4)

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
  undefined **local_7f0;
  undefined1 auStack_7e8 [1876];
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  undefined **local_80;
  undefined4 *puStack_78;
  undefined4 local_44;
  
  lVar13 = param_2[0x1fe];
  local_44 = param_3;
  if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar10 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar10)();
    uVar8 = uVar8 ^ 1;
  }
  iVar2 = *(int *)(param_4 + 0x24);
  bVar3 = *(byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 1);
  sVar4 = *(short *)(*param_2 + 0x10);
  local_7f0 = &PTR_LAB_049ff3a8;
  memset(auStack_7e8,0,0x754);
  uVar9 = nn::os::GetSystemTick();
  local_94 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 2;
  local_8c = (local_90 ^ local_90 >> 0x1e) * 0x6c078965 + 3;
  local_88 = (local_8c ^ local_8c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7f0);
  memset(__s,0,0x754);
  puStack_78 = &local_44;
  local_80 = &PTR_FUN_049ff858;
  FUN_008a1ba0(&local_7f0,&local_80);
  lVar11 = (*(code *)local_7f0[4])(&local_7f0);
  uVar7 = DAT_0558600c;
  lVar12 = 0;
  uVar9 = 0;
  do {
    puVar1 = (uint *)(lVar11 + lVar12);
    lVar12 = lVar12 + 4;
    uVar5 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    uVar9 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar9;
  } while (lVar12 != 0x754);
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
    FUN_00889f80(param_1,&local_7f0,(uVar5 - uVar6 * uVar9) + 1);
  }
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

