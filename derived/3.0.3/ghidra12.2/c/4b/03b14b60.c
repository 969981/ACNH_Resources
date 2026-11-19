
long * FUN_03b14b60(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  if (((*PTR_DAT_04bd1bd0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1bd0), iVar5 != 0))
  {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bd1bc8 = PTR_DAT_04bc8f30;
    __cxa_guard_release(PTR_DAT_04bd1bd0);
  }
  if (param_1 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 != (undefined8 *)PTR_DAT_04bd1bc8) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bd1bc8 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_03b14d0c;
    }
    plVar7 = (long *)FUN_00367b14(0x270,0x10);
    if (plVar7 != (long *)0x0) {
      FUN_0037bb50(plVar7);
      *plVar7 = (long)(PTR_DAT_04bd0890 + 0x10);
      plVar7[4] = (long)(plVar7 + 4);
      plVar7[5] = (long)(plVar7 + 4);
      FUN_0037ca20(plVar7,param_1,0,0,0);
      puVar1 = PTR_DAT_04bd1c10;
      *(undefined2 *)((long)plVar7 + 0xd2) = 0x100;
      *plVar7 = (long)(puVar1 + 0x10);
      uVar2 = *(undefined1 *)((long)param_1 + 0xd4);
      plVar7[0x1d] = (long)(PTR_DAT_04bc8e10 + 0x10);
      plVar7[0x1e] = -1;
      puVar1 = PTR_DAT_04bd1178;
      *(undefined1 *)((long)plVar7 + 0xd4) = uVar2;
      *(undefined1 *)((long)plVar7 + 0xd5) = 0;
      plVar7[0x1b] = 0;
      plVar7[0x1c] = 0;
      *(undefined4 *)(plVar7 + 0x1f) = 0;
      plVar7[0x26] = 0;
      plVar7[0x27] = 0;
      plVar7[0x28] = 0;
      plVar7[0x29] = 0;
      plVar7[0x40] = 0;
      plVar7[0x2a] = 0;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      plVar7[0x2d] = 0;
      plVar7[0x37] = 0;
      plVar7[0x38] = 0;
      plVar7[0x35] = 0;
      plVar7[0x36] = 0;
      plVar7[0x33] = 0;
      plVar7[0x34] = 0;
      plVar7[0x31] = 0;
      plVar7[0x32] = 0;
      plVar7[0x2f] = 0;
      plVar7[0x30] = 0;
      plVar7[0x3a] = 0;
      plVar7[0x3b] = 0;
      plVar7[0x3c] = 0;
      plVar7[0x3d] = 0;
      plVar7[0x20] = 0;
      plVar7[0x21] = (long)(puVar1 + 0x10);
      plVar7[0x22] = (long)&DAT_3f8000003f800000;
      plVar7[0x23] = 0;
      plVar7[0x24] = (long)&DAT_3f8000003f800000;
      plVar7[0x25] = 0;
      *(undefined4 *)(plVar7 + 0x39) = 0xffffffff;
      plVar7[0x41] = (long)"agl::TextureData";
      *(undefined4 *)(plVar7 + 0x42) = 0x10000;
      plVar7[0x3e] = 0;
      plVar7[0x3f] = 0;
      *(undefined4 *)(plVar7 + 0x45) = 0xff;
      *(undefined4 *)((long)plVar7 + 0x22c) = 0;
      puVar1 = PTR_DAT_04bd1198 + 0x10;
      plVar7[0x4c] = 0;
      plVar7[0x4b] = 0;
      plVar7[0x4a] = 0;
      plVar7[0x49] = 0;
      plVar7[0x48] = 0;
      plVar7[0x47] = 0;
      plVar7[0x2e] = (long)puVar1;
      plVar7[0x46] = 0x80000000000;
      FUN_03b2cf30(plVar7,param_2);
    }
    goto LAB_03b150c8;
  }
