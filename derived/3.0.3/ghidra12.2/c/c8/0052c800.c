
void FUN_0052c800(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  int iVar16;
  int local_68;
  uint local_64;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_048d4838;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar12 = *(undefined8 **)(param_2 + 0x28);
  uVar10 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_64 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    puVar5 = (undefined8 *)FUN_00421ed0(uVar10,0x10,&local_64);
    *(uint *)(param_1 + 6) = uVar3;
    *(uint *)((long)param_1 + 0x34) = local_64;
    uVar1 = uVar3 & 3;
    param_1[5] = puVar5;
    if (2 < uVar3 - 1) {
      iVar9 = uVar1 - uVar3;
      puVar6 = puVar5;
      puVar13 = puVar12;
      do {
        uVar2 = puVar13[1];
        puVar5 = puVar6 + 8;
        *puVar6 = *puVar13;
        puVar6[1] = uVar2;
        puVar12 = puVar13 + 8;
        uVar2 = puVar13[3];
        iVar9 = iVar9 + 4;
        puVar6[2] = puVar13[2];
        puVar6[3] = uVar2;
        uVar2 = puVar13[5];
        puVar6[4] = puVar13[4];
        puVar6[5] = uVar2;
        uVar2 = puVar13[7];
        puVar6[6] = puVar13[6];
        puVar6[7] = uVar2;
        puVar6 = puVar5;
        puVar13 = puVar12;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        uVar2 = puVar12[1];
        *puVar5 = *puVar12;
        puVar5[1] = uVar2;
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + 2;
        puVar12 = puVar12 + 2;
      } while (iVar9 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  iVar9 = *(int *)(param_2 + 0x40);
  puVar15 = *(undefined4 **)(param_2 + 0x38);
  if (iVar9 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    local_68 = iVar9;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar10,0x20,&local_68);
    iVar16 = 0;
    param_1[7] = puVar7;
    *(int *)(param_1 + 8) = iVar9;
    *(int *)((long)param_1 + 0x44) = local_68;
    do {
      *puVar7 = *puVar15;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0x8000000000000000;
      iVar4 = puVar15[6];
      lVar14 = *(long *)(puVar15 + 4);
      if (iVar4 < 1) {
        if (iVar4 != 0) {
          lVar8 = 0;
          goto LAB_0052c9a0;
        }
      }
      else {
        lVar8 = FUN_00426720(uVar10,iVar4,0x48,0,0,puVar7 + 7);
        *(long *)(puVar7 + 4) = lVar8;
LAB_0052c9a0:
        lVar11 = (long)iVar4 * 0x48;
        do {
          FUN_0052ca20(lVar8,lVar14);
          lVar14 = lVar14 + 0x48;
          lVar11 = lVar11 + -0x48;
          lVar8 = lVar8 + 0x48;
        } while (lVar11 != 0);
      }
      puVar7[6] = iVar4;
      *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar15 + 2);
      iVar16 = iVar16 + 1;
      *(undefined1 *)((long)puVar7 + 9) = *(undefined1 *)((long)puVar15 + 9);
      puVar7 = puVar7 + 8;
      puVar15 = puVar15 + 8;
    } while (iVar16 != iVar9);
  }
  return;
}

