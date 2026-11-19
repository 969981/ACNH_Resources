
undefined8 FUN_03ca6640(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_1 + 8);
  if ((*PTR_DAT_04bd4110 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04bd4110);
    puVar1 = PTR_DAT_04bd1b50;
    if (iVar5 != 0) {
      if ((*PTR_DAT_04bd1b58 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1b58);
        puVar4 = PTR_DAT_04bd1b60;
        if (iVar5 != 0) {
          if ((*PTR_DAT_04bd1b68 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1b68);
            puVar3 = PTR_DAT_04bc8f50;
            if (iVar5 != 0) {
              if ((*PTR_DAT_04bc8f58 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f58);
                puVar2 = PTR_DAT_04bc8f30;
                if (iVar5 != 0) {
                  if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
                    *(undefined8 *)puVar2 = 0;
                    __cxa_guard_release(PTR_DAT_04bc8f38);
                  }
                  *(undefined **)puVar3 = puVar2;
                  __cxa_guard_release(PTR_DAT_04bc8f58);
                }
              }
              *(undefined **)puVar4 = puVar3;
              __cxa_guard_release(PTR_DAT_04bd1b68);
            }
          }
          *(undefined **)puVar1 = puVar4;
          __cxa_guard_release(PTR_DAT_04bd1b58);
        }
      }
      *(undefined **)PTR_DAT_04bd4108 = puVar1;
      __cxa_guard_release(PTR_DAT_04bd4110);
    }
  }
  if (param_2 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
    if (puVar6 != (undefined8 *)PTR_DAT_04bd4108) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bd4108 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
    }
    if ((long *)param_2[0x2d] != param_2 + 0x2c) {
      lVar11 = (long)*(int *)((long)param_2 + 0x174);
      lVar12 = param_2[0x2d] - lVar11;
      puVar1 = PTR_DAT_04bd38a0 + 0x10;
      do {
        lVar9 = *(long *)PTR_DAT_04bb2698;
        if (lVar9 == 0) {
          plVar8 = malloc(0x98);
        }
        else {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar8 = (long *)(lVar9 + 8);
          if (lVar7 != 0) {
            plVar8 = (long *)(lVar7 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)0x0;
          }
          else {
            plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x98,8);
          }
        }
        lVar9 = *(long *)(lVar12 + 0x28);
        FUN_03c67d50(plVar8,lVar12 + 0x10,2);
        *(undefined1 *)(plVar8 + 0x10) = 0;
        *plVar8 = (long)puVar1;
        plVar8[0xe] = 0;
        plVar8[0xf] = 0;
        plVar8[0xc] = 0;
        plVar8[0xd] = 0;
        plVar8[0x11] = lVar9;
        plVar8[0x12] = (long)param_2;
        lVar9 = *(long *)(lVar10 + 0x68);
        plVar8 = (long *)((long)*(int *)(lVar10 + 0x7c) + (long)plVar8);
        *(long **)(lVar10 + 0x68) = plVar8;
        *plVar8 = lVar9;
        plVar8[1] = lVar10 + 0x68;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar8;
        }
        *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
        lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
      } while (lVar12 != (long)(param_2 + 0x2c) - lVar11);
    }
  }
  return 0;
}

