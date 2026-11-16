
void FUN_029abcb0(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_5e10;
  undefined4 local_5e08;
  undefined8 local_5e04;
  undefined4 local_5dfc;
  long local_5df8 [2998];
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  
  lVar9 = 600;
  lVar10 = 0;
  do {
    lVar9 = lVar9 + -1;
    *(undefined4 *)((long)local_5df8 + lVar10 + -0x10) = 0xf6f60000;
    *(undefined8 *)((long)local_5df8 + lVar10 + -0xc) = 0xfff6fff6fff6fff6;
    *(undefined4 *)((long)local_5df8 + lVar10 + -4) = 0xfffffff6;
    *(undefined8 *)((long)local_5df8 + lVar10 + 0x10) = 0xff7fffffff7fffff;
    *(undefined8 *)((long)local_5df8 + lVar10) = 0xfffffffffffffff6;
    *(undefined8 *)((long)local_5df8 + lVar10 + 8) = 0xff7fffffff7fffff;
    lVar10 = lVar10 + 0x28;
  } while (lVar9 != 0);
  iVar7 = *(int *)(param_1 + 0x98);
  local_5e10._0_2_ = 0;
  if (iVar7 == 0) {
    iVar7 = 8;
  }
  else {
    lVar9 = *(long *)(param_1 + 0xa0);
    lVar10 = *(long *)PTR_DAT_04bb29d0;
    iVar8 = 0;
    uVar11 = 0;
    do {
      uVar12 = uVar11 & 0xffff;
      lVar14 = lVar9 + (long)iVar8 * 400;
      bVar6 = 599 < ((uint)uVar11 & 0xffff);
      puVar4 = &local_5e08 + uVar12 * 10;
      if (bVar6) {
        puVar4 = &local_5e08;
      }
      *(short *)puVar4 = (short)iVar8;
      puVar3 = (undefined1 *)((long)&local_5e10 + (uVar12 * 0x14 + 5) * 2);
      if (bVar6) {
        puVar3 = (undefined1 *)((long)&local_5e08 + 2);
      }
      *puVar3 = *(undefined1 *)(lVar14 + 8);
      puVar4 = (undefined4 *)((long)local_5df8 + uVar12 * 0x28 + -4);
      puVar5 = (undefined8 *)((long)&local_5e10 + (uVar12 * 0x14 + 6) * 2);
      if (bVar6) {
        puVar4 = &local_5dfc;
        puVar5 = &local_5e04;
      }
      *(short *)puVar5 = (short)*(undefined4 *)(lVar14 + 0xc);
      *puVar4 = *(undefined4 *)(lVar14 + 0x18);
      lVar14 = *(long *)(lVar14 + 0x20) - param_3;
      if (lVar14 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar13 = 0;
        if (lVar10 != 0) {
          lVar13 = (lVar14 * 1000) / lVar10;
        }
      }
      else {
        lVar13 = 0;
        if (lVar10 != 0) {
          lVar13 = lVar14 / lVar10;
        }
        lVar13 = lVar13 * 1000;
      }
      uVar1 = (uint)uVar12 + 1;
      uVar11 = (ulong)uVar1;
      local_5e10._0_2_ = (undefined2)uVar1;
      plVar2 = local_5df8 + uVar12 * 5;
      if (599 < (uint)uVar12) {
        plVar2 = local_5df8;
      }
      *plVar2 = lVar13 + param_4;
      iVar8 = iVar8 + 1;
    } while (iVar7 != iVar8);
    iVar7 = (uVar1 & 0xffff) * 0x28 + 8;
  }
  local_43 = *param_2;
  local_48 = 0;
  local_42 = 0;
  local_44 = 4;
  if (-1 < *(int *)(param_1 + 0x62bf0)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x62bf0),&local_48,
                 &local_5e10,iVar7,0);
  }
  return;
}

