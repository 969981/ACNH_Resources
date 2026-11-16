
void FUN_026f8d74(long param_1,int param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar2 = PTR_DAT_04bb21a8;
  bVar3 = *(int *)(param_1 + 0x94) != 1;
  bVar4 = *(int *)(param_1 + 0x90) != param_2;
  if (bVar3 || bVar4) {
    iVar8 = *(int *)(param_1 + 0x98);
    iVar5 = *(int *)(param_1 + 0x9c);
    if ((iVar5 == 1) && (iVar8 == param_2)) {
      lVar6 = 1;
      goto LAB_026f8e88;
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0xa0) == param_2)) {
      lVar6 = 2;
      goto LAB_026f8e88;
    }
    if ((*(int *)(param_1 + 0xac) == 1) && (*(int *)(param_1 + 0xa8) == param_2)) {
      lVar6 = 3;
      goto LAB_026f8e88;
    }
    if ((*(int *)(param_1 + 0xb4) == 1) && (*(int *)(param_1 + 0xb0) == param_2)) {
      lVar6 = 4;
      goto LAB_026f8e88;
    }
    if ((*(int *)(param_1 + 0xbc) == 1) && (*(int *)(param_1 + 0xb8) == param_2)) {
      lVar6 = 5;
      goto LAB_026f8e88;
    }
    if ((*(int *)(param_1 + 0xc4) == 1) && (*(int *)(param_1 + 0xc0) == param_2)) {
      lVar6 = 6;
      goto LAB_026f8e88;
    }
    puVar9 = (undefined4 *)0x0;
    if ((*(int *)(param_1 + 0xcc) == 1) && (*(int *)(param_1 + 200) == param_2)) {
      lVar6 = 7;
      goto LAB_026f8e88;
    }
LAB_026f8ea8:
    if ((iVar5 == 1) && (iVar8 == param_2)) {
      lVar6 = 1;
      goto LAB_026f8f90;
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0xa0) == param_2)) {
      lVar6 = 2;
      goto LAB_026f8f90;
    }
    if ((*(int *)(param_1 + 0xac) == 1) && (*(int *)(param_1 + 0xa8) == param_2)) {
      lVar6 = 3;
      goto LAB_026f8f90;
    }
    if ((*(int *)(param_1 + 0xb4) == 1) && (*(int *)(param_1 + 0xb0) == param_2)) {
      lVar6 = 4;
      goto LAB_026f8f90;
    }
    if ((*(int *)(param_1 + 0xbc) == 1) && (*(int *)(param_1 + 0xb8) == param_2)) {
      lVar6 = 5;
      goto LAB_026f8f90;
    }
    if ((*(int *)(param_1 + 0xc4) == 1) && (*(int *)(param_1 + 0xc0) == param_2)) {
      lVar6 = 6;
      goto LAB_026f8f90;
    }
    puVar10 = (undefined4 *)0x0;
    if ((*(int *)(param_1 + 0xcc) == 1) && (*(int *)(param_1 + 200) == param_2)) {
      lVar6 = 7;
      goto LAB_026f8f90;
    }
  }
  else {
    lVar6 = 0;
LAB_026f8e88:
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + lVar6 * 8 + 0x60), lVar6 == 0)) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = *(undefined4 **)(lVar6 + 0x10);
    }
    if (bVar3 || bVar4) {
      iVar8 = *(int *)(param_1 + 0x98);
      iVar5 = *(int *)(param_1 + 0x9c);
      goto LAB_026f8ea8;
    }
    lVar6 = 0;
