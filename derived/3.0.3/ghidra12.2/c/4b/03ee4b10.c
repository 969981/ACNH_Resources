
long * FUN_03ee4b10(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar4 = malloc(0x3b8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar12 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x3b8,8);
  }
  FUN_03ee56d0();
  if (param_1 == 0) {
    FUN_03ee5310(plVar4,param_2);
  }
  else {
    FUN_03964240(&local_38,param_1);
    uVar5 = FUN_03ee4d40(plVar4,local_38,param_2);
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)plVar4[0x4b];
      if (puVar7 != (undefined8 *)0x0) {
        plVar11 = puVar7 + -1;
        lVar12 = *plVar11;
        if (lVar12 != 0) {
          puVar8 = puVar7 + lVar12 * 5;
          uVar5 = lVar12 * 0x28 - 0x28;
          uVar1 = ((uint)(uVar5 / 0x28) & 0x7ffffff) + 1;
          if ((uVar1 & 7) != 0) {
            lVar12 = ((ulong)uVar1 & 7) * 0x28;
            do {
              lVar12 = lVar12 + -0x28;
              puVar8 = puVar8 + -5;
              *puVar8 = &PTR_LAB_04b67f18;
            } while (lVar12 != 0);
          }
          if (0x117 < uVar5) {
            puVar8 = puVar8 + -0x14;
            do {
              puVar8[0xf] = &PTR_LAB_04b67f18;
              puVar8[10] = &PTR_LAB_04b67f18;
              puVar8[5] = &PTR_LAB_04b67f18;
              *puVar8 = &PTR_LAB_04b67f18;
              puVar8[-5] = &PTR_LAB_04b67f18;
              puVar8[-10] = &PTR_LAB_04b67f18;
              puVar8[-0xf] = &PTR_LAB_04b67f18;
              puVar9 = puVar8 + -0x14;
              *puVar9 = &PTR_LAB_04b67f18;
              puVar8 = puVar8 + -0x28;
            } while (puVar9 != puVar7);
          }
        }
        if (*(long *)puVar2 == 0) {
          free(plVar11);
        }
        else {
          plVar6 = (long *)FUN_038cb610(*(long *)puVar2,plVar11);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,plVar11);
          }
        }
        plVar4[0x4b] = 0;
        *(undefined4 *)(plVar4 + 0x4a) = 0;
      }
      plVar11 = (long *)plVar4[6];
      plVar6 = (long *)plVar4[0x49];
      if (plVar11 != (long *)0x0) {
        if (plVar11 == plVar6) {
          plVar10 = (long *)0x0;
        }
        else {
          do {
            plVar10 = plVar11;
            plVar11 = (long *)plVar10[4];
            if (plVar11 == (long *)0x0) goto LAB_03ee4d04;
          } while (plVar11 != plVar6);
        }
        plVar11 = plVar4 + 6;
        if (plVar10 != (long *)0x0) {
          plVar11 = plVar10 + 4;
        }
        *plVar11 = plVar6[4];
        if (plVar6[4] == 0) {
          plVar4[7] = (long)plVar10;
        }
        plVar6[4] = 0;
        plVar6 = (long *)plVar4[0x49];
      }
LAB_03ee4d04:
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
      plVar4 = (long *)0x0;
    }
  }
  return plVar4;
}

