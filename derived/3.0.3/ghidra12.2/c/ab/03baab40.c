
long * FUN_03baab40(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      cVar5 = *(char *)param_2[1];
    }
    else {
      plVar13 = *(long **)(param_1 + 0x18);
      plVar12 = plVar13 + *(int *)(param_1 + 0x10);
      do {
        lVar14 = *plVar13;
        plVar10 = (long *)(lVar14 + 8);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pcVar11 = *(char **)(lVar14 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar8 = (char *)param_2[1];
        if (pcVar11 == pcVar8) {
          return (long *)0x0;
        }
        cVar5 = *pcVar8;
        cVar6 = **(char **)(lVar14 + 0x10);
        if (cVar6 == cVar5) {
          if (cVar6 == '\0') {
            return (long *)0x0;
          }
          lVar9 = 0x7fffe;
          pcVar11 = *(char **)(lVar14 + 0x10);
LAB_03baac00:
          if (pcVar11[1] == pcVar8[1]) {
            if (pcVar11[1] == '\0') goto LAB_03baac4c;
            if (pcVar11[2] == pcVar8[2]) {
              if (pcVar11[2] == '\0') goto LAB_03baac4c;
              if ((lVar9 != 0) && (cVar6 = pcVar11[3], cVar6 == pcVar8[3])) goto code_r0x03baac3c;
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar12);
    }
    if (cVar5 != '\0') {
LAB_03baac60:
      if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x48)) {
        plVar12 = *(long **)(param_1 + 0x38);
        plVar13 = (long *)(param_1 + 0x20);
        if (plVar12 != (long *)0x0) {
          *(long *)(param_1 + 0x38) = *plVar12;
        }
        *(undefined1 *)((long)plVar12 + 0x4b) = 0;
        *(undefined1 *)((long)plVar12 + 0x2c) = 0;
        local_50 = PTR_DAT_04bb2020;
        *(undefined4 *)(plVar12 + 5) = 0x20;
        plVar12[4] = (long)plVar12 + 0x2c;
        plVar12[2] = (long)&DAT_0407ebb1;
        plVar12[3] = (long)&PTR_LAB_048f9700;
        local_50 = local_50 + 0x10;
        *plVar12 = (long)(PTR_DAT_04bd2248 + 0x10);
        plVar12[1] = (long)local_50;
        *(undefined4 *)(plVar12 + 10) = 0x3f800000;
        puVar7 = PTR_DAT_04bd2250;
        *(undefined1 *)(plVar12 + 0xd) = 0;
        plVar12[0xb] = 0;
        plVar12[0xc] = (long)(puVar7 + 0x10);
        *(undefined4 *)(plVar12 + 0x19) = 0x40800000;
        plVar12[0x10] = 0;
        plVar12[0x11] = 0;
        *(undefined4 *)(plVar12 + 0x16) = 0;
        plVar12[0x12] = 0;
        plVar12[0x13] = 0;
        *(undefined1 *)(plVar12 + 0x1c) = 0;
        plVar12[0x14] = 0;
        plVar12[0x15] = 0;
        *(undefined4 *)((long)plVar12 + 0xe4) = 0x3f800000;
        *(undefined4 *)((long)plVar12 + 0xd4) = 0x3f000000;
        *(undefined8 *)((long)plVar12 + 0xb4) = 0x3f490fdb3ec90fdb;
        *(undefined4 *)((long)plVar12 + 0xbc) = 0x3ec90fdb;
        plVar12[0xe] = (long)&PTR_LAB_04b7aa78;
        plVar12[0xf] = 0;
        plVar12[0x18] = 0x40a000003f800000;
        *(undefined8 *)((long)plVar12 + 0xcc) = 0x3f8000003f000000;
        *(undefined1 *)(plVar12 + 0x1b) = 1;
        puVar7 = PTR_DAT_04bb2f80;
        *(undefined1 *)(plVar12 + 0x34) = 1;
        *(undefined1 *)(plVar12 + 0x1d) = 0;
        plVar12[0x32] = 0;
        plVar12[0x33] = 0;
        *(undefined4 *)((long)plVar12 + 0x1a4) = 0;
        lVar14 = *(long *)(puVar7 + 0x10);
        lVar2 = *(long *)(puVar7 + 0x18);
        *(undefined1 *)(plVar12 + 0x35) = 0;
        lVar9 = *(long *)(puVar7 + 0x20);
        lVar3 = *(long *)(puVar7 + 0x28);
        *(undefined4 *)((long)plVar12 + 0x1b4) = 0;
        lVar1 = *(long *)puVar7;
        lVar4 = *(long *)(puVar7 + 8);
        pcStack_48 = "Listener";
        plVar12[0x20] = lVar4;
        plVar12[0x21] = lVar14;
        plVar12[0x26] = lVar4;
        plVar12[0x27] = lVar14;
        plVar12[0x2c] = lVar4;
        plVar12[0x2d] = lVar14;
        *(undefined8 *)((long)plVar12 + 0x1ac) = 0;
        plVar12[0x22] = lVar2;
        plVar12[0x23] = lVar9;
        plVar12[0x1e] = 0;
        plVar12[0x1f] = lVar1;
        plVar12[0x24] = lVar3;
        plVar12[0x25] = lVar1;
        plVar12[0x28] = lVar2;
        plVar12[0x29] = lVar9;
        plVar12[0x2e] = lVar2;
        plVar12[0x2f] = lVar9;
        plVar12[0x2a] = lVar3;
        plVar12[0x2b] = lVar1;
        plVar12[0x30] = lVar3;
        plVar12[0x31] = 0;
        FUN_03baa390(plVar12,&local_50);
        plVar12[0x37] = 0;
        plVar12[0x38] = 0;
        *(undefined4 *)((long)plVar12 + 0x54) = 0xbf800000;
        lVar14 = *plVar13;
        *plVar13 = (long)(plVar12 + 0x37);
        plVar12[0x37] = lVar14;
        plVar12[0x38] = (long)plVar13;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar12 + 0x37;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        (**(code **)(*plVar12 + 0x10))(plVar12,param_2);
        if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
          *(long **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = plVar12;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          return plVar12;
        }
        return plVar12;
      }
    }
  }
  return (long *)0x0;
code_r0x03baac3c:
  lVar9 = lVar9 + -3;
  pcVar8 = pcVar8 + 3;
  pcVar11 = pcVar11 + 3;
  if (cVar6 == '\0') {
LAB_03baac4c:
    if (lVar14 != 0) {
      return (long *)0x0;
    }
    goto LAB_03baac60;
  }
  goto LAB_03baac00;
}

