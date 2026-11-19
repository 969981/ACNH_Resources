
void FUN_03b262e0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  void *pvVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  
  uVar5 = FUN_03b25fc0();
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = FUN_0037e610(param_1,"TapButtonAnim");
  if (lVar6 == 0) {
    return;
  }
  lVar6 = FUN_03b185ec(param_2,lVar6 + (ulong)*(uint *)(lVar6 + 4),1);
  puVar3 = PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    return;
  }
  plVar16 = *(long **)PTR_DAT_04bd0810;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar9 = malloc(0x68);
  }
  else {
    plVar8 = plVar16;
    if (plVar16 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar15 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        puVar9 = (undefined8 *)0x0;
        goto LAB_03b263b4;
      }
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x68,8);
  }
LAB_03b263b4:
  uVar12 = 0x2201f;
  *(undefined2 *)(puVar9 + 7) = 0;
  puVar1 = puVar9 + 1;
  *(undefined1 *)((long)puVar9 + 0x3e) = 0;
  puVar9[0xc] = 0;
  puVar9[2] = puVar1;
  puVar9[3] = 0;
  plVar8 = puVar9 + 9;
  *plVar8 = 0;
  puVar9[8] = 0x2201f;
  puVar9[4] = param_2;
  puVar9[5] = puVar9 + 5;
  puVar9[6] = puVar9 + 5;
  *puVar9 = &PTR_LAB_04b74170;
  puVar9[1] = puVar1;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  if (*(long *)(param_2 + 0x88) != 0) {
    uVar12 = (*(byte *)(*(long *)(param_2 + 0x88) + 0xe5) & 1) << 6 | 0x2201f;
  }
  lVar15 = *(long *)puVar3;
  *(uint *)(puVar9 + 8) = uVar12;
  puVar9[0xb] = param_1;
  if (lVar15 == 0) {
    plVar10 = malloc(0x20);
  }
  else {
    plVar10 = plVar16;
    if (plVar16 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar7 != 0) {
        plVar10 = (long *)(lVar7 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_03b26474;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x20,8);
  }
LAB_03b26474:
  puVar4 = PTR_DAT_04bd1dc8;
  plVar17 = plVar10 + 2;
  *plVar17 = 0;
  *(undefined4 *)(plVar10 + 1) = 0;
  plVar10[3] = 0;
  *plVar10 = (long)(puVar4 + 0x10);
  *plVar8 = (long)plVar10;
  lVar15 = *(long *)puVar3;
  if (lVar15 == 0) {
    pvVar11 = malloc(0x30);
    if (pvVar11 == (void *)0x0) goto LAB_03b26508;
LAB_03b264ec:
    uVar5 = 6;
    plVar10[2] = (long)pvVar11;
    *(undefined4 *)(plVar10 + 1) = 6;
  }
  else {
    if (plVar16 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar15 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar16 = (long *)*puVar2;
      if (plVar16 == (long *)0x0) goto LAB_03b26508;
    }
    pvVar11 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,0x30,8);
    if (pvVar11 != (void *)0x0) goto LAB_03b264ec;
LAB_03b26508:
    uVar5 = (ulong)*(uint *)(plVar10 + 1);
    if ((int)*(uint *)(plVar10 + 1) < 1) goto LAB_03b26594;
  }
  uVar13 = uVar5 & 3;
  if (uVar5 - 1 < 3) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    do {
      lVar15 = uVar14 * 8;
      uVar14 = uVar14 + 4;
      *(undefined8 *)(*plVar17 + lVar15) = 0;
      *(undefined8 *)(*plVar17 + lVar15 + 8) = 0;
      *(undefined8 *)(*plVar17 + lVar15 + 0x10) = 0;
      *(undefined8 *)(*plVar17 + lVar15 + 0x18) = 0;
    } while ((uVar5 & 0xfffffffc) != uVar14);
  }
  if (uVar13 != 0) {
    lVar15 = uVar14 << 3;
    do {
      uVar13 = uVar13 - 1;
      *(undefined8 *)(*plVar17 + lVar15) = 0;
      lVar15 = lVar15 + 8;
    } while (uVar13 != 0);
  }
LAB_03b26594:
  *(byte *)(lVar6 + 0x57) = *(byte *)(lVar6 + 0x57) & 0xdf | 0x10;
  lVar15 = *plVar8;
  *(long *)(*(long *)(lVar15 + 0x10) + (ulong)(4 < *(uint *)(lVar15 + 8)) * 0x20) = lVar6;
  if (*(long *)(lVar15 + 0x18) == 0) {
    *(long *)(lVar15 + 0x18) = lVar6;
  }
  lVar6 = puVar9[1];
  puVar9[3] = param_1 + 0xb0;
  *(uint *)(puVar9 + 8) = *(uint *)(puVar9 + 8) | 0x200;
  plVar16 = (long *)(param_3 + 8);
  puVar9[1] = *plVar16;
  *(long **)(lVar6 + 8) = plVar16;
  *(undefined8 **)(*plVar16 + 8) = puVar1;
  *plVar16 = lVar6;
  return;
}

