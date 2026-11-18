
void FUN_035c7310(long param_1,uint param_2,uint param_3,long *param_4)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar9 = (ulong)param_2;
  *(ulong *)(param_1 + 0x20) = uVar9;
  puVar3 = PTR_DAT_04bdf328;
  *(undefined4 *)(param_1 + 0x88) = 0x40;
  plVar1 = *(long **)puVar3;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4;
  }
  *(long **)(param_1 + 0x60) = plVar1;
  lVar6 = (**(code **)(*plVar1 + 0x10))(plVar1,(ulong)param_2 * 0x438c0,0x40);
  *(long *)(param_1 + 0x68) = lVar6;
  if (lVar6 == 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    lVar6 = *(long *)(param_1 + 0x38);
  }
  else {
    *(long *)(param_1 + 0x70) = lVar6;
    *(undefined4 *)(param_1 + 0x78) = 0x438c0;
    *(uint *)(param_1 + 0x7c) = param_2;
    if ((param_2 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      uVar9 = uVar9 - 1;
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x70) + uVar9 * *(uint *)(param_1 + 0x78));
      *puVar7 = 0;
    }
    if (param_2 != 1) {
      lVar6 = uVar9 - 1;
      do {
        puVar8 = (undefined8 *)
                 (*(long *)(param_1 + 0x70) + lVar6 * (ulong)*(uint *)(param_1 + 0x78));
        *puVar8 = puVar7;
        bVar4 = lVar6 != 1;
        puVar7 = (undefined8 *)
                 (*(long *)(param_1 + 0x70) + (lVar6 + -1) * (ulong)*(uint *)(param_1 + 0x78));
        *puVar7 = puVar8;
        lVar6 = lVar6 + -2;
      } while (bVar4);
    }
    *(undefined8 **)(param_1 + 0x80) = puVar7;
    lVar6 = *(long *)(param_1 + 0x38);
  }
  if (lVar6 == 0) {
    plVar1 = *(long **)puVar3;
    if (param_4 != (long *)0x0) {
      plVar1 = param_4;
    }
    *(long **)(param_1 + 0x28) = plVar1;
    *(undefined8 *)(param_1 + 0x30) = 0x40;
  }
  uVar9 = *(ulong *)(param_1 + 0x40);
  if (((uVar9 < 0xfffffffffffffffe) && (uVar9 + 2 >> 0x3e < 3)) &&
     (auVar2._8_8_ = 0, auVar2._0_8_ = uVar9 + 2,
     uVar9 = (SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2, uVar9 < 5))
  {
    uVar9 = 4;
  }
  if (uVar9 <= param_3) {
    uVar9 = (ulong)param_3;
  }
  if ((*(ulong *)(param_1 + 0x48) < uVar9) && (iVar5 = FUN_035c8350(param_1 + 0x28), iVar5 != 0)) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(long *)(param_1 + 0xd8) = param_1 + 0x90;
  *(long *)(param_1 + 0xa8) = param_1 + 0xb8;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}

