
void FUN_03964240(long *param_1,undefined4 *param_2)

{
  void *pvVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  void *__src;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte bVar12;
  void *__dest;
  ulong uVar13;
  long *plVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulong __size;
  undefined4 local_64;
  
  *param_1 = (long)param_2;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = param_2[2];
  if ((uVar2 & 1) == 0) {
    uVar4 = FUN_038cd970(*param_2);
    *param_2 = uVar4;
    uVar4 = FUN_038cd970(param_2[1]);
    param_2[1] = uVar4;
    uVar4 = FUN_038cd970(uVar2);
    param_2[2] = uVar4;
    uVar4 = FUN_038cd970(param_2[3]);
    param_2[3] = uVar4;
    uVar4 = FUN_038cd970(param_2[4]);
    param_2[4] = uVar4;
    uVar4 = FUN_038cd970(param_2[5]);
    param_2[5] = uVar4;
    uVar4 = FUN_038cd970(param_2[6]);
    param_2[6] = uVar4;
    uVar4 = FUN_038cd970(param_2[7]);
    param_2[7] = uVar4;
    uVar4 = FUN_038cd970(param_2[8]);
    param_2[8] = uVar4;
    uVar4 = FUN_038cd970(param_2[9]);
    param_2[9] = uVar4;
    uVar4 = FUN_038cd970(param_2[10]);
    param_2[10] = uVar4;
    uVar4 = FUN_038cd970(param_2[0xb]);
    param_2[0xb] = uVar4;
    param_2 = (undefined4 *)*param_1;
    bVar12 = *(byte *)(param_2 + 2) >> 1 & 1;
  }
  else {
    if ((uVar2 >> 1 & 1) != 0) {
      return;
    }
    bVar12 = 0;
  }
  uVar16 = param_2[10];
  puVar15 = (undefined4 *)((long)param_2 + (ulong)(uint)param_2[5] + 0x30);
  lVar10 = (ulong)(uint)param_2[8] * 8 + (ulong)(uint)param_2[9];
  __dest = (void *)((long)puVar15 +
                   lVar10 + (ulong)(uint)param_2[6] * 0xc + (ulong)(uint)param_2[7] * 8);
  pvVar1 = (void *)((long)__dest + (ulong)uVar16);
  if ((uVar2 & 1) == 0) {
    uVar13 = (ulong)(uint)param_2[7] * 8 + (ulong)(uint)param_2[6] * 0xc + lVar10;
    if ((uVar13 != 0) && (0 < (int)(uVar13 >> 2))) {
      uVar13 = uVar13 & 0x3fffffffc;
      do {
        uVar4 = FUN_038cd970(*puVar15);
        uVar13 = uVar13 - 4;
        *puVar15 = uVar4;
        puVar15 = puVar15 + 1;
      } while (uVar13 != 0);
      param_2 = (undefined4 *)*param_1;
    }
    uVar2 = param_2[0xb];
    if (uVar2 != 0) {
      uVar13 = 0;
      do {
        iVar5 = FUN_038cd970(*(undefined4 *)((long)pvVar1 + uVar13));
        uVar9 = iVar5 + (int)uVar13;
        *(int *)((long)pvVar1 + uVar13) = iVar5;
        uVar13 = (ulong)uVar9;
      } while (uVar9 < uVar2);
      param_2 = (undefined4 *)*param_1;
    }
    param_2[2] = param_2[2] | 1;
  }
  if (bVar12 != 0) {
    return;
  }
  lVar10 = *param_1;
  if (*(int *)(lVar10 + 0x28) == 0) {
    return;
  }
  if (uVar16 != 0) {
LAB_03964458:
    lVar10 = DAT_05ae7600;
    uVar13 = 0;
    do {
      if (*(char *)((long)__dest + uVar13) == '\0') {
LAB_03964494:
        if ((int)uVar13 < 1) goto LAB_03964444;
LAB_039644ac:
        uVar2 = (int)uVar13 + 1;
        plVar14 = *(long **)(*(long *)PTR_DAT_04bb4e50 + 8);
        if (DAT_05ae7600 == 0) {
          pvVar8 = malloc((ulong)uVar2 << 1);
          __size = (ulong)(uVar2 * 2);
LAB_03964550:
          __src = malloc(__size);
LAB_039645b4:
          uVar16 = (uint)__size;
        }
        else {
          plVar7 = plVar14;
          if (plVar14 != (long *)0x0) {
LAB_03964508:
            pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar2 << 1,8);
            __size = (ulong)(uVar2 * 2);
            lVar10 = *(long *)PTR_DAT_04bb2698;
            if (lVar10 == 0) goto LAB_03964550;
            if (plVar14 == (long *)0x0) goto LAB_03964574;
            plVar7 = plVar14;
LAB_039645a0:
            __src = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
            goto LAB_039645b4;
          }
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar10 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 != (long *)0x0) goto LAB_03964508;
          pvVar8 = (void *)0x0;
          __size = (ulong)(uVar2 * 2);
          lVar10 = *(long *)PTR_DAT_04bb2698;
          if (lVar10 == 0) goto LAB_03964550;
LAB_03964574:
          uVar16 = (uint)__size;
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar10 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 != (long *)0x0) goto LAB_039645a0;
          __src = (void *)0x0;
        }
        local_64 = 0;
        FUN_038d4900(&local_64,pvVar8,uVar2,__dest,0xffffffff);
        lVar10 = 0;
        uVar9 = 0;
        goto LAB_039645f8;
      }
      if (*(char *)((long)__dest + uVar13 + 1) == '\0') {
        uVar13 = uVar13 + 1;
        goto LAB_03964494;
      }
      if (*(char *)((long)__dest + uVar13 + 2) == '\0') {
        uVar13 = uVar13 + 2;
        if (0 < (int)uVar13) goto LAB_039644ac;
        goto LAB_03964444;
      }
      uVar13 = uVar13 + 3;
    } while (uVar13 != 0x80001);
    uVar13 = 0;
    goto LAB_03964444;
  }
