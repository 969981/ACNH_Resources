
void FUN_039bb020(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  byte bVar11;
  long *plVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ushort *puVar18;
  long lVar19;
  long *plVar20;
  uint uVar21;
  long *plVar22;
  int local_b4;
  
  puVar2 = PTR_DAT_04bb2698;
  if ((ulong)*(ushort *)(param_1 + 0x1108) == 0) {
    return;
  }
  uVar17 = (ulong)*(ushort *)(param_1 + 0x1108) * 0x740 | 0x38;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    plVar7 = malloc(uVar17);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar19 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_039bb0c8;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar17,8);
  }
LAB_039bb0c8:
  plVar7[6] = 0;
  plVar22 = plVar7 + 1;
  *plVar22 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *plVar7 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  iVar16 = *(int *)(param_1 + 0x1064);
  if (iVar16 == 0) {
    plVar22 = (long *)0x0;
    lVar19 = 0;
    local_b4 = 0;
    uVar14 = 0;
    goto LAB_039bb1d0;
  }
  if (param_3 == (long *)0x0) {
    lVar6 = *(long *)puVar2;
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_3 = (long *)(lVar6 + 8);
    if (lVar19 != 0) {
      param_3 = (long *)(lVar19 + 0xa8);
    }
    param_3 = (long *)*param_3;
    bVar11 = *(byte *)(plVar7 + 5) & 0xfe;
  }
  else {
    bVar11 = 0;
  }
  plVar7[6] = 0;
  *plVar22 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  uVar8 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(plVar7 + 5) = bVar11;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  FUN_038f8590(uVar8,plVar7,param_3,iVar16,4,3);
  lVar19 = plVar7[3];
  *(undefined2 *)((long)plVar7 + 0x2a) = 3;
  if (plVar7[4] == 0) {
    local_b4 = 0;
    if (lVar19 != 0) goto LAB_039bb1b4;
LAB_039bb1c8:
    uVar14 = 0;
  }
  else {
    local_b4 = (int)*plVar22 - *(int *)(plVar7[4] + 0x10);
    if (lVar19 == 0) goto LAB_039bb1c8;
LAB_039bb1b4:
    uVar14 = *(undefined4 *)(lVar19 + 0x104);
  }
  plVar22 = plVar7;
LAB_039bb1d0:
  uVar17 = 0;
  uVar15 = 0;
  lVar6 = param_1 + 0x10;
  puVar2 = PTR_DAT_04bd1150 + 0x10;
  plVar9 = (long *)PTR_DAT_04bd1788;
  do {
    lVar10 = (long)(int)uVar15;
    if (*(long *)(lVar6 + (long)(int)uVar15 * 0x38 + 8) == 0) {
      plVar12 = plVar9;
    }
    else {
      bVar11 = *(byte *)(lVar6 + (long)(int)uVar15 * 0x38 + 0x31);
      if (uVar15 == bVar11) {
        plVar12 = plVar7 + uVar17 * 0xe8 + 7;
        uVar1 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar1;
        *(undefined1 *)(plVar12 + 3) = 0;
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = 0;
        plVar12[0x4d] = 0x200;
        plVar12[0x4e] = 0;
        *(undefined1 *)(plVar12 + 0x4f) = 0;
        plVar12[0xb] = (long)(plVar12 + 0xc);
        plVar12[0x50] = (long)puVar2;
        plVar12[0x57] = (long)(plVar12 + 0x58);
        plVar12[0x55] = (long)"untitled";
        plVar20 = plVar12 + 4;
        *plVar20 = (long)puVar2;
        plVar12[0x56] = 0;
        plVar12[0x99] = 0x200;
        plVar12[0x9a] = 0;
        *(undefined1 *)(plVar12 + 0x9b) = 0;
        plVar12[0x54] = 0;
        plVar12[0x53] = 0;
        plVar12[0x52] = 0;
        plVar12[0x51] = 0;
        plVar12[0x9c] = (long)puVar2;
        plVar12[0xa1] = (long)"untitled";
        plVar12[0xa2] = 0;
        plVar12[0xa3] = (long)(plVar12 + 0xa4);
        plVar12[0xe5] = 0x200;
        plVar12[0xe6] = 0;
        *(undefined1 *)(plVar12 + 0xe7) = 0;
        plVar12[0x9d] = 0;
        plVar12[0x9e] = 0;
        plVar12[0x9f] = 0;
        plVar12[0xa0] = 0;
        plVar12[9] = (long)"untitled";
        plVar12[10] = 0;
        plVar12[5] = 0;
        plVar12[6] = 0;
        plVar12[7] = 0;
        plVar12[8] = 0;
        puVar18 = (ushort *)(lVar6 + (long)(int)uVar15 * 0x38 + 0x34);
        if (*puVar18 != 0) {
          bVar11 = *(byte *)(param_1 + 0x1111);
          if (bVar11 != 0) {
            uVar21 = 0;
            iVar16 = local_b4 + (uint)*(ushort *)(lVar6 + (long)(int)uVar15 * 0x38 + 0x36);
            do {
              (**(code **)(*(long *)(param_1 + 0x1070) + 0x18))(param_1 + 0x1070);
              bVar4 = *(byte *)(plVar20 + (long)(int)uVar21 * 0x4c + 0x4b);
              plVar20[(long)(int)uVar21 * 0x4c + 5] = *(long *)(param_1 + 0x1078);
              iVar3 = *(int *)((long)plVar20 + (long)(int)uVar21 * 0x260 + 0x24c);
              uVar5 = *puVar18;
              *(int *)(plVar20 + (long)(int)uVar21 * 0x4c + 1) = iVar16;
              *(undefined4 *)((long)plVar20 + (long)(int)uVar21 * 0x260 + 0xc) = uVar14;
              uVar13 = 0;
              if (lVar19 != 0) {
                uVar13 = (uint)uVar5;
              }
              plVar20[(long)(int)uVar21 * 0x4c + 2] = lVar19;
              plVar20[(long)(int)uVar21 * 0x4c + 3] = (long)plVar22;
              *(uint *)(plVar20 + (long)(int)uVar21 * 0x4c + 4) = uVar13;
              *(undefined4 *)((long)plVar20 + (long)(int)uVar21 * 0x260 + 0x24) = 0;
              *(byte *)(plVar20 + (long)(int)uVar21 * 0x4c + 0x4b) = bVar4 & 0xfc | iVar3 != 0;
              iVar16 = iVar16 + (uint)*puVar18;
              uVar21 = uVar21 + 1;
            } while (uVar21 != bVar11);
            uVar17 = (ulong)uVar1;
            plVar9 = (long *)PTR_DAT_04bd1788;
          }
        }
      }
      else {
        plVar12 = *(long **)(param_2 + (ulong)bVar11 * 8);
      }
    }
    uVar15 = uVar15 + 1;
    *(long **)(param_2 + lVar10 * 8) = plVar12;
  } while (uVar15 != 0x40);
  return;
}

