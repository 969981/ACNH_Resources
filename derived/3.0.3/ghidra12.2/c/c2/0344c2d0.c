
void FUN_0344c2d0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  void *pvVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  
  uVar12 = *param_2;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 8) = uVar12;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2698;
  puVar16 = (uint *)param_2[3];
  if (puVar16 == (uint *)0x0) {
    return;
  }
  uVar2 = *puVar16;
  uVar18 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    return;
  }
  uVar15 = uVar18 * 0x30 | 8;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    puVar10 = malloc(uVar15);
joined_r0x0344c37c:
    if (puVar10 != (ulong *)0x0) {
      uVar15 = uVar18 * 0x30 - 0x30;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      puVar13 = puVar10 + 1;
      *puVar10 = uVar18;
      puVar7 = PTR_DAT_04bc6260;
      puVar14 = puVar13;
      if ((SUB164(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5 & 1) == 0) {
        puVar10[1] = (ulong)(PTR_DAT_04bc6260 + 0x10);
        puVar10[2] = 0;
        puVar14 = puVar10 + 7;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0xffffffff;
        puVar10[6] = 0x2ffffffff;
      }
      if (0x2f < uVar15) {
        do {
          *puVar14 = (ulong)(puVar7 + 0x10);
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[4] = 0xffffffff;
          puVar14[5] = 0x2ffffffff;
          puVar14[6] = (ulong)(puVar7 + 0x10);
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
          puVar14[10] = 0xffffffff;
          puVar14[0xb] = 0x2ffffffff;
          puVar14 = puVar14 + 0xc;
        } while (puVar14 != puVar13 + uVar18 * 6);
      }
      *(uint *)(param_1 + 0x10) = uVar2;
      *(ulong **)(param_1 + 0x18) = puVar13;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar19 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      puVar10 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar15,8);
      goto joined_r0x0344c37c;
    }
  }
  lVar19 = *(long *)puVar5;
  if (lVar19 == 0) {
    pvVar11 = malloc(uVar18 << 2);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar9 = (long *)(lVar19 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_0344c45c;
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar18 << 2,8);
  }
  if (pvVar11 != (void *)0x0) {
    *(uint *)(param_1 + 0x20) = uVar2;
    *(void **)(param_1 + 0x28) = pvVar11;
  }
LAB_0344c45c:
  uVar2 = *puVar16;
  if (uVar2 != 0) {
    lVar19 = *(long *)(puVar16 + 2);
    uVar17 = 0;
    uVar18 = 0;
    do {
      local_68 = 0;
      uStack_60 = 0;
      uVar3 = *(uint *)(lVar19 + (-(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2));
      if ((int)uVar3 < 0) {
        local_58 = auStack_88;
      }
      else {
        lVar8 = *(long *)(param_1 + 8);
        uVar1 = uVar3;
        if (*(uint *)(lVar8 + 0x2c8) <= uVar3) {
          uVar1 = 0;
        }
        if (*(uint *)(lVar8 + 0x2f8) <= uVar3) {
          uVar3 = 0;
        }
        local_68 = *(undefined8 *)(*(long *)(lVar8 + 0x2d0) + (ulong)uVar1 * 8);
        local_58 = (undefined1 *)(*(long *)(lVar8 + 0x300) + (ulong)uVar3 * 0x20);
      }
      uVar3 = uVar17;
      if (*(uint *)(param_1 + 0x10) <= uVar17) {
        uVar3 = 0;
      }
      FUN_0340a298(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x30,&local_68);
      uVar3 = uVar17;
      if (*(uint *)(param_1 + 0x20) <= uVar17) {
        uVar3 = 0;
      }
      uVar17 = uVar17 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)uVar3 * 4) =
           *(undefined4 *)(lVar19 + (long)(int)uVar18 * 4);
      uVar15 = uVar18 + 1;
      uVar18 = uVar15 & 0xffffffff;
    } while (uVar2 != (uint)uVar15);
  }
  return;
}

