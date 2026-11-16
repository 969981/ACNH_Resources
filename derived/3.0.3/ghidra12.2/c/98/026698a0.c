
int FUN_026698a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  
  puVar4 = PTR_DAT_04bb46b0;
  iVar10 = 0;
  do {
    if ((*(long *)puVar4 != 0) && (lVar5 = FUN_026eec4c(*(long *)puVar4,iVar10), lVar5 != 0)) {
      if (*(long **)(lVar5 + 0x17bb0) == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0);
        uVar7 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          uVar7 = (**(code **)*puVar6)();
        }
      }
      piVar1 = (int *)(*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90));
      if ((param_1[7] == piVar1[7]) &&
         ((*(long *)(piVar1 + 8) == *(long *)(param_1 + 8) &&
          *(long *)(piVar1 + 10) == *(long *)(param_1 + 10)) && piVar1[0xc] == param_1[0xc])) {
        if (((short)param_1[1] == 0) || ((short)piVar1[1] == 0)) {
          iVar11 = *param_1;
          iVar2 = *piVar1;
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar6)();
          }
          if (iVar11 == iVar2) {
            return iVar10;
          }
        }
        else {
          if (*param_1 != *piVar1) goto LAB_02669960;
          uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
          if (uVar8 == uVar9) {
            uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
            uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
            if (uVar8 != uVar9) goto LAB_02669a2c;
            uVar3 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
            uVar8 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
            uVar3 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
            uVar9 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
            if (uVar8 != uVar9) goto LAB_02669a2c;
            iVar11 = 0;
          }
          else {
LAB_02669a2c:
            iVar11 = 1;
            if (uVar8 < uVar9) {
              iVar11 = -1;
            }
          }
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar6)();
          }
          if (iVar11 == 0) {
            return iVar10;
          }
        }
      }
      else {
LAB_02669960:
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0))
        {
          (**(code **)*puVar6)();
        }
      }
    }
    iVar10 = iVar10 + 1;
    if (iVar10 == 8) {
      return -1;
    }
  } while( true );
}

