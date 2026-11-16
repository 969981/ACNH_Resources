
void FUN_029f04d0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  float fVar9;
  undefined8 local_58;
  undefined4 local_50;
  undefined *local_48;
  long local_40;
  undefined1 local_38;
  
  if (((char)param_2[1] == '\0') && (*(int *)(param_1 + 0xc) != 0)) {
    lVar8 = *(long *)(param_1 + 0x20);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x20) == *(int *)(param_1 + 0x28))) {
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x10;
      if ((*(long *)(lVar8 + 0x28) != 0) && (*(long *)(lVar8 + 0x58) != 0)) {
        plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar8 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0x10))();
        (**(code **)(**(long **)(lVar8 + 0x58) + 0x38))(*(long **)(lVar8 + 0x58),0xffffffff);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  }
  uVar2 = *(byte *)(param_1 + 0x3c) - 1;
  *(char *)(param_1 + 0x3c) = (char)uVar2;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    if ((char)param_2[1] == '\0') {
      return;
    }
    goto LAB_029f07f0;
  case 1:
    if (uVar2 != 0) {
      return;
    }
    lVar8 = *param_2;
    if (lVar8 != 0) {
      local_58 = 0;
      local_50 = 0;
      lVar4 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x30) + 0x18) + 0x20))();
      if ((*(char *)(lVar4 + 0x78) != '\0') &&
         (uVar5 = FUN_03bf46a8(lVar8,"searchAndEmit(%s)",&DAT_0417e32c), (uVar5 & 1) != 0)) {
        local_38 = 0;
        local_48 = PTR_DAT_04bcadf8 + 0x10;
        local_40 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x18),&DAT_0417e32c);
        if (local_40 != 0) {
          FUN_03bf47b0(lVar8,&local_48,&local_58);
        }
      }
      *(undefined8 *)(param_1 + 0x20) = local_58;
      *(undefined4 *)(param_1 + 0x28) = local_50;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar2 = *(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0x10) << 0xb;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar1;
    uVar6 = 2;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    *(uint *)(param_1 + 0x1c) = uVar2;
    *(undefined1 *)(param_1 + 0x3c) = 3;
    fVar9 = ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * 0.6 + 0.0;
    *(float *)(param_1 + 0x34) = fVar9;
    *(float *)(param_1 + 0x38) = (1.0 - fVar9) / 3.0;
    break;
  case 2:
    if (uVar2 != 0) {
      fVar9 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38) * (float)uVar2;
LAB_029f07e8:
      *(float *)(param_1 + 0x30) = fVar9;
      return;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0x10) << 0xb;
    uVar1 = *(uint *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x34);
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    *(uint *)(param_1 + 0x1c) = uVar2;
    *(char *)(param_1 + 0x3c) = (char)((ulong)uVar2 * 0x39 >> 0x20) + '\x04';
    uVar6 = 3;
    break;
  case 3:
    if (uVar2 != 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x20);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x20) == *(int *)(param_1 + 0x28))) {
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x10;
      if ((*(long *)(lVar8 + 0x28) != 0) && (*(long *)(lVar8 + 0x58) != 0)) {
        plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar8 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0x10))();
        (**(code **)(**(long **)(lVar8 + 0x58) + 0x38))(*(long **)(lVar8 + 0x58),0xffffffff);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar2 = *(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0x10) << 0xb;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar1;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    *(uint *)(param_1 + 0x1c) = uVar2;
    uVar6 = 4;
    uVar2 = (int)((ulong)uVar2 * 0x1d >> 0x20) + 2;
    *(char *)(param_1 + 0x3c) = (char)uVar2;
    *(float *)(param_1 + 0x38) = (1.0 - *(float *)(param_1 + 0x34)) / (float)uVar2;
    break;
  case 4:
    if (uVar2 != 0) {
      fVar9 = 1.0 - *(float *)(param_1 + 0x38) * (float)uVar2;
      goto LAB_029f07e8;
    }
LAB_029f07f0:
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
    uVar2 = *(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0x10) << 0xb;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar1;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    *(uint *)(param_1 + 0x1c) = uVar2;
    *(char *)(param_1 + 0x3c) = (char)((ulong)uVar2 * 0x70 >> 0x20) + '\t';
    uVar6 = 1;
    break;
  default:
    goto switchD_029f05bc_default;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
switchD_029f05bc_default:
  return;
}

