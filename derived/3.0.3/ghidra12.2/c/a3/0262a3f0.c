
void FUN_0262a3f0(long *param_1,long param_2)

{
  long lVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  plVar7 = param_1 + 0x23b8;
  plVar11 = param_1 + 2;
  lVar8 = 0;
  do {
    puVar2 = (undefined2 *)(param_2 + lVar8);
    lVar1 = lVar8 + 8;
    *(undefined2 *)((long)param_1 + lVar8 + 0x10) = *puVar2;
    *(undefined1 *)((long)param_1 + lVar8 + 0x12) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)((long)param_1 + lVar8 + 0x13) = *(undefined1 *)((long)puVar2 + 3);
    *(undefined4 *)((long)param_1 + lVar8 + 0x14) = *(undefined4 *)(puVar2 + 2);
    lVar8 = lVar1;
  } while (lVar1 != 72000);
  *(uint *)(param_1 + 0x232a) = *(uint *)(param_2 + 72000);
  memset((void *)((long)param_1 + 0x11954),0,0x468);
  if (0 < (int)*plVar7) {
    lVar8 = 0;
    plVar9 = (long *)param_1[0x23ba];
    do {
      plVar10 = *(long **)(param_1[0x23b9] + lVar8 * 8);
      lVar8 = lVar8 + 1;
      *plVar10 = (long)plVar9;
      param_1[0x23ba] = (long)plVar10;
      plVar9 = plVar10;
    } while (lVar8 < (int)*plVar7);
  }
  *(int *)plVar7 = 0;
  memset(param_1 + 0x95fe,0,60000);
  puVar4 = PTR_DAT_04bb43c0;
  puVar3 = PTR_DAT_04bb37e0;
  uVar12 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x232a);
    if (8999 < uVar6) {
      uVar6 = 9000;
    }
    if (uVar12 < uVar6) {
      plVar7 = plVar11;
      if ((short)*plVar11 != -2) {
        lVar8 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(plVar11);
        plVar7 = (long *)puVar3;
        if (*(long *)puVar4 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (uVar6 < *(uint *)(lVar8 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
              plVar7 = plVar11;
            }
          }
        }
      }
      uVar5 = FUN_0277d6c4(plVar7);
      *(undefined2 *)((long)param_1 + uVar12 * 2 + 0x469a0) = uVar5;
    }
    uVar12 = uVar12 + 1;
    plVar11 = plVar11 + 1;
  } while (uVar12 != 9000);
                    /* WARNING: Could not recover jumptable at 0x0262a5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}

