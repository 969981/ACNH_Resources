
/* WARNING: Type propagation algorithm not settling */

int FUN_01411e70(long param_1,int *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar4 = PTR_DAT_04bbc9a0;
  bVar5 = false;
  uVar15 = 0;
  iVar11 = -1;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  puVar2 = PTR_DAT_04bbc950 + 0x10;
  do {
    iVar11 = iVar11 + 1;
    uVar13 = *(ulong *)(param_1 + 0xa10 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
    if (((uVar13 & 0xff00000000) != 0 && (uVar13 & 0xffffffff) != 0) &&
       (lVar9 = *(long *)PTR_DAT_04bb27c0, lVar9 != 0)) {
      iVar12 = (int)uVar13;
      if ((iVar12 == 0) ||
         (((plVar14 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                (uVar13 >> 0x14 & 0xfff) * 8), plVar14 == (long *)0x0 ||
           ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || ((int)plVar14[0x46] != iVar12)))) {
        plVar14 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)PTR_DAT_04bb27c0;
        iVar6 = (**(code **)(*plVar8 + 0x60))();
        if (iVar6 < 0x11) {
          uVar10 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_01411ffc;
          uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01411ffc:
        uVar10 = 0;
      }
      if (plVar14 != (long *)0x0) {
        lVar9 = plVar14[0x2a];
        uVar3 = *(uint *)(plVar14 + 0x49);
        if (((*PTR_DAT_04bb4050 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4050), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb4048 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb4050);
        }
        uVar7 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb4048);
        if ((((int)lVar9 == 1) && ((uVar7 & uVar10) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
          if ((long *)plVar14[0x16] != plVar14 + 0x15) {
            lVar9 = (long)*(int *)((long)plVar14 + 0xbc);
            plVar8 = (long *)(plVar14[0x16] - lVar9);
            do {
              if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
                *(undefined **)PTR_DAT_04bbc998 = puVar2;
                __cxa_guard_release(puVar4);
              }
              if ((plVar8 != (long *)0x0) &&
                 (uVar13 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bbc998), (uVar13 & 1) != 0
                 )) {
                local_78 = plVar8[0x51];
                lStack_70 = plVar8[0x52];
                local_80 = *(undefined4 *)(param_3 + 1);
                local_68 = (undefined4)plVar8[0x53];
                uStack_64 = *(undefined4 *)((long)plVar8 + 0x29c);
                local_88 = *param_3;
                local_7c = *param_4;
                iVar6 = FUN_038e7f70(&local_78,&local_88,0,0);
                if (iVar6 != 0) {
                  *(undefined1 *)((long)plVar8 + 0x555) = 1;
                  *param_2 = iVar12;
                  if (!bVar5) {
                    return iVar11;
                  }
                  goto LAB_0141212c;
                }
                break;
              }
              plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
            } while (plVar8 != (long *)((long)(plVar14 + 0x15) - lVar9));
          }
        }
      }
    }
    uVar10 = (int)uVar15 + 1;
    uVar15 = (ulong)uVar10;
    bVar5 = uVar10 == 100;
    if (iVar11 == 99) {
LAB_0141212c:
      *param_2 = *(int *)PTR_DAT_04bb3238;
      return -1;
    }
  } while( true );
}

