
void FUN_018db840(long *param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  byte bVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  byte bVar16;
  uint local_6c [2];
  undefined2 local_64;
  undefined1 local_62;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  if (((((int)param_2 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (param_2 >> 0x14 & 0xfff) * 8
                            ), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || ((int)plVar14[0x46] != (int)param_2)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar15 = 0;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_018db908;
      uVar15 = 5U >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_018db908:
    uVar15 = 1;
  }
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar9 = plVar14[0x2a];
  if (((*PTR_DAT_04bb3ff0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3ff0);
  }
  uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3fe8);
  puVar5 = PTR_DAT_04bbe600;
  puVar4 = PTR_DAT_04bbe5f8;
  pbVar12 = PTR_DAT_04bb32e0;
  if ((int)lVar9 != 1) {
    uVar15 = 1;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar15 != 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_018db9d8;
LAB_018dba30:
    bVar16 = *pbVar10;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar9 + 0x158);
    }
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar9 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar10 < 8)))) goto LAB_018dba30;
LAB_018db9d8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_018dba28:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_018dba30;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar16 = *(byte *)(lVar9 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar16 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
      if (7 < bVar16) {
        puVar3 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar10 = (byte *)(lVar9 + 0x471);
      }
    }
    bVar16 = *pbVar10;
    if (7 < bVar16) goto LAB_018dba28;
  }
  plVar7 = (long *)plVar14[0x60];
  if (plVar7 == (long *)0x0) {
    if ((long *)plVar14[0x16] != plVar14 + 0x15) {
      lVar9 = (long)*(int *)((long)plVar14 + 0xbc);
      plVar7 = (long *)(plVar14[0x16] - lVar9);
      puVar1 = PTR_DAT_04bbe608 + 0x10;
      do {
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
          *(undefined **)puVar4 = puVar1;
          __cxa_guard_release(puVar5);
        }
        if ((plVar7 != (long *)0x0) &&
           (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar4), (uVar8 & 1) != 0))
        goto LAB_018dba4c;
        plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
      } while (plVar7 != (long *)((long)(plVar14 + 0x15) - lVar9));
    }
  }
  else {
LAB_018dba4c:
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    *(byte *)((long)plVar7 + 0x2ea) = bVar16;
  }
  FUN_01947750(plVar14);
  local_6c[1] = 0;
  local_62 = 0;
  *(undefined1 *)(param_3 + 9) = 2;
  puVar4 = PTR_DAT_04bb27d0;
  local_64 = 0xff00;
  if (-1 < (int)param_1[7]) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,(int)param_1[7],local_6c + 1,param_3,0x10,0);
  }
  bVar16 = *(byte *)(param_3 + 10);
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
LAB_018dbb00:
    if (7 < *pbVar12) {
LAB_018dbb0c:
      if (*(long **)puVar4 != (long *)0x0) {
        lVar9 = **(long **)puVar4;
        bVar11 = *(byte *)(lVar9 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar3 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar12 = (byte *)(lVar9 + 0x471);
          }
        }
        bVar11 = *pbVar12;
        if (bVar11 < 8) goto LAB_018dbb74;
      }
      pbVar12 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_018dbb00;
      }
      goto LAB_018dbb0c;
    }
  }
  bVar11 = *pbVar12;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
LAB_018dbb74:
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  if (bVar16 == bVar11) {
    *(undefined1 *)((long)param_1 + 0x69) = 2;
  }
  local_6c[0] = 0xffffffff;
  uVar8 = FUN_0194da30(param_2 & 0xffffffff,local_6c);
  uVar15 = local_6c[0];
  if ((uVar8 & 1) != 0) {
    lVar9 = (long)(int)local_6c[0];
    if (*(uint *)(param_1 + 1) <= local_6c[0] || param_1[2] == 0) {
      lVar9 = 0;
    }
    lVar9 = param_1[2] + lVar9 * 10;
    *(byte *)(lVar9 + 6) = *(byte *)(lVar9 + 6) | 0x10;
    uVar8 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((uVar8 & 1) != 0) {
      uVar2 = uVar15;
      if (*(uint *)(param_1 + 3) <= uVar15) {
        uVar2 = 0;
      }
      if (*(uint *)(param_1 + 1) <= uVar15) {
        uVar15 = 0;
      }
      lVar9 = param_1[4] + (long)(int)uVar2 * 0x20;
      plVar14 = (long *)(param_1[2] + (long)(int)uVar15 * 10);
      if (*(long *)(lVar9 + 8) != *plVar14 || *(short *)(lVar9 + 0x10) != (short)plVar14[1]) {
        lVar13 = *plVar14;
        *(short *)(lVar9 + 0x10) = (short)plVar14[1];
        *(long *)(lVar9 + 8) = lVar13;
        *(undefined1 *)(lVar9 + 0x12) = 1;
      }
    }
  }
  return;
}

