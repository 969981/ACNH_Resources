
void FUN_01955a30(long param_1)

{
  uint *puVar1;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  void *__s;
  ulong uVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  undefined **local_78;
  long lStack_70;
  uint local_54;
  undefined **local_50;
  undefined ***pppuStack_48;
  undefined8 local_18;
  
  plVar2 = (long *)(param_1 + 0x680);
  __s = (void *)(**(code **)(*(long *)(param_1 + 0x680) + 0x18))(plVar2);
  memset(__s,0,0x754);
  local_18 = *(undefined8 *)(DAT_04da6480 + 0x4060);
  local_54 = 0;
  if ((DAT_04da7238 != 0) && (local_54 = *(uint *)(DAT_04da7238 + 0x65204), 1 < local_54)) {
    local_54 = 0;
  }
  pppuStack_48 = &local_78;
  local_78 = &PTR_LAB_049e1988;
  local_50 = &PTR_LAB_049e19b0;
  lStack_70 = param_1;
  FUN_01956430(param_1,plVar2,&local_54,&local_18,&local_18,&local_50,1);
  local_50 = (undefined **)0x26e;
  FUN_0277d4ac(&local_50);
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_01955b50:
    if (*pbVar8 < 8) goto LAB_01955bc8;
LAB_01955b5c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01955bc0:
      pbVar8 = &DAT_0548e168;
      goto LAB_01955bc8;
    }
    lVar10 = *DAT_0537d558;
    bVar9 = *(byte *)(lVar10 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar9 = *pbVar8;
    bVar3 = 7 < bVar9;
    if (bVar3) {
      bVar9 = 0xff;
    }
    local_78 = (undefined **)CONCAT71(local_78._1_7_,bVar9);
    if (bVar3) goto LAB_01955bc0;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01955b50;
      }
      goto LAB_01955b5c;
    }
LAB_01955bc8:
    bVar9 = *pbVar8;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_78 = (undefined **)CONCAT71(local_78._1_7_,bVar9);
  }
  uVar5 = FUN_0264a1e0(&local_78,&local_50);
  if ((uVar5 & 1) == 0) {
    lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = FUN_0277d6c4(&local_50);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar10 + lVar6) =
           *(uint *)(lVar10 + lVar6) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    }
  }
  local_50 = (undefined **)0x283;
  FUN_0277d4ac(&local_50);
  lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
  uVar4 = FUN_0277d6c4(&local_50);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar10 + lVar6) =
         *(uint *)(lVar10 + lVar6) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
  }
  local_50 = (undefined **)0x279;
  FUN_0277d4ac(&local_50);
  lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
  uVar4 = FUN_0277d6c4(&local_50);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar10 + lVar6) =
         *(uint *)(lVar10 + lVar6) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
  }
  local_50 = (undefined **)0x280;
  FUN_0277d4ac(&local_50);
  lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
  uVar4 = FUN_0277d6c4(&local_50);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar10 + lVar6) =
         *(uint *)(lVar10 + lVar6) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
  }
  local_50 = (undefined **)0x286;
  FUN_0277d4ac(&local_50);
  lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
  uVar4 = FUN_0277d6c4(&local_50);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar10 + lVar6) =
         *(uint *)(lVar10 + lVar6) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
  }
  local_50 = (undefined **)0x24c;
  FUN_0277d4ac(&local_50);
  if ((short)local_50 != -2) {
    if (DAT_04cd19d8 == 0) {
      pbVar8 = &DAT_0548e140;
LAB_01955e08:
      if (*pbVar8 < 8) goto LAB_01955e80;
LAB_01955e14:
      if (DAT_0537d558 == (long *)0x0) {
LAB_01955e78:
        pbVar8 = &DAT_0548e168;
        goto LAB_01955e80;
      }
      lVar10 = *DAT_0537d558;
      bVar9 = *(byte *)(lVar10 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar1 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar8 = (byte *)(lVar10 + 0x471);
        }
      }
      bVar9 = *pbVar8;
      bVar3 = 7 < bVar9;
      if (bVar3) {
        bVar9 = 0xff;
      }
      local_78 = (undefined **)CONCAT71(local_78._1_7_,bVar9);
      if (bVar3) goto LAB_01955e78;
    }
    else {
      pbVar8 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar8) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_01955e08;
        }
        goto LAB_01955e14;
      }