LAB_026f8f90:
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + lVar6 * 8 + 0x60), lVar6 == 0)) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = *(undefined4 **)(lVar6 + 0x18);
    }
    if (!bVar3 && !bVar4) {
      lVar6 = 0;
      goto LAB_026f9094;
    }
    iVar8 = *(int *)(param_1 + 0x98);
    iVar5 = *(int *)(param_1 + 0x9c);
  }
  if ((iVar5 == 1) && (iVar8 == param_2)) {
    lVar6 = 1;
  }
  else if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0xa0) == param_2)) {
    lVar6 = 2;
  }
  else if ((*(int *)(param_1 + 0xac) == 1) && (*(int *)(param_1 + 0xa8) == param_2)) {
    lVar6 = 3;
  }
  else if ((*(int *)(param_1 + 0xb4) == 1) && (*(int *)(param_1 + 0xb0) == param_2)) {
    lVar6 = 4;
  }
  else if ((*(int *)(param_1 + 0xbc) == 1) && (*(int *)(param_1 + 0xb8) == param_2)) {
    lVar6 = 5;
  }
  else if ((*(int *)(param_1 + 0xc4) == 1) && (*(int *)(param_1 + 0xc0) == param_2)) {
    lVar6 = 6;
  }
  else {
    if (*(int *)(param_1 + 0xcc) != 1) {
      return;
    }
    if (*(int *)(param_1 + 200) != param_2) {
      return;
    }
    lVar6 = 7;
  }
LAB_026f9094:
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (*(long *)(*(long *)(param_1 + 0x10) + lVar6 * 8 + 0x60) != 0)) {
    puVar7 = (undefined4 *)(*(long *)(param_1 + 0x60) + lVar6 * 0x300);
    if (*(uint *)(param_1 + 0x58) <= (uint)lVar6) {
      puVar7 = (undefined4 *)0x0;
    }
    if (((puVar10 != (undefined4 *)0x0) && (puVar9 != (undefined4 *)0x0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      *puVar9 = 0xa0002;
      *(undefined2 *)(puVar9 + 3) = 2;
      puVar9[0x11] = 0xa0028;
      puVar9[0x12] = 2;
      *(undefined2 *)(puVar9 + 0x13) = 2;
      uVar1 = *(undefined2 *)puVar2;
      puVar9[1] = 0xa0028;
      puVar9[2] = 2;
      puVar9[0x10] = 0xa0002;
      *(undefined2 *)((long)puVar9 + 0xe) = uVar1;
      *(undefined2 *)((long)puVar9 + 0x4e) = uVar1;
      FUN_0274b0d0(puVar9 + 0x30a0);
      FUN_02791920(puVar9 + 0x34a0);
      FUN_02803ed0(puVar9 + 0x125fe);
      FUN_027523f0(puVar9 + 0x1a0d9);
      FUN_02754a90(puVar9 + 0x1a159);
      nn::oe::GetPseudoDeviceId((Uuid *)(puVar9 + 0x1a199));
      *puVar10 = 0xa0002;
      puVar2 = PTR_DAT_04bb21a8;
      puVar10[1] = 0xa0028;
      puVar10[2] = 2;
      *(undefined2 *)(puVar10 + 3) = 2;
      uVar1 = *(undefined2 *)puVar2;
      puVar10[0x10] = 0xa0002;
      puVar10[0x11] = 0xa0028;
      puVar10[0x12] = 2;
      *(undefined2 *)(puVar10 + 0x13) = 2;
      *(undefined2 *)((long)puVar10 + 0xe) = uVar1;
      *(undefined2 *)((long)puVar10 + 0x4e) = uVar1;
      FUN_0274b0d0(puVar10 + 0x30a0);
      FUN_02791920(puVar10 + 0x34a0);
      FUN_02803ed0(puVar10 + 0x125fe);
      FUN_027523f0(puVar10 + 0x1a0d9);
      FUN_02754a90(puVar10 + 0x1a159);
      nn::oe::GetPseudoDeviceId((Uuid *)(puVar10 + 0x1a199));
      *puVar7 = 0xa0002;
      puVar7[1] = 0xa0028;
      uVar1 = *(undefined2 *)puVar2;
      puVar7[2] = 2;
      *(undefined2 *)(puVar7 + 3) = 2;
      puVar7[0x10] = 0xa0002;
      puVar7[0x11] = 0xa0028;
      puVar7[0x12] = 2;
      *(undefined2 *)(puVar7 + 0x13) = 2;
      *(undefined2 *)((long)puVar7 + 0xe) = uVar1;
      *(undefined2 *)((long)puVar7 + 0x4e) = uVar1;
    }
  }
  return;
}

