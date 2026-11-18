
void FUN_036a7910(uint *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint *puVar6;
  ulong uVar7;
  
  if (*param_1 != 0) {
    if ((DAT_05ab0f10 & 1) == 0) {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    else {
      uVar4 = (uint)DAT_05ab0f14;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a7a4c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a7a50;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a7a4c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f14 = CONCAT44(DAT_05ab0f14._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a7a4c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x67c63fcc) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a7a4c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f14 = CONCAT44(DAT_05ab0f14._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a7a4c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a7a50;
    }
  }
LAB_036a7a4c:
  uVar3 = 0;
LAB_036a7a50:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a7b14:
    if (uVar4 != 0) goto LAB_036a7b18;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1000) {
          *(undefined2 *)(DAT_05ab1008 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a7b14;
        }
      }
    }
LAB_036a7b18:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f14._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a7c2c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a7c30;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a7c2c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f14 = CONCAT44(0xfffffffe,(uint)DAT_05ab0f14);
      if (uVar7 == 0) goto LAB_036a7c2c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xde3de424) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a7c2c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f14 = CONCAT44(uVar4,(uint)DAT_05ab0f14);
      if (*param_1 == 0) goto LAB_036a7c2c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a7c30;
    }
  }
LAB_036a7c2c:
  uVar3 = 0;
LAB_036a7c30:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a7cf4:
    if (uVar4 != 0) goto LAB_036a7cf8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1010) {
          *(undefined2 *)(DAT_05ab1018 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a7cf4;
        }
      }
    }
LAB_036a7cf8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f1c;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a7e0c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a7e10;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a7e0c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f1c = CONCAT44(DAT_05ab0f1c._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a7e0c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xcf408e5d) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a7e0c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f1c = CONCAT44(DAT_05ab0f1c._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a7e0c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a7e10;
    }
  }
LAB_036a7e0c:
  uVar3 = 0;
LAB_036a7e10:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a7ed4:
    if (uVar4 != 0) goto LAB_036a7ed8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1020) {
          *(undefined2 *)(DAT_05ab1028 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a7ed4;
        }
      }
    }
LAB_036a7ed8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f1c._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a7fec;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a7ff0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a7fec;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f1c = CONCAT44(0xfffffffe,(uint)DAT_05ab0f1c);
      if (uVar7 == 0) goto LAB_036a7fec;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x76bb55b5) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a7fec;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f1c = CONCAT44(uVar4,(uint)DAT_05ab0f1c);
      if (*param_1 == 0) goto LAB_036a7fec;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a7ff0;
    }
  }
LAB_036a7fec:
  uVar3 = 0;
LAB_036a7ff0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a80b4:
    if (uVar4 != 0) goto LAB_036a80b8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1030) {
          *(undefined2 *)(DAT_05ab1038 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a80b4;
        }
      }
    }
LAB_036a80b8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f24;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a81cc;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a81d0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a81cc;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f24 = CONCAT44(DAT_05ab0f24._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a81cc;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xedba5aaf) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a81cc;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f24 = CONCAT44(DAT_05ab0f24._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a81cc;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a81d0;
    }
  }
LAB_036a81cc:
  uVar3 = 0;
LAB_036a81d0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a8294:
    if (uVar4 != 0) goto LAB_036a8298;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1040) {
          *(undefined2 *)(DAT_05ab1048 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a8294;
        }
      }
    }
LAB_036a8298:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f24._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a83ac;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a83b0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a83ac;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f24 = CONCAT44(0xfffffffe,(uint)DAT_05ab0f24);
      if (uVar7 == 0) goto LAB_036a83ac;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x54418147) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a83ac;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f24 = CONCAT44(uVar4,(uint)DAT_05ab0f24);
      if (*param_1 == 0) goto LAB_036a83ac;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a83b0;
    }
  }
LAB_036a83ac:
  uVar3 = 0;
LAB_036a83b0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a8474:
    if (uVar4 != 0) goto LAB_036a8478;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1050) {
          *(undefined2 *)(DAT_05ab1058 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a8474;
        }
      }
    }
