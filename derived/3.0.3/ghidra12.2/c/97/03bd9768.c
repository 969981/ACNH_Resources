
void FUN_03bd9768(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_60;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(ulong *)(param_1 + 0x38);
  lVar12 = *(long *)(*(long *)(lVar5 + 0x30) + 0x18);
  uVar4 = FUN_03bdad4c(param_1,0xc);
  if (((uVar4 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 0xc & 1) == 0)) {
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x1000;
    fVar16 = (float)FUN_03bd6a44(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                 0x28,uVar10,uVar11 & 0xffffffff,lVar5);
    *(float *)(param_1 + 0x80) = fVar16;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x80);
  }
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x188) >> 6 & 1) != 0) {
    fVar16 = fVar16 * *(float *)(*(long *)(param_1 + 0x18) + 0xf8);
  }
  if ((*param_2 != 0) && ((int)param_2[1] == *(int *)(*param_2 + 0x34))) {
    FUN_00322a20(param_2);
    FUN_00322658(fVar16);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = FUN_03bdad4c(param_1,0x10);
  if (((uVar4 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 0x10 & 1) == 0)) {
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x10000;
    fVar16 = (float)FUN_03bd50c8(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                 0x28,uVar10,lVar5);
    *(float *)(param_1 + 0x90) = fVar16;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x90);
  }
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x189) & 1) != 0) {
    fVar16 = fVar16 * *(float *)(*(long *)(param_1 + 0x18) + 0x100);
  }
  if ((*param_2 != 0) && ((int)param_2[1] == *(int *)(*param_2 + 0x34))) {
    FUN_00322a20(param_2);
    FUN_00322680(fVar16);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = FUN_03bdad4c(param_1,0xd);
  if (((uVar4 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 0xd & 1) == 0)) {
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x2000;
    fVar16 = (float)FUN_03bd4de0(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                 0x28,uVar10,lVar5);
    *(float *)(param_1 + 0x84) = fVar16;
    lVar7 = *param_2;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x84);
    lVar7 = *param_2;
  }
  if ((lVar7 != 0) && ((int)param_2[1] == *(int *)(lVar7 + 0x34))) {
    lVar7 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(lVar7 + 0x189) >> 1 & 1) == 0) {
      local_60 = CONCAT44(fVar16,fVar16);
    }
    else {
      fVar15 = fVar16 * *(float *)(lVar7 + 0x104);
      fVar14 = fVar16 * *(float *)(lVar7 + 0x108);
      fVar16 = fVar16 * *(float *)(lVar7 + 0x10c);
      local_60 = CONCAT44(fVar14,fVar15);
    }
    lVar7 = FUN_00322a20(param_2);
    *(ulong *)(lVar7 + 0x148) = (ulong)(uint)fVar16;
    *(undefined8 *)(lVar7 + 0x140) = local_60;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = FUN_03bdad4c(param_1,0xe);
  if (((uVar4 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 0xe & 1) == 0)) {
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x4000;
    fVar16 = (float)FUN_03bd4ed8(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                 0x28,uVar10,lVar5);
    *(float *)(param_1 + 0x88) = fVar16;
    lVar7 = *param_2;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x88);
    lVar7 = *param_2;
  }
  if (lVar7 != 0) {
    if ((int)param_2[1] == *(int *)(lVar7 + 0x34)) {
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x188) < '\0') {
        fVar16 = fVar16 * *(float *)(*(long *)(param_1 + 0x18) + 0xfc);
      }
      FUN_00322a20(param_2);
      FUN_0032266c(fVar16);
      lVar7 = *param_2;
      if (lVar7 == 0) {
        return;
      }
    }
    if ((int)param_2[1] == *(int *)(lVar7 + 0x34)) {
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = FUN_03bdad4c(param_1,0xf);
      if (((uVar4 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 0xf & 1) == 0)) {
        *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x8000;
        fVar16 = (float)FUN_03bd4fd0(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                     0x28,uVar10,lVar5);
        *(float *)(param_1 + 0x8c) = fVar16;
      }
      else {
        fVar16 = *(float *)(param_1 + 0x8c);
      }
      if (fVar16 != 1.0) {
        lVar5 = FUN_00322a20(param_2);
        *(float *)(lVar5 + 0x220) = fVar16;
        lVar5 = FUN_00322a20(param_2);
        *(float *)(lVar5 + 0x1f8) = fVar16;
      }
    }
    if ((*param_2 != 0) && ((int)param_2[1] == *(int *)(*param_2 + 0x34))) {
      lVar5 = *(long *)(param_1 + 0x18);
      if ((*(byte *)(lVar5 + 0x18b) & 1) == 0) {
        lVar5 = *(long *)(lVar12 + 0x38);
        plVar1 = (long *)(lVar5 + 0x18);
        plVar2 = plVar1 + *(uint *)(lVar5 + 0x10);
        if (1 < *(uint *)(lVar5 + 0x10)) {
          plVar2 = plVar1;
        }
        if (*plVar2 == 0) {
          return;
        }
        DataMemoryBarrier(2,1);
        if (*(char *)(*plVar2 + 0xb0) == '\0') {
          return;
        }
        DataMemoryBarrier(2,1);
        uVar3 = *(ushort *)(*(long *)(param_1 + 0x28) + 4);
        if ((short)uVar3 < 0) {
          return;
        }
        plVar2 = plVar1 + *(uint *)(lVar5 + 0x10);
        if (1 < *(uint *)(lVar5 + 0x10)) {
          plVar2 = plVar1;
        }
        lVar5 = *(long *)(*plVar2 + 0xc0);
        if (lVar5 == 0) {
          return;
        }
        uVar6 = (uint)uVar3;
        if (*(uint *)(*plVar2 + 0xb8) <= (uint)uVar3) {
          uVar6 = 0;
        }
        uVar6 = (uint)*(byte *)(lVar5 + (ulong)uVar6 * 8 + 5);
        if (uVar6 == 0xff) {
          return;
        }
        puVar8 = *(uint **)(DAT_05aec208 + 0x9b0);
        if (puVar8 == (uint *)0x0) {
          return;
        }
        uVar4 = (ulong)*puVar8;
        if ((int)*puVar8 < 1) {
          puVar9 = &DAT_05aec22c;
        }
        else {
          puVar9 = (undefined8 *)(*(long *)(puVar8 + 4) + 0xc);
          do {
            if (*(uint *)((long)puVar9 + -4) == uVar6) goto LAB_03bd9bd0;
            puVar9 = puVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          puVar9 = &DAT_05aec22c;
        }
LAB_03bd9bd0:
        uVar10 = *puVar9;
        uVar13 = puVar9[1];
        puVar9 = (undefined8 *)FUN_00322a20(param_2);
      }
      else {
        puVar9 = (undefined8 *)FUN_00322a20(param_2);
        uVar10 = *(undefined8 *)(lVar5 + 0x18c);
        uVar13 = *(undefined8 *)(lVar5 + 0x194);
      }
      puVar9[1] = uVar13;
      *puVar9 = uVar10;
      lVar5 = FUN_00322a20(param_2);
      *(undefined1 *)(lVar5 + 0x276) = 1;
    }
  }
  return;
}

