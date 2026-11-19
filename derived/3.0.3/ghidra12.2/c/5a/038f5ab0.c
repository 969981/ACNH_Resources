
void FUN_038f5ab0(float *param_1,int param_2,float *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = 0.0;
  uVar2 = param_2 - 1;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  fVar10 = 0.0;
  fVar9 = 0.0;
  fVar7 = 0.0;
  switch(uVar2) {
  case 0:
  case 2:
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)param_3);
    goto LAB_038f5b24;
  case 1:
  case 3:
    fVar7 = (float)(int)*(char *)param_3;
LAB_038f5b24:
    *param_1 = fVar7;
joined_r0x038f5c24:
    if (0x68 < uVar2) {
      return;
    }
    switch(uVar2) {
    case 0:
    case 0xc:
    case 0x24:
      fVar4 = 255.0;
      break;
    case 1:
    case 0xd:
    case 0x25:
      fVar4 = 127.0;
      goto LAB_038f5cb8;
    default:
      goto switchD_038f5c78_caseD_2;
    case 0x11:
    case 0x29:
      fVar4 = 65535.0;
      break;
    case 0x12:
    case 0x2a:
      fVar4 = 32767.0;
LAB_038f5cb8:
      fVar6 = -1.0;
      if (-1.0 <= fVar7 / fVar4) {
        fVar6 = fVar7 / fVar4;
      }
      fVar7 = -1.0;
      if (-1.0 <= fVar9 / fVar4) {
        fVar7 = fVar9 / fVar4;
      }
      *param_1 = fVar6;
      param_1[1] = fVar7;
      fVar7 = -1.0;
      if (-1.0 <= fVar10 / fVar4) {
        fVar7 = fVar10 / fVar4;
      }
      fVar5 = fVar5 / fVar4;
LAB_038f5fe4:
      fVar4 = -1.0;
      if (-1.0 <= fVar5) {
        fVar4 = fVar5;
      }
      goto LAB_038f5fec;
    case 0x68:
switchD_038f5c78_caseD_68:
      fVar4 = -1.0;
      if (-1.0 <= fVar7 / 511.0) {
        fVar4 = fVar7 / 511.0;
      }
      fVar7 = -1.0;
      if (-1.0 <= fVar9 / 511.0) {
        fVar7 = fVar9 / 511.0;
      }
      *param_1 = fVar4;
      param_1[1] = fVar7;
      fVar7 = -1.0;
      if (-1.0 <= fVar10 / 511.0) {
        fVar7 = fVar10 / 511.0;
      }
      goto LAB_038f5fe4;
    }
    *param_1 = fVar7 / fVar4;
    param_1[1] = fVar9 / fVar4;
    fVar7 = fVar10 / fVar4;
    fVar4 = fVar5 / fVar4;
LAB_038f5fec:
    param_1[2] = fVar7;
    break;
  case 4:
  case 5:
  case 6:
  case 9:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    goto switchD_038f5ae4_caseD_4;
  case 7:
    fVar5 = (float)(uint)*(ushort *)param_3;
    goto LAB_038f5d0c;
  case 8:
    *param_1 = (float)(int)*(short *)param_3;
    return;
  case 10:
    fVar5 = *param_3;
LAB_038f5d0c:
    fVar5 = (float)NEON_ucvtf(fVar5);
    *param_1 = fVar5;
    return;
  case 0xb:
    *param_1 = (float)(int)*param_3;
    return;
  case 0xc:
  case 0xe:
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)param_3);
    *param_1 = fVar7;
    uVar8 = (uint)*(byte *)((long)param_3 + 1);
    goto LAB_038f5b6c;
  case 0xd:
  case 0xf:
    fVar7 = (float)(int)*(char *)param_3;
    *param_1 = fVar7;
    iVar3 = (int)*(char *)((long)param_3 + 1);
    goto LAB_038f5b84;
  case 0x10:
    uVar1 = *(ushort *)param_3;
    fVar5 = (float)((int)(short)uVar1 & 0x80000000);
    uVar2 = (int)(short)uVar1 & 0x7c00;
    if (uVar2 != 0) {
      uVar8 = (uint)fVar5 | (uint)uVar1 << 0xd;
      fVar5 = (float)(uVar2 * 0x2000 + 0x38000000 | (uVar1 & 0x3ff) << 0xd | (uint)fVar5);
      if (uVar2 == 0x7c00) {
        fVar5 = (float)(uVar8 | 0x7f800000);
      }
    }
    *param_1 = fVar5;
    uVar1 = *(ushort *)((long)param_3 + 2);
    fVar5 = (float)((int)(short)uVar1 & 0x80000000);
    uVar2 = (int)(short)uVar1 & 0x7c00;
    if (uVar2 != 0) {
      uVar8 = (uint)fVar5 | (uint)uVar1 << 0xd;
      fVar5 = (float)(uVar2 * 0x2000 + 0x38000000 | (uVar1 & 0x3ff) << 0xd | (uint)fVar5);
      if (uVar2 == 0x7c00) {
        fVar5 = (float)(uVar8 | 0x7f800000);
      }
    }
    param_1[1] = fVar5;
    return;
  case 0x11:
  case 0x13:
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)param_3);
    *param_1 = fVar7;
    uVar8 = (uint)*(ushort *)((long)param_3 + 2);
