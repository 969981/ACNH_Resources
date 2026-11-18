
void FUN_0340ede0(undefined8 *param_1,ulong param_2,undefined1 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  int local_78;
  int iStack_74;
  long local_70;
  long *plStack_68;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar19 = param_2 & 0xffffffff;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = param_3;
  plVar10 = (long *)PTR_DAT_04bb3350;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    puVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar17 + 8);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
  }
  *(undefined4 *)(puVar6 + 2) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[3] = 0;
  *param_1 = puVar6;
  FUN_030af2b0(puVar6,uVar19);
  uVar18 = (uint)param_2;
  if (0 < (int)uVar18) {
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      puVar6 = malloc(uVar19 << 4);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar10 + 0x68));
      plVar7 = (long *)(lVar17 + 8);
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_0340ef74;
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar19 << 4,8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      param_2 = param_2 & 3;
      puVar15 = puVar6;
      if (param_2 != 0) {
        puVar14 = puVar6;
        do {
          puVar15 = puVar14 + 2;
          *puVar14 = 0;
          puVar14[1] = 0xffffffff;
          param_2 = param_2 - 1;
          puVar14 = puVar15;
        } while (param_2 != 0);
      }
      plVar7 = (long *)PTR_DAT_04bb2698;
      if (2 < (uVar19 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar15 = 0;
          puVar15[1] = 0xffffffff;
          puVar15[2] = 0;
          puVar15[3] = 0xffffffff;
          puVar15[4] = 0;
          puVar15[5] = 0xffffffff;
          puVar15[6] = 0;
          puVar15[7] = 0xffffffff;
          puVar15 = puVar15 + 8;
        } while (puVar15 != puVar6 + uVar19 * 2);
      }
      *(uint *)(param_1 + 1) = uVar18;
      param_1[2] = puVar6;
      goto joined_r0x0340ef88;
    }
  }
LAB_0340ef74:
  uVar18 = *(uint *)(param_1 + 1);
  uVar19 = (ulong)uVar18;
  puVar6 = (undefined8 *)param_1[2];
  plVar7 = (long *)PTR_DAT_04bb2698;