LAB_039646ec:
  *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) | 2;
  return;
  while( true ) {
    uVar9 = iVar5 + uVar9;
    lVar10 = lVar10 + 2;
    if (uVar16 <= uVar9) break;
LAB_039645f8:
    pbVar11 = (byte *)((long)__src + (ulong)uVar9);
    if ((lVar10 == 0xfffffffe) || (uVar3 = *(ushort *)((long)pvVar8 + lVar10), uVar3 == 0))
    goto LAB_03964698;
    bVar12 = (byte)uVar3;
    if (uVar3 < 0x80) {
      *pbVar11 = bVar12;
      iVar5 = 1;
    }
    else if (uVar3 < 0x800) {
      if (uVar16 <= uVar9 + 1) break;
      *pbVar11 = (byte)(uVar3 >> 6) | 0xc0;
      pbVar11[1] = bVar12 & 0x3f | 0x80;
      iVar5 = 2;
    }
    else {
      if (uVar16 <= uVar9 + 2) break;
      *pbVar11 = (byte)(uVar3 >> 0xc) | 0xe0;
      pbVar11[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      pbVar11[2] = bVar12 & 0x3f | 0x80;
      iVar5 = 3;
    }
  }
  pbVar11 = (byte *)((long)__src + (ulong)(uVar9 - 1));
LAB_03964698:
  lVar10 = 0;
  *pbVar11 = 0;
  do {
    if (*(char *)((long)__src + lVar10) == '\0') goto LAB_03964400;
    if (*(char *)((long)__src + lVar10 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03964400;
    }
    if (*(char *)((long)__src + lVar10 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_03964400;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_03964400:
  if ((int)lVar10 + 1 < (int)uVar2) {
    uVar2 = (int)lVar10 + 1;
  }
  memcpy(__dest,__src,(long)(int)uVar2);
  (**(code **)(*plVar14 + 0x38))(plVar14,pvVar8);
  (**(code **)(*plVar14 + 0x38))(plVar14,__src);
LAB_03964444:
  __dest = (void *)((long)__dest + ((long)(((uVar13 >> 2) << 0x22) + 0x400000000) >> 0x20));
  if (pvVar1 <= __dest) goto LAB_039646e4;
  goto LAB_03964458;
LAB_039646e4:
  lVar10 = *param_1;
  goto LAB_039646ec;
}

