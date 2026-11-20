
undefined8 FUN_03ebf1bc(float param_1,long param_2,ulong param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  long local_60;
  long lStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = *(long *)(param_2 + 0x70);
  fVar7 = -1.0;
  uVar2 = *(ushort *)(lVar4 + 0x5a);
  if (-1 < (short)uVar2) {
    uVar5 = (ulong)uVar2;
    if (3 < uVar2) {
      uVar5 = 0;
    }
    if (*(long *)(lVar4 + uVar5 * 8) != 0) {
      plVar1 = (long *)(lVar4 + 0x28) + uVar2;
      if (3 < uVar2) {
        plVar1 = (long *)(lVar4 + 0x28);
      }
      *(undefined4 *)(*plVar1 + 0x7c) = *(undefined4 *)(param_2 + 0x78);
      fVar7 = *(float *)(param_2 + 0xa8);
      if (*(long *)(param_2 + 8) != 0) {
        uVar2 = *(ushort *)(*(long *)(param_2 + 0x70) + 0x5a);
        if ((short)uVar2 < 0) {
          uVar3 = 0;
        }
        else {
          uVar5 = (ulong)uVar2;
          if (3 < uVar2) {
            uVar5 = 0;
          }
          uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x70) + uVar5 * 8);
        }
        fVar6 = (float)FUN_03ebf3f0(param_2,*(long *)(param_2 + 8) + 8,uVar3,1,0,0);
        if (0.0 <= fVar6) {
          fVar7 = fVar6;
        }
      }
      local_50 = 0x3f800000;
      local_60 = *(long *)(param_2 + 0x18);
      lStack_58 = param_2;
      local_48 = param_4;
      FUN_03ed9d40(*(undefined8 *)
                    (*(long *)(*(long *)(local_60 + 0x10) + 0x40) +
                    (long)*(int *)(*(long *)(*(long *)(local_60 + 0x10) + 8) + 0x10) * 8),&local_60,
                   *(undefined8 *)(param_2 + 0x70),0,0);
    }
  }
  if ((param_3 & 1) == 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    *(undefined4 *)(lVar4 + 0x40) = 0;
    *(undefined4 *)(lVar4 + 0x28) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0;
  }
  else if (0.01 <= fVar7) {
    *(undefined8 *)(param_2 + 0x7c) = 0;
    *(undefined1 *)(param_2 + 0x8c) = 1;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(float *)(param_2 + 0x84) = 1.0 / fVar7;
    *(uint *)(param_4 + 0xb0) = *(uint *)(param_4 + 0xb0) | 1;
  }
  else {
    *(undefined1 **)(param_2 + 0x7c) = &DAT_3f8000003f800000;
    *(undefined4 *)(param_2 + 0x88) = 0x3f800000;
  }
  if (*(float *)(param_2 + 0x88) < 1.0) {
    fVar7 = *(float *)(param_2 + 0x7c) + param_1 * *(float *)(param_2 + 0x84);
    *(float *)(param_2 + 0x7c) = fVar7;
    if (1.0 <= fVar7) {
      *(undefined1 **)(param_2 + 0x7c) = &DAT_3f8000003f800000;
      *(undefined4 *)(param_2 + 0x88) = 0x3f800000;
    }
    else {
      if (*(char *)(param_2 + 0x8d) == '\0') {
        if (0.5 <= fVar7) {
          fVar7 = (1.0 - fVar7) + (1.0 - fVar7);
          fVar7 = fVar7 * fVar7 * -0.5 + 1.0;
        }
        else {
          fVar7 = (fVar7 + fVar7) * (fVar7 + fVar7) * 0.5;
        }
      }
      fVar6 = *(float *)(param_2 + 0x80);
      *(float *)(param_2 + 0x80) = fVar7;
      *(undefined1 *)(param_2 + 0x8c) = 1;
      *(float *)(param_2 + 0x88) = 1.0 - (1.0 - fVar7) / (1.0 - fVar6);
    }
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 **)(param_2 + 0x10) = &DAT_0407ebb1;
  *(undefined4 *)(param_2 + (1 - (long)*(int *)(param_2 + 0xf0)) * 0x10 + 0xc0) = 0;
  return 1;
}