LAB_038f5b6c:
    fVar9 = (float)NEON_ucvtf(uVar8);
LAB_038f5b88:
    param_1[1] = fVar9;
    goto joined_r0x038f5c24;
  case 0x12:
  case 0x14:
    fVar7 = (float)(int)*(short *)param_3;
    *param_1 = fVar7;
    iVar3 = (int)*(short *)((long)param_3 + 2);
LAB_038f5b84:
    fVar9 = (float)iVar3;
    goto LAB_038f5b88;
  case 0x15:
    fVar7 = *param_3;
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    *param_1 = fVar9;
    fVar7 = param_3[1];
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    param_1[1] = fVar9;
    return;
  case 0x16:
    fVar5 = (float)NEON_ucvtf(*param_3);
    *param_1 = fVar5;
    fVar5 = (float)NEON_ucvtf(param_3[1]);
    param_1[1] = fVar5;
    return;
  case 0x17:
    *param_1 = (float)(int)*param_3;
    param_1[1] = (float)(int)param_3[1];
    return;
  case 0x21:
    fVar7 = *param_3;
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    *param_1 = fVar9;
    fVar7 = param_3[1];
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    param_1[1] = fVar9;
    fVar7 = param_3[2];
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    param_1[2] = fVar9;
    return;
  case 0x22:
  case 0x23:
    fVar5 = (float)NEON_ucvtf(*param_3);
    *param_1 = fVar5;
    fVar5 = (float)NEON_ucvtf(param_3[1]);
    param_1[1] = fVar5;
    fVar5 = (float)NEON_ucvtf(param_3[2]);
    param_1[2] = fVar5;
    return;
  case 0x24:
  case 0x26:
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)param_3);
    *param_1 = fVar7;
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)((long)param_3 + 1));
    param_1[1] = fVar9;
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)((long)param_3 + 2));
    param_1[2] = fVar10;
    uVar8 = (uint)*(byte *)((long)param_3 + 3);
    goto LAB_038f5c18;
  case 0x25:
  case 0x27:
    fVar7 = (float)(int)*(char *)param_3;
    *param_1 = fVar7;
    fVar9 = (float)(int)*(char *)((long)param_3 + 1);
    param_1[1] = fVar9;
    fVar10 = (float)(int)*(char *)((long)param_3 + 2);
    param_1[2] = fVar10;
    iVar3 = (int)*(char *)((long)param_3 + 3);
    goto LAB_038f5c54;
  case 0x28:
    uVar1 = *(ushort *)param_3;
    fVar5 = (float)((int)(short)uVar1 & 0x80000000);
    uVar2 = (int)(short)uVar1 & 0x7c00;
    if (uVar2 != 0) {
      if (uVar2 == 0x7c00) {
        fVar5 = (float)((uint)fVar5 | (uint)uVar1 << 0xd | 0x7f800000);
      }
      else {
        fVar5 = (float)(uVar2 * 0x2000 + 0x38000000 | (uVar1 & 0x3ff) << 0xd | (uint)fVar5);
      }
    }
    *param_1 = fVar5;
    uVar1 = *(ushort *)((long)param_3 + 2);
    fVar5 = (float)((int)(short)uVar1 & 0x80000000);
    uVar2 = (int)(short)uVar1 & 0x7c00;
    if (uVar2 != 0) {
      if (uVar2 == 0x7c00) {
        fVar5 = (float)((uint)fVar5 | (uint)uVar1 << 0xd | 0x7f800000);
      }
      else {
        fVar5 = (float)(uVar2 * 0x2000 + 0x38000000 | (uVar1 & 0x3ff) << 0xd | (uint)fVar5);
      }
    }
    param_1[1] = fVar5;
    uVar1 = *(ushort *)(param_3 + 1);
    fVar5 = (float)((int)(short)uVar1 & 0x80000000);
    uVar2 = (int)(short)uVar1 & 0x7c00;
    if (uVar2 != 0) {
      if (uVar2 == 0x7c00) {
        fVar5 = (float)((uint)fVar5 | (uint)uVar1 << 0xd | 0x7f800000);
      }
      else {
        fVar5 = (float)(uVar2 * 0x2000 + 0x38000000 | (uVar1 & 0x3ff) << 0xd | (uint)fVar5);
      }
    }
    param_1[2] = fVar5;
    uVar1 = *(ushort *)((long)param_3 + 6);
    fVar5 = (float)((int)(short)uVar1 & 0x80000000);
    uVar2 = (int)(short)uVar1 & 0x7c00;
    if (uVar2 != 0) {
      if (uVar2 == 0x7c00) {
        param_1[3] = (float)((uint)fVar5 | (uint)uVar1 << 0xd | 0x7f800000);
        return;
      }
      fVar5 = (float)(uVar2 * 0x2000 + 0x38000000 | (uVar1 & 0x3ff) << 0xd | (uint)fVar5);
    }
    param_1[3] = fVar5;
    return;
  case 0x29:
  case 0x2b:
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)param_3);
    *param_1 = fVar7;
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_3 + 2));
    param_1[1] = fVar9;
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 1));
    param_1[2] = fVar10;
    uVar8 = (uint)*(ushort *)((long)param_3 + 6);
