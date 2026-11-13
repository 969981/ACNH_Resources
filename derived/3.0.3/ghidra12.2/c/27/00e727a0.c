
void FUN_00e727a0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  float local_64 [3];
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_14;
  
  puVar2 = PTR_DAT_04bb27c0;
  iVar3 = *(int *)(*(long *)(param_1 + 8) + 0xe0);
  if (iVar3 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0xe8);
    lVar8 = (long)iVar3 << 3;
    lVar6 = 0;
    uVar11 = *param_2;
    do {
      if (uVar11 == *(uint *)(*(long *)(lVar7 + lVar6 * 8) + 8)) {
        if (*(int *)(*(long *)(lVar7 + lVar6 * 8) + 0xd8) != 2) {
          return;
        }
        lVar6 = *(long *)PTR_DAT_04bb27c0;
        if (lVar6 == 0) {
          return;
        }
        if ((((uVar11 == 0) ||
             (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                                 ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
            ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar11)) {
          plVar9 = (long *)0x0;
        }
        if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
          plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar6 = *(long *)puVar2;
          iVar3 = (**(code **)(*plVar4 + 0x60))();
          if (iVar3 < 0x11) {
            uVar11 = 1;
            goto joined_r0x00e728a4;
          }
          if (*(uint *)(lVar6 + 0x5e8) < 5) {
            uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
            goto joined_r0x00e728a4;
          }
        }
        uVar11 = 0;
joined_r0x00e728a4:
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar6 = plVar9[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
        uVar1 = 0;
        if ((int)lVar6 == 1) {
          uVar1 = uVar11;
        }
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        puVar10 = (undefined8 *)plVar9[0x77];
        if (((*PTR_DAT_04bb7480 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb7480);
        }
        if (puVar10 == (undefined8 *)0x0) {
          return;
        }
        uVar5 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb7478);
        local_58 = PTR_DAT_04bbc1a0;
        if ((uVar5 & 1) == 0) {
          return;
        }
        if ((*(ushort *)((long)puVar10 + 0x1242c) >> 4 & 1) == 0) {
          return;
        }
        *(ushort *)((long)puVar10 + 0x1242c) = *(ushort *)((long)puVar10 + 0x1242c) & 0xffef;
        local_48 = 0;
        local_58 = local_58 + 0x10;
        puStack_50 = PTR_DAT_04bb2010 + 0x10;
        local_38 = 0;
        local_40 = puStack_50;
        FUN_01811430(&local_58);
        local_64[1] = 0.0;
        local_14 = 0x80000000;
        local_64[2] = ((float)local_48._4_4_ * 5.0 + (float)local_38._4_4_ * 5.0 + 5.0) * 0.5;
        local_64[0] = ((float)(int)local_48 * 5.0 + (float)(int)local_38 * 5.0 + 5.0) * 0.5;
        FUN_01e39778(puVar10[1],local_64,&local_14,0);
        FUN_01fda3b0(puVar10,*(undefined4 *)((long)puVar10 + 0x123bc));
        FUN_02192850(puVar10 + 0x1617,0,0);
        return;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return;
}

