
void FUN_02c20a18(long *param_1)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  uint local_48;
  int local_44;
  
  lVar5 = param_1[0x1eb];
  if ((((lVar5 != 0) && (param_1[0x42] != 0)) &&
      (plVar3 = *(long **)(param_1[0x42] + 0x5b0), plVar3 != (long *)0x0)) &&
     (bVar2 = 0 < *(int *)(param_1[0x1e3] + 0x10) && *(char *)(lVar5 + 2) != '\0',
     (bool)*(char *)(lVar5 + 1) != bVar2)) {
    *(bool *)(lVar5 + 1) = bVar2;
    (**(code **)(*plVar3 + 0x140))(plVar3,bVar2,0);
  }
  lVar5 = param_1[0x1ec];
  if (lVar5 != 0) {
    lVar11 = *(long *)(DAT_05231900 + 0xf0);
    lVar12 = *(long *)(lVar11 + 0x40);
    if ((long *)**(long **)(lVar12 + 0x28) == (long *)0x0) {
      lVar12 = *(long *)(lVar12 + 0x1b0);
LAB_02c20acc:
      puVar6 = (uint *)(lVar12 + 0xafcd0);
    }
    else {
      uVar4 = (**(code **)(*(long *)**(long **)(lVar12 + 0x28) + 0x48))();
      lVar12 = *(long *)(lVar12 + 0x1b0);
      if ((uVar4 & 1) == 0) goto LAB_02c20acc;
      puVar6 = (uint *)(lVar12 + 0x18);
    }
    lVar11 = *(long *)(lVar11 + 0x40);
    uVar9 = *puVar6;
    if ((long *)**(long **)(lVar11 + 0x28) == (long *)0x0) {
      lVar11 = *(long *)(lVar11 + 0x1b0);
LAB_02c20b0c:
      puVar7 = (undefined4 *)(lVar11 + 0xafcd4);
    }
    else {
      uVar4 = (**(code **)(*(long *)**(long **)(lVar11 + 0x28) + 0x48))();
      lVar11 = *(long *)(lVar11 + 0x1b0);
      if ((uVar4 & 1) == 0) goto LAB_02c20b0c;
      puVar7 = (undefined4 *)(lVar11 + 0xafcd8);
    }
    fVar15 = (float)NEON_ucvtf(*puVar7);
    fVar14 = (float)uVar9 / 10000.0;
    if ((float)uVar9 / 10000.0 <= fVar15 / 90000.0) {
      fVar14 = fVar15 / 90000.0;
    }
    if (((param_1[0x42] != 0) && (plVar3 = *(long **)(param_1[0x42] + 0x5b8), plVar3 != (long *)0x0)
        ) && (bVar2 = 0.0 < fVar14 && *(char *)(lVar5 + 2) != '\0',
             (bool)*(char *)(lVar5 + 1) != bVar2)) {
      *(bool *)(lVar5 + 1) = bVar2;
      (**(code **)(*plVar3 + 0x140))(plVar3,bVar2,0);
    }
  }
  lVar5 = param_1[499];
  if (lVar5 != 0) {
    lVar11 = param_1[0x42];
    if ((*(long *)PTR_DAT_04bc1118 == 0) || (*(int *)(*(long *)PTR_DAT_04bc1118 + 0xf24) != 0)) {
      bVar2 = true;
    }
    else {
      lVar12 = *(long *)(DAT_05231900 + 0xf0);
      lVar13 = *(long *)(lVar12 + 0x40);
      if ((long *)**(long **)(lVar13 + 0x28) == (long *)0x0) {
        lVar13 = *(long *)(lVar13 + 0x1b0);
LAB_02c20bf8:
        puVar6 = (uint *)(lVar13 + 0xafcd0);
      }
      else {
        uVar4 = (**(code **)(*(long *)**(long **)(lVar13 + 0x28) + 0x48))();
        lVar13 = *(long *)(lVar13 + 0x1b0);
        if ((uVar4 & 1) == 0) goto LAB_02c20bf8;
        puVar6 = (uint *)(lVar13 + 0x18);
      }
      lVar12 = *(long *)(lVar12 + 0x40);
      uVar9 = *puVar6;
      if ((long *)**(long **)(lVar12 + 0x28) == (long *)0x0) {
        lVar12 = *(long *)(lVar12 + 0x1b0);
LAB_02c20c38:
        puVar7 = (undefined4 *)(lVar12 + 0xafcd4);
      }
      else {
        uVar4 = (**(code **)(*(long *)**(long **)(lVar12 + 0x28) + 0x48))();
        lVar12 = *(long *)(lVar12 + 0x1b0);
        if ((uVar4 & 1) == 0) goto LAB_02c20c38;
        puVar7 = (undefined4 *)(lVar12 + 0xafcd8);
      }
      fVar15 = (float)NEON_ucvtf(*puVar7);
      fVar14 = (float)uVar9 / 10000.0;
      if ((float)uVar9 / 10000.0 <= fVar15 / 90000.0) {
        fVar14 = fVar15 / 90000.0;
      }
      bVar2 = 0.0 < fVar14;
    }
    FUN_02c18c14(lVar5,lVar11,param_1 + 0x3f,bVar2,0);
  }
  if (param_1[0x1de] == 0) {
    return;
  }
  *(undefined1 *)(param_1[0x1de] + 0x68) = 0;
  switch((int)param_1[0x44]) {
  case 0:
    if (((param_1[0x1e3] == 0) ||
        (piVar8 = *(int **)(param_1[0x1e3] + 0xafc98), piVar8 == (int *)0x0)) || (*piVar8 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = *piVar8 != 4;
    }
    uVar4 = FUN_03448250(param_1 + 0x46);
    if ((!bVar2) && ((uVar4 & 1) == 0)) goto LAB_02c20e64;
    uVar4 = (ulong)*(byte *)(param_1 + 0x40);
    if (*(int *)((long)param_1 + uVar4 * 4 + 0x1f0) != -1) {
      return;
    }
    uVar10 = 10;
    goto LAB_02c20ea0;
  case 7:
    lVar5 = param_1[0x1de];
    if (lVar5 != 0) {
      uVar9 = *(uint *)(lVar5 + 0x18);
      if (uVar9 < 3) {
        uVar9 = (&DAT_04130ba0)[(int)uVar9];
      }
      *(uint *)(lVar5 + 0x18) = uVar9;
      if (*(long *)(lVar5 + 8) != 0) {
        if (*(int *)(lVar5 + 0x1c) == 4) {
          uVar10 = 0xc;
        }
        else {
          if (2 < uVar9) {
            uVar9 = 0;
          }
          uVar10 = (&DAT_0417fd1c)[(int)uVar9];
        }
        *(undefined4 *)(*(long *)(lVar5 + 8) + 0x274) = uVar10;
      }
      FUN_02c20efc(param_1);
    }
    break;
  case 8:
    lVar5 = param_1[0x1de];
    local_48 = 0;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    local_44 = *(int *)(lVar5 + 0x1c);
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 == 0) goto LAB_02c20e34;
    goto LAB_02c20d94;
  case 9:
    lVar5 = param_1[0x1de];
    local_48 = 1;
    goto LAB_02c20d7c;
  case 10:
    lVar5 = param_1[0x1de];
    local_48 = 2;
LAB_02c20d7c:
    *(uint *)(lVar5 + 0x18) = local_48;
    local_44 = *(int *)(lVar5 + 0x1c);
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 != 0) {
LAB_02c20d94:
      if (local_44 == 4) {
        uVar10 = 0xc;
      }
      else {
        if (2 < local_48) {
          local_48 = 0;
        }
        uVar10 = (&DAT_0417fd1c)[(int)local_48];
      }
      *(undefined4 *)(lVar5 + 0x274) = uVar10;
    }
