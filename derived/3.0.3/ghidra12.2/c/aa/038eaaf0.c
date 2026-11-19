
void FUN_038eaaf0(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  void *__ptr;
  
  puVar2 = PTR_DAT_04bb2698;
  __ptr = *(void **)(param_1 + 0x50);
  plVar1 = (long *)(param_1 + 0x30);
  if (__ptr != (void *)0x0) {
    plVar6 = *(long **)(param_1 + 0x38);
    if (*(long **)(param_1 + 0x38) == plVar1) {
LAB_038eab94:
      lVar5 = *(long *)puVar2;
      if (lVar5 == 0) {
        free(__ptr);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar5,__ptr);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        }
      }
    }
    else {
      do {
        plVar10 = (long *)plVar6[1];
        plVar11 = plVar10;
        if (*plVar6 != 0) {
          *(long **)(*plVar6 + 8) = plVar10;
          plVar11 = (long *)plVar6[1];
        }
        if (plVar11 != (long *)0x0) {
          *plVar11 = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        plVar6[-0x17] = *(long *)(param_1 + 0x48);
        *(long **)(param_1 + 0x48) = plVar6 + -0x17;
        plVar6 = plVar10;
      } while (plVar10 != plVar1);
      __ptr = *(void **)(param_1 + 0x50);
      if (__ptr != (void *)0x0) goto LAB_038eab94;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar5 = *(long *)puVar2;
  if (lVar5 == 0) {
    puVar8 = malloc(1000);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar8 = (undefined8 *)(lVar5 + 8);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*puVar8;
      if (param_2 == (long *)0x0) goto LAB_038eac54;
    }
    puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,1000,8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x48) = puVar8;
    puVar8[0x19] = puVar8 + 0x32;
    puVar8[0x32] = puVar8 + 0x4b;
    puVar8[0x4b] = puVar8 + 100;
    *puVar8 = puVar8 + 0x19;
    puVar8[100] = 0;
    *(undefined8 **)(param_1 + 0x50) = puVar8;
    *(undefined4 *)(param_1 + 0x58) = 5;
  }
LAB_038eac54:
  plVar6 = *(long **)(param_1 + 0x38);
  while (plVar6 != plVar1) {
    plVar10 = (long *)plVar6[1];
    plVar11 = plVar10;
    if (*plVar6 != 0) {
      *(long **)(*plVar6 + 8) = plVar10;
      plVar11 = (long *)plVar6[1];
    }
    if (plVar11 != (long *)0x0) {
      *plVar11 = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    plVar6[-0x17] = *(long *)(param_1 + 0x48);
    *(long **)(param_1 + 0x48) = plVar6 + -0x17;
    plVar6 = plVar10;
  }
  lVar5 = 0;
  puVar2 = PTR_DAT_04bb3768 + 0x10;
  puVar3 = PTR_DAT_04bb2d88 + 0x10;
  do {
    if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x58)) {
      plVar6 = *(long **)(param_1 + 0x48);
      if (plVar6 != (long *)0x0) {
        *(long *)(param_1 + 0x48) = *plVar6;
      }
      *(undefined1 *)((long)plVar6 + 0x1b) = 0;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      *(undefined4 *)(plVar6 + 2) = 8;
      *(undefined1 *)((long)plVar6 + 0x34) = 0;
      *plVar6 = (long)puVar2;
      plVar6[1] = (long)plVar6 + 0x14;
      plVar10 = plVar6 + 0x17;
      *plVar10 = 0;
      *(undefined4 *)(plVar6 + 6) = 0x80;
      *(undefined1 *)((long)plVar6 + 0xb3) = 0;
      plVar6[0x18] = 0;
      plVar6[4] = (long)puVar3;
      plVar6[5] = (long)plVar6 + 0x34;
      lVar7 = *plVar1;
      *plVar1 = (long)plVar10;
      *plVar10 = lVar7;
      plVar6[0x18] = (long)plVar1;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar10;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
    else {
      plVar6 = (long *)0x0;
    }
    puVar12 = (undefined *)plVar6[1];
    puVar9 = (&PTR_DAT_04b658d0)[lVar5];
    if (puVar12 != puVar9) {
      lVar7 = 0;
      do {
        if (puVar9[lVar7] == '\0') goto LAB_038eadf0;
        if (puVar9[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038eadf0;
        }
        if (puVar9[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038eadf0;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038eadf0:
      iVar4 = (int)lVar7;
      if ((int)plVar6[2] <= (int)lVar7) {
        iVar4 = (int)plVar6[2] + -1;
      }
      memcpy(puVar12,puVar9,(long)iVar4);
      puVar12[iVar4] = 0;
    }
    puVar9 = (&PTR_DAT_04b658f8)[lVar5];
    puVar12 = (undefined *)plVar6[5];
    if (puVar12 != puVar9) {
      lVar7 = 0;
      do {
        if (puVar9[lVar7] == '\0') goto LAB_038eace0;
        if (puVar9[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038eace0;
        }
        if (puVar9[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038eace0;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038eace0:
      iVar4 = (int)lVar7;
      if ((int)plVar6[6] <= (int)lVar7) {
        iVar4 = (int)plVar6[6] + -1;
      }
      memcpy(puVar12,puVar9,(long)iVar4);
      puVar12[iVar4] = 0;
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 5) {
      return;
    }
  } while( true );
}

