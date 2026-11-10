
undefined8 FUN_0031c87c(char *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  uint uVar2;
  size_t __n;
  char cVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  void *__s;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  size_t __n_00;
  ulong uVar21;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(param_1 + 0xa0);
  if (*(char *)(lVar9 + 0x792) == '\0') {
    if ((((*(long *)(*(long *)(param_1 + 0x240) + 0x290) == 0) ||
         (*(long *)(*(long *)(**(long **)(param_1 + 0x4d0) + 0x28) + 0x48) == 0)) &&
        ((*(int *)(lVar9 + 0x9a0) < 1 ||
         ((*(long *)(param_1 + 0x470) == 0 || (*(long *)(*(long *)(param_1 + 0x470) + 0x48) == 0))))
        )) && ((*(int *)(lVar9 + 0x964) == 0 ||
               ((*(long *)(param_1 + 0x478) == 0 ||
                (*(long *)(*(long *)(param_1 + 0x478) + 0x48) == 0)))))) {
      if (*(int *)(*(long *)(param_1 + 0x240) + 0x340) < 1) goto LAB_0031c8b0;
      bVar5 = false;
      if (*(long *)(param_1 + 0x480) != 0) {
        bVar5 = *(long *)(*(long *)(param_1 + 0x480) + 0x48) != 0;
      }
    }
    else {
      bVar5 = true;
    }
  }
  else {
LAB_0031c8b0:
    bVar5 = false;
  }
  uVar6 = *(uint *)(param_1 + 0x24);
  param_1[0x670] = bVar5;
  if (uVar6 == 0) {
    uVar6 = FUN_0031db00(param_1,param_3);
    if (uVar6 == 0) {
      FUN_0032c600(**(long **)(param_1 + 0x4d0) + 0x14,param_1,2);
      return 0;
    }
LAB_0031c970:
    if (*(uint *)(param_1 + 0x230) == uVar6) goto LAB_0031d00c;
  }
  else {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x240) + 0x10) + 0x8bc) != 0) goto LAB_0031c970;
    cVar3 = *(char *)(*(long *)(*(long *)(param_1 + 0x240) + 0x10) + 0x880);
    if (cVar3 == '\r') {
      uVar6 = *(int *)(lVar9 + 0x8d0) * uVar6;
      if (*(uint *)(param_1 + 0x230) == uVar6) goto LAB_0031d00c;
    }
    else {
      if (cVar3 != '\x02') goto LAB_0031c970;
      uVar6 = *(int *)(lVar9 + 0x8c8) * uVar6;
      if (*(uint *)(param_1 + 0x230) == uVar6) goto LAB_0031d00c;
    }
  }
  FUN_0031c0c0(param_1);
  if (*(long *)(param_1 + 0x228) != 0) {
    *(int *)(param_1 + 0x9c0) = *(int *)(param_1 + 0x9c0) + -1;
    (**(code **)(**(long **)(param_1 + 0x9b0) + 0x18))();
    param_1[0x228] = '\0';
    param_1[0x229] = '\0';
    param_1[0x22a] = '\0';
    param_1[0x22b] = '\0';
    param_1[0x22c] = '\0';
    param_1[0x22d] = '\0';
    param_1[0x22e] = '\0';
    param_1[0x22f] = '\0';
  }
  if (*(long *)(param_1 + 0x770) != 0) {
    FUN_0031e980(*(undefined8 *)(param_1 + 0x780),*(long *)(param_1 + 0x770),0);
    param_1[0x770] = '\0';
    param_1[0x771] = '\0';
    param_1[0x772] = '\0';
    param_1[0x773] = '\0';
    param_1[0x774] = '\0';
    param_1[0x775] = '\0';
    param_1[0x776] = '\0';
    param_1[0x777] = '\0';
  }
  cVar3 = *(char *)(*(long *)(param_1 + 0xa0) + 0x792);
  cVar4 = *(char *)(**(long **)(param_1 + 0x4d0) + 0x10);
  local_70 = 0;
  uStack_68 = 0;
  uVar8 = uVar6;
  if ((uVar6 & 0x80000001) == 1) {
    uVar8 = uVar6 + 1;
  }
  uVar2 = uVar8 + 0x1f & 0xffffffe0;
  if (cVar3 != '\x02') {
    uVar2 = uVar8;
  }
  FUN_0034fb50(&local_70);
  local_70 = CONCAT44(0x44,(undefined4)local_70);
  lVar9 = FUN_00347a58(param_2,&local_70);
  uVar21 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
  lVar12 = uVar21 - 1;
  uVar10 = lVar9 + lVar12 & -lVar9;
  if (cVar3 == '\0') {
    lVar9 = 0xb;
    if (cVar4 != '\0') {
      lVar9 = 0x10;
    }
    if ((*param_1 != '\0') && (lVar9 = 0xf, cVar4 != '\0')) {
      lVar9 = 0x16;
    }
    lVar9 = uVar10 * lVar9;
  }
  else {
    lVar9 = uVar10 * 6;
    if (*param_1 != '\0') {
      lVar9 = uVar10 << 3;
    }
  }
  lVar7 = *(long *)(param_1 + 0x790);
  cVar16 = *(char *)(*(long *)(param_1 + 0xa0) + 0x793);
  *(long *)(param_1 + 0x780) = lVar7;
  lVar11 = 0;
  if (cVar16 != '\0') {
    lVar11 = uVar10 * 3;
  }
  *(long *)(param_1 + 0x788) = lVar9 + lVar11;
  lVar9 = FUN_0031e790(lVar7,lVar9 + lVar11,*(undefined8 *)(lVar7 + 0x1c8));
  *(long *)(param_1 + 0x770) = lVar9;
  if (lVar9 == 0) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x780);
  param_1[0x778] = '\0';
  param_1[0x779] = '\0';
  param_1[0x77a] = '\0';
  param_1[0x77b] = '\0';
  param_1[0x77c] = '\0';
  param_1[0x77d] = '\0';
  param_1[0x77e] = '\0';
  param_1[0x77f] = '\0';
  uVar13 = *(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8);
  uVar10 = *(ulong *)(param_1 + 0x788);
  if (uVar10 < uVar13) {
    uVar13 = 0;
    lVar7 = 0;
  }
  else {
    *(ulong *)(param_1 + 0x778) = uVar13;
    lVar7 = lVar9;
  }
  *(long *)(param_1 + 200) = lVar7;
  uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
  if (uVar10 < uVar14) {
    lVar19 = 0;
    uVar14 = uVar13;
  }
  else {
    lVar19 = lVar9 + uVar13;
    *(ulong *)(param_1 + 0x778) = uVar14;
  }
  *(long *)(param_1 + 0xd0) = lVar19;
  uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
  if (uVar10 < uVar13) {
    lVar18 = 0;
    param_1[0xd8] = '\0';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    uVar13 = uVar14;
    if (cVar3 != '\0') goto LAB_0031cb5c;
LAB_0031cba4:
    uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
    if (uVar10 < uVar14) {
      lVar7 = 0;
      uVar14 = uVar13;
    }
    else {
      lVar7 = lVar9 + uVar13;
      *(ulong *)(param_1 + 0x778) = uVar14;
    }
    *(long *)(param_1 + 0x120) = lVar7;
    uVar15 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
    if (uVar10 < uVar15) {
      lVar7 = 0;
      uVar15 = uVar14;
    }
    else {
      lVar7 = lVar9 + uVar14;
      *(ulong *)(param_1 + 0x778) = uVar15;
    }
    *(long *)(param_1 + 0x128) = lVar7;
    uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar15;
    if (uVar10 < uVar13) {
      lVar7 = 0;
      uVar13 = uVar15;
    }
    else {
      lVar7 = lVar9 + uVar15;
      *(ulong *)(param_1 + 0x778) = uVar13;
    }
    *(long *)(param_1 + 0x130) = lVar7;
    if (cVar4 != '\0') {
      uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
      if (uVar10 < uVar14) {
        lVar7 = 0;
        uVar14 = uVar13;
      }
      else {
        lVar7 = lVar9 + uVar13;
        *(ulong *)(param_1 + 0x778) = uVar14;
      }
      *(long *)(param_1 + 0x178) = lVar7;
      uVar15 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
      if (uVar10 < uVar15) {
        lVar7 = 0;
        uVar15 = uVar14;
      }
      else {
        lVar7 = lVar9 + uVar14;
        *(ulong *)(param_1 + 0x778) = uVar15;
      }
      *(long *)(param_1 + 0x180) = lVar7;
      uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar15;
      if (uVar10 < uVar13) {
        lVar18 = 0;
        uVar13 = uVar15;
      }
      else {
        lVar18 = lVar9 + uVar15;
        *(ulong *)(param_1 + 0x778) = uVar13;
      }
      goto LAB_0031cb68;
    }
  }
  else {
    lVar18 = lVar9 + uVar14;
    *(ulong *)(param_1 + 0x778) = uVar13;
    *(long *)(param_1 + 0xd8) = lVar18;
    if (cVar3 == '\0') goto LAB_0031cba4;
LAB_0031cb5c:
    *(long *)(param_1 + 0x120) = lVar7;
    *(long *)(param_1 + 0x128) = lVar19;
    *(long *)(param_1 + 0x130) = lVar18;
    *(long *)(param_1 + 0x178) = lVar7;
    *(long *)(param_1 + 0x180) = lVar19;
LAB_0031cb68:
    *(long *)(param_1 + 0x188) = lVar18;
  }
  uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
  if (uVar10 < uVar14) {
    lVar7 = 0;
    uVar14 = uVar13;
  }
  else {
    lVar7 = lVar9 + uVar13;
    *(ulong *)(param_1 + 0x778) = uVar14;
  }
  *(long *)(param_1 + 0xe0) = lVar7;
  uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
  if (uVar10 < uVar13) {
    lVar19 = 0;
    param_1[0xf0] = '\0';
    param_1[0xf1] = '\0';
    param_1[0xf2] = '\0';
    param_1[0xf3] = '\0';
    param_1[0xf4] = '\0';
    param_1[0xf5] = '\0';
    param_1[0xf6] = '\0';
    param_1[0xf7] = '\0';
    uVar13 = uVar14;
    if (cVar3 != '\0') goto LAB_0031cc00;
LAB_0031cc80:
    uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
    if (uVar10 < uVar14) {
      lVar7 = 0;
      uVar14 = uVar13;
    }
    else {
      lVar7 = lVar9 + uVar13;
      *(ulong *)(param_1 + 0x778) = uVar14;
    }
    *(long *)(param_1 + 0x138) = lVar7;
    uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
    if (uVar10 < uVar13) {
      lVar7 = 0;
      uVar13 = uVar14;
    }
    else {
      lVar7 = lVar9 + uVar14;
      *(ulong *)(param_1 + 0x778) = uVar13;
    }
    *(long *)(param_1 + 0x148) = lVar7;
    if (cVar4 != '\0') {
      uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
      if (uVar10 < uVar14) {
        lVar7 = 0;
        uVar14 = uVar13;
      }
      else {
        lVar7 = lVar9 + uVar13;
        *(ulong *)(param_1 + 0x778) = uVar14;
      }
      *(long *)(param_1 + 400) = lVar7;
      uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
      if (uVar10 < uVar13) {
        lVar19 = 0;
        uVar13 = uVar14;
      }
      else {
        lVar19 = lVar9 + uVar14;
        *(ulong *)(param_1 + 0x778) = uVar13;
      }
      goto LAB_0031cc0c;
    }
  }
  else {
    lVar19 = lVar9 + uVar14;
    *(ulong *)(param_1 + 0x778) = uVar13;
    *(long *)(param_1 + 0xf0) = lVar19;
    if (cVar3 == '\0') goto LAB_0031cc80;
LAB_0031cc00:
    *(long *)(param_1 + 0x138) = lVar7;
    *(long *)(param_1 + 0x148) = lVar19;
    *(long *)(param_1 + 400) = lVar7;
LAB_0031cc0c:
    *(long *)(param_1 + 0x1a0) = lVar19;
  }
  uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
  if (uVar10 < uVar14) {
    cVar16 = *param_1;
    param_1[0xe8] = '\0';
    param_1[0xe9] = '\0';
    param_1[0xea] = '\0';
    param_1[0xeb] = '\0';
    param_1[0xec] = '\0';
    param_1[0xed] = '\0';
    param_1[0xee] = '\0';
    param_1[0xef] = '\0';
    param_1[0x140] = '\0';
    param_1[0x141] = '\0';
    param_1[0x142] = '\0';
    param_1[0x143] = '\0';
    param_1[0x144] = '\0';
    param_1[0x145] = '\0';
    param_1[0x146] = '\0';
    param_1[0x147] = '\0';
    param_1[0x198] = '\0';
    param_1[0x199] = '\0';
    param_1[0x19a] = '\0';
    param_1[0x19b] = '\0';
    param_1[0x19c] = '\0';
    param_1[0x19d] = '\0';
    param_1[0x19e] = '\0';
    param_1[0x19f] = '\0';
    uVar14 = uVar13;
    if (cVar16 != '\0') goto LAB_0031cc48;
LAB_0031ccc8:
    param_1[0xf8] = '\0';
    param_1[0xf9] = '\0';
    param_1[0xfa] = '\0';
    param_1[0xfb] = '\0';
    param_1[0xfc] = '\0';
    param_1[0xfd] = '\0';
    param_1[0xfe] = '\0';
    param_1[0xff] = '\0';
    param_1[0x100] = '\0';
    param_1[0x101] = '\0';
    param_1[0x102] = '\0';
    param_1[0x103] = '\0';
    param_1[0x104] = '\0';
    param_1[0x105] = '\0';
    param_1[0x106] = '\0';
    param_1[0x107] = '\0';
    param_1[0x150] = '\0';
    param_1[0x151] = '\0';
    param_1[0x152] = '\0';
    param_1[0x153] = '\0';
    param_1[0x154] = '\0';
    param_1[0x155] = '\0';
    param_1[0x156] = '\0';
    param_1[0x157] = '\0';
    param_1[0x158] = '\0';
    param_1[0x159] = '\0';
    param_1[0x15a] = '\0';
    param_1[0x15b] = '\0';
    param_1[0x15c] = '\0';
    param_1[0x15d] = '\0';
    param_1[0x15e] = '\0';
    param_1[0x15f] = '\0';
  }
  else {
    lVar7 = lVar9 + uVar13;
    *(ulong *)(param_1 + 0x778) = uVar14;
    cVar16 = *param_1;
    *(long *)(param_1 + 0xe8) = lVar7;
    *(long *)(param_1 + 0x140) = lVar7;
    *(long *)(param_1 + 0x198) = lVar7;
    if (cVar16 == '\0') goto LAB_0031ccc8;
LAB_0031cc48:
    uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
    if (uVar10 < uVar13) {
      lVar7 = 0;
      uVar13 = uVar14;
    }
    else {
      lVar7 = lVar9 + uVar14;
      *(ulong *)(param_1 + 0x778) = uVar13;
    }
    *(long *)(param_1 + 0xf8) = lVar7;
    uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
    if (uVar10 < uVar14) {
      lVar19 = 0;
      param_1[0x100] = '\0';
      param_1[0x101] = '\0';
      param_1[0x102] = '\0';
      param_1[0x103] = '\0';
      param_1[0x104] = '\0';
      param_1[0x105] = '\0';
      param_1[0x106] = '\0';
      param_1[0x107] = '\0';
    }
    else {
      lVar19 = lVar9 + uVar13;
      *(ulong *)(param_1 + 0x778) = uVar14;
      *(long *)(param_1 + 0x100) = lVar19;
      uVar13 = uVar14;
    }
    if (cVar3 == '\0') {
      uVar15 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
      if (uVar10 < uVar15) {
        lVar7 = 0;
        uVar15 = uVar13;
      }
      else {
        lVar7 = lVar9 + uVar13;
        *(ulong *)(param_1 + 0x778) = uVar15;
      }
      *(long *)(param_1 + 0x150) = lVar7;
      uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar15;
      if (uVar10 < uVar14) {
        lVar7 = 0;
        uVar14 = uVar15;
      }
      else {
        lVar7 = lVar9 + uVar15;
        *(ulong *)(param_1 + 0x778) = uVar14;
      }
      *(long *)(param_1 + 0x158) = lVar7;
      if (cVar4 != '\0') {
        uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
        if (uVar10 < uVar13) {
          lVar7 = 0;
          uVar13 = uVar14;
        }
        else {
          lVar7 = lVar9 + uVar14;
          *(ulong *)(param_1 + 0x778) = uVar13;
        }
        *(long *)(param_1 + 0x1a8) = lVar7;
        uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
        if (uVar10 < uVar14) {
          param_1[0x1b0] = '\0';
          param_1[0x1b1] = '\0';
          param_1[0x1b2] = '\0';
          param_1[0x1b3] = '\0';
          param_1[0x1b4] = '\0';
          param_1[0x1b5] = '\0';
          param_1[0x1b6] = '\0';
          param_1[0x1b7] = '\0';
          uVar14 = uVar13;
        }
        else {
          *(ulong *)(param_1 + 0x778) = uVar14;
          *(ulong *)(param_1 + 0x1b0) = lVar9 + uVar13;
        }
      }
    }
    else {
      *(long *)(param_1 + 0x150) = lVar7;
      *(long *)(param_1 + 0x158) = lVar19;
      *(long *)(param_1 + 0x1a8) = lVar7;
      *(long *)(param_1 + 0x1b0) = lVar19;
      uVar14 = uVar13;
    }
  }
  lVar7 = (long)(int)uVar2;
  if (*(char *)(*(long *)(param_1 + 0xa0) + 0x793) == '\0') {
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    param_1[0x118] = '\0';
    param_1[0x119] = '\0';
    param_1[0x11a] = '\0';
    param_1[0x11b] = '\0';
    param_1[0x11c] = '\0';
    param_1[0x11d] = '\0';
    param_1[0x11e] = '\0';
    param_1[0x11f] = '\0';
    param_1[0x108] = '\0';
    param_1[0x109] = '\0';
    param_1[0x10a] = '\0';
    param_1[0x10b] = '\0';
    param_1[0x10c] = '\0';
    param_1[0x10d] = '\0';
    param_1[0x10e] = '\0';
    param_1[0x10f] = '\0';
    param_1[0x170] = '\0';
    param_1[0x171] = '\0';
    param_1[0x172] = '\0';
    param_1[0x173] = '\0';
    param_1[0x174] = '\0';
    param_1[0x175] = '\0';
    param_1[0x176] = '\0';
    param_1[0x177] = '\0';
    param_1[0x1c8] = '\0';
    param_1[0x1c9] = '\0';
    param_1[0x1ca] = '\0';
    param_1[0x1cb] = '\0';
    param_1[0x1cc] = '\0';
    param_1[0x1cd] = '\0';
    param_1[0x1ce] = '\0';
    param_1[0x1cf] = '\0';
    param_1[0x160] = '\0';
    param_1[0x161] = '\0';
    param_1[0x162] = '\0';
    param_1[0x163] = '\0';
    param_1[0x164] = '\0';
    param_1[0x165] = '\0';
    param_1[0x166] = '\0';
    param_1[0x167] = '\0';
    param_1[0x168] = '\0';
    param_1[0x169] = '\0';
    param_1[0x16a] = '\0';
    param_1[0x16b] = '\0';
    param_1[0x16c] = '\0';
    param_1[0x16d] = '\0';
    param_1[0x16e] = '\0';
    param_1[0x16f] = '\0';
    param_1[0x1b8] = '\0';
    param_1[0x1b9] = '\0';
    param_1[0x1ba] = '\0';
    param_1[0x1bb] = '\0';
    param_1[0x1bc] = '\0';
    param_1[0x1bd] = '\0';
    param_1[0x1be] = '\0';
    param_1[0x1bf] = '\0';
    param_1[0x1c0] = '\0';
    param_1[0x1c1] = '\0';
    param_1[0x1c2] = '\0';
    param_1[0x1c3] = '\0';
    param_1[0x1c4] = '\0';
    param_1[0x1c5] = '\0';
    param_1[0x1c6] = '\0';
    param_1[0x1c7] = '\0';
  }
  else {
    uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
    if (uVar10 < uVar13) {
      lVar19 = 0;
      uVar13 = uVar14;
    }
    else {
      lVar19 = lVar9 + uVar14;
      *(ulong *)(param_1 + 0x778) = uVar13;
    }
    *(long *)(param_1 + 0x108) = lVar19;
    uVar14 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar13;
    if (uVar10 < uVar14) {
      lVar18 = 0;
      uVar14 = uVar13;
    }
    else {
      lVar18 = lVar9 + uVar13;
      *(ulong *)(param_1 + 0x778) = uVar14;
    }
    *(long *)(param_1 + 0x110) = lVar18;
    lVar20 = 0;
    uVar13 = (*(long *)(lVar11 + 0x1c8) + lVar12 & -*(long *)(lVar11 + 0x1c8)) + uVar14;
    if (uVar13 <= uVar10) {
      lVar20 = lVar9 + uVar14;
      *(ulong *)(param_1 + 0x778) = uVar13;
    }
    *(long *)(param_1 + 0x118) = lVar20;
    *(long *)(param_1 + 0x170) = lVar20;
    *(long *)(param_1 + 0x1c8) = lVar20;
    *(long *)(param_1 + 0x160) = lVar19;
    *(long *)(param_1 + 0x168) = lVar18;
    *(long *)(param_1 + 0x1b8) = lVar19;
    *(long *)(param_1 + 0x1c0) = lVar18;
  }
  uVar10 = 0;
  __n_00 = lVar7 * 0x20;
  *(char **)(param_1 + 0xc0) = param_1 + (ulong)*(uint *)(param_1 + 0x30) * 0x58 + 200;
  __n = 0;
  if (*(int *)(*(long *)(param_1 + 0x240) + 0x88) != 0) {
    __n = (long)(int)uVar2 * 0x158;
  }
  if (cVar3 == '\0') {
    uVar8 = 6;
    if (cVar16 != '\0') {
      uVar8 = 8;
    }
    if (*(char *)(*(long *)(param_1 + 0xa0) + 0x793) != '\0') {
      uVar8 = uVar8 + 6;
    }
    uVar10 = (ulong)uVar8;
  }
  lVar9 = __n + __n_00 + uVar10 * uVar21;
  __s = (void *)(**(code **)(**(long **)(param_1 + 0x9b0) + 0x10))
                          (*(long **)(param_1 + 0x9b0),lVar9,0x20);
  if (__s == (void *)0x0) {
    param_1[0x228] = '\0';
    param_1[0x229] = '\0';
    param_1[0x22a] = '\0';
    param_1[0x22b] = '\0';
    param_1[0x22c] = '\0';
    param_1[0x22d] = '\0';
    param_1[0x22e] = '\0';
    param_1[0x22f] = '\0';
    return 0;
  }
  *(void **)(param_1 + 0x228) = __s;
  *(void **)(param_1 + 0xb0) = __s;
  *(long *)(param_1 + 0x9b8) = *(long *)(param_1 + 0x9b8) + lVar9;
  *(int *)(param_1 + 0x9c0) = *(int *)(param_1 + 0x9c0) + 1;
  memset(__s,0,__n_00);
  if (cVar3 == '\0') {
    pvVar1 = (void *)((long)__s + __n_00);
    __n_00 = lVar7 * 0x80;
    *(void **)(param_1 + 0x1d0) = pvVar1;
    *(void **)(param_1 + 0x1d8) = (void *)((long)__s + (long)(int)uVar2 * 0x30);
    *(void **)(param_1 + 0x1e0) = (void *)((long)__s + lVar7 * 0x40);
    *(void **)(param_1 + 0x1e8) = (void *)((long)__s + (long)(int)uVar2 * 0x50);
    *(void **)(param_1 + 0x1f0) = (void *)((long)__s + (long)(int)uVar2 * 0x60);
    *(void **)(param_1 + 0x1f8) = (void *)((long)__s + (long)(int)uVar2 * 0x70);
    if (*param_1 != '\0') {
      *(void **)(param_1 + 0x200) = (void *)((long)__s + __n_00);
      __n_00 = lVar7 * 0xa0;
      *(void **)(param_1 + 0x208) = (void *)((long)__s + (long)(int)uVar2 * 0x90);
    }
    if (*(char *)(*(long *)(param_1 + 0xa0) + 0x793) != '\0') {
      *(size_t *)(param_1 + 0x210) = (long)__s + __n_00;
      lVar9 = __n_00 + uVar21 + uVar21;
      *(size_t *)(param_1 + 0x218) = (long)__s + __n_00 + uVar21;
      lVar12 = (long)__s + lVar9;
      __n_00 = lVar9 + uVar21;
      goto LAB_0031cfd0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0x108);
    lVar12 = *(long *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x110);
LAB_0031cfd0:
    *(long *)(param_1 + 0x220) = lVar12;
  }
  if (*(int *)(*(long *)(param_1 + 0x240) + 0x88) == 0) {
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    param_1[0xbc] = '\0';
    param_1[0xbd] = '\0';
    param_1[0xbe] = '\0';
    param_1[0xbf] = '\0';
  }
  else {
    *(void **)(param_1 + 0xb8) = (void *)((long)__s + __n_00);
    memset((void *)((long)__s + __n_00),0,__n);
  }
  *(uint *)(param_1 + 0x230) = uVar6;
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x234] = '\0';
  param_1[0x235] = '\0';
  param_1[0x236] = '\0';
  param_1[0x237] = '\0';
  param_1[0x238] = '\0';
  param_1[0x239] = '\0';
  param_1[0x23a] = '\0';
  param_1[0x23b] = '\0';
