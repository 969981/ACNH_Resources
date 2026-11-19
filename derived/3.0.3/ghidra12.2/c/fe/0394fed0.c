
void FUN_0394fed0(float param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  void *__dest;
  undefined8 uVar5;
  float *pfVar6;
  long *plVar7;
  ulong uVar8;
  size_t __n;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  void *__src;
  float fVar13;
  float __x;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_80;
  undefined8 local_78;
  
  uVar4 = (**(code **)(*param_2 + 0x38))();
  switch(uVar4) {
  case 0:
    iVar2 = *(int *)(param_3 + ((ulong)*(uint *)(param_3 + 4) & 0xffffff) * 4);
    uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    *(bool *)uVar5 = iVar2 != 0;
    break;
  case 1:
    uVar11 = *(uint *)(param_3 + 4);
    uVar8 = (**(code **)(*param_2 + 0x60))(param_2);
    memcpy(&local_80,(void *)(param_3 + ((ulong)uVar11 & 0xffffff) * 4),uVar8 & 0xffffffff);
    fVar15 = (float)local_80;
    pfVar6 = (float *)(**(code **)(*param_2 + 0x48))(param_2);
    *pfVar6 = *pfVar6 + param_1 * fVar15;
    break;
  case 2:
  case 7:
  case 8:
  case 0xf:
  case 0x11:
    __dest = (void *)(**(code **)(*param_2 + 0x48))(param_2);
    __src = (void *)(param_3 + ((ulong)*(uint *)(param_3 + 4) & 0xffffff) * 4);
    uVar8 = (**(code **)(*param_2 + 0x60))(param_2);
    uVar11 = *(uint *)(param_3 + 4);
    uVar12 = (ulong)uVar11;
    __n = uVar8 & 0xffffffff;
    uVar8 = 4;
    switch(uVar11 >> 0x18) {
    case 0:
    case 1:
    case 2:
    case 0x11:
      break;
    case 3:
switchD_03950050_caseD_3:
      uVar8 = 8;
      break;
    case 4:
switchD_03950050_caseD_4:
      uVar8 = 0xc;
      break;
    case 5:
    case 6:
    case 0x10:
switchD_03950050_caseD_5:
      uVar8 = 0x10;
      break;
    case 7:
    case 8:
    case 0xf:
    case 0x14:
      lVar10 = 0;
      lVar9 = param_3 + (uVar12 & 0xffffff) * 4;
      uVar8 = 1;
      do {
        if (*(char *)(lVar9 + lVar10) == '\0') goto LAB_03950488;
        lVar1 = lVar9 + lVar10;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_0395047c;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_03950484;
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      break;
    case 9:
switchD_03950050_caseD_9:
      uVar8 = 0x80;
      break;
    case 10:
switchD_03950050_caseD_a:
      uVar8 = 0x100;
      break;
    case 0xb:
switchD_03950050_caseD_b:
      uVar8 = 0x180;
      break;
    case 0xc:
switchD_03950050_caseD_c:
      uVar8 = 0x200;
      break;
    case 0xd:
    case 0xe:
    case 0x12:
switchD_03950050_caseD_d:
      uVar8 = (ulong)*(uint *)(param_3 + (uVar12 & 0xffffff) * 4 + -4) << 2;
      break;
    case 0x13:
switchD_03950050_caseD_13:
      uVar8 = (ulong)*(uint *)(param_3 + (ulong)((uVar11 & 0xffffff) << 2) + -4);
      break;
    default:
switchD_03950050_default:
      uVar8 = 0;
    }
    goto switchD_03950050_caseD_0;
  case 3:
    uVar11 = *(uint *)(param_3 + 4);
    uVar8 = (**(code **)(*param_2 + 0x60))(param_2);
    memcpy(&local_80,(void *)(param_3 + ((ulong)uVar11 & 0xffffff) * 4),uVar8 & 0xffffffff);
    fVar15 = (float)local_80 * param_1;
    param_1 = local_80._4_4_ * param_1;
    pfVar6 = (float *)(**(code **)(*param_2 + 0x48))(param_2);
    *pfVar6 = fVar15 + *pfVar6;
    pfVar6[1] = param_1 + pfVar6[1];
    break;
  case 4:
    uVar11 = *(uint *)(param_3 + 4);
    uVar8 = (**(code **)(*param_2 + 0x60))(param_2);
    memcpy(&local_80,(void *)(param_3 + ((ulong)uVar11 & 0xffffff) * 4),uVar8 & 0xffffffff);
    fVar16 = local_80._4_4_ * param_1;
    fVar15 = (float)local_80 * param_1;
    param_1 = (float)local_78 * param_1;
    pfVar6 = (float *)(**(code **)(*param_2 + 0x48))(param_2);
    pfVar6[1] = fVar16 + pfVar6[1];
    *pfVar6 = fVar15 + *pfVar6;
    pfVar6[2] = param_1 + pfVar6[2];
    break;
  case 5:
    uVar11 = *(uint *)(param_3 + 4);
    uVar8 = (**(code **)(*param_2 + 0x60))(param_2);
    memcpy(&local_80,(void *)(param_3 + ((ulong)uVar11 & 0xffffff) * 4),uVar8 & 0xffffffff);
    goto LAB_03950334;
  case 6:
    local_80 = (undefined *)0x0;
    local_78 = 0x3f80000000000000;
    uVar11 = *(uint *)(param_3 + 4);
    uVar8 = (**(code **)(*param_2 + 0x60))(param_2);
    memcpy(&local_80,(void *)(param_3 + ((ulong)uVar11 & 0xffffff) * 4),uVar8 & 0xffffffff);
LAB_03950334:
    fVar17 = (float)local_78 * param_1;
    fVar16 = local_80._4_4_ * param_1;
    fVar15 = (float)local_80 * param_1;
    param_1 = local_78._4_4_ * param_1;
    pfVar6 = (float *)(**(code **)(*param_2 + 0x48))(param_2);
    *pfVar6 = fVar15 + *pfVar6;
    pfVar6[1] = fVar16 + pfVar6[1];
    pfVar6[2] = fVar17 + pfVar6[2];
    pfVar6[3] = param_1 + pfVar6[3];
    break;
  case 0xd:
  case 0xe:
  case 0x12:
  case 0x13:
    uVar8 = (**(code **)(*param_2 + 0x88))(param_2);
    if ((uVar8 & 1) == 0) break;
    __dest = (void *)(**(code **)(*param_2 + 0x48))(param_2);
    __src = (void *)(param_3 + ((ulong)*(uint *)(param_3 + 4) & 0xffffff) * 4);
    uVar8 = (**(code **)(*param_2 + 0x60))(param_2);
    uVar11 = *(uint *)(param_3 + 4);
    uVar12 = (ulong)uVar11;
    __n = uVar8 & 0xffffffff;
    uVar8 = 4;
    switch(uVar11 >> 0x18) {
    case 0:
    case 1:
    case 2:
    case 0x11:
      break;
    case 3:
      goto switchD_03950050_caseD_3;
    case 4:
      goto switchD_03950050_caseD_4;
    case 5:
    case 6:
    case 0x10:
      goto switchD_03950050_caseD_5;
    case 7:
    case 8:
    case 0xf:
    case 0x14:
      lVar10 = 0;
      lVar9 = param_3 + (uVar12 & 0xffffff) * 4;
      uVar8 = 1;
      do {
        if (*(char *)(lVar9 + lVar10) == '\0') goto LAB_03950488;
        lVar1 = lVar9 + lVar10;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_0395047c;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_03950484;
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      break;
    case 9:
      goto switchD_03950050_caseD_9;
    case 10:
      goto switchD_03950050_caseD_a;
    case 0xb:
      goto switchD_03950050_caseD_b;
    case 0xc:
      goto switchD_03950050_caseD_c;
    case 0xd:
    case 0xe:
    case 0x12:
      goto switchD_03950050_caseD_d;
    case 0x13:
      goto switchD_03950050_caseD_13;
    default:
      goto switchD_03950050_default;
    }
    goto switchD_03950050_caseD_0;
  case 0x10:
    uVar11 = *(uint *)(param_3 + 4);
    uVar8 = (**(code **)(*param_2 + 0x60))(param_2);
    memcpy(&local_80,(void *)(param_3 + ((ulong)uVar11 & 0xffffff) * 4),uVar8 & 0xffffffff);
    pfVar6 = (float *)(**(code **)(*param_2 + 0x48))(param_2);
    fVar15 = (float)local_80;
    fVar16 = local_80._4_4_;
    fVar17 = (float)local_78;
    fVar3 = local_78._4_4_;
    fVar13 = pfVar6[1] * local_80._4_4_ + (float)local_80 * *pfVar6 + (float)local_78 * pfVar6[2] +
             local_78._4_4_ * pfVar6[3];
    fVar18 = 1.0;
    if ((fVar13 <= 1.0) && (fVar18 = fVar13, fVar13 < -1.0)) {
      fVar18 = -1.0;
    }
    fVar13 = fVar18;
    if (fVar18 < 0.0) {
      fVar13 = -fVar18;
    }
    __x = acosf(fVar13);
    fVar14 = sinf(__x);
    fVar13 = -fVar14;
    if (0.0 <= fVar14) {
      fVar13 = fVar14;
    }
    if (1.1920929e-07 <= fVar13) {
      fVar13 = sinf(__x - __x * param_1);
      fVar13 = (1.0 / fVar14) * fVar13;
      param_1 = sinf(__x * param_1);
      param_1 = (1.0 / fVar14) * param_1;
    }
    else {
      fVar13 = 1.0 - param_1;
    }
    if (fVar18 < 0.0) {
      param_1 = -param_1;
    }
    *pfVar6 = fVar15 * param_1 + *pfVar6 * fVar13;
    pfVar6[1] = fVar16 * param_1 + pfVar6[1] * fVar13;
    pfVar6[3] = fVar3 * param_1 + pfVar6[3] * fVar13;
    pfVar6[2] = fVar17 * param_1 + pfVar6[2] * fVar13;
    break;
  case 0x14:
    local_78 = param_3 + ((ulong)*(uint *)(param_3 + 4) & 0xffffff) * 4;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    plVar7 = (long *)(**(code **)(*param_2 + 0x58))(param_2);
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_80);
  }
  goto switchD_0394ff2c_caseD_9;
LAB_0395047c:
  lVar10 = lVar10 + 1;
  goto LAB_03950488;
LAB_03950484:
  lVar10 = lVar10 + 2;
LAB_03950488:
  uVar8 = (ulong)((int)lVar10 + 1);
switchD_03950050_caseD_0:
  if (uVar8 <= __n) {
    __n = uVar8;
  }
  memcpy(__dest,__src,__n);
switchD_0394ff2c_caseD_9:
  lVar10 = param_3 + ((ulong)*(uint *)(param_3 + 4) & 0xffffff) * 4;
  uVar8 = 4;
  switch(*(uint *)(param_3 + 4) >> 0x18) {
  case 0:
  case 1:
  case 2:
  case 0x11:
    break;
  case 3:
    uVar8 = 8;
    break;
  case 4:
    uVar8 = 0xc;
    break;
  case 5:
  case 6:
  case 0x10:
    uVar8 = 0x10;
    break;
  case 7:
  case 8:
  case 0xf:
  case 0x14:
    lVar9 = 0;
    uVar8 = 1;
    do {
      if (*(char *)(lVar10 + lVar9) == '\0') {
LAB_0395057c:
        uVar8 = (ulong)((int)lVar9 + 1);
        break;
      }
      if (*(char *)(lVar10 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0395057c;
      }
      if (*(char *)(lVar10 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0395057c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    break;
  case 9:
    uVar8 = 0x80;
    break;
  case 10:
    uVar8 = 0x100;
    break;
  case 0xb:
    uVar8 = 0x180;
    break;
  case 0xc:
    uVar8 = 0x200;
    break;
  case 0xd:
  case 0xe:
  case 0x12:
    uVar8 = (ulong)*(uint *)(lVar10 + -4) << 2;
    break;
  case 0x13:
    uVar8 = (ulong)*(uint *)(lVar10 + -4);
    break;
  default:
    uVar8 = 0;
  }
  (**(code **)(*param_2 + 0x78))(param_2,lVar10,uVar8);
  return;
}

