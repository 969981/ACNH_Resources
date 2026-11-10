
void FUN_00284690(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long local_88;
  undefined *local_80;
  long local_78;
  undefined8 uStack_70;
  long local_68 [5];
  __less _Stack_31;
  
  local_80 = PTR_DAT_04bcdc48 + 0x10;
  bVar4 = *(byte *)(param_2 + 5);
  uVar9 = 1;
  if ((bVar4 & 1) != 0) {
    uVar9 = 2;
  }
  if ((bVar4 & 2) != 0) {
    uVar9 = uVar9 + 2;
  }
  if ((bVar4 & 4) != 0) {
    uVar9 = uVar9 + 4;
  }
  if ((bVar4 & 8) != 0) {
    uVar9 = uVar9 + 8;
  }
  FUN_00284880(local_68,&local_80,*param_2 + (ulong)uVar9,*(undefined2 *)((long)param_2 + 0x2a));
  plVar5 = (long *)FUN_00228380();
  lVar12 = *plVar5;
  local_88 = 0;
  FUN_002282f0(&local_88);
  lVar13 = local_88 - local_78;
  plVar5 = (long *)FUN_00228380();
  lVar8 = *plVar5;
  puVar6 = (uint *)(param_1 + 0x74);
  uVar9 = *puVar6;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar11 = 0;
  if (lVar8 != 0) {
    uVar11 = (uint)(lVar13 / lVar8);
  }
  uVar7 = *(uint *)(param_1 + 0x78);
  puVar6[(ulong)((uVar9 + uVar7) % 9) + 2] = uVar11;
  if (uVar9 == 9) {
    uVar11 = 9;
    uVar7 = (uVar7 + 1) % 9;
    *(uint *)(param_1 + 0x78) = uVar7;
  }
  else {
    uVar11 = uVar9 + 1;
    *puVar6 = uVar11;
    if (uVar9 == 0xffffffff) {
      uVar9 = 0;
      goto LAB_00284838;
    }
  }
  uVar10 = 0;
  uVar9 = uVar11;
  if (8 < uVar11) {
    uVar9 = 9;
  }
  do {
    uVar11 = uVar11 - 1;
    *(uint *)((long)local_68 + uVar10 * 4) = puVar6[((ulong)uVar7 + (ulong)uVar11) % 9 + 2];
    uVar10 = uVar10 + 1;
  } while (uVar9 != uVar10);
  std::__sort<std::__less<int,int>&,int*>
            ((int *)local_68,(int *)((long)local_68 + (ulong)uVar9 * 4),&_Stack_31);
  if ((uVar9 & 1) == 0) {
    lVar8 = (ulong)(uVar9 >> 1) * 4;
    iVar2 = *(int *)((long)local_68 + lVar8 + -4);
    iVar3 = *(int *)((long)local_68 + lVar8);
    iVar1 = iVar3 + iVar2;
    if (iVar1 < 0 != SCARRY4(iVar3,iVar2)) {
      iVar1 = iVar1 + 1;
    }
    uVar9 = iVar1 >> 1;
  }
  else {
    uVar9 = *(uint *)((long)local_68 + (ulong)(uVar9 >> 1) * 4);
  }
  *(undefined4 *)(param_1 + 0xa0) = 9;
  *(uint *)(param_1 + 0xa4) = uVar9;
LAB_00284838:
  if ((int)uVar9 < 0) {
    uVar9 = uVar9 + 1;
  }
  plVar5 = (long *)FUN_00228380();
  local_68[0] = (local_88 - *plVar5 * ((long)((ulong)uVar9 << 0x20) >> 0x21)) - lVar12 * uStack_70;
  FUN_002841c4(param_1 + 0x50,local_68);
  return;
}

