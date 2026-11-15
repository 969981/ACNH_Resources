
void FUN_02049cf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined *local_78;
  undefined *puStack_70;
  int local_64;
  
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb27c0;
  puVar4 = PTR_PTR_04bb2238;
  lVar12 = *(long *)PTR_DAT_04bb4858;
  if (lVar12 != 0) {
    iVar14 = 1;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3b50 + 0x10;
    do {
      puStack_70 = *(undefined **)(puVar4 + 8);
      if (iVar14 - 1U < 6) {
        puStack_70 = (&PTR_s_WherearenObjBinder_04a6ee40)[(int)(iVar14 - 1U)];
      }
      local_78 = puVar1;
      local_64 = iVar14;
      uVar7 = FUN_0224b170(lVar12,&local_78);
      if ((uVar7 != 0) && (lVar11 = *(long *)puVar5, lVar11 != 0)) {
        plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + (ulong)(uVar7 >> 0x14) * 8);
        if ((plVar13 == (long *)0x0) ||
           (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar13 + 0x46) != uVar7)))) {
          plVar13 = (long *)0x0;
        }
        if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
          lVar11 = *(long *)puVar5;
          iVar8 = (**(code **)(*plVar9 + 0x60))();
          if (iVar8 < 0x11) {
            uVar7 = 1;
          }
          else {
            uVar7 = *(uint *)(lVar11 + 0x5e8);
            if (4 < uVar7) goto LAB_02049e28;
            uVar7 = 0x1aU >> (ulong)(uVar7 & 0x1f) & 1;
          }
        }
        else {
LAB_02049e28:
          uVar7 = 0;
        }
        if (plVar13 != (long *)0x0) {
          lVar11 = plVar13[0x2a];
          if (((*PTR_DAT_04bc2570 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc2570), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bc2568 = puVar2;
            __cxa_guard_release(PTR_DAT_04bc2570);
          }
          uVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bc2568);
          uVar3 = 0;
          if ((int)lVar11 == 1) {
            uVar3 = uVar7;
          }
          if (((uVar10 & 1) != 0) && (uVar3 != 0)) {
            FUN_006fb3d0(plVar13);
          }
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 7);
  }
  return;
}

