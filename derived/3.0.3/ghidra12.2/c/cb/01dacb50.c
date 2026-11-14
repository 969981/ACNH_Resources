
void FUN_01dacb50(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *local_48;
  char *pcStack_40;
  undefined8 local_38;
  
  iVar1 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  if (*(long *)PTR_DAT_04bb6270 != 0) {
    FUN_00a715d0(*(long *)PTR_DAT_04bb6270,1);
  }
  lVar7 = *(long *)PTR_DAT_04bb4778;
  if (lVar7 != 0) {
    memset((void *)(lVar7 + 0x2a58),0,0x4800);
    *(undefined2 *)(lVar7 + 0x87e0) = 0;
    *(undefined4 *)(lVar7 + 0x9150) = 0;
  }
  FUN_022c0370();
  puVar4 = PTR_DAT_04bc2f38;
  uVar6 = 0;
  *PTR_DAT_04bc2da0 = 0xff;
  do {
    uVar8 = (ulong)uVar6;
    uVar6 = uVar6 + 1;
    lVar7 = (long)(uVar8 << 0x20) >> 0x1a;
    *(undefined8 *)(puVar4 + lVar7 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + lVar7 + 0x20) = 0;
    *(undefined4 *)(puVar4 + lVar7 + 0x30) = 0;
    *(undefined8 *)(puVar4 + lVar7 + 0x34) = 0xffff000000000000;
    puVar4[lVar7 + 0x3e] = 0;
    *(undefined2 *)(puVar4 + lVar7 + 0x3c) = 0;
  } while (uVar6 != 0x14);
  DAT_04c47fa4 = 0xe;
  DAT_0514f75a = 0;
  DAT_0514f758 = 0xeff;
  FUN_020ea8b0(*(undefined8 *)PTR_DAT_04bb4760);
  uVar8 = 0;
  lVar7 = *(long *)PTR_DAT_04bb4768;
  do {
    uVar2 = uVar8 << 1;
    uVar3 = uVar8 >> 0x1f;
    uVar6 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar6;
    *(undefined2 *)(lVar7 + 0x30 + (-uVar3 & 0xfffffffe00000000 | uVar2)) = 0;
  } while (uVar6 != 0x6d);
  puVar9 = *(undefined4 **)PTR_DAT_04bb5010;
  *puVar9 = 0;
  *(undefined *)(puVar9 + 1) = *PTR_DAT_04bb5018;
  *(undefined8 *)(puVar9 + 2) = 0xffffffff;
  if ((param_1 & 1) == 0) {
    if (iVar1 != 3) goto LAB_01dacdc4;
  }
  else {
    if (*(long *)PTR_DAT_04bbc218 != 0) {
      FUN_01391530();
    }
    if (iVar1 != 3) {
      lVar7 = *(long *)PTR_DAT_04bb46b0;
      if (lVar7 != 0) {
        puVar10 = *(undefined8 **)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
          lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
          if (lVar7 != 0) {
            lVar7 = lVar7 + 0x70;
LAB_01dacd2c:
            lVar11 = *(long *)(lVar7 + 0xd0);
            if (lVar11 == 0) {
              FUN_027def50(*(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0));
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar8 = 0;
LAB_01dacd6c:
                plVar5 = *(long **)(lVar11 + 0x20);
                if (plVar5 != (long *)0x0) {
                  local_48 = *(undefined **)(lVar7 + 0xb0);
                  pcStack_40 = *(char **)(lVar7 + 0xb8);
                  local_38 = 0x1e3388;
                  (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
                }
              }
              else {
                uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                lVar11 = *(long *)(lVar7 + 0xd0);
                uVar8 = uVar8 & 0xffffffff;
                if (lVar11 != 0) goto LAB_01dacd6c;
              }
              FUN_027def50(*(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0));
              if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 0x18),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
          }
        }
        else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
                (lVar7 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar7 != 0))
        goto LAB_01dacd2c;
      }
LAB_01dacdc4:
      FUN_021b382c(&DAT_053fe348);
      FUN_021aac18(&DAT_053fe348);
      DAT_054542d8 = 2;
      local_48 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "SeasonEventIndoorSceneChangeUpdate";
      FUN_02743234(&local_48,1);
      lVar7 = *(long *)PTR_DAT_04bb30a0;
      *(undefined4 *)(lVar7 + 0x653f4) = 2;
      *(undefined8 *)(lVar7 + 0x653ec) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      goto LAB_01dace40;
    }
  }
  FUN_021aac18(&DAT_053fe348);
LAB_01dace40:
  FUN_0086cee0();
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 2;
  return;
}