LAB_036a8478:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f2c;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a858c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a8590;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a858c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f2c = CONCAT44(DAT_05ab0f2c._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a858c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x453ceb3e) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a858c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f2c = CONCAT44(DAT_05ab0f2c._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a858c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a8590;
    }
  }
LAB_036a858c:
  uVar3 = 0;
LAB_036a8590:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a8654:
    if (uVar4 != 0) goto LAB_036a8658;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1060) {
          *(undefined2 *)(DAT_05ab1068 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a8654;
        }
      }
    }
LAB_036a8658:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f2c._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a876c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a8770;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a876c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f2c = CONCAT44(0xfffffffe,(uint)DAT_05ab0f2c);
      if (uVar7 == 0) goto LAB_036a876c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xfcc730d6) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a876c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f2c = CONCAT44(uVar4,(uint)DAT_05ab0f2c);
      if (*param_1 == 0) goto LAB_036a876c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a8770;
    }
  }
LAB_036a876c:
  uVar3 = 0;
LAB_036a8770:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a8834:
    if (uVar4 != 0) goto LAB_036a8838;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1070) {
          *(undefined2 *)(DAT_05ab1078 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a8834;
        }
      }
    }
LAB_036a8838:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f34;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a894c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a8950;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a894c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f34 = CONCAT44(DAT_05ab0f34._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a894c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xa84ff34b) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a894c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f34 = CONCAT44(DAT_05ab0f34._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a894c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a8950;
    }
  }
LAB_036a894c:
  uVar3 = 0;
LAB_036a8950:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a8a14:
    if (uVar4 != 0) goto LAB_036a8a18;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1080) {
          *(undefined2 *)(DAT_05ab1088 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a8a14;
        }
      }
    }
LAB_036a8a18:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f34._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a8b2c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a8b30;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a8b2c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f34 = CONCAT44(0xfffffffe,(uint)DAT_05ab0f34);
      if (uVar7 == 0) goto LAB_036a8b2c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x11e185c) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a8b2c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f34 = CONCAT44(uVar4,(uint)DAT_05ab0f34);
      if (*param_1 == 0) goto LAB_036a8b2c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a8b30;
    }
  }
LAB_036a8b2c:
  uVar3 = 0;
LAB_036a8b30:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a8bf4:
    if (uVar4 != 0) goto LAB_036a8bf8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab11a0) {
          *(undefined2 *)(DAT_05ab11a8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a8bf4;
        }
      }
    }
LAB_036a8bf8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f3c;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a8d0c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a8d10;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a8d0c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f3c = CONCAT44(DAT_05ab0f3c._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a8d0c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xe060f48f) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a8d0c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f3c = CONCAT44(DAT_05ab0f3c._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a8d0c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a8d10;
    }
  }
LAB_036a8d0c:
  uVar3 = 0;
LAB_036a8d10:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a8dd4:
    if (uVar4 != 0) goto LAB_036a8dd8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1090) {
          *(undefined2 *)(DAT_05ab1098 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a8dd4;
        }
      }
    }
LAB_036a8dd8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f3c._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a8eec;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a8ef0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a8eec;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f3c = CONCAT44(0xfffffffe,(uint)DAT_05ab0f3c);
      if (uVar7 == 0) goto LAB_036a8eec;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x599b2f67) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a8eec;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f3c = CONCAT44(uVar4,(uint)DAT_05ab0f3c);
      if (*param_1 == 0) goto LAB_036a8eec;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a8ef0;
    }
  }
LAB_036a8eec:
  uVar3 = 0;
LAB_036a8ef0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a8fb4:
    if (uVar4 != 0) goto LAB_036a8fb8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab10a0) {
          *(undefined2 *)(DAT_05ab10a8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a8fb4;
        }
      }
    }
LAB_036a8fb8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f44;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a90cc;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a90d0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a90cc;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f44 = CONCAT44(DAT_05ab0f44._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a90cc;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x48e6451e) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a90cc;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f44 = CONCAT44(DAT_05ab0f44._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a90cc;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a90d0;
    }
  }
LAB_036a90cc:
  uVar3 = 0;