LAB_02c20e34:
    FUN_02c20efc(param_1);
    return;
  case 0xb:
    if ((param_1[0x43] != 0) && (*(char *)(param_1[0x43] + 0x218) == '\0')) {
      lVar5 = param_1[0x1de];
      *(undefined1 *)(lVar5 + 0x68) = 1;
      bVar1 = *(byte *)(lVar5 + 0x69);
      *(byte *)(lVar5 + 0x69) = bVar1 ^ 1;
      if (bVar1 == 0) {
        if (*(long *)(lVar5 + 0x78) != 0) {
          FUN_0340e35c();
        }
        *(undefined4 *)(lVar5 + 0x6c) = 1;
      }
      else {
        if (*(long *)(lVar5 + 0x78) != 0) {
          FUN_0340e3a4();
        }
        *(undefined4 *)(lVar5 + 0x6c) = 2;
      }
    }
    break;
  case 0xc:
    uVar4 = (ulong)*(byte *)(param_1 + 0x40);
    if (*(int *)((long)param_1 + uVar4 * 4 + 0x1f0) != -1) {
      return;
    }
    uVar10 = 9;
LAB_02c20ea0:
    *(undefined4 *)((long)param_1 + uVar4 * 4 + 0x1f0) = uVar10;
    break;
  case 0xd:
    *(undefined1 *)(param_1 + 0x1df) = 1;
LAB_02c20e64:
                    /* WARNING: Could not recover jumptable at 0x02c20e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1);
    return;
  }
  return;
}

