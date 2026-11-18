
void FUN_0368de40(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  puVar5 = PTR_DAT_04bb3748;
  puVar4 = PTR_DAT_04bb3740;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(param_2 + 0x278) != 0) {
    lVar13 = (long)*(int *)(param_2 + 0x278) << 3;
    plVar11 = *(long **)(param_2 + 0x280);
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    do {
      uVar10 = *(uint *)(*plVar11 + 0x40);
      if ((uVar10 != 0) && (lVar9 = *(long *)puVar2, lVar9 != 0)) {
        plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar10 >> 0x11) & 0x7ff8));
        if ((plVar12 == (long *)0x0) ||
           (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar10)))) {
          plVar12 = (long *)0x0;
        }
        if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
          plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
          lVar9 = *(long *)puVar2;
          iVar6 = (**(code **)(*plVar8 + 0x60))();
          if (iVar6 < 0x11) {
            uVar10 = 1;
          }
          else {
            uVar10 = *(uint *)(lVar9 + 0x5e8);
            if (4 < uVar10) goto LAB_0368df74;
            uVar10 = 0x1aU >> (ulong)(uVar10 & 0x1f) & 1;
          }
        }
        else {
LAB_0368df74:
          uVar10 = 0;
        }
        if (plVar12 != (long *)0x0) {
          if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
            *(undefined **)puVar4 = puVar1;
            __cxa_guard_release(puVar5);
          }
          uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar4);
          if ((uVar10 & uVar7) == 1) {
            plVar12 = (long *)plVar12[0xc];
            if ((plVar12 == (long *)0x0) && (plVar12 = &DAT_05240280, (DAT_052461c0 & 1) == 0)) {
              iVar6 = __cxa_guard_acquire(&DAT_052461c0);
              if (iVar6 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
              plVar12 = &DAT_05240280;
            }
            (**(code **)(*plVar12 + 0x4e0))(param_1);
          }
        }
      }
      plVar11 = plVar11 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  return;
}

