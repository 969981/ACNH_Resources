
void FUN_03405400(int *param_1,uint *param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  size_t __size;
  long lVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  undefined *local_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bb2698;
  uVar15 = *param_2;
  if ((int)uVar15 < 1) {
LAB_034055b4:
    iVar10 = *param_1;
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
      pvVar6 = malloc((ulong)uVar15 * 0x30);
joined_r0x03405498:
      if (pvVar6 != (void *)0x0) {
        uVar2 = uVar15 - 1;
        *(void **)(param_1 + 4) = pvVar6;
        if (1 < uVar15) {
          if (uVar2 == 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            plVar5 = (long *)((long)pvVar6 + 0x28);
            do {
              uVar11 = uVar11 + 2;
              plVar5[-5] = (long)plVar5;
              *plVar5 = (long)(plVar5 + 5);
              plVar5 = plVar5 + 10;
            } while (((ulong)uVar2 & 0xfffffffe) != uVar11);
          }
          if ((uVar2 & 1) != 0) {
            plVar5 = (long *)((long)pvVar6 + uVar11 * 0x28);
            *plVar5 = (long)(plVar5 + 5);
          }
        }
        *(undefined8 *)((long)pvVar6 + (long)(int)(uVar2 * 5) * 8) = 0;
        *(void **)(param_1 + 6) = pvVar6;
        pvVar6 = (void *)((long)pvVar6 + (ulong)uVar15 * 0x28);
        if (pvVar6 != (void *)0x0) {
          *(void **)(param_1 + 2) = pvVar6;
          *param_1 = 0;
          param_1[1] = uVar15;
        }
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar15 * 0x30,8);
        goto joined_r0x03405498;
      }
    }
    uVar15 = *param_2;
    iVar10 = *param_1;
    if ((0 < (int)uVar15) && (iVar10 < param_1[1])) {
      lVar13 = 0;
      do {
        if (*param_1 < param_1[1]) {
          puVar7 = *(undefined8 **)(param_1 + 4);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar7;
          }
          puVar7[3] = 0;
          puVar7[4] = 0;
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + 4) = 0xffffffff;
          puVar7[1] = 0;
          puVar7[2] = 0;
          if (*param_1 < param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
            *param_1 = *param_1 + 1;
          }
          FUN_03404d70(puVar7,*(undefined8 *)(*(long *)(param_2 + 2) + lVar13 * 8));
          uVar15 = *param_2;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uVar15);
      goto LAB_034055b4;
    }
  }
  if (1 < iVar10) {
    plVar5 = *(long **)(param_1 + 2);
    plVar12 = *(long **)(*plVar5 + 0x10);
    if (plVar12 == (long *)0x0) {
      pfVar8 = (float *)&DAT_0419b56c;
    }
    else {
      local_60 = PTR_DAT_04bc0cb8 + 0x10;
      local_58 = 8;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_60);
      pfVar8 = (float *)(**(code **)(plVar12[3] + 0xa0))(plVar12[1]);
      iVar10 = *param_1;
      plVar5 = *(long **)(param_1 + 2);
    }
    fVar16 = *pfVar8;
    plVar5 = *(long **)(plVar5[1] + 0x10);
    if (plVar5 == (long *)0x0) {
      pfVar8 = (float *)&DAT_0419b56c;
    }
    else {
      local_60 = PTR_DAT_04bc0cb8 + 0x10;
      local_58 = 8;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
      pfVar8 = (float *)(**(code **)(plVar5[3] + 0xa0))(plVar5[1]);
      iVar10 = *param_1;
    }
    fVar16 = fVar16 - *pfVar8;
    fVar14 = -fVar16;
    if (0.0 <= fVar16) {
      fVar14 = fVar16;
    }
    param_1[0x10] = (int)fVar14;
  }
  if (0 < iVar10) {
    plVar5 = *(long **)(**(long **)(param_1 + 2) + 0x10);
    if (plVar5 == (long *)0x0) {
      piVar9 = &DAT_0419b56c;
    }
    else {
      local_60 = PTR_DAT_04bc0cb8 + 0x10;
      local_58 = 8;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
      piVar9 = (int *)(**(code **)(plVar5[3] + 0xa0))(plVar5[1]);
    }
    param_1[0x11] = *piVar9;
    param_1[0x12] = piVar9[1];
    param_1[0x13] = piVar9[2];
  }
  uVar15 = param_2[0x88];
  uVar2 = uVar15 - 1;
  if (0 < (int)uVar15) {
    lVar13 = *(long *)puVar3;
    __size = (ulong)uVar15 * 0x18;
    if (lVar13 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_034057e8;
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0xc) = pvVar6;
      if (1 < uVar15) {
        if (uVar2 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          plVar5 = (long *)((long)pvVar6 + 0x10);
          do {
            uVar11 = uVar11 + 2;
            plVar5[-2] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 2);
            plVar5 = plVar5 + 4;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar11);
        }
        if ((uVar2 & 1) != 0) {
          plVar5 = (long *)((long)pvVar6 + uVar11 * 0x10);
          *plVar5 = (long)(plVar5 + 2);
        }
      }
      *(undefined8 *)((long)pvVar6 + (ulong)(uVar2 * 2) * 8) = 0;
      pvVar1 = (void *)((long)pvVar6 + (ulong)uVar15 * 0x10);
      *(void **)(param_1 + 0xe) = pvVar6;
      if (pvVar1 != (void *)0x0) {
        *(void **)(param_1 + 10) = pvVar1;
        param_1[8] = 0;
        param_1[9] = uVar15;
      }
    }
  }
LAB_034057e8:
  param_1[0x14] = 1;
  param_1[0x15] = param_2[0x89];
  param_1[0x16] = param_2[0x8a];
  param_1[0x17] = param_2[0x8b];
  uVar15 = param_2[0x8c];
  param_1[0x19] = 0;
  param_1[0x18] = uVar15;
  return;
}