LAB_036a90d0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a9194:
    if (uVar4 != 0) goto LAB_036a9198;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab10b0) {
          *(undefined2 *)(DAT_05ab10b8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a9194;
        }
      }
    }
LAB_036a9198:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f44._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a92ac;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a92b0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a92ac;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f44 = CONCAT44(0xfffffffe,(uint)DAT_05ab0f44);
      if (uVar7 == 0) goto LAB_036a92ac;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xf11d9ef6) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a92ac;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f44 = CONCAT44(uVar4,(uint)DAT_05ab0f44);
      if (*param_1 == 0) goto LAB_036a92ac;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a92b0;
    }
  }
LAB_036a92ac:
  uVar3 = 0;
LAB_036a92b0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a9374:
    if (uVar4 != 0) goto LAB_036a9378;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab10c0) {
          *(undefined2 *)(DAT_05ab10c8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a9374;
        }
      }
    }
LAB_036a9378:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f4c;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a948c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a9490;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a948c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f4c = CONCAT44(DAT_05ab0f4c._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a948c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x6a1c91ec) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a948c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f4c = CONCAT44(DAT_05ab0f4c._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a948c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a9490;
    }
  }
LAB_036a948c:
  uVar3 = 0;
LAB_036a9490:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a9554:
    if (uVar4 != 0) goto LAB_036a9558;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab10d0) {
          *(undefined2 *)(DAT_05ab10d8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a9554;
        }
      }
    }
LAB_036a9558:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f4c._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a966c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a9670;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a966c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f4c = CONCAT44(0xfffffffe,(uint)DAT_05ab0f4c);
      if (uVar7 == 0) goto LAB_036a966c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xd3e74a04) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a966c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f4c = CONCAT44(uVar4,(uint)DAT_05ab0f4c);
      if (*param_1 == 0) goto LAB_036a966c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a9670;
    }
  }
LAB_036a966c:
  uVar3 = 0;
LAB_036a9670:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a9734:
    if (uVar4 != 0) goto LAB_036a9738;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab10e0) {
          *(undefined2 *)(DAT_05ab10e8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a9734;
        }
      }
    }
LAB_036a9738:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f54;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a984c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a9850;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a984c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f54 = CONCAT44(DAT_05ab0f54._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a984c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xc29a207d) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a984c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f54 = CONCAT44(DAT_05ab0f54._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a984c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a9850;
    }
  }
LAB_036a984c:
  uVar3 = 0;
LAB_036a9850:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a9914:
    if (uVar4 != 0) goto LAB_036a9918;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab10f0) {
          *(undefined2 *)(DAT_05ab10f8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a9914;
        }
      }
    }
LAB_036a9918:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f54._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a9a2c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a9a30;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a9a2c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f54 = CONCAT44(0xfffffffe,(uint)DAT_05ab0f54);
      if (uVar7 == 0) goto LAB_036a9a2c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x7b61fb95) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a9a2c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f54 = CONCAT44(uVar4,(uint)DAT_05ab0f54);
      if (*param_1 == 0) goto LAB_036a9a2c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a9a30;
    }
  }
LAB_036a9a2c:
  uVar3 = 0;
LAB_036a9a30:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a9af4:
    if (uVar4 != 0) goto LAB_036a9af8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1100) {
          *(undefined2 *)(DAT_05ab1108 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a9af4;
        }
      }
    }
LAB_036a9af8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f5c;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a9c0c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a9c10;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a9c0c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f5c = CONCAT44(DAT_05ab0f5c._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a9c0c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x2fe93808) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a9c0c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f5c = CONCAT44(DAT_05ab0f5c._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a9c0c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a9c10;
    }
  }
LAB_036a9c0c:
  uVar3 = 0;
LAB_036a9c10:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a9cd4:
    if (uVar4 != 0) goto LAB_036a9cd8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1110) {
          *(undefined2 *)(DAT_05ab1118 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a9cd4;
        }
      }
    }