LAB_03b14d0c:
  if (((*PTR_DAT_04bd1be0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1be0), iVar5 != 0))
  {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bd1bd8 = PTR_DAT_04bc8f30;
    __cxa_guard_release(PTR_DAT_04bd1be0);
  }
  if (param_1 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 != (undefined8 *)PTR_DAT_04bd1bd8) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bd1bd8 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_03b14e88;
    }
    plVar7 = (long *)FUN_00367b14(0x270,0x10);
    if (plVar7 != (long *)0x0) {
      FUN_0037bb50(plVar7);
      *plVar7 = (long)(PTR_DAT_04bd0890 + 0x10);
      plVar7[4] = (long)(plVar7 + 4);
      plVar7[5] = (long)(plVar7 + 4);
      FUN_0037ca20(plVar7,param_1,0,0,0);
      puVar1 = PTR_DAT_04bd1c18;
      *(undefined1 *)(plVar7 + 0x1d) = 0;
      plVar7[0x1e] = 0;
      plVar7[0x1f] = 0;
      plVar7[0x1b] = (long)(plVar7 + 0x1b);
      plVar7[0x1c] = (long)(plVar7 + 0x1b);
      *plVar7 = (long)(puVar1 + 0x10);
      puVar1 = PTR_DAT_04bc8e10;
      *(undefined4 *)(plVar7 + 0x22) = 0;
      plVar7[0x20] = (long)(puVar1 + 0x10);
      plVar7[0x21] = -1;
      puVar1 = PTR_DAT_04bd1178;
      plVar7[0x29] = 0;
      plVar7[0x2a] = 0;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      plVar7[0x41] = 0;
      plVar7[0x2d] = 0;
      plVar7[0x2e] = 0;
      plVar7[0x2f] = 0;
      plVar7[0x30] = 0;
      plVar7[0x42] = 0;
      plVar7[0x43] = 0;
      plVar7[0x3a] = 0;
      plVar7[0x3b] = 0;
      plVar7[0x38] = 0;
      plVar7[0x39] = 0;
      plVar7[0x36] = 0;
      plVar7[0x37] = 0;
      plVar7[0x34] = 0;
      plVar7[0x35] = 0;
      plVar7[0x32] = 0;
      plVar7[0x33] = 0;
      plVar7[0x3d] = 0;
      plVar7[0x3e] = 0;
      plVar7[0x3f] = 0;
      plVar7[0x40] = 0;
      plVar7[0x23] = 0;
      plVar7[0x24] = (long)(puVar1 + 0x10);
      plVar7[0x25] = (long)&DAT_3f8000003f800000;
      plVar7[0x26] = 0;
      plVar7[0x27] = (long)&DAT_3f8000003f800000;
      plVar7[0x28] = 0;
      *(undefined4 *)(plVar7 + 0x3c) = 0xffffffff;
      plVar7[0x44] = (long)"agl::TextureData";
      *(undefined4 *)(plVar7 + 0x45) = 0x10000;
      *(undefined4 *)(plVar7 + 0x48) = 0xff;
      *(undefined4 *)((long)plVar7 + 0x244) = 0;
      puVar1 = PTR_DAT_04bd1198 + 0x10;
      plVar7[0x4c] = 0;
      plVar7[0x4b] = 0;
      plVar7[0x4a] = 0;
      plVar7[0x31] = (long)puVar1;
      plVar7[0x49] = 0x80000000000;
      FUN_03b2c350(plVar7,param_2);
    }
    goto LAB_03b150c8;
  }
LAB_03b14e88:
  if (((*PTR_DAT_04bd1d28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1d28), iVar5 != 0))
  {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bd1d20 = PTR_DAT_04bc8f30;
    __cxa_guard_release(PTR_DAT_04bd1d28);
  }
  if (param_1 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 != (undefined8 *)PTR_DAT_04bd1d20) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bd1d20 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_03b14f34;
    }
    plVar7 = (long *)FUN_00367b14(0xe0,0x10);
    if (plVar7 != (long *)0x0) {
      FUN_0037bb50(plVar7);
      *plVar7 = (long)(PTR_DAT_04bd0890 + 0x10);
      plVar7[4] = (long)(plVar7 + 4);
      plVar7[5] = (long)(plVar7 + 4);
      FUN_0037ca20(plVar7,param_1,0,0,0);
      *plVar7 = (long)(PTR_DAT_04bd1d18 + 0x10);
    }
    goto LAB_03b150c8;
  }
LAB_03b14f34:
  if (((*PTR_DAT_04bd1ca0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1ca0), iVar5 != 0))
  {
    if (((*PTR_DAT_04bd1bf0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1bf0), iVar5 != 0)) {
      if (((*PTR_DAT_04bc91b8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc91b8), iVar5 != 0)) {
        if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
          *(undefined8 *)PTR_DAT_04bc8f30 = 0;
          __cxa_guard_release(PTR_DAT_04bc8f38);
        }
        *(undefined **)PTR_DAT_04bc91b0 = PTR_DAT_04bc8f30;
        __cxa_guard_release(PTR_DAT_04bc91b8);
      }
      *(undefined **)PTR_DAT_04bd1be8 = PTR_DAT_04bc91b0;
      __cxa_guard_release(PTR_DAT_04bd1bf0);
    }
    *(undefined **)PTR_DAT_04bd1c98 = PTR_DAT_04bd1be8;
    __cxa_guard_release(PTR_DAT_04bd1ca0);
  }
  if (param_1 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 != (undefined8 *)PTR_DAT_04bd1c98) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bd1c98 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_03b14fa8;
    }
    plVar7 = (long *)FUN_00367b14(0x1e0,0x10);
    if (plVar7 != (long *)0x0) {
      FUN_03b34320(plVar7,param_1);
    }
    goto LAB_03b150c8;
  }