LAB_01955e80:
      bVar9 = *pbVar8;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      local_78 = (undefined **)CONCAT71(local_78._1_7_,bVar9);
    }
    uVar5 = FUN_0264a1e0(&local_78,&local_50);
    if ((uVar5 & 1) != 0) {
      FUN_0277dedc(&local_50);
      lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
      uVar4 = FUN_0277d6c4(&local_50);
      if ((uVar4 >> 3 & 0x1fff) < 0x753) {
        lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
      }
    }
  }
  local_50 = (undefined **)0x255;
  FUN_0277d4ac(&local_50);
  if ((short)local_50 == -2) goto LAB_01956054;
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_01955f68:
    if (*pbVar8 < 8) goto LAB_01955fe0;
LAB_01955f74:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01955fd8:
      pbVar8 = &DAT_0548e168;
      goto LAB_01955fe0;
    }
    lVar10 = *DAT_0537d558;
    bVar9 = *(byte *)(lVar10 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar9 = *pbVar8;
    bVar3 = 7 < bVar9;
    if (bVar3) {
      bVar9 = 0xff;
    }
    local_78 = (undefined **)CONCAT71(local_78._1_7_,bVar9);
    if (bVar3) goto LAB_01955fd8;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01955f68;
      }
      goto LAB_01955f74;
    }
LAB_01955fe0:
    bVar9 = *pbVar8;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_78 = (undefined **)CONCAT71(local_78._1_7_,bVar9);
  }
  uVar5 = FUN_0264a1e0(&local_78,&local_50);
  if ((uVar5 & 1) != 0) {
    FUN_0277dedc(&local_50);
    lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = FUN_0277d6c4(&local_50);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
    }
  }
LAB_01956054:
  lVar6 = (**(code **)(*plVar2 + 0x20))(plVar2);
  lVar10 = 0;
  iVar7 = 0;
  do {
    puVar1 = (uint *)(lVar6 + lVar10);
    lVar10 = lVar10 + 4;
    uVar4 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    iVar7 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar7;
  } while (lVar10 != 0x754);
  if (iVar7 == 0) {
    local_50 = (undefined **)0x272;
    FUN_0277d4ac(&local_50);
    FUN_0277dedc(&local_50);
    lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = FUN_0277d6c4(&local_50);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
    }
    local_50 = (undefined **)0x271;
    FUN_0277d4ac(&local_50);
    FUN_0277dedc(&local_50);
    lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = FUN_0277d6c4(&local_50);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
    }
    local_50 = (undefined **)0x247;
    FUN_0277d4ac(&local_50);
    FUN_0277dedc(&local_50);
    lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = FUN_0277d6c4(&local_50);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
    }
    local_50 = (undefined **)0x14db;
    FUN_0277d4ac(&local_50);
    FUN_0277dedc(&local_50);
    lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = FUN_0277d6c4(&local_50);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
    }
    local_50 = (undefined **)0x24e;
    FUN_0277d4ac(&local_50);
    FUN_0277dedc(&local_50);
    lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = FUN_0277d6c4(&local_50);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
    }
    local_50 = (undefined **)0x26b;
    FUN_0277d4ac(&local_50);
    FUN_0277dedc(&local_50);
    lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = FUN_0277d6c4(&local_50);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
    }
  }
  local_50 = (undefined **)0x1cce;
  FUN_0277d4ac(&local_50);
  FUN_0277dedc(&local_50);
  lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
  uVar4 = FUN_0277d6c4(&local_50);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
  }
  local_50 = (undefined **)0x16e3;
  FUN_0277d4ac(&local_50);
  FUN_0277dedc(&local_50);
  lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
  uVar4 = FUN_0277d6c4(&local_50);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
  }
  local_50 = (undefined **)0xdd3;
  FUN_0277d4ac(&local_50);
  FUN_0277dedc(&local_50);
  lVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
  uVar4 = FUN_0277d6c4(&local_50);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar6 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(uVar4 & 0x1f);
  }
  return;
}