LAB_036a9cd8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f5c._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a9dec;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a9df0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a9dec;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f5c = CONCAT44(0xfffffffe,(uint)DAT_05ab0f5c);
      if (uVar7 == 0) goto LAB_036a9dec;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xa4958852) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a9dec;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f5c = CONCAT44(uVar4,(uint)DAT_05ab0f5c);
      if (*param_1 == 0) goto LAB_036a9dec;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a9df0;
    }
  }
LAB_036a9dec:
  uVar3 = 0;
LAB_036a9df0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036a9eb4:
    if (uVar4 != 0) goto LAB_036a9eb8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab11b0) {
          *(undefined2 *)(DAT_05ab11b8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036a9eb4;
        }
      }
    }
LAB_036a9eb8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f64;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036a9fcc;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036a9fd0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036a9fcc;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f64 = CONCAT44(DAT_05ab0f64._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036a9fcc;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xb3faaf0b) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036a9fcc;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f64 = CONCAT44(DAT_05ab0f64._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036a9fcc;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036a9fd0;
    }
  }
LAB_036a9fcc:
  uVar3 = 0;
LAB_036a9fd0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aa094:
    if (uVar4 != 0) goto LAB_036aa098;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1120) {
          *(undefined2 *)(DAT_05ab1128 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036aa094;
        }
      }
    }
LAB_036aa098:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f64._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036aa1ac;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036aa1b0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036aa1ac;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f64 = CONCAT44(0xfffffffe,(uint)DAT_05ab0f64);
      if (uVar7 == 0) goto LAB_036aa1ac;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xa0174e3) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036aa1ac;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f64 = CONCAT44(uVar4,(uint)DAT_05ab0f64);
      if (*param_1 == 0) goto LAB_036aa1ac;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036aa1b0;
    }
  }
LAB_036aa1ac:
  uVar3 = 0;
LAB_036aa1b0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aa274:
    if (uVar4 != 0) goto LAB_036aa278;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1130) {
          *(undefined2 *)(DAT_05ab1138 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036aa274;
        }
      }
    }
LAB_036aa278:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f6c;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036aa38c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036aa390;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036aa38c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f6c = CONCAT44(DAT_05ab0f6c._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036aa38c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x1b7c1e9a) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036aa38c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f6c = CONCAT44(DAT_05ab0f6c._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036aa38c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036aa390;
    }
  }
LAB_036aa38c:
  uVar3 = 0;
LAB_036aa390:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aa454:
    if (uVar4 != 0) goto LAB_036aa458;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1140) {
          *(undefined2 *)(DAT_05ab1148 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036aa454;
        }
      }
    }
LAB_036aa458:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f6c._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036aa56c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036aa570;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036aa56c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f6c = CONCAT44(0xfffffffe,(uint)DAT_05ab0f6c);
      if (uVar7 == 0) goto LAB_036aa56c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0xa287c572) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036aa56c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f6c = CONCAT44(uVar4,(uint)DAT_05ab0f6c);
      if (*param_1 == 0) goto LAB_036aa56c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036aa570;
    }
  }
LAB_036aa56c:
  uVar3 = 0;
LAB_036aa570:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aa634:
    if (uVar4 != 0) goto LAB_036aa638;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1150) {
          *(undefined2 *)(DAT_05ab1158 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036aa634;
        }
      }
    }
LAB_036aa638:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f74;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036aa74c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036aa750;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036aa74c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f74 = CONCAT44(DAT_05ab0f74._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036aa74c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x91783e01) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036aa74c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f74 = CONCAT44(DAT_05ab0f74._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036aa74c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036aa750;
    }
  }
LAB_036aa74c:
  uVar3 = 0;
LAB_036aa750:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aa814:
    if (uVar4 != 0) goto LAB_036aa818;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab11c0) {
          *(undefined2 *)(DAT_05ab11c8 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036aa814;
        }
      }
    }
LAB_036aa818:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f74._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036aa92c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036aa930;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036aa92c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f74 = CONCAT44(0xfffffffe,(uint)DAT_05ab0f74);
      if (uVar7 == 0) goto LAB_036aa92c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x345c6448) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036aa92c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f74 = CONCAT44(uVar4,(uint)DAT_05ab0f74);
      if (*param_1 == 0) goto LAB_036aa92c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036aa930;
    }
  }
