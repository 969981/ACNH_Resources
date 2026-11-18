
void FUN_032b0ad0(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  void *__ptr;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  puVar14 = (undefined8 *)param_1[2];
  puVar8 = (undefined8 *)param_1[1];
  uVar11 = param_1[3] & 0x3fffffff;
  if (uVar11 <= (ulong)((long)puVar14 - (long)puVar8 >> 4)) {
    uVar12 = uVar11 << 1;
    if (uVar11 == 0) {
      uVar12 = 1;
    }
    if (uVar11 < uVar12) {
      if (((param_1[3] & 0xc0000000U) != 0x40000000) ||
         (plVar5 = (long *)*param_1, plVar5 == (long *)0x0)) goto LAB_032b0bbc;
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar12 << 4,8);
      puVar8 = (undefined8 *)param_1[1];
      puVar14 = (undefined8 *)param_1[2];
      if (puVar6 == (undefined8 *)0x0) goto LAB_032b0bbc;
      if (puVar8 == puVar14) {
        lVar13 = 0;
      }
      else {
        puVar10 = puVar6;
        do {
          puVar9 = puVar8 + 2;
          uVar2 = puVar8[1];
          *puVar10 = *puVar8;
          puVar10[1] = uVar2;
          puVar8 = puVar9;
          puVar10 = puVar10 + 2;
        } while (puVar9 != puVar14);
        puVar8 = (undefined8 *)param_1[1];
        lVar13 = param_1[2] - (long)puVar8 >> 4;
      }
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)(*(long *)*param_1 + 0x38))();
      }
      puVar14 = puVar6 + lVar13 * 2;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar14;
      param_1[3] = param_1[3] & 0xc0000000U | uVar12;
    }
  }
  uVar2 = param_2[1];
  *puVar14 = *param_2;
  puVar14[1] = uVar2;
  puVar8 = (undefined8 *)param_1[1];
  puVar14 = (undefined8 *)(param_1[2] + 0x10);
  param_1[2] = (long)puVar14;
LAB_032b0bbc:
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  puVar8 = puVar8 + 2;
  uVar11 = (long)puVar14 - (long)puVar8 >> 4;
  if (0x800 < (long)puVar14 - (long)puVar8) {
    uVar12 = uVar11;
    do {
      lVar13 = *(long *)puVar3;
      if (lVar13 == 0) {
        __ptr = malloc(uVar12 << 4);
joined_r0x032b0bfc:
        if (__ptr != (void *)0x0) {
          FUN_032b0f70(puVar8,puVar14,uVar11,__ptr,uVar12);
          lVar13 = *(long *)puVar3;
          if (lVar13 == 0) {
            free(__ptr);
            return;
          }
          plVar5 = (long *)FUN_038cb610(lVar13,__ptr);
          if (plVar5 == (long *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x032b0cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
          return;
        }
      }
      else {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        plVar5 = (long *)(lVar13 + 8);
        if (lVar7 != 0) {
          plVar5 = (long *)(lVar7 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 != (long *)0x0) {
          __ptr = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar12 << 4,8);
          goto joined_r0x032b0bfc;
        }
      }
      bVar1 = 1 < uVar12;
      uVar12 = uVar12 >> 1;
    } while (bVar1);
  }
  FUN_032b0f70(puVar8,puVar14,uVar11,0,0);
  return;
}

