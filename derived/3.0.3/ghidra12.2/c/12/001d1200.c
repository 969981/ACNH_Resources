
void FUN_001d1200(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar10 = *param_2;
  if (param_1[0x19] == 0) {
    param_1[0x19] = lVar10;
    return;
  }
  if (lVar10 - param_1[0x19] < 0xc9) {
    return;
  }
  param_1[0x19] = lVar10;
  puVar4 = PTR_DAT_04bcbb78;
  uVar1 = *(uint *)(param_1 + 1);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(DAT_04c58c60);
    if (*puVar8 != 0) {
      uVar1 = *(uint *)(*(long *)(puVar4 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar8 * 0x148 +
                       0x140);
      plVar11 = (long *)param_1[6];
      plVar13 = (long *)param_1[3];
      goto joined_r0x001d12cc;
    }
  }
  uVar1 = *(uint *)(puVar4 + (ulong)uVar1 * 0x2a8 + 0x158);
  plVar11 = (long *)param_1[6];
  plVar13 = (long *)param_1[3];
joined_r0x001d12cc:
  if (plVar11 == (long *)0x0) {
    plVar14 = param_1 + 6;
    plVar16 = param_1 + 6;
  }
  else {
    do {
      while (plVar9 = plVar11, plVar14 = plVar9, *(uint *)((long)plVar9 + 0x1c) <= uVar1) {
        if (uVar1 <= *(uint *)((long)plVar9 + 0x1c)) goto LAB_001d135c;
        plVar11 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar16 = plVar9 + 1;
          goto LAB_001d130c;
        }
      }
      plVar11 = (long *)*plVar9;
      plVar16 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_001d130c:
  plVar9 = (long *)FUN_00187df4(0x28);
  *(uint *)((long)plVar9 + 0x1c) = uVar1;
  *(undefined2 *)(plVar9 + 4) = 0;
  plVar9[2] = (long)plVar14;
  *plVar9 = 0;
  plVar9[1] = 0;
  *plVar16 = (long)plVar9;
  plVar11 = plVar9;
  if (*(long *)param_1[5] != 0) {
    param_1[5] = *(long *)param_1[5];
    plVar11 = (long *)*plVar16;
  }
  FUN_03876250(param_1[6],plVar11);
  param_1[7] = param_1[7] + 1;
LAB_001d135c:
  sVar3 = (short)plVar9[4];
  if (sVar3 == 0) {
    sVar3 = *(short *)(param_1[3] + 0x128);
  }
  iVar7 = (**(code **)(*plVar13 + 0x60))(plVar13,uVar1,sVar3);
  if (5 < iVar7 - 1U) {
    return;
  }
  uVar2 = *(undefined4 *)(&DAT_0410b4cc + (long)(int)(iVar7 - 1U) * 4);
  (**(code **)(*param_1 + 0x88))(param_1);
  plVar11 = (long *)param_1[0x13];
  local_50 = 0;
  local_48 = 0;
  local_58 = &local_50;
  if (plVar11 != param_1 + 0x14) {
    do {
      FUN_001dc5f8(&local_58,&local_50,plVar11 + 4,plVar11 + 4);
      plVar13 = (long *)plVar11[1];
      plVar14 = plVar11;
      if ((long *)plVar11[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar14[2];
          bVar6 = (long *)*plVar11 != plVar14;
          plVar14 = plVar11;
        } while (bVar6);
      }
      else {
        do {
          plVar11 = plVar13;
          plVar13 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      puVar12 = local_58;
    } while (plVar11 != param_1 + 0x14);
    while (puVar12 != &local_50) {
      (**(code **)(*(long *)puVar12[0x17] + 0x110))((long *)puVar12[0x17],uVar2,1);
      puVar5 = (undefined8 *)puVar12[1];
      puVar15 = puVar12;
      if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
        do {
          puVar12 = (undefined8 *)puVar15[2];
          bVar6 = (undefined8 *)*puVar12 != puVar15;
          puVar15 = puVar12;
        } while (bVar6);
      }
      else {
        do {
          puVar12 = puVar5;
          puVar5 = (undefined8 *)*puVar12;
        } while ((undefined8 *)*puVar12 != (undefined8 *)0x0);
      }
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_001dc3cc(&local_58,local_50);
  return;
}

