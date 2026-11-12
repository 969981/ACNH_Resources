
void FUN_00744550(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  ulong __size;
  ulong *puVar11;
  undefined8 *puVar12;
  void *__src;
  uint *puVar13;
  long lVar14;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  lVar14 = *(long *)(*(long *)(param_1 + 0x48) + 0x60);
  if (lVar14 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x48) + 0x240);
  puVar13 = param_2 + 2;
  pvVar10 = *(void **)(param_1 + 800);
  (**(code **)(*(long *)puVar13 + 0x18))(puVar13);
  __src = *(void **)(param_2 + 4);
  if (pvVar10 != __src) {
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar13);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 4) + lVar8) == '\0') goto LAB_0074460c;
      lVar4 = *(long *)(param_2 + 4) + lVar8;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0074460c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0074460c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0074460c:
    iVar1 = (int)lVar8;
    if (*(int *)(param_1 + 0x328) <= (int)lVar8) {
      iVar1 = *(int *)(param_1 + 0x328) + -1;
    }
    memcpy(pvVar10,__src,(long)iVar1);
    *(undefined1 *)((long)pvVar10 + (long)iVar1) = 0;
  }
  lVar8 = DAT_05ae7600;
  if (*(long *)(param_1 + 0x280) == 0) {
    uVar2 = *param_2;
    uVar7 = (ulong)uVar2;
    if ((int)uVar2 < 1) goto LAB_00744830;
    __size = uVar7 * 0x50 | 8;
    if (DAT_05ae7600 == 0) {
      puVar6 = malloc(__size);
    }
    else {
      plVar5 = plVar9;
      if (plVar9 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar8 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0074463c;
      }
      puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (puVar6 != (ulong *)0x0) {
      puVar11 = puVar6 + 1;
      *puVar6 = uVar7;
      puVar6 = puVar11;
      do {
        puVar6[5] = 0;
        puVar6[3] = 0;
        *(undefined4 *)(puVar6 + 6) = 0;
        puVar6[7] = 0;
        *(undefined4 *)(puVar6 + 8) = 0;
        puVar6[9] = 0;
        puVar6[2] = 0;
        *(undefined4 *)(puVar6 + 4) = 0;
        *puVar6 = (ulong)&PTR_LAB_04903e68;
        puVar6[1] = 0;
        FUN_016100c4(puVar6 + 3,0);
        puVar6 = puVar6 + 10;
      } while (puVar6 != puVar11 + uVar7 * 10);
      *(uint *)(param_1 + 0x278) = uVar2;
      *(ulong **)(param_1 + 0x280) = puVar11;
    }
  }
LAB_0074463c:
  lVar8 = DAT_05ae7600;
  uVar2 = *param_2;
  uVar3 = uVar2 - 1;
  if (0 < (int)uVar2) {
    if (DAT_05ae7600 == 0) {
      pvVar10 = malloc((ulong)uVar2 * 0x598);
    }
    else {
      plVar5 = plVar9;
      if (plVar9 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar8 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00744830;
      }
      pvVar10 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar2 * 0x598,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(void **)(param_1 + 0x2d0) = pvVar10;
      if (1 < uVar2) {
        if (uVar3 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          plVar5 = (long *)((long)pvVar10 + 0x590);
          do {
            uVar7 = uVar7 + 2;
            plVar5[-0xb2] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 0xb2);
            plVar5 = plVar5 + 0x164;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar7);
        }
        if ((uVar3 & 1) != 0) {
          plVar5 = (long *)((long)pvVar10 + uVar7 * 0x590);
          *plVar5 = (long)(plVar5 + 0xb2);
        }
      }
      *(undefined8 *)((long)pvVar10 + (long)(int)(uVar3 * 0xb2) * 8) = 0;
      *(void **)(param_1 + 0x2d8) = pvVar10;
      pvVar10 = (void *)((long)pvVar10 + (ulong)uVar2 * 0x590);
      if (pvVar10 != (void *)0x0) {
        *(void **)(param_1 + 0x2c8) = pvVar10;
        *(undefined4 *)(param_1 + 0x2c0) = 0;
        *(uint *)(param_1 + 0x2c4) = uVar2;
      }
    }
  }
LAB_00744830:
  lVar8 = param_1 + 0x288;
  (**(code **)(*(long *)(param_1 + 0x288) + 0x170))(lVar8);
  if (**(char **)(param_1 + 800) == '\0') {
    (**(code **)(*(long *)(lVar14 + 0x278) + 0x18))(lVar14 + 0x278);
    puVar12 = (undefined8 *)(lVar14 + 0x280);
  }
  else {
    puVar12 = (undefined8 *)(param_1 + 800);
    (**(code **)(*(long *)(param_1 + 0x318) + 0x18))();
  }
  local_65 = 0;
  local_168 = 0x100;
  *(undefined8 *)(param_1 + 0x290) = *puVar12;
  puStack_170 = local_164;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  uVar7 = (**(code **)(*(long *)(param_1 + 0x288) + 0xf0))(lVar8,&local_178,1);
  if ((uVar7 & 1) != 0) {
    FUN_03c27e60(lVar8,&local_178,plVar9);
  }
  return;
}

