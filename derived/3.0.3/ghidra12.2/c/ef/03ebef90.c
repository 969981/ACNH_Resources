
void FUN_03ebef90(float param_1,long param_2,long param_3)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  long lStack_38;
  
  local_40 = *(undefined8 *)(param_2 + 0x18);
  fVar6 = *(float *)(param_3 + 0x4c);
  if (0 < (int)*(uint *)(param_3 + 0xa0)) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      if (fVar6 < *(float *)(param_2 + 0xa8)) {
        fVar6 = *(float *)(param_2 + 0xa8);
      }
    } while (*(uint *)(param_3 + 0xa0) != uVar4);
  }
  lVar3 = *(long *)(param_2 + 0x90);
  lStack_38 = param_2;
  if (*(char *)(lVar3 + 0x25) != '\0') {
    lVar5 = *(long *)(param_2 + 0x70);
    uVar1 = *(ushort *)(lVar5 + 0x5a);
    if ((short)uVar1 < 0) {
LAB_03ebf088:
      fVar6 = *(float *)(param_2 + 0xa8);
    }
    else {
      uVar4 = (ulong)uVar1;
      if (3 < uVar1) {
        uVar4 = 0;
      }
      if (*(long *)(lVar5 + uVar4 * 8) == 0) goto LAB_03ebf088;
      plVar2 = (long *)(lVar5 + 0x28) + uVar1;
      if (3 < uVar1) {
        plVar2 = (long *)(lVar5 + 0x28);
      }
      *(undefined4 *)(*plVar2 + 0x7c) = *(undefined4 *)(param_2 + 0x78);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x70) + 0x5a);
      uVar4 = (ulong)uVar1;
      if (3 < uVar1) {
        uVar4 = 0;
      }
      plVar2 = *(long **)(*(long *)(param_2 + 0x70) + uVar4 * 8);
      fVar6 = (float)(**(code **)(*plVar2 + 0x78))(*(undefined4 *)(param_2 + 0xa8),plVar2,&local_40)
      ;
      lVar3 = *(long *)(param_2 + 0x90);
    }
    *(undefined1 *)(lVar3 + 0x25) = 0;
  }
  if (0.0 < fVar6) {
    if (0.01 <= fVar6) {
      *(undefined8 *)(param_2 + 0x7c) = 0;
      *(undefined1 *)(param_2 + 0x8c) = 1;
      *(undefined4 *)(param_2 + 0x88) = 0;
      *(float *)(param_2 + 0x84) = 1.0 / fVar6;
      *(uint *)(param_3 + 0xb0) = *(uint *)(param_3 + 0xb0) | 1;
    }
    else {
      *(undefined1 **)(param_2 + 0x7c) = &DAT_3f8000003f800000;
      *(undefined4 *)(param_2 + 0x88) = 0x3f800000;
    }
  }
  fVar6 = *(float *)(param_2 + 0x88);
  if (fVar6 < 1.0) {
    fVar6 = *(float *)(param_2 + 0x7c) + param_1 * *(float *)(param_2 + 0x84);
    *(float *)(param_2 + 0x7c) = fVar6;
    if (1.0 <= fVar6) {
      *(undefined1 **)(param_2 + 0x7c) = &DAT_3f8000003f800000;
      *(undefined4 *)(param_2 + 0x88) = 0x3f800000;
      goto LAB_03ebf184;
    }
    if (*(char *)(param_2 + 0x8d) == '\0') {
      if (0.5 <= fVar6) {
        fVar6 = (1.0 - fVar6) + (1.0 - fVar6);
        fVar6 = fVar6 * fVar6 * -0.5 + 1.0;
      }
      else {
        fVar6 = (fVar6 + fVar6) * (fVar6 + fVar6) * 0.5;
      }
    }
    fVar7 = *(float *)(param_2 + 0x80);
    *(float *)(param_2 + 0x80) = fVar6;
    *(undefined1 *)(param_2 + 0x8c) = 1;
    fVar6 = 1.0 - (1.0 - fVar6) / (1.0 - fVar7);
    *(float *)(param_2 + 0x88) = fVar6;
  }
  if (fVar6 < 1.0) {
    return;
  }
LAB_03ebf184:
  lVar3 = *(long *)(param_2 + 0x90);
  if ((*(char *)(lVar3 + 0x24) != '\0') &&
     (plVar2 = *(long **)(lVar3 + 0x18), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,lVar3 + 8);
  }
  return;
}