LAB_03b14fa8:
  if ((*PTR_DAT_04bd1cc0 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1cc0);
    puVar1 = PTR_DAT_04bd1be8;
    if (iVar5 != 0) {
      if ((*PTR_DAT_04bd1bf0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1bf0);
        puVar4 = PTR_DAT_04bc91b0;
        if (iVar5 != 0) {
          if ((*PTR_DAT_04bc91b8 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(PTR_DAT_04bc91b8);
            puVar3 = PTR_DAT_04bc8f30;
            if (iVar5 != 0) {
              if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
                *(undefined8 *)puVar3 = 0;
                __cxa_guard_release(PTR_DAT_04bc8f38);
              }
              *(undefined **)puVar4 = puVar3;
              __cxa_guard_release(PTR_DAT_04bc91b8);
            }
          }
          *(undefined **)puVar1 = puVar4;
          __cxa_guard_release(PTR_DAT_04bd1bf0);
        }
      }
      *(undefined **)PTR_DAT_04bd1cb8 = puVar1;
      __cxa_guard_release(PTR_DAT_04bd1cc0);
    }
  }
  if (param_1 == (long *)0x0) {
LAB_03b1501c:
    lVar8 = FUN_03b17650(param_1);
    if (lVar8 == 0) {
      lVar8 = FUN_03b177b0(param_1);
      if (lVar8 == 0) {
        lVar8 = FUN_03b17910(param_1);
        if (lVar8 == 0) {
          lVar8 = FUN_03b17a70(param_1);
          if (lVar8 == 0) {
            lVar8 = FUN_03b17c10(param_1);
            if (lVar8 == 0) {
              lVar8 = FUN_03b17d30(param_1);
              if (lVar8 == 0) {
                lVar8 = FUN_03b17e50(param_1);
                if (lVar8 == 0) {
                  lVar8 = FUN_03b17fb0(param_1);
                  if (lVar8 == 0) {
                    lVar8 = FUN_03b180d0(param_1);
                    if (lVar8 == 0) {
                      lVar8 = FUN_03b159f0(param_1);
                      if (lVar8 == 0) {
                        lVar8 = FUN_03b18310(param_1);
                        if (lVar8 == 0) {
                          plVar7 = (long *)FUN_00370460(param_1,0x10);
                        }
                        else {
                          plVar7 = (long *)FUN_03b15ba0(lVar8,param_2);
                        }
                      }
                      else {
                        plVar7 = (long *)FUN_03b15ac4(lVar8,param_2);
                      }
                    }
                    else {
                      if ((param_3 & 1) == 0) {
                        lVar8 = FUN_03b15990(*(undefined8 *)(lVar8 + 0xe8),lVar8 + 0xb0,param_2);
                        lVar10 = FUN_03b181f0(*(undefined8 *)(lVar8 + 0x18));
                        *(long *)(lVar10 + 0xe8) = lVar8;
                        return *(long **)(lVar8 + 0x18);
                      }
                      plVar7 = (long *)FUN_03b15940();
                      plVar7[0x1d] = param_2;
                      *(long **)(param_2 + 0x18) = plVar7;
                    }
                  }
                  else {
                    plVar7 = (long *)FUN_03b158f0();
                  }
                }
                else {
                  plVar7 = (long *)FUN_03b158a0(lVar8,param_2);
                }
              }
              else {
                plVar7 = (long *)FUN_03b157e4();
              }
            }
            else {
              plVar7 = (long *)FUN_03b15720();
            }
          }
          else {
            plVar7 = (long *)FUN_03b156b4(lVar8,param_2);
          }
        }
        else {
          plVar7 = (long *)FUN_03b155e8();
        }
      }
      else {
        plVar7 = (long *)FUN_03b15514();
      }
    }
    else {
      plVar7 = (long *)FUN_03b154c4(lVar8,param_2);
    }
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 != (undefined8 *)PTR_DAT_04bd1cb8) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bd1cb8 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_03b1501c;
    }
    plVar7 = (long *)FUN_00367b14(0x120,0x10);
    if (plVar7 != (long *)0x0) {
      FUN_03b33034(plVar7,param_1,param_2);
    }
  }
LAB_03b150c8:
  for (plVar11 = (long *)param_1[5]; plVar11 != param_1 + 4; plVar11 = (long *)plVar11[1]) {
    uVar9 = FUN_03b14b60(plVar11 + -1,param_2,0);
    FUN_0037cfe0(plVar7,uVar9);
  }
  return plVar7;
}

