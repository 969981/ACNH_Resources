
void FUN_039a6860(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((*(long *)(param_1 + 0x230) == 0 || (*(ushort *)(param_1 + 0xa74) & 0x10) == 0) &&
       param_2[1] == 0) && (lVar3 = *(long *)(param_1 + 0xcb0), lVar3 != 0)) {
    if ((*(byte *)(param_1 + 0xd19) >> 3 & 1) == 0) {
      switch(*param_2) {
      case 0:
        if (*(char *)(param_1 + 0x202) == '\0') {
          lVar2 = *(long *)(param_2 + 4);
          if (*(long *)(param_2 + 6) != 0) {
            lVar2 = *(long *)(param_2 + 6);
          }
        }
        else {
          lVar2 = param_1 + 0x380;
        }
        FUN_03a04f24(lVar3,*(undefined8 *)(param_2 + 0x14),(long)*(char *)(param_1 + 0xd18),lVar2);
        return;
      case 1:
        FUN_03a05000(lVar3,(long)*(char *)(param_1 + 0xd18));
        return;
      case 2:
        FUN_03a05108(lVar3,*(undefined8 *)(param_2 + 0x14),(long)*(char *)(param_1 + 0xd18));
        return;
      default:
        goto switchD_039a68c0_caseD_3;
      case 4:
        FUN_03a052e0(lVar3,*(undefined8 *)(param_2 + 0x14),(long)*(char *)(param_1 + 0xd18));
        return;
      case 5:
        FUN_03a06360(lVar3,*(undefined8 *)(param_2 + 0x14),(long)*(char *)(param_1 + 0xd18));
        return;
      case 7:
        FUN_03a06a20(lVar3,*(undefined8 *)(param_2 + 0x14),(long)*(char *)(param_1 + 0xd18));
        return;
      case 9:
        FUN_03a073c0(lVar3,*(undefined8 *)(param_2 + 0x14),(long)*(char *)(param_1 + 0xd18));
        lVar3 = *(long *)(param_2 + 0x10);
      }
    }
    else {
      if (*param_2 != 2) {
        return;
      }
      FUN_03a05108(lVar3,*(undefined8 *)(param_2 + 0x14),(long)*(char *)(param_1 + 0xd18));
      lVar3 = *(long *)(param_2 + 0x10);
    }
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x14);
      plVar1 = *(long **)(param_2 + 4);
      if (*(long **)(param_2 + 6) != (long *)0x0) {
        plVar1 = *(long **)(param_2 + 6);
      }
      (**(code **)(*plVar1 + 0x38))(plVar1,uVar4);
      lVar3 = *(long *)(param_2 + 4);
      if (*(long *)(param_2 + 6) != 0) {
        lVar3 = *(long *)(param_2 + 6);
      }
      FUN_038e77e4(*(undefined8 *)(param_2 + 0x10),uVar4,lVar3);
      return;
    }
  }
switchD_039a68c0_caseD_3:
  return;
}