LAB_038f5c18:
    fVar5 = (float)NEON_ucvtf(uVar8);
    param_1[3] = fVar5;
    goto joined_r0x038f5c24;
  case 0x2a:
  case 0x2c:
    fVar7 = (float)(int)*(short *)param_3;
    *param_1 = fVar7;
    fVar9 = (float)(int)*(short *)((long)param_3 + 2);
    param_1[1] = fVar9;
    fVar10 = (float)(int)*(short *)(param_3 + 1);
    param_1[2] = fVar10;
    iVar3 = (int)*(short *)((long)param_3 + 6);
LAB_038f5c54:
    fVar5 = (float)iVar3;
    param_1[3] = fVar5;
switchD_038f5ae4_caseD_4:
    goto joined_r0x038f5c24;
  case 0x2d:
    fVar7 = *param_3;
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    *param_1 = fVar9;
    fVar7 = param_3[1];
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    param_1[1] = fVar9;
    fVar7 = param_3[2];
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    param_1[2] = fVar9;
    fVar7 = param_3[3];
    fVar5 = (float)((uint)fVar7 & 0x80000000);
    if (((uint)fVar7 & 0x7f800000) != 0) {
      fVar5 = fVar7;
    }
    fVar9 = (float)((uint)fVar7 | 0x7f800000);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) {
      fVar9 = fVar5;
    }
    param_1[3] = fVar9;
    return;
  case 0x2e:
    fVar5 = (float)NEON_ucvtf(*param_3);
    *param_1 = fVar5;
    fVar5 = (float)NEON_ucvtf(param_3[1]);
    param_1[1] = fVar5;
    fVar5 = (float)NEON_ucvtf(param_3[2]);
    param_1[2] = fVar5;
    fVar4 = (float)NEON_ucvtf(param_3[3]);
    break;
  case 0x2f:
    *param_1 = (float)(int)*param_3;
    param_1[1] = (float)(int)param_3[1];
    param_1[2] = (float)(int)param_3[2];
    fVar4 = (float)(int)param_3[3];
    break;
  case 0x68:
    fVar5 = *param_3;
    fVar7 = (float)(int)(-((uint)fVar5 >> 9 & 1) & 0xfffffe00 | (uint)fVar5 & 0x1ff);
    fVar9 = (float)(int)(-((uint)fVar5 >> 0x13 & 1) & 0xfffffe00 | (uint)fVar5 >> 10 & 0x1ff);
    fVar10 = (float)(int)(-((uint)fVar5 >> 0x1d & 1) & 0xfffffe00 | (uint)fVar5 >> 0x14 & 0x1ff);
    fVar5 = (float)(int)((int)fVar5 >> 0x1f & 0xfffffffeU | (uint)fVar5 >> 0x1e & 1);
    goto switchD_038f5c78_caseD_68;
  default:
    fVar10 = 0.0;
    fVar9 = 0.0;
    fVar7 = 0.0;
    goto joined_r0x038f5c24;
  }
  param_1[3] = fVar4;
switchD_038f5c78_caseD_2:
  return;
}