joined_r0x0340ef88:
  if (uVar18 != 0) {
    uVar18 = 0;
    puVar1 = PTR_DAT_04bb2cc8 + 0x10;
    do {
      lVar17 = *plVar7;
      if (lVar17 == 0) {
        piVar9 = malloc(0xa0);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar10 + 0x68));
        plVar8 = (long *)(lVar17 + 8);
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)(**(code **)(*plVar8 + 0x30))(plVar8,0xa0,8);
        }
      }
      piVar9[0x14] = -1;
      piVar9[0x22] = 0;
      piVar9[0x23] = 0;
      *(char **)(piVar9 + 0x24) = "agl::TextureData";
      piVar9[0x26] = 0x10000;
      piVar9[0x10] = 0;
      piVar9[0x11] = 0;
      piVar9[0x12] = 0;
      piVar9[0x13] = 0;
      piVar9[0xc] = 0;
      piVar9[0xd] = 0;
      piVar9[0xe] = 0;
      piVar9[0xf] = 0;
      piVar9[8] = 0;
      piVar9[9] = 0;
      piVar9[10] = 0;
      piVar9[0xb] = 0;
      piVar9[4] = 0;
      piVar9[5] = 0;
      piVar9[6] = 0;
      piVar9[7] = 0;
      piVar9[0] = 0;
      piVar9[1] = 0;
      piVar9[2] = 0;
      piVar9[3] = 0;
      piVar9[0x16] = 0;
      piVar9[0x17] = 0;
      piVar9[0x18] = 0;
      piVar9[0x19] = 0;
      piVar9[0x1a] = 0;
      piVar9[0x1b] = 0;
      piVar9[0x1c] = 0;
      piVar9[0x1d] = 0;
      piVar9[0x1e] = 0;
      piVar9[0x1f] = 0;
      piVar9[0x20] = 0;
      piVar9[0x21] = 0;
      uVar13 = *(undefined4 *)PTR_DAT_04bbdbc0;
      if (*(char *)(param_1 + 3) != '\0') {
        uVar13 = 0x120;
      }
      uVar16 = *(undefined4 *)PTR_DAT_04bbdbc8;
      if (*(char *)(param_1 + 3) != '\0') {
        uVar16 = 0xc2;
      }
      FUN_0390a734(piVar9,1,0x1d,uVar13,uVar16,1,1,1,0,1);
      iVar2 = piVar9[0xf];
      iVar3 = piVar9[0x10];
      lVar17 = *plVar7;
      if (lVar17 == 0) {
        plVar10 = malloc(0x38);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar10 + 0x68));
        plVar10 = (long *)(lVar17 + 8);
        if (lVar5 != 0) {
          plVar10 = (long *)(lVar5 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)0x0;
        }
        else {
          plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x38,8);
        }
      }
      plVar10[6] = 0;
      plVar8 = plVar10 + 1;
      *plVar8 = 0;
      *(undefined2 *)((long)plVar10 + 0x2a) = 0;
      *plVar10 = (long)puVar1;
      plVar10[2] = 0;
      plVar10[3] = 0;
      lVar5 = *plVar7;
      lVar17 = *(long *)PTR_DAT_04bb3350;
      plVar10[4] = 0;
      *(undefined1 *)(plVar10 + 5) = 0;
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(lVar17 + 0x68));
      puVar15 = (undefined8 *)(lVar5 + 8);
      if (lVar17 != 0) {
        puVar15 = (undefined8 *)(lVar17 + 0xa8);
      }
      uVar11 = *puVar15;
      plVar10[6] = 0;
      plVar10[3] = 0;
      plVar10[4] = 0;
      plVar10[2] = 0;
      *plVar8 = 0;
      *(undefined2 *)((long)plVar10 + 0x2a) = 0;
      *(byte *)(plVar10 + 5) = *(byte *)(plVar10 + 5) & 0xfe;
      if (iVar3 == 0) {
        local_78 = 0;
        *(undefined2 *)((long)plVar10 + 0x2a) = 8;
        local_70 = 0;
        iStack_74 = 0;
      }
      else {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar10,uVar11,iVar3,iVar2,8);
        *(undefined2 *)((long)plVar10 + 0x2a) = 8;
        local_70 = plVar10[3];
        local_78 = 0;
        if (plVar10[4] != 0) {
          local_78 = (int)*plVar8 - *(int *)(plVar10[4] + 0x10);
        }
        if (local_70 == 0) {
          iStack_74 = 0;
        }
        else {
          iStack_74 = *(int *)(local_70 + 0x104);
        }
      }
      *piVar9 = local_78;
      piVar9[1] = iStack_74;
      *(long *)(piVar9 + 2) = local_70;
      *(long **)(piVar9 + 4) = plVar10;
      if ((*(byte *)((long)piVar9 + 0x4e) >> 1 & 1) == 0) {
        bVar12 = false;
      }
      else {
        bVar12 = 0x11 < *(ushort *)(piVar9 + 0x26) && *(ushort *)(piVar9 + 0x26) - 0x59 < 0xffffffd6
        ;
      }
      uVar4 = (ulong)uVar18;
      plStack_68 = plVar10;
      FUN_038fd3e0(piVar9 + 0x14,&local_78,piVar9 + 0xc,0,*(undefined8 *)(piVar9 + 0x24),bVar12,1);
      uVar18 = uVar18 + 1;
      *(int **)((long)puVar6 + ((long)(uVar4 << 0x20) >> 0x1c)) = piVar9;
      plVar7 = (long *)PTR_DAT_04bb2698;
      plVar10 = (long *)PTR_DAT_04bb3350;
    } while ((uint)uVar19 != uVar18);
  }
  return;
}

