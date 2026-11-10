
void FUN_002920d0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  
  lVar1 = param_1 + 8;
  lVar7 = *(long *)PTR_DAT_04bcb8b8;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar7 + 0xf0);
  lVar6 = lVar1;
  if (lVar4 != lVar1) {
    lVar5 = lVar4;
    do {
      if (*(long *)(lVar5 + 0x20) == lVar8) {
        if (*(char *)(lVar5 + 0x19) != '\0') goto LAB_00292134;
        break;
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != lVar1);
  }
  FUN_0029c0e0(lVar7,lVar8);
  FUN_0029c144(lVar7,lVar8);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != lVar1) {
    lVar5 = lVar4;
    do {
      if (*(long *)(lVar5 + 0x20) == lVar8) {
        *(undefined1 *)(lVar5 + 0x19) = 1;
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != lVar1);
LAB_00292134:
    if (lVar4 != lVar1) {
      lVar8 = *(long *)(lVar7 + 0xf8);
      lVar6 = lVar4;
      do {
        if (*(long *)(lVar6 + 0x20) == lVar8) {
          if (*(char *)(lVar6 + 0x19) != '\0') goto LAB_002921e8;
          break;
        }
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != lVar1);
      lVar5 = lVar4;
      while (*(long *)(lVar5 + 0x20) != lVar8) {
        lVar5 = *(long *)(lVar5 + 8);
        if (lVar5 == lVar1) goto LAB_002921e8;
      }
      lVar6 = lVar4;
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_002921ec;
      FUN_0029c0e0(lVar7,lVar8);
      FUN_0029c144(lVar7,lVar8);
      lVar4 = *(long *)(param_1 + 0x10);
      lVar6 = lVar1;
      if (lVar4 == lVar1) goto LAB_002921ec;
      lVar6 = lVar4;
      do {
        if (*(long *)(lVar6 + 0x20) == lVar8) {
          *(undefined1 *)(lVar6 + 0x19) = 1;
        }
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != lVar1);
LAB_002921e8:
      lVar6 = lVar4;
    }
  }
LAB_002921ec:
  puVar2 = PTR_DAT_04bc1510;
  if (lVar6 != lVar1) {
    lVar4 = 0;
    uVar9 = 0xffff;
    do {
      do {
        if (*(char *)(lVar6 + 0x19) == '\0') {
          plVar3 = (long *)FUN_002ba790(*(undefined8 *)puVar2);
          lVar8 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(lVar6 + 0x20));
          if ((lVar8 != 0) && (*(ushort *)(lVar8 + 0xb2) < uVar9)) {
            lVar4 = *(long *)(lVar6 + 0x20);
            uVar9 = *(ushort *)(lVar8 + 0xb2);
          }
        }
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != lVar1);
      if (lVar4 == 0) {
        return;
      }
      lVar8 = *(long *)(param_1 + 0x10);
      lVar6 = lVar1;
      if (lVar8 != lVar1) {
        do {
          if (lVar4 == *(long *)(lVar8 + 0x20)) {
            FUN_0029c0e0(lVar7,lVar4);
            FUN_0029c144(lVar7,*(undefined8 *)(lVar8 + 0x20));
            *(undefined1 *)(lVar8 + 0x19) = 1;
          }
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != lVar1);
        lVar6 = *(long *)(param_1 + 0x10);
      }
      lVar4 = 0;
      uVar9 = 0xffff;
    } while (lVar6 != lVar1);
  }
  return;
}

