
/* WARNING: Removing unreachable block (ram,0x032edccc) */
/* WARNING: Removing unreachable block (ram,0x032edb78) */
/* WARNING: Removing unreachable block (ram,0x032edb24) */
/* WARNING: Removing unreachable block (ram,0x032edb44) */
/* WARNING: Removing unreachable block (ram,0x032edb98) */
/* WARNING: Removing unreachable block (ram,0x032edce8) */

void FUN_032eda90(long param_1,long *param_2,byte param_3)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  short sVar5;
  undefined2 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  *(undefined1 *)(param_1 + 9) = 1;
  plVar10 = *(long **)PTR_DAT_04bc96a8;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar11 = 0;
  do {
    if (*(short *)(param_2[1] + uVar11 * 2) == 0) {
LAB_032edb6c:
      if (*plVar10 == 0) {
        puVar6 = (undefined2 *)0x0;
        puVar3 = (undefined2 *)PTR_DAT_04bb2da0;
      }
      else {
        puVar6 = (undefined2 *)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,0xf4,8);
        puVar3 = (undefined2 *)PTR_DAT_04bb2da0;
      }
      PTR_DAT_04bb2da0 = (undefined *)puVar3;
      if (0 < (int)uVar11) {
        uVar7 = 0;
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = param_2[1];
          uVar9 = 0;
          do {
            if (*(short *)(lVar8 + uVar9 * 2) == 0) goto LAB_032edbe4;
            lVar1 = lVar8 + uVar9 * 2;
            if (*(short *)(lVar1 + 2) == 0) {
              uVar9 = uVar9 + 1;
              goto LAB_032edbe4;
            }
            if (*(short *)(lVar1 + 4) == 0) {
              uVar9 = uVar9 + 2;
              goto LAB_032edbe4;
            }
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar9 = 0;
LAB_032edbe4:
          puVar2 = puVar3;
          if (uVar7 <= (uVar9 & 0xffffffff)) {
            puVar2 = (undefined2 *)(lVar8 + uVar7 * 2);
          }
          uVar4 = FUN_038cd950(*puVar2);
          uVar9 = uVar7 + 1;
          puVar6[uVar7] = uVar4;
          uVar7 = uVar9;
        } while (uVar9 != (uVar11 & 0xffffffff));
      }
      puVar6[(int)uVar11] = 0;
      goto joined_r0x032edc90;
    }
    lVar8 = param_2[1] + uVar11 * 2;
    if (*(short *)(lVar8 + 2) == 0) {
      uVar11 = uVar11 + 1;
      goto LAB_032edb6c;
    }
    if (*(short *)(lVar8 + 4) == 0) {
      uVar11 = uVar11 + 2;
      goto LAB_032edb6c;
    }
    uVar11 = uVar11 + 3;
  } while (uVar11 != 0x80001);
  if (*plVar10 == 0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,0xf4,8);
  }
  uVar11 = 0;
  *puVar6 = 0;
joined_r0x032edc90:
  if ((param_3 & 1) == 0) {
    uVar11 = 0x37;
    uVar7 = 0;
  }
  else {
    uVar7 = uVar11 & 0xffffffff;
    uVar11 = uVar11 & 0xffffffff;
  }
  sVar5 = FUN_032ef2b0(plVar10,0,puVar6,0,uVar7,uVar11);
  *(int *)(param_1 + 4) = (int)sVar5;
  *(byte *)(param_1 + 8) = param_3 & 1;
  if (*plVar10 != 0) {
    (**(code **)(*(long *)*plVar10 + 0x38))((long *)*plVar10,puVar6);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}

