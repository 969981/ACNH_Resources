
undefined8 FUN_03ee6460(long param_1,undefined8 param_2,long param_3,long param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong __size;
  uint uVar16;
  size_t sVar17;
  long lVar18;
  ulong uVar19;
  undefined *local_70;
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  *(long *)(param_1 + 8) = param_4;
  *(long *)(param_1 + 0x10) = param_3;
  puVar2 = PTR_DAT_04bb2698;
  uVar11 = *(uint *)(param_3 + 0xb0);
  if ((int)uVar11 < 1) {
    return 0;
  }
  uVar3 = *(uint *)(param_3 + 0x290);
  uVar19 = (ulong)uVar3;
  if ((int)uVar3 < 1) {
    return 0;
  }
  uVar16 = *(uint *)(param_3 + 0x218);
  __size = (ulong)uVar16;
  sVar17 = (ulong)uVar11 << 2;
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    pvVar7 = malloc(sVar17);
  }
  else {
    plVar6 = param_5;
    if (param_5 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar18 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return 0;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,sVar17,8);
  }
  if (pvVar7 == (void *)0x0) {
LAB_03ee690c:
    uVar10 = 0;
  }
  else {
    memset(pvVar7,0xff,sVar17);
    lVar18 = *(long *)puVar2;
    *(uint *)(param_1 + 0x20) = uVar11;
    *(void **)(param_1 + 0x28) = pvVar7;
    if (lVar18 == 0) {
      puVar8 = malloc(uVar19 << 3);
      if (puVar8 == (undefined1 *)0x0) {
        return 0;
      }
    }
    else {
      plVar6 = param_5;
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar18 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
      }
      puVar8 = (undefined1 *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar19 << 3,8);
      if (puVar8 == (undefined1 *)0x0) {
        return 0;
      }
    }
    uVar14 = uVar19 & 3;
    puVar12 = puVar8;
    if ((uVar3 & 3) != 0) {
      do {
        *puVar12 = 0xff;
        uVar14 = uVar14 - 1;
        *(undefined4 *)(puVar12 + 4) = 0x3f800000;
        puVar12 = puVar12 + 8;
      } while (uVar14 != 0);
    }
    if (2 < (uVar19 - 1 & 0x1fffffffffffffff)) {
      do {
        *puVar12 = 0xff;
        *(undefined4 *)(puVar12 + 4) = 0x3f800000;
        puVar12[8] = 0xff;
        *(undefined4 *)(puVar12 + 0xc) = 0x3f800000;
        puVar12[0x10] = 0xff;
        *(undefined4 *)(puVar12 + 0x14) = 0x3f800000;
        puVar12[0x18] = 0xff;
        *(undefined4 *)(puVar12 + 0x1c) = 0x3f800000;
        puVar12 = puVar12 + 0x20;
      } while (puVar12 != puVar8 + uVar19 * 8);
    }
    *(uint *)(param_1 + 0x30) = uVar3;
    *(undefined1 **)(param_1 + 0x38) = puVar8;
    if (0 < (int)uVar16) {
      lVar18 = *(long *)puVar2;
      sVar17 = __size * 0x1c;
      if (lVar18 == 0) {
        puVar9 = malloc(sVar17);
      }
      else {
        plVar6 = param_5;
        if (param_5 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar6 = (long *)(lVar18 + 8);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,sVar17,8);
      }
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
      uVar1 = ((uint)((sVar17 - 0x1c) / 0x1c) & 0x7fffffff) + 1;
      uVar19 = (ulong)uVar1 & 7;
      puVar13 = puVar9;
      if ((uVar1 & 7) != 0) {
        puVar15 = puVar9;
        do {
          puVar13 = (undefined8 *)((long)puVar15 + 0x1c);
          *(undefined1 *)(puVar15 + 3) = 0;
          uVar19 = uVar19 - 1;
          puVar15[1] = 0;
          puVar15[2] = 0;
          *puVar15 = 0;
          puVar15 = puVar13;
        } while (uVar19 != 0);
      }
      if (0xc3 < sVar17 - 0x1c) {
        do {
          *(undefined1 *)(puVar13 + 3) = 0;
          *puVar13 = 0;
          *(undefined8 *)((long)puVar13 + 0x1c) = 0;
          *(undefined8 *)((long)puVar13 + 0x24) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          *(undefined1 *)((long)puVar13 + 0x34) = 0;
          puVar13[9] = 0;
          *(undefined1 *)(puVar13 + 10) = 0;
          *(undefined8 *)((long)puVar13 + 0x54) = 0;
          *(undefined8 *)((long)puVar13 + 0x5c) = 0;
          *(undefined8 *)((long)puVar13 + 100) = 0;
          *(undefined1 *)((long)puVar13 + 0x6c) = 0;
          *(undefined1 *)(puVar13 + 0x11) = 0;
          puVar13[0xe] = 0;
          *(undefined1 *)((long)puVar13 + 0xa4) = 0;
          *(undefined8 *)((long)puVar13 + 0x9c) = 0;
          *(undefined8 *)((long)puVar13 + 0x94) = 0;
          *(undefined8 *)((long)puVar13 + 0x8c) = 0;
          puVar13[0x17] = 0;
          *(undefined1 *)(puVar13 + 0x18) = 0;
          *(undefined8 *)((long)puVar13 + 0xc4) = 0;
          *(undefined8 *)((long)puVar13 + 0xcc) = 0;
          *(undefined8 *)((long)puVar13 + 0xd4) = 0;
          *(undefined1 *)((long)puVar13 + 0xdc) = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[0xf] = 0;
          puVar13[0x10] = 0;
          puVar13[0x15] = 0;
          puVar13[0x16] = 0;
          puVar13 = puVar13 + 0x1c;
        } while (puVar13 != (undefined8 *)((long)puVar9 + sVar17));
      }
      lVar18 = *(long *)puVar2;
      *(uint *)(param_1 + 0x40) = uVar16;
      *(undefined8 **)(param_1 + 0x48) = puVar9;
      if (lVar18 == 0) {
        pvVar7 = malloc(__size);
      }
      else {
        if (param_5 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          puVar9 = (undefined8 *)(lVar18 + 8);
          if (lVar5 != 0) {
            puVar9 = (undefined8 *)(lVar5 + 0xa8);
          }
          param_5 = (long *)*puVar9;
          if (param_5 == (long *)0x0) goto LAB_03ee690c;
        }
        pvVar7 = (void *)(**(code **)(*param_5 + 0x30))(param_5,__size,8);
      }
      if (pvVar7 == (void *)0x0) goto LAB_03ee690c;
      memset(pvVar7,0,__size);
      *(uint *)(param_1 + 0x50) = uVar16;
      *(void **)(param_1 + 0x58) = pvVar7;
    }
    uVar16 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar18 = *(long *)(param_1 + 8);
      uVar1 = uVar16;
      if (*(uint *)(*(long *)(param_1 + 0x10) + 0x100) <= uVar16) {
        uVar1 = 0;
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x108) + (ulong)uVar1 * 0x58;
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      uStack_68 = *(undefined8 *)(lVar5 + 0x50);
      local_70 = puVar2;
      uVar4 = FUN_03ef8040(*(undefined8 *)(lVar18 + 8),&local_70);
      uVar1 = uVar16;
      if (*(uint *)(param_1 + 0x20) <= uVar16) {
        uVar1 = 0;
      }
      uVar16 = uVar16 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 4) = uVar4;
    } while (uVar11 != uVar16);
    uVar11 = 0;
    do {
      lVar18 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
      uVar16 = uVar11;
      if (*(uint *)(*(long *)(param_1 + 0x10) + 0x2e0) <= uVar11) {
        uVar16 = 0;
      }
      if (*(int *)(lVar18 + (ulong)uVar16 * 0xd0 + 0x88) < 0) {
        uVar1 = uVar11;
        if (*(uint *)(param_1 + 0x30) <= uVar11) {
          uVar1 = 0;
        }
        *(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 8) =
             *(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 8) & 0xfb;
      }
      if (*(int *)(lVar18 + (ulong)uVar16 * 0xd0 + 200) < 0) {
        uVar16 = uVar11;
        if (*(uint *)(param_1 + 0x30) <= uVar11) {
          uVar16 = 0;
        }
        *(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar16 * 8) =
             *(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar16 * 8) & 0xf7;
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
    uVar10 = 1;
  }
  return uVar10;
}