LAB_0031d00c:
  FUN_0031dc44(param_1);
  lVar9 = *(long *)(param_1 + 0x240);
  uVar17 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x7e0);
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x7e8);
  *(undefined8 *)(param_1 + 0x690) = uVar17;
  uVar17 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x7c8);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 2000);
  *(undefined8 *)(param_1 + 0x69c) = uVar17;
  uVar17 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x7b0);
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x7b8);
  *(undefined8 *)(param_1 + 0x6a8) = uVar17;
  lVar12 = *(long *)(lVar9 + 0x10);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(lVar12 + 0x7ec);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(lVar12 + 0x7f0);
  *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(lVar12 + 0x7f4);
  lVar12 = *(long *)(lVar9 + 0x10);
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(lVar12 + 0x7fc);
  *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(lVar12 + 0x800);
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(lVar12 + 0x804);
  uVar17 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0xa10);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0xa18);
  *(undefined8 *)(param_1 + 0x714) = uVar17;
  uVar17 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x8b0);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x8b8);
  *(undefined8 *)(param_1 + 0x720) = uVar17;
  *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(lVar9 + 0x424);
  *(float *)(param_1 + 0x6d8) = (float)*(int *)(lVar9 + 0x420);
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x7f8);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x808);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x9a4);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x9a8);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x85c);
  return 1;
}

