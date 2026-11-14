
void FUN_0174e970(byte *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  byte local_68 [4];
  undefined4 local_64;
  undefined2 local_60;
  byte local_5c [4];
  undefined4 local_58;
  undefined2 local_54;
  
  bVar10 = *PTR_DAT_04bb32e0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *param_1 = bVar10;
  puVar3 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  uVar14 = *(uint *)(param_2 + 0x234);
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar14 = 1;
      goto joined_r0x0174ea54;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0174ea54;
    }
  }
  uVar14 = 0;
joined_r0x0174ea54:
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0x2a];
    uVar2 = *(uint *)(plVar13 + 0x49);
    if (((*PTR_DAT_04bbe2c8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbe2c8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbe2c0 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe2c8);
    }
    uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbe2c0);
    if ((((uVar7 & uVar14) == 1) && ((int)lVar11 == 1)) && ((uVar2 >> 4 & 1) != 0)) {
      iVar6 = *(int *)((long)plVar13 + 0x234);
      local_68[0] = 0xff;
      if (iVar6 != 0) {
        FUN_02507c6c(local_5c,7,1,1,0);
        puVar5 = PTR_DAT_04bb5038;
        puVar4 = PTR_DAT_04bb4718;
        puVar3 = PTR_DAT_04bb3238;
        local_64 = local_58;
        uVar12 = (ulong)local_5c[0];
        bVar10 = 0xff;
        if (local_5c[0] < 8) {
          bVar10 = local_5c[0];
        }
        local_60 = local_54;
        if (local_5c[0] < 8) {
          piVar1 = (int *)PTR_DAT_04bb3238;
          if (*(long *)PTR_DAT_04bb4718 != 0) {
            piVar1 = (int *)(*(long *)PTR_DAT_04bb4718 + uVar12 * 4 + 0xde8);
          }
          local_68[0] = local_5c[0];
          if (iVar6 != *piVar1) {
            local_68[0] = bVar10;
            do {
              do {
                uVar12 = uVar12 + 1;
                if (uVar12 == 8) goto LAB_0174eaf4;
                uVar9 = FUN_02507924(local_68,puVar5 + uVar12);
              } while ((uVar9 & 1) == 0);
              local_68[0] = puVar5[uVar12];
              uVar12 = (ulong)local_68[0];
              if (7 < local_68[0]) goto LAB_0174eaf4;
              piVar1 = (int *)puVar3;
              if (*(long *)puVar4 != 0) {
                piVar1 = (int *)(*(long *)puVar4 + uVar12 * 4 + 0xde8);
              }
            } while (iVar6 != *piVar1);
          }
        }
        else {
LAB_0174eaf4:
          local_68[0] = 0xff;
        }
      }
      *param_1 = local_68[0];
    }
  }
  return;
}

