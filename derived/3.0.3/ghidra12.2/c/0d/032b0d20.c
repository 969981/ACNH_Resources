
void FUN_032b0d20(long *param_1,undefined8 *param_2)

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
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  
  puVar14 = (undefined8 *)param_1[2];
  puVar11 = (undefined8 *)param_1[1];
  uVar9 = param_1[3] & 0x3fffffff;
  if (uVar9 <= (ulong)((long)puVar14 - (long)puVar11 >> 4)) {
    uVar10 = uVar9 << 1;
    if (uVar9 == 0) {
      uVar10 = 1;
    }
    if (uVar9 < uVar10) {
      if (((param_1[3] & 0xc0000000U) != 0x40000000) ||
         (plVar5 = (long *)*param_1, plVar5 == (long *)0x0)) goto LAB_032b0e10;
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar10 << 4,8);
      puVar11 = (undefined8 *)param_1[1];
      puVar14 = (undefined8 *)param_1[2];
      if (puVar6 == (undefined8 *)0x0) goto LAB_032b0e10;
      if (puVar11 == puVar14) {
        lVar13 = 0;
      }
      else {
        puVar8 = puVar6;
        do {
          puVar12 = puVar11 + 2;
          uVar2 = puVar11[1];
          *puVar8 = *puVar11;
          puVar8[1] = uVar2;
          puVar8 = puVar8 + 2;
          puVar11 = puVar12;
        } while (puVar12 != puVar14);
        puVar11 = (undefined8 *)param_1[1];
        lVar13 = param_1[2] - (long)puVar11 >> 4;
      }
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,puVar11);
      }
      puVar14 = puVar6 + lVar13 * 2;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar14;
      param_1[3] = param_1[3] & 0xc0000000U | uVar10;
    }
  }
  uVar2 = param_2[1];
  *puVar14 = *param_2;
  puVar14[1] = uVar2;
  puVar11 = (undefined8 *)param_1[1];
  puVar14 = (undefined8 *)(param_1[2] + 0x10);
  param_1[2] = (long)puVar14;
LAB_032b0e10:
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  uVar9 = (long)puVar14 - (long)puVar11 >> 4;
  if (0x800 < (long)puVar14 - (long)puVar11) {
    uVar10 = uVar9;
    do {
      lVar13 = *(long *)puVar3;
      if (lVar13 == 0) {
        __ptr = malloc(uVar10 << 4);
joined_r0x032b0e4c:
        if (__ptr != (void *)0x0) {
          FUN_032b0f70(puVar11,puVar14,uVar9,__ptr,uVar10);
          lVar13 = *(long *)puVar3;
          if (lVar13 == 0) {
            free(__ptr);
            return;
          }
          plVar5 = (long *)FUN_038cb610(lVar13,__ptr);
          if (plVar5 == (long *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x032b0f24. Too many branches */
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
          __ptr = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar10 << 4,8);
          goto joined_r0x032b0e4c;
        }
      }
      bVar1 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar1);
  }
  FUN_032b0f70(puVar11,puVar14,uVar9,0,0);
  return;
}

