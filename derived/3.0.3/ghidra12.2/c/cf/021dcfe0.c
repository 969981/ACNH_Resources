
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_021dcfe0(int *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = lVar2 + 0x70;
    }
    else {
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar4[0x26] == (long *)0x0) {
        return 0;
      }
      lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      if (lVar2 == 0) {
        return 0;
      }
    }
    switch((ulong)BYTE_04179c0a * 4 + 0x21dd074) {
    case 0x21dd074:
      lVar1 = lVar2 + 0xe6c48;
      plVar5 = *(long **)(lVar2 + 0xe6c70);
      break;
    case 0x21dd088:
      lVar1 = lVar2 + 0xe6cf0;
      plVar5 = *(long **)(lVar2 + 0xe6d18);
      break;
    case 0x21dd09c:
      lVar1 = lVar2 + 0xe6d60;
      plVar5 = *(long **)(lVar2 + 0xe6d88);
      break;
    case 0x21dd0b0:
      lVar1 = lVar2 + 0xe6dd0;
      plVar5 = *(long **)(lVar2 + 0xe6df8);
      break;
    case 0x21dd0c4:
      lVar1 = lVar2 + 0xe6e40;
      plVar5 = *(long **)(lVar2 + 0xe6e68);
      break;
    case 0x21dd0ec:
      lVar1 = lVar2 + 0xe6eb0;
      plVar5 = *(long **)(lVar2 + 0xe6ed8);
      break;
    case 0x21dd100:
      lVar1 = lVar2 + 0xe6f20;
      plVar5 = *(long **)(lVar2 + 0xe6f48);
    }
    if (plVar5 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
        uVar3 = (*(code *)**(undefined8 **)*plVar5)();
      }
    }
    lVar2 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
    if ((*param_1 == (int)*(char *)(lVar2 + 0x2c)) && ((int)*(char *)(lVar2 + 0x2f) - 1U < 2)) {
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(lVar1 + 0x28) == 0 ||
          (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar4 == (undefined8 *)0x0)))) {
        return 1;
      }
      (**(code **)*puVar4)();
      return 1;
    }
    if (((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      (**(code **)*puVar4)();
    }
  }
  return 0;
}

