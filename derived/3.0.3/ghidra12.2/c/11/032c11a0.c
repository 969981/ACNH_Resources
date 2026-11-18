
/* WARNING: Removing unreachable block (ram,0x032c11dc) */
/* WARNING: Removing unreachable block (ram,0x032c1304) */

void FUN_032c11a0(long *param_1,long *param_2,ulong param_3,uint param_4)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong __size_00;
  long lVar13;
  
  puVar4 = PTR_DAT_04bb2698;
  if (*param_1 != 0) {
    return;
  }
  uVar12 = param_3 & 0xffffffff;
  iVar10 = (int)param_3;
  if (iVar10 < 1) {
    return;
  }
  __size = uVar12 * 0x38 + 8;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    puVar8 = malloc(__size);
    puVar5 = PTR_DAT_04bb2120;
    puVar3 = PTR_DAT_04bb2da0;
  }
  else {
    plVar6 = (long *)*param_2;
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar13 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto joined_r0x032c12f0;
    }
    puVar8 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    puVar5 = PTR_DAT_04bb2120;
    puVar3 = PTR_DAT_04bb2da0;
  }
  PTR_DAT_04bb2120 = puVar5;
  PTR_DAT_04bb2da0 = puVar3;
  if (puVar8 != (ulong *)0x0) {
    puVar1 = PTR_DAT_04bc8e68 + 0x10;
    puVar2 = PTR_DAT_04bc8e78 + 0x10;
    puVar9 = puVar8 + 1;
    *puVar8 = uVar12;
    puVar8 = puVar9;
    do {
      *(undefined2 *)puVar8 = 0x100;
      *(undefined1 *)(puVar8 + 5) = 0;
      *(undefined1 *)(puVar8 + 6) = 0;
      puVar8[1] = (ulong)puVar1;
      puVar8[2] = (ulong)puVar5;
      puVar8[3] = (ulong)puVar2;
      puVar8[4] = (ulong)puVar3;
      puVar8 = puVar8 + 7;
    } while (puVar8 != puVar9 + uVar12 * 7);
    *param_1 = (long)puVar9;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(int *)(param_1 + 1) = iVar10;
  }
joined_r0x032c12f0:
  if ((param_4 & 1) != 0) {
    lVar13 = *(long *)puVar4;
    param_2 = (long *)*param_2;
    __size_00 = uVar12 << 4 | 8;
    if (lVar13 == 0) {
      puVar8 = malloc(__size_00);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_2 = (long *)(lVar13 + 8);
        if (lVar7 != 0) {
          param_2 = (long *)(lVar7 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      puVar8 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,__size_00,8);
    }
    if (puVar8 != (ulong *)0x0) {
      param_3 = param_3 & 3;
      puVar9 = puVar8 + 1;
      *puVar8 = uVar12;
      puVar4 = PTR_DAT_04bc8e78;
      puVar5 = PTR_DAT_04bb2da0;
      puVar8 = puVar9;
      if (param_3 != 0) {
        puVar3 = PTR_DAT_04bc8e78 + 0x10;
        puVar11 = puVar9;
        do {
          puVar8 = puVar11 + 2;
          *puVar11 = (ulong)puVar3;
          puVar11[1] = (ulong)puVar5;
          param_3 = param_3 - 1;
          puVar11 = puVar8;
        } while (param_3 != 0);
      }
      if (2 < (uVar12 - 1 & 0xfffffffffffffff)) {
        puVar4 = puVar4 + 0x10;
        do {
          *puVar8 = (ulong)puVar4;
          puVar8[1] = (ulong)puVar5;
          puVar8[2] = (ulong)puVar4;
          puVar8[3] = (ulong)puVar5;
          puVar8[4] = (ulong)puVar4;
          puVar8[5] = (ulong)puVar5;
          puVar8[6] = (ulong)puVar4;
          puVar8[7] = (ulong)puVar5;
          puVar8 = puVar8 + 8;
        } while (puVar8 != puVar9 + uVar12 * 2);
      }
      param_1[3] = (long)puVar9;
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      *(int *)(param_1 + 4) = iVar10;
    }
  }
  return;
}

