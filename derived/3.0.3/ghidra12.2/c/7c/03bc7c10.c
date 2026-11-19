
void FUN_03bc7c10(undefined4 *param_1,long *param_2)

{
  uint uVar1;
  size_t __size;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  void *pvVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    puVar9 = malloc(0x10);
joined_r0x03bc7d4c:
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *param_1 = 1;
      *(undefined4 **)(param_1 + 2) = puVar9;
    }
  }
  else {
    plVar8 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03bc7c7c:
      puVar9 = (undefined4 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x10,8);
      goto joined_r0x03bc7d4c;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar16 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_03bc7c7c;
  }
  cVar4 = *PTR_DAT_04bd22e0;
  uVar14 = 0x40;
  if (cVar4 != '\0') {
    uVar14 = 0x80;
  }
  lVar16 = *(long *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 8);
  if (lVar16 == 0) {
    uVar18 = 1;
    FUN_03bc9ab0(*(undefined8 *)(param_1 + 2),1,param_2,8);
LAB_03bc7d74:
    __size = 0x140;
    if (cVar4 != '\0') {
      __size = 0x280;
    }
    uVar5 = (int)__size - 5;
    uVar17 = 0;
    do {
      lVar16 = 0;
      do {
        uVar3 = **(uint **)(param_1 + 2);
        lVar19 = *(long *)(*(uint **)(param_1 + 2) + 2);
        lVar7 = *(long *)PTR_DAT_04bb2698;
        if (lVar7 == 0) {
          pvVar11 = malloc(__size);
joined_r0x03bc7e5c:
          if (pvVar11 != (void *)0x0) {
            uVar1 = uVar17;
            if (uVar3 <= uVar17) {
              uVar1 = 0;
            }
            puVar9 = (undefined4 *)(lVar19 + (ulong)uVar1 * 0x300 + lVar16);
            memset(pvVar11,0,__size - (ushort)((short)uVar5 + (short)((uVar5 & 0xffff) / 5) * -5));
            *puVar9 = uVar14;
            *(void **)(puVar9 + 2) = pvVar11;
          }
        }
        else {
          plVar8 = param_2;
          if (param_2 != (long *)0x0) {
LAB_03bc7e2c:
            pvVar11 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
            goto joined_r0x03bc7e5c;
          }
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar8 = (long *)(lVar7 + 8);
          if (lVar10 != 0) {
            plVar8 = (long *)(lVar10 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 != (long *)0x0) goto LAB_03bc7e2c;
        }
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x300);
      uVar17 = uVar17 + 1;
    } while (uVar17 != (uint)uVar18);
    bVar6 = true;
  }
  else {
    lVar7 = *(long *)(lVar16 + 0x10);
    if (lVar7 == 0) {
      uVar18 = 0;
      uVar17 = 0;
      lVar16 = *(long *)(lVar16 + 0x18);
    }
    else {
      uVar17 = 0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        uVar17 = *(uint *)(lVar7 + 8) & ((int)*(uint *)(lVar7 + 8) >> 0x1f ^ 0xffffffffU);
      }
      uVar18 = (ulong)uVar17;
      lVar16 = *(long *)(lVar16 + 0x18);
    }
    if (lVar16 != 0) {
      uVar5 = 0;
      if (*(long *)(lVar16 + 0x10) != 0) {
        uVar5 = *(uint *)(lVar16 + 8);
      }
      if ((int)uVar17 <= (int)uVar5) {
        uVar17 = uVar5;
      }
      uVar18 = (ulong)uVar17;
    }
    FUN_03bc9ab0(*(undefined8 *)(param_1 + 2),uVar18,param_2,8);
    if ((int)uVar18 != 0) goto LAB_03bc7d74;
    bVar6 = false;
  }
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    pvVar11 = malloc(uVar18 << 2);
    *(void **)(param_1 + 4) = pvVar11;
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar16 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*puVar2;
      if (param_2 == (long *)0x0) {
        *(undefined8 *)(param_1 + 4) = 0;
        goto joined_r0x03bc7f34;
      }
    }
    uVar12 = (**(code **)(*param_2 + 0x30))(param_2,uVar18 << 2,8);
    *(undefined8 *)(param_1 + 4) = uVar12;
  }
joined_r0x03bc7f34:
  if (bVar6) {
    uVar13 = uVar18 & 3;
    if (uVar18 - 1 < 3) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        lVar16 = uVar15 * 4;
        uVar15 = uVar15 + 4;
        *(undefined4 *)(*(long *)(param_1 + 4) + lVar16) = 0x3f800000;
        *(undefined4 *)(*(long *)(param_1 + 4) + lVar16 + 4) = 0x3f800000;
        *(undefined4 *)(*(long *)(param_1 + 4) + lVar16 + 8) = 0x3f800000;
        *(undefined4 *)(*(long *)(param_1 + 4) + lVar16 + 0xc) = 0x3f800000;
      } while ((uVar18 & 0xfffffffc) != uVar15);
    }
    if (uVar13 != 0) {
      lVar16 = uVar15 << 2;
      do {
        uVar13 = uVar13 - 1;
        *(undefined4 *)(*(long *)(param_1 + 4) + lVar16) = 0x3f800000;
        lVar16 = lVar16 + 4;
      } while (uVar13 != 0);
    }
  }
  param_1[6] = (int)uVar18;
  FUN_03bc7ff0(param_1);
  return;
}

