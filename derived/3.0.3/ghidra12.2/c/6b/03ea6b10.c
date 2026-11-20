
void FUN_03ea6b10(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  lVar10 = *(long *)PTR_DAT_04bb2698;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar2 = (undefined8 *)(lVar10 + 8);
  if (lVar7 != 0) {
    puVar2 = (undefined8 *)(lVar7 + 0xa8);
  }
  uVar11 = *puVar2;
  plVar13 = (long *)(param_1 + 0x10);
  (**(code **)(*plVar13 + 0x18))(plVar13);
  local_b0 = *(undefined **)(param_1 + 0x18);
  local_90 = 0;
  uStack_88 = 0;
  uStack_a8 = *param_2;
  local_a0 = param_2[1];
  local_98 = 0;
  local_78 = param_2[4];
  _local_80 = CONCAT44(*(undefined4 *)(param_2[3] + 0x10),*(undefined4 *)(param_2 + 2));
  uVar8 = FUN_03bd217c(*(undefined8 *)PTR_DAT_04bb2918,&local_b0,uVar11,
                       *(undefined4 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  (**(code **)(*plVar13 + 0x18))(plVar13);
  uStack_a8 = *param_2;
  local_a0 = param_2[1];
  local_70 = 0;
  local_b0 = *(undefined **)(param_1 + 0x18);
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_78 = param_2[4];
  _local_80 = CONCAT44(*(undefined4 *)(param_2[3] + 0x10),*(undefined4 *)(param_2 + 2));
  local_68 = uVar11;
  uVar8 = FUN_03bdd5c8(*(undefined8 *)PTR_DAT_04bb49b0,&local_b0,uVar11,
                       *(undefined4 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  lVar7 = param_2[3];
  if (*(long *)(lVar7 + 8) != lVar7) {
    lVar15 = (long)*(int *)(lVar7 + 0x14);
    lVar10 = *(long *)(lVar7 + 8) - lVar15;
    do {
      lVar12 = *(long *)(param_1 + 0x30);
      uVar3 = *(uint *)(lVar10 + 0x18);
      lVar14 = *(long *)(lVar10 + 0x38);
      FUN_03bf3310(*(undefined8 *)(lVar12 + 0x30),(ulong)uVar3,lVar14);
      uVar4 = *(uint *)(lVar14 + 0x60);
      if ((uVar4 < 2) || (uVar4 == 2)) {
        *(undefined4 *)(*(long *)(lVar12 + 0x78) + (ulong)uVar3 * 4) = 0;
      }
      lVar12 = *(long *)(param_1 + 0x38);
      uVar3 = *(uint *)(lVar10 + 0x18);
      lVar14 = *(long *)(lVar10 + 0x38);
      FUN_03bf3310(*(undefined8 *)(lVar12 + 0x30),(ulong)uVar3,lVar14);
      uVar4 = *(uint *)(lVar14 + 0x60);
      if ((uVar4 < 2) || (uVar4 == 2)) {
        *(undefined4 *)(*(long *)(lVar12 + 0x78) + (ulong)uVar3 * 4) = 0;
      }
      lVar10 = *(long *)(lVar10 + lVar15 + 8) - lVar15;
    } while (lVar10 != lVar7 - lVar15);
  }
  FUN_03bf3e20(*(undefined8 *)(param_1 + 0x30),uVar11);
  FUN_03bf3e20(*(undefined8 *)(param_1 + 0x38),uVar11);
  lVar7 = param_1 + 0x40;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(plVar13);
  uStack_a8 = *(undefined8 *)(param_1 + 0x18);
  local_b0 = PTR_DAT_04bb2020 + 0x10;
  FUN_03c570e0(lVar7,&local_b0,uVar11);
  uVar9 = FUN_03c57200(lVar7);
  if ((uVar9 & 1) != 0) {
    if ((*(char *)(param_2 + 5) != '\0') && (0 < *(int *)(param_1 + 0x48))) {
      lVar10 = 0;
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x50) + lVar10 * 8);
        lVar10 = lVar10 + 1;
        *(uint *)(lVar15 + 0x20) = *(uint *)(lVar15 + 0x20) | 1;
      } while (lVar10 < *(int *)(param_1 + 0x48));
    }
    puVar6 = PTR_DAT_04bc3ee8;
    lVar10 = *(long *)(param_1 + 0x38);
    *(long *)(lVar10 + 0x110) = lVar7;
    lVar15 = *(long *)(*(long *)puVar6 + 0xf0);
    if (lVar15 != 0) {
      iVar5 = *(int *)(lVar15 + 0xd0) + *(int *)(lVar15 + 0xcc) + -1;
      iVar1 = 0;
      if (*(int *)(lVar15 + 200) <= iVar5) {
        iVar1 = *(int *)(lVar15 + 200);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + (long)(iVar5 - iVar1) * 8);
      if ((lVar15 != 0) && (0 < *(int *)(lVar15 + 8))) goto LAB_03ea6df8;
    }
    lVar15 = *(long *)(*(long *)puVar6 + 0x128);
    if ((lVar15 == 0) || (*(int *)(lVar15 + 8) < 1)) {
      FUN_03be4980(*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x18),lVar7);
    }
  }
LAB_03ea6df8:
  *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa0) = param_2[6];
  *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa0) = param_2[7];
  return;
}

