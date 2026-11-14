
undefined8 FUN_01664580(long param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_9c;
  float fStack_98;
  float local_94;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return 0;
  }
  fVar11 = param_5;
  if ((uint)*(float *)(DAT_05ae9268 + 0x20) <= (uint)param_5) {
    fVar11 = 0.0;
  }
  lVar5 = *(long *)(*(long *)(DAT_05ae9268 + 0x28) + (long)(int)fVar11 * 8);
  if (lVar5 == 0) {
    return 0;
  }
  fVar9 = *param_4;
  fVar11 = param_4[1];
  fVar10 = param_4[2];
  lVar4 = *(long *)(DAT_05231900 + 0x78);
  if (lVar4 != 0) {
    fVar8 = *(float *)(lVar4 + 0x40) * 0.017453292 * ((fVar10 + *(float *)(lVar4 + 0x38)) / 160.0);
    fVar1 = 57600.0 / (*(float *)(lVar4 + 0x40) * 6.2831855) + fVar11;
    local_9c = param_5;
    fVar6 = cosf(fVar8);
    if (fVar6 == 0.0) {
      fVar6 = 0.001;
    }
    else {
      fVar6 = cosf(fVar8);
    }
    fVar8 = sinf(fVar8);
    fVar7 = *(float *)(*(long *)(DAT_05231900 + 0x78) + 0x3c);
    fVar10 = fVar8 * fVar1 * fVar7 + (1.0 - fVar7) * fVar10;
    fVar11 = fVar11 * (1.0 - fVar7) +
             fVar7 * (fVar6 * fVar1 +
                     -57600.0 / (*(float *)(*(long *)(DAT_05231900 + 0x78) + 0x40) * 6.2831855));
  }
  if ((*(ushort *)(lVar5 + 0x8a) & 0x21) == 0 || (*(ushort *)(lVar5 + 0x8a) & 2) == 0) {
    puVar2 = &DAT_05ae9148;
    if (*(undefined8 **)(lVar5 + 0x78) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(lVar5 + 0x78);
    }
  }
  else {
    if (*(long *)(lVar5 + 0x1f8) == 0) {
      puVar2 = &DAT_05ae9148;
      if (*(undefined8 **)(lVar5 + 0x78) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)(lVar5 + 0x78);
      }
      lVar4 = *(long *)(lVar5 + 0x1f8);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x1f8) + 8);
      lVar4 = *(long *)(lVar5 + 0x1f8);
    }
    if (lVar4 != 0) {
      puVar3 = *(undefined8 **)(lVar4 + 0x100);
      goto LAB_01664794;
    }
  }
  puVar3 = &DAT_05ae91b0;
  if (*(undefined8 **)(lVar5 + 0x80) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(lVar5 + 0x80);
  }
LAB_01664794:
  local_9c = fVar9;
  fStack_98 = fVar11;
  local_94 = fVar10;
  FUN_03eb38c0(param_2,&local_9c,puVar2,puVar3,lVar5 + 0x50);
  fVar11 = *(float *)(lVar5 + 0x5c);
  *param_2 = *(float *)(lVar5 + 0x58) * 0.5 + *param_2;
  param_2[1] = fVar11 * 0.5 + param_2[1];
  if (*(long *)(param_1 + 0x58) != 0) {
    fVar11 = param_5;
    if ((uint)*(float *)(DAT_05ae9268 + 0x20) <= (uint)param_5) {
      fVar11 = 0.0;
    }
    lVar5 = *(long *)(*(long *)(DAT_05ae9268 + 0x28) + (long)(int)fVar11 * 8);
    if (lVar5 != 0) {
      if ((((*(ushort *)(lVar5 + 0x8a) & 0x21) == 0) || ((*(ushort *)(lVar5 + 0x8a) >> 1 & 1) == 0))
         || (*(long *)(lVar5 + 0x1f8) == 0)) {
        puVar2 = &DAT_05ae9148;
        if (*(undefined8 **)(lVar5 + 0x78) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(lVar5 + 0x78);
        }
      }
      else {
        puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x1f8) + 8);
      }
      fVar9 = *param_4;
      fVar11 = param_4[1];
      fVar10 = param_4[2];
      lVar5 = *(long *)(DAT_05231900 + 0x78);
      if (lVar5 != 0) {
        fVar8 = *(float *)(lVar5 + 0x40) * 0.017453292 *
                ((fVar10 + *(float *)(lVar5 + 0x38)) / 160.0);
        fVar1 = 57600.0 / (*(float *)(lVar5 + 0x40) * 6.2831855) + fVar11;
        local_9c = param_5;
        fVar6 = cosf(fVar8);
        if (fVar6 == 0.0) {
          fVar6 = 0.001;
        }
        else {
          fVar6 = cosf(fVar8);
        }
        fVar8 = sinf(fVar8);
        fVar7 = *(float *)(*(long *)(DAT_05231900 + 0x78) + 0x3c);
        fVar10 = fVar8 * fVar1 * fVar7 + (1.0 - fVar7) * fVar10;
        fVar11 = fVar11 * (1.0 - fVar7) +
                 fVar7 * (fVar6 * fVar1 +
                         -57600.0 / (*(float *)(*(long *)(DAT_05231900 + 0x78) + 0x40) * 6.2831855))
        ;
      }
      if (param_3 != (float *)0x0) {
        *param_3 = -(*(float *)((long)puVar2 + 0x34) +
                    fVar11 * *(float *)((long)puVar2 + 0x2c) + fVar9 * *(float *)(puVar2 + 5) +
                    fVar10 * *(float *)(puVar2 + 6));
      }
    }
  }
  return 1;
}