LAB_036aa92c:
  uVar3 = 0;
LAB_036aa930:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aa9f4:
    if (uVar4 != 0) goto LAB_036aa9f8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1160) {
          *(undefined2 *)(DAT_05ab1168 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036aa9f4;
        }
      }
    }
LAB_036aa9f8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f7c;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036aab0c;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036aab10;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036aab0c;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f7c = CONCAT44(DAT_05ab0f7c._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036aab0c;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x8da7bfa0) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036aab0c;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f7c = CONCAT44(DAT_05ab0f7c._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036aab0c;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036aab10;
    }
  }
LAB_036aab0c:
  uVar3 = 0;
LAB_036aab10:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aabd4:
    if (uVar4 != 0) goto LAB_036aabd8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1170) {
          *(undefined2 *)(DAT_05ab1178 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036aabd4;
        }
      }
    }
LAB_036aabd8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = DAT_05ab0f7c._4_4_;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036aacec;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036aacf0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036aacec;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f7c = CONCAT44(0xfffffffe,(uint)DAT_05ab0f7c);
      if (uVar7 == 0) goto LAB_036aacec;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x9cdad5d9) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036aacec;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f7c = CONCAT44(uVar4,(uint)DAT_05ab0f7c);
      if (*param_1 == 0) goto LAB_036aacec;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036aacf0;
    }
  }
LAB_036aacec:
  uVar3 = 0;
LAB_036aacf0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aadb4:
    if (uVar4 != 0) goto LAB_036aadb8;
  }
  else {
    if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05ab1180) {
          *(undefined2 *)(DAT_05ab1188 + (long)(int)uVar2 * 2) = uVar5;
          uVar4 = *param_1;
          goto LAB_036aadb4;
        }
      }
    }
LAB_036aadb8:
    if (DAT_05ab0f10 == 1) {
      uVar4 = (uint)DAT_05ab0f84;
    }
    else {
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
      DAT_05ab0f10 = 1;
    }
    while ((int)uVar4 < 0) {
      if (uVar4 != 0xffffffff) goto LAB_036aaecc;
      puVar6 = (uint *)(ulong)*param_1;
      uVar3 = 0;
      if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036aaed0;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_036aaecc;
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_05ab0f84 = CONCAT44(DAT_05ab0f84._4_4_,0xfffffffe);
      if (uVar7 == 0) goto LAB_036aaecc;
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != 0x25210e31) {
        puVar6 = puVar6 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036aaecc;
      }
      uVar4 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar4 = *puVar6;
      }
      DAT_05ab0f84 = CONCAT44(DAT_05ab0f84._4_4_,uVar4);
      if (*param_1 == 0) goto LAB_036aaecc;
    }
    if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
      goto LAB_036aaed0;
    }
  }
LAB_036aaecc:
  uVar3 = 0;
