
/* WARNING: Removing unreachable block (ram,0x02b4bb94) */
/* WARNING: Removing unreachable block (ram,0x02b4baa4) */
/* WARNING: Removing unreachable block (ram,0x02b4b9b4) */
/* WARNING: Removing unreachable block (ram,0x02b4b8c4) */
/* WARNING: Removing unreachable block (ram,0x02b4b7d4) */
/* WARNING: Removing unreachable block (ram,0x02b4b6e4) */
/* WARNING: Removing unreachable block (ram,0x02b4b5f4) */
/* WARNING: Removing unreachable block (ram,0x02b4bc84) */

undefined8 FUN_02b4b560(undefined4 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_DAT_04bb46b0;
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
LAB_02b4b66c:
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_02b4b6c0:
          puVar7 = (undefined *)(lVar5 + 0x128c30);
          if ((*(long **)(lVar5 + 0x128c58) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x128c58), puVar6 == (undefined8 *)0x0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)*puVar6)();
            uVar2 = uVar2 & 0xffffffff;
          }
          if ((*(char *)(*(long *)(lVar5 + 0x128c40) + *(long *)(lVar5 + 0x128c38) + 0x289f8) == -1)
             && (uVar3 = FUN_02b4bd40(1,param_1), (uVar3 & 1) != 0)) goto LAB_02b4bcdc;
          if (((uVar2 & 1) != 0) &&
             ((*(long *)(lVar5 + 0x128c58) != 0 &&
              (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x128c58) + 8),
              puVar6 != (undefined8 *)0x0)))) {
            (**(code **)*puVar6)();
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_02b4b6c0;
    }
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_02b4b7b0:
          puVar7 = (undefined *)(lVar5 + 0x138638);
          if ((*(long **)(lVar5 + 0x138660) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x138660), puVar6 == (undefined8 *)0x0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)*puVar6)();
            uVar2 = uVar2 & 0xffffffff;
          }
          if ((*(char *)(*(long *)(lVar5 + 0x138648) + *(long *)(lVar5 + 0x138640) + 0x289f8) == -1)
             && (uVar3 = FUN_02b4bd40(2,param_1), (uVar3 & 1) != 0)) goto LAB_02b4bcdc;
          if (((uVar2 & 1) != 0) &&
             ((*(long *)(lVar5 + 0x138660) != 0 &&
              (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x138660) + 8),
              puVar6 != (undefined8 *)0x0)))) {
            (**(code **)*puVar6)();
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_02b4b7b0;
    }
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_02b4b8a0:
          puVar7 = (undefined *)(lVar5 + 0x148040);
          if ((*(long **)(FUN_00148068 + lVar5) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(FUN_00148068 + lVar5), puVar6 == (undefined8 *)0x0)
             ) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)*puVar6)();
            uVar2 = uVar2 & 0xffffffff;
          }
          if ((*(char *)(*(long *)(lVar5 + 0x148050) + *(long *)(lVar5 + 0x148048) + 0x289f8) == -1)
             && (uVar3 = FUN_02b4bd40(3,param_1), (uVar3 & 1) != 0)) goto LAB_02b4bcdc;
          if (((uVar2 & 1) != 0) &&
             ((*(long *)(FUN_00148068 + lVar5) != 0 &&
              (puVar6 = *(undefined8 **)(*(long *)(FUN_00148068 + lVar5) + 8),
              puVar6 != (undefined8 *)0x0)))) {
            (**(code **)*puVar6)();
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_02b4b8a0;
    }
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_02b4b990:
          puVar7 = &UNK_00157a48 + lVar5;
          if ((*(long **)(&LAB_00157a70 + lVar5) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(&LAB_00157a70 + lVar5), puVar6 == (undefined8 *)0x0
             )) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)*puVar6)();
            uVar2 = uVar2 & 0xffffffff;
          }
          if ((*(char *)(*(long *)(&UNK_00157a58 + lVar5) + *(long *)(&UNK_00157a50 + lVar5) +
                        0x289f8) == -1) && (uVar3 = FUN_02b4bd40(4,param_1), (uVar3 & 1) != 0))
          goto LAB_02b4bcdc;
          if (((uVar2 & 1) != 0) &&
             ((*(long *)(&LAB_00157a70 + lVar5) != 0 &&
              (puVar6 = *(undefined8 **)(*(long *)(&LAB_00157a70 + lVar5) + 8),
              puVar6 != (undefined8 *)0x0)))) {
            (**(code **)*puVar6)();
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_02b4b990;
    }
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_02b4ba80:
          puVar7 = (undefined *)(lVar5 + 0x167450);
          if ((*(long **)(lVar5 + 0x167478) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x167478), puVar6 == (undefined8 *)0x0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)*puVar6)();
            uVar2 = uVar2 & 0xffffffff;
          }
          if ((*(char *)(*(long *)(lVar5 + 0x167460) + *(long *)(lVar5 + 0x167458) + 0x289f8) == -1)
             && (uVar3 = FUN_02b4bd40(5,param_1), (uVar3 & 1) != 0)) goto LAB_02b4bcdc;
          if (((uVar2 & 1) != 0) &&
             ((*(long *)(lVar5 + 0x167478) != 0 &&
              (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x167478) + 8),
              puVar6 != (undefined8 *)0x0)))) {
            (**(code **)*puVar6)();
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_02b4ba80;
    }
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_02b4bb70:
          puVar7 = (undefined *)(lVar5 + 0x176e58);
          if ((*(long **)(lVar5 + 0x176e80) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x176e80), puVar6 == (undefined8 *)0x0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)*puVar6)();
            uVar2 = uVar2 & 0xffffffff;
          }
          if ((*(char *)(*(long *)(lVar5 + 0x176e68) + *(long *)(lVar5 + 0x176e60) + 0x289f8) == -1)
             && (uVar3 = FUN_02b4bd40(6,param_1), (uVar3 & 1) != 0)) goto LAB_02b4bcdc;
          if (((uVar2 & 1) != 0) &&
             ((*(long *)(lVar5 + 0x176e80) != 0 &&
              (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x176e80) + 8),
              puVar6 != (undefined8 *)0x0)))) {
            (**(code **)*puVar6)();
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_02b4bb70;
    }
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_02b4bc60:
          puVar7 = (undefined *)(lVar5 + 0x186860);
          if ((*(long **)(lVar5 + 0x186888) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x186888), puVar6 == (undefined8 *)0x0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)*puVar6)();
            uVar2 = uVar2 & 0xffffffff;
          }
          if ((*(char *)(*(long *)(lVar5 + 0x186870) + *(long *)(lVar5 + 0x186868) + 0x289f8) == -1)
             && (uVar3 = FUN_02b4bd40(7,param_1), (uVar3 & 1) != 0)) goto LAB_02b4bcdc;
          if (((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x186888) != 0)) {
            puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x186888) + 8);
            if (puVar6 == (undefined8 *)0x0) {
              return 0;
            }
            (**(code **)*puVar6)();
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_02b4bc60;
    }
    uVar4 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) != 0) {
      if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
         (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0)) goto LAB_02b4b5d0;
      goto LAB_02b4b66c;
    }
    lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar5 == 0) goto LAB_02b4b66c;
    lVar5 = lVar5 + 0x70;
LAB_02b4b5d0:
    puVar7 = (undefined *)(lVar5 + 0x119228);
    if ((*(long **)(&LAB_00119250 + lVar5) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(&LAB_00119250 + lVar5), puVar6 == (undefined8 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)*puVar6)();
      uVar2 = uVar2 & 0xffffffff;
    }
    if ((*(char *)(*(long *)(&LAB_00119238 + lVar5) + *(long *)(&LAB_00119230 + lVar5) + 0x289f8) !=
         -1) || (uVar3 = FUN_02b4bd40(0,param_1), (uVar3 & 1) == 0)) {
      if (((uVar2 & 1) != 0) &&
         ((*(long *)(&LAB_00119250 + lVar5) != 0 &&
          (puVar6 = *(undefined8 **)(*(long *)(&LAB_00119250 + lVar5) + 8),
          puVar6 != (undefined8 *)0x0)))) {
        (**(code **)*puVar6)();
      }
      goto LAB_02b4b66c;
    }
LAB_02b4bcdc:
    if ((((uVar2 & 1) != 0) && (*(long *)(puVar7 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(puVar7 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    uVar4 = 1;
  }
  return uVar4;
}

