
undefined8 FUN_003e0560(long param_1,int param_2,byte *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_68;
  
  if ((*param_3 & 0x3f) != 0) {
    return 0;
  }
  local_68 = FUN_003cd670();
  lVar6 = FUN_003c0150(&local_68);
  lVar11 = (long)param_2;
  lVar9 = 0x3f0;
  if (lVar6 != 0) {
    lVar9 = lVar6 * 2 + 0x420;
  }
  uVar8 = lVar9 * lVar11 + 0x3fU & 0xffffffffffffffc0;
  plVar5 = (long *)(*(long *)param_3 + uVar8);
  if ((long)plVar5 - param_4 < 1) {
    FUN_003e0730(param_1,*(long *)param_3,uVar8,&local_68);
    *(long **)param_3 = plVar5;
    if ((long)(plVar5 + lVar11 * 0x80) - param_4 < 1) {
      if (0 < param_2) {
        plVar1 = (long *)(param_1 + 0x60);
        puVar2 = PTR_DAT_04bd0538 + 0x10;
        puVar3 = PTR_DAT_04bd0540 + 0x10;
        plVar10 = plVar5;
        do {
          FUN_003d2dd4(plVar10);
          *plVar10 = (long)puVar2;
          plVar10[0xb] = 0;
          *(undefined4 *)(plVar10 + 0xc) = 0xffffffff;
          plVar10[0xd] = 0;
          *(undefined4 *)(plVar10 + 0xe) = 0;
          plVar10[9] = 0;
          plVar10[10] = 0;
          plVar10[0xf] = 0;
          plVar10[0x10] = 0;
          FUN_003d2dd4(plVar10 + 0x14);
          plVar10[0x14] = (long)puVar3;
          plVar10[0x1f] = 0;
          *(undefined4 *)(plVar10 + 0x20) = 0xffffffff;
          plVar10[0x21] = 0;
          *(undefined4 *)(plVar10 + 0x22) = 0;
          plVar10[0x1d] = 0;
          plVar10[0x1e] = 0;
          FUN_003d02d4(plVar10 + 0x25);
          plVar4 = plVar10 + 0x7e;
          param_2 = param_2 + -1;
          plVar10[0x7e] = (long)plVar4;
          plVar10[0x7f] = (long)plVar4;
          lVar9 = *plVar1;
          plVar10[0x7f] = (long)plVar1;
          plVar10[0x7e] = lVar9;
          plVar10 = plVar10 + 0x80;
          *(long **)(*plVar1 + 8) = plVar4;
          *plVar1 = (long)plVar4;
        } while (param_2 != 0);
      }
      *(long **)(param_1 + 0x50) = plVar5;
      *(long *)(param_1 + 0x58) = lVar11 * 0x400;
      *(long **)param_3 = plVar5 + lVar11 * 0x80;
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 != param_1 + 0x28) {
        do {
          *(long *)(lVar9 + 0x1a0) = param_1 + 0x38;
          lVar9 = *(long *)(lVar9 + 8);
        } while (lVar9 != param_1 + 0x28);
      }
      uVar7 = FUN_003ca198();
      FUN_003ca4b4(uVar7,param_1 + 0x38);
      return 1;
    }
  }
  return 0;
}

