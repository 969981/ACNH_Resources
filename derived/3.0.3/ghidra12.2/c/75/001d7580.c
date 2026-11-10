
void FUN_001d7580(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long local_48;
  
  plVar7 = (long *)(param_1 + 0x48);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_00187810(&local_48);
  puVar1 = PTR_DAT_04bcc790;
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 != (long *)(param_1 + 0x18)) {
    uVar3 = (ulong)*(uint *)PTR_DAT_04bcc790;
    do {
      plVar6 = (long *)plVar8[1];
      if ((long)uVar3 < local_48 - plVar8[0x28]) {
        plVar4 = plVar8;
        plVar5 = plVar6;
        if (plVar6 == (long *)0x0) {
          do {
            plVar9 = (long *)plVar4[2];
            bVar2 = (long *)*plVar9 != plVar4;
            plVar4 = plVar9;
          } while (bVar2);
        }
        else {
          do {
            plVar9 = plVar5;
            plVar5 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        plVar4 = plVar8;
        if (plVar6 == (long *)0x0) {
          do {
            plVar5 = (long *)plVar4[2];
            bVar2 = (long *)*plVar5 != plVar4;
            plVar4 = plVar5;
          } while (bVar2);
        }
        else {
          do {
            plVar5 = plVar6;
            plVar6 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x10) == plVar8) {
          *(long **)(param_1 + 0x10) = plVar5;
        }
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
        FUN_00192390(*(undefined8 *)(param_1 + 0x18),plVar8);
        FUN_001e1868(plVar8 + 0x16);
        FUN_001e1868(plVar8 + 4);
        FUN_00187e4c(plVar8);
        uVar3 = (ulong)*(uint *)puVar1;
        plVar8 = plVar9;
      }
      else {
        plVar4 = plVar8;
        if (plVar6 == (long *)0x0) {
          do {
            plVar8 = (long *)plVar4[2];
            bVar2 = (long *)*plVar8 != plVar4;
            plVar4 = plVar8;
          } while (bVar2);
        }
        else {
          do {
            plVar8 = plVar6;
            plVar6 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
    } while (plVar8 != (long *)(param_1 + 0x18));
  }
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar8 != (long *)(param_1 + 0x30)) {
    uVar3 = (ulong)*(uint *)puVar1;
    do {
      plVar6 = (long *)plVar8[1];
      if ((long)uVar3 < local_48 - plVar8[0x16]) {
        plVar4 = plVar8;
        plVar5 = plVar6;
        if (plVar6 == (long *)0x0) {
          do {
            plVar9 = (long *)plVar4[2];
            bVar2 = (long *)*plVar9 != plVar4;
            plVar4 = plVar9;
          } while (bVar2);
        }
        else {
          do {
            plVar9 = plVar5;
            plVar5 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        plVar4 = plVar8;
        if (plVar6 == (long *)0x0) {
          do {
            plVar5 = (long *)plVar4[2];
            bVar2 = (long *)*plVar5 != plVar4;
            plVar4 = plVar5;
          } while (bVar2);
        }
        else {
          do {
            plVar5 = plVar6;
            plVar6 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x28) == plVar8) {
          *(long **)(param_1 + 0x28) = plVar5;
        }
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
        FUN_00192390(*(undefined8 *)(param_1 + 0x30),plVar8);
        FUN_001e1868(plVar8 + 4);
        FUN_00187e4c(plVar8);
        uVar3 = (ulong)*(uint *)puVar1;
        plVar8 = plVar9;
      }
      else {
        plVar4 = plVar8;
        if (plVar6 == (long *)0x0) {
          do {
            plVar8 = (long *)plVar4[2];
            bVar2 = (long *)*plVar8 != plVar4;
            plVar4 = plVar8;
          } while (bVar2);
        }
        else {
          do {
            plVar8 = plVar6;
            plVar6 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
    } while (plVar8 != (long *)(param_1 + 0x30));
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return;
}