LAB_036aaed0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  uVar4 = *param_1;
  puVar6 = (uint *)((long)param_1 - (ulong)uVar4);
  if ((uVar4 == 0) || (puVar6 == (uint *)0x0)) {
LAB_036aaf94:
    if (uVar4 == 0) goto LAB_036ab0ac;
  }
  else if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((ulong)uVar4 != 0) {
        uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
      }
      if (*puVar6 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if (uVar2 < DAT_05ab1190) {
        *(undefined2 *)(DAT_05ab1198 + (long)(int)uVar2 * 2) = uVar5;
        uVar4 = *param_1;
        goto LAB_036aaf94;
      }
    }
  }
  if (DAT_05ab0f10 == 1) {
    uVar4 = DAT_05ab0f84._4_4_;
  }
  else {
    DAT_05ab0f10 = 1;
    DAT_05ab0ff4 = 0xffffffffffffffff;
    uVar4 = 0xffffffff;
    DAT_05ab0f14 = 0xffffffffffffffff;
    DAT_05ab0f1c = 0xffffffffffffffff;
    DAT_05ab0ffc = 0xffffffff;
    DAT_05ab0f24 = 0xffffffffffffffff;
    DAT_05ab0f2c = 0xffffffffffffffff;
    DAT_05ab0f34 = 0xffffffffffffffff;
    DAT_05ab0f3c = 0xffffffffffffffff;
    DAT_05ab0f44 = 0xffffffffffffffff;
    DAT_05ab0f4c = 0xffffffffffffffff;
    DAT_05ab0f54 = 0xffffffffffffffff;
    DAT_05ab0f5c = 0xffffffffffffffff;
    DAT_05ab0f64 = 0xffffffffffffffff;
    DAT_05ab0f6c = 0xffffffffffffffff;
    DAT_05ab0f74 = 0xffffffffffffffff;
    DAT_05ab0f7c = 0xffffffffffffffff;
    DAT_05ab0f84 = 0xffffffffffffffff;
    DAT_05ab0f8c = 0xffffffffffffffff;
    DAT_05ab0f94 = 0xffffffffffffffff;
    DAT_05ab0f9c = 0xffffffffffffffff;
    DAT_05ab0fa4 = 0xffffffffffffffff;
    DAT_05ab0fac = 0xffffffffffffffff;
    DAT_05ab0fb4 = 0xffffffffffffffff;
    DAT_05ab0fbc = 0xffffffffffffffff;
    DAT_05ab0fc4 = 0xffffffffffffffff;
    DAT_05ab0fcc = 0xffffffffffffffff;
    DAT_05ab0fd4 = 0xffffffffffffffff;
    DAT_05ab0fdc = 0xffffffffffffffff;
    DAT_05ab0fe4 = 0xffffffffffffffff;
    DAT_05ab0fec = 0xffffffffffffffff;
  }
  while ((int)uVar4 < 0) {
    if (uVar4 != 0xffffffff) goto LAB_036ab0ac;
    puVar6 = (uint *)(ulong)*param_1;
    uVar3 = 0;
    if ((*param_1 == 0) || (param_1 == puVar6)) goto LAB_036ab0b0;
    lVar1 = 0xc;
    if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)param_1 + (lVar1 - (long)puVar6);
    if (lVar1 == 0) goto LAB_036ab0ac;
    uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
    DAT_05ab0f84 = CONCAT44(0xfffffffe,(uint)DAT_05ab0f84);
    if (uVar7 == 0) goto LAB_036ab0ac;
    puVar6 = (uint *)(lVar1 + 4);
    while (puVar6[-1] != 0x34f3ae0f) {
      puVar6 = puVar6 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) goto LAB_036ab0ac;
    }
    uVar4 = 0;
    if (*puVar6 != 0xffffffff) {
      uVar4 = *puVar6;
    }
    DAT_05ab0f84 = CONCAT44(uVar4,(uint)DAT_05ab0f84);
    if (*param_1 == 0) goto LAB_036ab0ac;
  }
  if ((undefined4 *)((long)param_1 + (ulong)uVar4) != (undefined4 *)0x0) {
    uVar3 = *(undefined4 *)((long)param_1 + (ulong)uVar4);
    goto LAB_036ab0b0;
  }
LAB_036ab0ac:
  uVar3 = 0;
LAB_036ab0b0:
  if (((*param_1 == 0) || (lVar1 = (long)param_1 - (ulong)*param_1, lVar1 == 0)) ||
     (*(char *)(lVar1 + 0xb) == '\0')) {
    uVar4 = FUN_036ab7d0(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = FUN_036ab180(uVar3,0);
    if (0x3c < uVar4) {
      uVar4 = 0;
    }
    uVar5 = (undefined2)uVar4;
  }
  puVar6 = (uint *)((long)param_1 - (ulong)*param_1);
  if (((*param_1 != 0) && (puVar6 != (uint *)0x0)) &&
     ((*puVar6 != 0 && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))))) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((ulong)uVar4 != 0) {
        uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar4);
      }
      if (*puVar6 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if (uVar2 < DAT_05ab11d0) {
        *(undefined2 *)(DAT_05ab11d8 + (long)(int)uVar2 * 2) = uVar5;
      }
    }
  }
  return;
}

