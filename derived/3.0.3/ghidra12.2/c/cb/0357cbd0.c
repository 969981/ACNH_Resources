
void FUN_0357cbd0(uint *param_1,long param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ulong uVar10;
  ushort uVar11;
  long lVar12;
  undefined2 local_5c [2];
  undefined *local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  long local_48;
  
  puVar5 = PTR_DAT_04bb3170;
  param_1[0] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)puVar5;
  puVar5 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  lVar12 = 0xc;
  lVar1 = param_2 + 0xc;
  if ((*(byte *)(param_2 + 0x1c) & 0x10) != 0) {
    lVar12 = 0x14;
    lVar1 = param_2 + 0x14;
  }
  local_50 = *(undefined2 *)(param_2 + lVar12);
  local_4e = *(undefined2 *)(lVar1 + 2);
  local_4c = *(undefined4 *)(lVar1 + 4);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar5 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(lVar1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
        lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8);
        if (lVar12 != 0) {
          local_48 = lVar12;
        }
      }
    }
  }
  bVar2 = *(byte *)(param_2 + 0x1c);
  if ((bVar2 & 1) != 0) {
    iVar7 = FUN_01ad7260(&local_58);
    if ((iVar7 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_58), puVar9 == (ushort *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar9 & 7;
      uVar8 = FUN_01ad7260(&local_58);
      if (uVar8 <= uVar6) {
        uVar6 = 0;
      }
    }
    *param_1 = uVar6;
    *(undefined1 *)((long)param_1 + 0xe) = 1;
    bVar2 = *(byte *)(param_2 + 0x1c);
  }
  if ((bVar2 >> 1 & 1) == 0) goto LAB_0357cd84;
  iVar7 = FUN_01afcfa0(&local_58);
  if (iVar7 == 0) {
LAB_0357cd74:
    uVar6 = FUN_01ae3a80(&local_58);
    param_1[1] = 0;
  }
  else {
    puVar9 = (ushort *)FUN_01afd600(&local_58);
    puVar5 = PTR_DAT_04bb3128;
    if (puVar9 == (ushort *)0x0) goto LAB_0357cd74;
    uVar3 = *puVar9 >> 3 & 3;
    uVar11 = 0;
    if (uVar3 != 3) {
      uVar11 = uVar3;
    }
    if (uVar11 == 2) {
      if ((*(byte *)(param_2 + 0x1c) >> 4 & 1) == 0) {
        FUN_01afd2f0(local_5c,&local_58);
        param_1[1] = 2;
        *(undefined2 *)(param_1 + 3) = local_5c[0];
      }
      else {
        if (((*PTR_DAT_04bb3128 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        puVar4 = PTR_DAT_04bb3120;
        if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
          uVar10 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar10 * 4) == 0xc) goto LAB_0357ce2c;
            uVar10 = uVar10 + 1;
          } while (*(uint *)PTR_DAT_04bb3120 != uVar10);
        }
        uVar10 = 0;
LAB_0357ce2c:
        bVar2 = *param_3;
        uVar11 = bVar2 & 0x7f;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar6 = (uint)uVar10;
        if (*(uint *)puVar4 <= uVar6) {
          uVar6 = 0;
        }
        iVar7 = *(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar6 * 4);
        if (7 < bVar2) {
          uVar11 = 0x7f;
        }
        param_1[1] = 2;
        *(ushort *)(param_1 + 3) = uVar11 | (ushort)(iVar7 << 0xb);
      }
      goto LAB_0357cd84;
    }
    if (uVar11 == 0) goto LAB_0357cd74;
    uVar6 = FUN_01ae3a80(&local_58);
    param_1[1] = 1;
  }
  param_1[2] = uVar6;
LAB_0357cd84:
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  return;
}

