
void FUN_007f43c0(long param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x2a) == '\0' && *(char *)(param_1 + 0x29) == '\0') goto LAB_007f44cc;
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_007f4430:
        if ((*(long **)(lVar3 + 0xe7290) == (long *)0x0) ||
           (puVar4 = (undefined8 *)**(long **)(lVar3 + 0xe7290), puVar4 == (undefined8 *)0x0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = (**(code **)*puVar4)();
          uVar2 = uVar2 ^ 1;
        }
        piVar1 = (int *)(*(long *)(lVar3 + 0xe7278) + *(long *)(lVar3 + 0xe7270));
        if (*piVar1 != 0) {
          DAT_04ccaca0 = *(undefined8 *)piVar1;
          DAT_04ccaca8 = *(undefined8 *)(piVar1 + 2);
          DAT_04ccacb0 = *(undefined8 *)(piVar1 + 4);
          DAT_04ccacb8 = piVar1[6];
        }
        if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0xe7290) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0xe7290) + 8), puVar4 != (undefined8 *)0x0))
        {
          (**(code **)*puVar4)();
        }
      }
    }
    else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 != 0)) goto LAB_007f4430;
  }
  if (DAT_04ccdcc0 != 0) {
    FUN_007f45d0();
  }
LAB_007f44cc:
  FUN_007f4fe0();
  return;
}

