
void FUN_013425a0(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x158);
    uVar5 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    do {
      lVar7 = uVar5 << 0x20;
      uVar8 = uVar5 << 1;
      uVar6 = uVar5 >> 0x1f;
      uVar12 = (int)uVar5 + 2;
      uVar5 = (ulong)uVar12;
      *(undefined2 *)((long)&local_f0 + (-uVar6 & 0xfffffffe00000000 | uVar8)) = 0;
      *(undefined2 *)((long)&local_f0 + (lVar7 + 0x100000000 >> 0x1f)) = 0;
    } while (uVar12 != 0x48);
    if ((0 < (int)param_4) && (0 < (int)param_3)) {
      lVar7 = 0;
      iVar11 = 0;
      uVar5 = 0;
      do {
        uVar12 = 0;
        lVar10 = lVar7;
        uVar8 = (ulong)param_3;
        do {
          if (((lVar10 < iVar4) && ((uint)uVar5 < 9)) && (uVar12 < 10)) {
            uVar6 = (ulong)(iVar11 + uVar12);
            if (0x47 < iVar11 + uVar12) {
              uVar6 = 0;
            }
            puVar3 = (undefined2 *)
                     (**(code **)(**(long **)(*(long *)(param_1 + 0x140) + lVar10 * 8) + 0xf0))();
            *(undefined2 *)((long)&local_f0 + uVar6 * 2) = *puVar3;
          }
          uVar8 = uVar8 - 1;
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + 1;
        } while (uVar8 != 0);
        uVar5 = uVar5 + 1;
        iVar11 = iVar11 + 9;
        lVar7 = lVar7 + (ulong)param_3;
      } while (uVar5 != param_4);
    }
    uVar8 = 9;
    iVar4 = 0;
    *(undefined8 *)(param_2 + 8) = 0x800000009;
    uVar12 = 0;
    uVar9 = 8;
    uVar5 = 9;
    do {
      if (uVar5 != 0) {
        uVar5 = 0;
        do {
          if ((uVar12 < 9) && (uVar9 = (uint)uVar5, uVar9 < 10)) {
            uVar1 = iVar4 + uVar9;
            uVar8 = (ulong)uVar1;
            if (0x47 < uVar1) {
              uVar8 = 0;
            }
            uVar2 = *(undefined2 *)((long)&local_f0 + uVar8 * 2);
            lVar7 = param_2 + 0x10 + (ulong)uVar1 * 0x18;
            if (0x47 < uVar1) {
              lVar7 = param_2 + 0x10;
            }
            *(uint *)(lVar7 + 0xc) = uVar9;
            *(uint *)(lVar7 + 0x10) = uVar12;
            *(undefined2 *)(lVar7 + 8) = uVar2;
            uVar8 = (ulong)*(uint *)(param_2 + 8);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar8);
        uVar9 = *(uint *)(param_2 + 0xc);
        uVar5 = uVar8;
      }
      uVar12 = uVar12 + 1;
      iVar4 = iVar4 + 9;
    } while (uVar12 < uVar9);
    *(undefined4 *)(param_2 + 0x6d0) = 0;
  }
  return;
}

