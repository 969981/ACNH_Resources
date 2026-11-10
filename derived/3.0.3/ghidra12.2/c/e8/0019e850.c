
ulong FUN_0019e850(long param_1,uint param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  long lStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  long *local_a8;
  int local_9c;
  long *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 uStack_68;
  
  uVar17 = (ulong)param_2;
  plVar16 = (long *)(param_1 + 8);
  (**(code **)(*plVar16 + 0x10))(plVar16);
  local_9c = *(int *)(param_1 + 0x50);
  local_a8 = plVar16;
  if ((local_9c == 2) &&
     (*(undefined4 *)(param_1 + 0x50) = 0, puVar5 = PTR_LAB_04bcc210, puVar4 = PTR_DAT_04bcc130,
     puVar3 = PTR_DAT_04bc0ec8, param_2 != 0)) {
    local_98 = (long *)(param_1 + 0x58);
    uVar18 = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_90 = PTR_DAT_04bcc218 + 0x10;
    do {
      uVar18 = uVar18 + 1;
      local_80[0] = 0;
      uVar9 = (ulong)uVar18;
      uStack_68 = 0x10;
      local_88 = puVar1;
      local_70 = local_80;
      FUN_0018619c(&local_88,"Internal (Worker) Thread (ID %d)");
      plVar16 = (long *)FUN_00185a6c(0x78);
      if (plVar16 != (long *)0x0) {
        uVar9 = (ulong)*(uint *)PTR_DAT_04bcc128;
        FUN_0018889c(plVar16,&local_88);
        *plVar16 = (long)local_90;
      }
      if (*(int *)puVar4 != -0x80000000) {
        *(int *)((long)plVar16 + 0x54) = *(int *)puVar4;
      }
      plVar16[0xb] = (long)puVar5;
      plVar16[0xc] = 0;
      plVar16[0xd] = param_1;
      *(undefined4 *)(plVar16 + 0xe) = 0;
      FUN_00188cf0(plVar16,0);
      puVar14 = *(undefined8 **)(param_1 + 0x60);
      if (puVar14 == *(undefined8 **)(param_1 + 0x68)) {
        uVar10 = (long)puVar14 - *local_98;
        uVar2 = ((long)uVar10 >> 3) + 1;
        if (uVar2 >> 0x3d != 0) {
          auVar19 = FUN_001a3bd8(local_98);
          lVar13 = auVar19._8_8_;
          lVar7 = auVar19._0_8_;
          pcStack_d0 = FUN_0019eaa0;
          puStack_b8 = puVar3;
          lStack_c8 = param_1;
          uStack_c0 = uVar17;
          switch(*(undefined4 *)(lVar13 + 0x40)) {
          case 0:
            *(undefined4 *)(lVar13 + 0x40) = 3;
          case 3:
            lVar12 = *(long *)(lVar7 + 0x110);
            if ((uVar9 & 1) == 0) {
              if (lVar12 == *(long *)(lVar7 + 0x120)) {
                *(long *)(lVar7 + 0x110) = lVar13;
              }
              else {
                *(long *)(*(long *)(lVar7 + 0x118) + 0x10) = lVar13;
                *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar7 + 0x118);
              }
              *(long *)(lVar7 + 0x118) = lVar13;
              plVar16 = (long *)(lVar7 + 0x128);
            }
            else {
              if (lVar12 == *(long *)(lVar7 + 0x120)) {
                plVar16 = (long *)(lVar7 + 0x118);
              }
              else {
                *(long *)(lVar13 + 0x10) = lVar12;
                plVar16 = (long *)(*(long *)(lVar7 + 0x110) + 0x18);
              }
              *plVar16 = lVar13;
              plVar16 = (long *)(lVar7 + 0x128);
              *(long *)(lVar7 + 0x110) = lVar13;
            }
            goto LAB_0019eca8;
          case 1:
            goto switchD_0019ead4_caseD_1;
          case 2:
            lVar12 = *(long *)(lVar7 + 0x138);
            if ((uVar9 & 1) == 0) {
              if (lVar12 == *(long *)(lVar7 + 0x148)) {
                *(long *)(lVar7 + 0x138) = lVar13;
              }
              else {
                *(long *)(*(long *)(lVar7 + 0x140) + 0x10) = lVar13;
                *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar7 + 0x140);
              }
              *(long *)(lVar7 + 0x140) = lVar13;
              plVar16 = (long *)(lVar7 + 0x150);
            }
            else {
              if (lVar12 == *(long *)(lVar7 + 0x148)) {
                plVar16 = (long *)(lVar7 + 0x140);
              }
              else {
                *(long *)(lVar13 + 0x10) = lVar12;
                plVar16 = (long *)(*(long *)(lVar7 + 0x138) + 0x18);
              }
              *plVar16 = lVar13;
              plVar16 = (long *)(lVar7 + 0x150);
              *(long *)(lVar7 + 0x138) = lVar13;
            }
            goto LAB_0019eca8;
          default:
            goto switchD_0019ead4_default;
          }
        }
        uVar9 = (long)uVar10 >> 2;
        if ((ulong)((long)uVar10 >> 2) <= uVar2) {
          uVar9 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_00187df4(uVar9 << 3);
        }
        puVar14 = (undefined8 *)(lVar7 + ((long)uVar10 >> 3) * 8);
        puVar15 = puVar14 + 1;
        *puVar14 = plVar16;
        puVar8 = *(undefined8 **)(param_1 + 0x58);
        puVar11 = *(undefined8 **)(param_1 + 0x60);
        if (puVar11 != puVar8) {
          do {
            puVar11 = puVar11 + -1;
            puVar14 = puVar14 + -1;
            *puVar14 = *puVar11;
          } while (puVar11 != puVar8);
          puVar11 = (undefined8 *)*local_98;
        }
        *(ulong *)(param_1 + 0x68) = lVar7 + uVar9 * 8;
        *(undefined8 **)(param_1 + 0x58) = puVar14;
        *(undefined8 **)(param_1 + 0x60) = puVar15;
        if (puVar11 != (undefined8 *)0x0) {
          FUN_00187e4c(puVar11);
        }
      }
      else {
        *puVar14 = plVar16;
        *(undefined8 **)(param_1 + 0x60) = puVar14 + 1;
      }
      local_88 = puVar3 + 0x10;
      FUN_0018b1a0(&local_88);
    } while (uVar18 != param_2);
  }
  bVar6 = local_9c == 2;
  (**(code **)(*local_a8 + 0x20))();
  return (ulong)bVar6;
