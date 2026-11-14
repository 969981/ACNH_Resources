
void FUN_01737230(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined2 local_24 [2];
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *param_2;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x017372f0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x017372f0;
    }
  }
  uVar9 = 0;
joined_r0x017372f0:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb3760 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3758);
    if ((((int)lVar7 == 1) && ((uVar4 & uVar9) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      if (*(char *)(param_1 + 8) != '\0') {
        plVar5 = (long *)plVar8[0xc];
        if (plVar5 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar3 = __cxa_guard_acquire(&DAT_052461c0);
            plVar5 = &DAT_05240280;
            if (iVar3 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar5 = &DAT_05240280;
          }
        }
        uVar6 = (**(code **)(*plVar5 + 0x100))(plVar5);
        if ((uVar6 & 1) == 0) {
          return;
        }
      }
      local_24[0] = 0;
      FUN_016e1780(plVar8,local_24);
    }
  }
  return;
}

