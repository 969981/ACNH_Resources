
void FUN_03b0d110(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  uint local_1c0;
  undefined1 auStack_1bc [36];
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [255];
  undefined1 local_85;
  undefined1 local_80;
  undefined *local_78;
  char *local_70;
  
  *(undefined8 *)(param_1 + 0x50) = param_3;
  FUN_03b1307c(param_1 + 0x30);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar12 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      puVar7 = malloc(uVar12 << 4);
    }
    else {
      plVar6 = param_2;
      if (param_2 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar14 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_03b0d23c;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar12 << 4,8);
    }
    if (puVar7 != (undefined8 *)0x0) {
      uVar11 = uVar12 & 3;
      puVar9 = puVar7;
      if ((uVar3 & 3) != 0) {
        do {
          *puVar9 = 0;
          uVar11 = uVar11 - 1;
          *(undefined4 *)(puVar9 + 1) = 0;
          puVar9 = puVar9 + 2;
        } while (uVar11 != 0);
      }
      if (2 < (uVar12 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
          puVar9[2] = 0;
          *(undefined4 *)(puVar9 + 3) = 0;
          puVar9[4] = 0;
          *(undefined4 *)(puVar9 + 5) = 0;
          puVar9[6] = 0;
          *(undefined4 *)(puVar9 + 7) = 0;
          puVar9 = puVar9 + 8;
        } while (puVar9 != puVar7 + uVar12 * 2);
      }
      *(uint *)(param_1 + 0x38) = uVar3;
      *(undefined8 **)(param_1 + 0x40) = puVar7;
    }
  }
LAB_03b0d23c:
  local_85 = 0;
  local_188 = 0x100;
  local_190 = local_184;
  local_184[0] = 0;
  local_80 = 0;
  local_198 = PTR_DAT_04bb21f8 + 0x10;
  local_1c0 = 0xffffffff;
  plVar6 = *(long **)(param_1 + 0x30);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "";
  local_78 = puVar2;
  (**(code **)(*plVar6 + 0x50))(plVar6,auStack_1bc,&local_78);
  iVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,auStack_1bc,&local_198,1);
joined_r0x03b0d2d0:
  if (iVar4 != 1) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6,auStack_1bc);
    }
    return;
  }
  local_1c0 = local_1c0 + 1;
  local_70 = ".msbt";
  local_78 = puVar2;
  (**(code **)(local_198 + 0x18))(&local_198);
  lVar14 = 0;
  do {
    if (local_190[lVar14] == '\0') goto LAB_03b0d3b4;
    if (local_190[lVar14 + 1] == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_03b0d3b4;
    }
    if (local_190[lVar14 + 2] == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_03b0d3b4;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  lVar14 = 0;
LAB_03b0d3b4:
  (**(code **)(local_78 + 0x18))(&local_78);
  lVar5 = 0;
  do {
    iVar4 = (int)lVar14;
    if (local_70[lVar5] == '\0') {
LAB_03b0d404:
      iVar8 = (int)lVar5;
      if (iVar4 < iVar8) goto LAB_03b0d328;
LAB_03b0d41c:
      if ((int)lVar5 < 1) goto LAB_03b0d4c4;
      uVar12 = 0;
      goto LAB_03b0d434;
    }
    if (local_70[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03b0d404;
    }
    if (local_70[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar8 = (int)lVar5;
      if (iVar8 <= iVar4) goto LAB_03b0d41c;
      goto LAB_03b0d328;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (-1 < iVar4) {
LAB_03b0d4c4:
    (**(code **)(local_78 + 0x18))(&local_78);
LAB_03b0d4f4:
    uVar3 = local_1c0;
    if (*(uint *)(param_1 + 0x38) <= local_1c0) {
      uVar3 = 0;
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x40) + (long)(int)uVar3 * 0x10);
    (**(code **)(*plVar6 + 0x38))(plVar6,local_1c0,0);
    *(long **)PTR_DAT_04bd0f80 = param_2;
    DAT_05ae78a0 = PTR_FUN_04bd0f70;
    DAT_05ae78a8 = (code *)PTR_FUN_04bd0f78;
    lVar14 = FUN_038f3e70();
    *plVar1 = lVar14;
    if (*(int *)(lVar14 + 0x24) == -1) {
      if (*(long *)(lVar14 + 0x18) != 0) goto LAB_03b0d2f0;
LAB_03b0d2f8:
      (*DAT_05ae78a8)(lVar14);
      iVar4 = 0;
      *plVar1 = 0;
    }
    else {
      iVar4 = **(int **)(*(long *)(lVar14 + 0x18) + (long)*(int *)(lVar14 + 0x24) * 0x18);
      if (iVar4 < 0) {
LAB_03b0d2f0:
        (*DAT_05ae78a8)();
        goto LAB_03b0d2f8;
      }
    }
    *(int *)(plVar1 + 1) = iVar4;
    DAT_05ae78a8 = (code *)0x0;
    DAT_05ae78a0 = (undefined *)0x0;
    *(undefined8 *)PTR_DAT_04bd0f80 = 0;
  }
  goto LAB_03b0d328;
  while( true ) {
    pcVar10 = local_70;
    lVar14 = lVar5;
    while( true ) {
      lVar14 = lVar14 + -1;
      if (puVar13[uVar12] != *pcVar10) break;
      if (puVar13[uVar12] == '\0') goto LAB_03b0d4e0;
      puVar13 = puVar13 + 1;
      pcVar10 = pcVar10 + 1;
      if (lVar14 == 0) goto LAB_03b0d4e0;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == (iVar4 - iVar8) + 1) break;
LAB_03b0d434:
    puVar13 = local_190;
    pcVar10 = local_190 + uVar12;
    (**(code **)(local_78 + 0x18))(&local_78);
    if (pcVar10 == local_70) {
LAB_03b0d4e0:
      if (-1 < (int)uVar12) goto LAB_03b0d4f4;
      break;
    }
  }
LAB_03b0d328:
  iVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,auStack_1bc,&local_198,1);
  goto joined_r0x03b0d2d0;
}