switchD_0019ead4_caseD_1:
  if (DAT_04be21f1 == '\0') {
    FUN_0018cb8c(&lStack_d8);
  }
  else {
    FUN_0018c9b0(&lStack_d8,0);
  }
  *(long *)PTR_DAT_04bcbcb0 = lStack_d8;
  uVar18 = *(uint *)(lVar13 + 0x44);
  uVar17 = (ulong)uVar18;
  if ((int)uVar18 < 0) {
    uVar17 = -(ulong)-uVar18;
  }
  puVar8 = (undefined8 *)FUN_00187df4(0x30);
  puVar8[4] = uVar17 + lStack_d8;
  puVar8[5] = lVar13;
  puVar14 = *(undefined8 **)(lVar7 + 0x160);
  if (*(undefined8 **)(lVar7 + 0x160) == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)(lVar7 + 0x160);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar11;
    *puVar11 = puVar8;
    lVar13 = **(long **)(lVar7 + 0x158);
  }
  else {
    do {
      while (puVar11 = puVar14, uVar17 + lStack_d8 < (ulong)puVar11[4]) {
        puVar14 = (undefined8 *)*puVar11;
        if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = puVar11;
          *puVar11 = puVar8;
          lVar13 = **(long **)(lVar7 + 0x158);
          goto joined_r0x0019ec80;
        }
      }
      puVar14 = (undefined8 *)puVar11[1];
    } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar11;
    puVar11[1] = puVar8;
    lVar13 = **(long **)(lVar7 + 0x158);
    puVar11 = puVar11 + 1;
  }
joined_r0x0019ec80:
  if (lVar13 != 0) {
    *(long *)(lVar7 + 0x158) = lVar13;
    puVar8 = (undefined8 *)*puVar11;
  }
  FUN_03876250(*(undefined8 *)(lVar7 + 0x160),puVar8);
  plVar16 = (long *)(lVar7 + 0x168);
LAB_0019eca8:
  *plVar16 = *plVar16 + 1;
switchD_0019ead4_default:
  uVar17 = FUN_0018ada0(lVar7 + 0x20);
  return uVar17;
}

