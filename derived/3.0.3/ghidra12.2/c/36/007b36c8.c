
undefined8 FUN_007b36c8(long *param_1,byte *param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  
  lVar6 = DAT_05574040;
  plVar3 = DAT_04ca9180;
  if (((*param_2 < 8) && (DAT_04ca9180 != (long *)0x0)) && (DAT_05574040 != 0)) {
    uVar4 = FUN_02582d8c(param_2,1);
    puVar2 = PTR_DAT_04bb4fb8;
    if (((uVar4 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) {
      FUN_02582a24(param_2);
      uVar4 = FUN_02582d8c(param_2,1);
      if (((uVar4 < 8) &&
          (lVar8 = *(long *)puVar2, *(char *)(lVar8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(int *)(lVar8 + (ulong)uVar4 * 0x13f0 + 0x13d0) == 0)) {
        uVar4 = (uint)*(byte *)(lVar8 + (ulong)uVar4 * 0x13f0 + 0x13d5);
      }
      else {
        uVar4 = 0xffffffff;
      }
      lVar6 = (**(code **)(*(long *)**(undefined8 **)(lVar6 + 0x10) + 0x38))();
      if (lVar6 != 0) {
        if ((*(long **)(lVar6 + 0xe71b0) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(lVar6 + 0xe71b0), puVar7 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar7)();
          uVar5 = uVar5 ^ 1;
        }
        plVar9 = &DAT_0417bad0;
        if (uVar4 < 8) {
          plVar10 = (long *)(*(long *)(lVar6 + 0xe7198) + *(long *)(lVar6 + 0xe7190) +
                            (ulong)uVar4 * 0x48);
          plVar9 = &DAT_0417bad0;
          if (*plVar10 != 0 || plVar10[1] != 0) {
            plVar9 = plVar10;
          }
        }
        lVar8 = *plVar9;
        lVar1 = plVar9[1];
        if (lVar8 == 0 && lVar1 == 0) {
          uVar11 = 0;
        }
        else {
          if (((*plVar3 == 0 && plVar3[1] == 0) || (*plVar3 != lVar8)) || (plVar3[1] != lVar1)) {
            plVar9 = plVar3 + 5;
            if (((*plVar9 == 0 && plVar3[6] == 0) || (*plVar9 != lVar8)) || (plVar3[6] != lVar1)) {
              plVar9 = plVar3 + 10;
              if (((*plVar9 == 0 && plVar3[0xb] == 0) || (*plVar9 != lVar8)) ||
                 (plVar3[0xb] != lVar1)) {
                plVar9 = plVar3 + 0xf;
                if (((*plVar9 == 0 && plVar3[0x10] == 0) || (*plVar9 != lVar8)) ||
                   (plVar3[0x10] != lVar1)) {
                  plVar9 = plVar3 + 0x14;
                  if (((*plVar9 == 0 && plVar3[0x15] == 0) || (*plVar9 != lVar8)) ||
                     (plVar3[0x15] != lVar1)) {
                    plVar9 = plVar3 + 0x19;
                    if (((*plVar9 == 0 && plVar3[0x1a] == 0) || (*plVar9 != lVar8)) ||
                       (plVar3[0x1a] != lVar1)) {
                      plVar9 = plVar3 + 0x1e;
                      if (((*plVar9 == 0 && plVar3[0x1f] == 0) || (*plVar9 != lVar8)) ||
                         (plVar3[0x1f] != lVar1)) {
                        uVar11 = 0;
                        if (((plVar3[0x23] == 0 && plVar3[0x24] == 0) || (plVar3[0x23] != lVar8)) ||
                           (plVar3[0x24] != lVar1)) goto LAB_007b3980;
                        plVar9 = plVar3 + 0x23;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            plVar9 = plVar3;
          }
          if (param_1 != (long *)0x0) {
            lVar8 = plVar9[1];
            *param_1 = *plVar9;
            param_1[1] = lVar8;
          }
          uVar11 = 1;
        }
LAB_007b3980:
        if ((uVar5 & 1) != 0) {
          return uVar11;
        }
        if (*(long *)(lVar6 + 0xe71b0) == 0) {
          return uVar11;
        }
        puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe71b0) + 8);
        if (puVar7 == (undefined8 *)0x0) {
          return uVar11;
        }
        (**(code **)*puVar7)();
        return uVar11;
      }
    }
  }
  return 0;
}

