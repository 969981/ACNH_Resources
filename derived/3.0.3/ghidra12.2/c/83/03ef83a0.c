
undefined8 FUN_03ef83a0(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t __size;
  undefined *puVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  code *pcVar15;
  long *plVar16;
  long lVar17;
  uint local_a0 [16];
  
  plVar16 = (long *)**(undefined8 **)
                      (*(long *)(*(long *)(param_1 + 0x28) + 0x38) +
                      (long)*(short *)(param_1 + 0x30) * 8);
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if (((plVar16 == (long *)0x0) ||
      (uVar10 = (**(code **)*plVar16)(plVar16,PTR_DAT_04bb3488), (uVar10 & 1) == 0)) ||
     (uVar5 = (**(code **)(*plVar16 + 0x30))(plVar16), 0x200 < (int)uVar5)) {
LAB_03ef8428:
    uVar11 = 0;
  }
  else {
    if (param_3 == (long *)0x0) {
      local_a0[0xc] = 0;
      local_a0[0xd] = 0;
      local_a0[0xe] = 0;
      local_a0[0xf] = 0;
      local_a0[8] = 0;
      local_a0[9] = 0;
      local_a0[10] = 0;
      local_a0[0xb] = 0;
      local_a0[4] = 0;
      local_a0[5] = 0;
      local_a0[6] = 0;
      local_a0[7] = 0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_a0[2] = 0;
      local_a0[3] = 0;
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          uVar8 = uVar6;
          if ((int)uVar6 < (int)uVar5) {
            while( true ) {
              uVar7 = 1 << (ulong)(uVar8 & 0x1f);
              if ((uVar7 & local_a0[uVar8 >> 5]) != 0) break;
              if (uVar8 < 0x200) {
                local_a0[uVar8 >> 5] = uVar7 | local_a0[uVar8 >> 5];
              }
              uVar8 = (**(code **)(*plVar16 + 0x98))(plVar16);
              if (((int)uVar8 < 0) || ((int)uVar5 <= (int)uVar8)) break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar5);
      }
    }
    else {
      uVar6 = (**(code **)*param_3)(param_3);
      local_a0[0xc] = 0;
      local_a0[0xd] = 0;
      local_a0[0xe] = 0;
      local_a0[0xf] = 0;
      local_a0[8] = 0;
      local_a0[9] = 0;
      local_a0[10] = 0;
      local_a0[0xb] = 0;
      local_a0[4] = 0;
      local_a0[5] = 0;
      local_a0[6] = 0;
      local_a0[7] = 0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_a0[2] = 0;
      local_a0[3] = 0;
      if (0 < (int)uVar6) {
        uVar8 = 0;
        do {
          pcVar15 = *(code **)(*param_3 + 8);
          plVar13 = param_3;
          uVar7 = uVar8;
          while ((uVar7 = (*pcVar15)(plVar13,uVar7), -1 < (int)uVar7 && ((int)uVar7 < (int)uVar5)))
          {
            uVar2 = 1 << (ulong)(uVar7 & 0x1f);
            if ((uVar2 & local_a0[uVar7 >> 5]) != 0) break;
            if (uVar7 < 0x200) {
              local_a0[uVar7 >> 5] = uVar2 | local_a0[uVar7 >> 5];
            }
            pcVar15 = *(code **)(*plVar16 + 0x98);
            plVar13 = plVar16;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar6);
      }
    }
    uVar5 = FUN_00da1ae4(local_a0);
    puVar3 = PTR_DAT_04bb2698;
    if (0 < (int)uVar5) {
      __size = (ulong)uVar5 << 1;
      lVar17 = *(long *)PTR_DAT_04bb2698;
      if (lVar17 == 0) {
        pvVar14 = malloc(__size);
        if (pvVar14 == (void *)0x0) {
          return 0;
        }
      }
      else {
        plVar13 = param_2;
        if (param_2 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar13 = (long *)(lVar17 + 8);
          if (lVar12 != 0) {
            plVar13 = (long *)(lVar12 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) {
            return 0;
          }
        }
        pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,__size,8);
        if (pvVar14 == (void *)0x0) {
          return 0;
        }
      }
      lVar17 = *(long *)puVar3;
      *(uint *)(param_1 + 8) = uVar5;
      *(void **)(param_1 + 0x10) = pvVar14;
      if (lVar17 == 0) {
        pvVar14 = malloc(__size);
      }
      else {
        if (param_2 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar1 = (undefined8 *)(lVar17 + 8);
          if (lVar12 != 0) {
            puVar1 = (undefined8 *)(lVar12 + 0xa8);
          }
          param_2 = (long *)*puVar1;
          if (param_2 == (long *)0x0) goto LAB_03ef8428;
        }
        pvVar14 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
      }
      if (pvVar14 == (void *)0x0) {
        return 0;
      }
      *(uint *)(param_1 + 0x18) = uVar5;
      *(void **)(param_1 + 0x20) = pvVar14;
      uVar6 = 0;
      do {
        uVar8 = uVar6 + 1;
        uVar4 = FUN_00edf160(local_a0,uVar8);
        if (*(uint *)(param_1 + 8) <= uVar6) {
          uVar6 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 2) = uVar4;
        uVar6 = uVar8;
      } while (uVar5 != uVar8);
      uVar6 = 0;
      do {
        uVar8 = uVar6;
        if (*(uint *)(param_1 + 8) <= uVar6) {
          uVar8 = 0;
        }
        iVar9 = (**(code **)(*plVar16 + 0x98))
                          (plVar16,(long)*(short *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 2));
        uVar8 = 0;
        uVar7 = uVar6;
        if (*(uint *)(param_1 + 0x18) <= uVar6) {
          uVar7 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 2) = 0xffff;
        do {
          uVar7 = uVar8;
          if (*(uint *)(param_1 + 8) <= uVar8) {
            uVar7 = 0;
          }
          if (iVar9 == *(short *)(*(long *)(param_1 + 0x10) + (ulong)uVar7 * 2)) {
            uVar7 = uVar6;
            if (*(uint *)(param_1 + 0x18) <= uVar6) {
              uVar7 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 2) = (short)uVar8;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    uVar11 = 1;
  }
  return uVar11;
}

