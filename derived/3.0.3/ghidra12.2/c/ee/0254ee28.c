
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0254ee28(byte *param_1,float *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined1 local_48;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar9 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar9 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  uVar11 = *puVar9;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0254ef28;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0254ef28;
    }
  }
  uVar11 = 0;
joined_r0x0254ef28:
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    uVar1 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
    if ((int)lVar8 != 1) {
      return 0;
    }
    if ((uVar4 & uVar11) == 0) {
      return 0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    if ((int)plVar10[0x2f] != 0) {
      *(uint *)(plVar10 + 0x2fa) = *(uint *)(plVar10 + 0x2fa) & 0xfffbffff;
      return 0;
    }
    plVar5 = (long *)plVar10[0xc];
    if (plVar5 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar5 = &DAT_05240280;
      }
      else {
        plVar5 = &DAT_05240280;
      }
    }
    uVar6 = (**(code **)(*plVar5 + 0x100))();
    if (((uVar6 & 1) != 0) && ((*(uint *)(plVar10 + 0x2fa) >> 0x12 & 1) != 0)) {
      local_4c = 0;
      local_48 = 0;
      *(uint *)(plVar10 + 0x2fa) = *(uint *)(plVar10 + 0x2fa) & 0xfffbffff;
      local_68 = 0x12;
      local_60 = 9;
      local_5c = 1;
      local_58 = FUN_006f0400(*param_2 - *(float *)(plVar10[0xd] + 0x278),
                              param_2[2] - *(float *)(plVar10[0xd] + 0x280));
      lVar8 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar8 + 0x420) + 0xf0))(lVar8 + 0x420);
      local_54 = (int)*pfVar7;
      uStack_50 = 0x3f800000;
      FUN_023ca3ec(plVar10,&local_68);
      FUN_0232e110(plVar10);
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          puVar9 = (uint *)&DAT_054f0958;
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_1 < 8) {
          puVar9 = puVar9 + (ulong)*param_1 * 2;
        }
      }
      *puVar9 = *puVar9 | 0x800;
      return 1;
    }
  }
  return 0;
}

