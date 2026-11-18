
void FUN_03324dc0(long *param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  lVar5 = param_1[0x62];
  if (((lVar5 != 0) &&
      (pcVar1 = (char *)(lVar5 + 0x177c), *pcVar1 != '\0' || *(long *)(lVar5 + 0xdf8) != 0)) &&
     (*(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf4) ==
      *(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf8))) {
    *(undefined8 *)(lVar5 + 0xdf8) = 0;
    pcVar1[0] = '\0';
    pcVar1[1] = '\x01';
  }
  if (*(long *)(param_1[0x67] + 0x428) == param_2) {
    lVar5 = *(long *)(*(long *)(param_1[0x67] + 0x20) + 0x18);
    lVar11 = *(long *)(lVar5 + 0x18);
    if (lVar11 != 0) {
      FUN_0037d044(lVar11,lVar5);
      FUN_0037cfe0(lVar11,lVar5);
    }
  }
  if (*(long *)(param_1[0x68] + 0x428) == param_2) {
    lVar5 = *(long *)(*(long *)(param_1[0x68] + 0x20) + 0x18);
    lVar11 = *(long *)(lVar5 + 0x18);
    if (lVar11 != 0) {
      FUN_0037d044(lVar11,lVar5);
      FUN_0037cfe0(lVar11,lVar5);
    }
  }
  lVar5 = param_1[0x6a];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x428) == param_2)) {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x18);
    lVar11 = *(long *)(lVar5 + 0x18);
    if (lVar11 != 0) {
      FUN_0037d044(lVar11,lVar5);
      FUN_0037cfe0(lVar11,lVar5);
    }
  }
  lVar5 = param_1[0x69];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x428) == param_2)) {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x18);
    lVar11 = *(long *)(lVar5 + 0x18);
    if (lVar11 != 0) {
      FUN_0037d044(lVar11,lVar5);
      FUN_0037cfe0(lVar11,lVar5);
    }
  }
  if (((param_1[0x5f] != 0) && (*(long *)(param_1[0x60] + 0x428) == param_2)) &&
     (lVar5 = param_1[700], lVar5 != param_2)) {
    uVar3 = *(uint *)(param_1 + 0x2ba);
    if (0 < (int)uVar3) {
      uVar9 = 0;
      plVar10 = param_1 + 0xba;
      do {
        plVar2 = plVar10;
        if (0x3f < uVar9) {
          plVar2 = param_1 + 0xba;
        }
        if (plVar2[3] == param_2) {
          plVar2[5] = lVar5;
          goto LAB_03324f34;
        }
        uVar9 = uVar9 + 1;
        plVar10 = plVar10 + 8;
      } while (uVar3 != uVar9);
      if (0x3f < (int)uVar3) goto LAB_03324f34;
    }
    plVar10 = param_1 + 0xba;
    plVar2 = plVar10 + (ulong)uVar3 * 8;
    if (0x3f < uVar3) {
      plVar2 = plVar10;
    }
    plVar2[3] = param_2;
    plVar2 = plVar10 + (ulong)*(uint *)(param_1 + 0x2ba) * 8;
    if (0x3f < *(uint *)(param_1 + 0x2ba)) {
      plVar2 = plVar10;
    }
    plVar2[5] = lVar5;
    plVar7 = (long *)param_1[0xb9];
    plVar2 = plVar10 + (ulong)*(uint *)(param_1 + 0x2ba) * 8;
    if (0x3f < *(uint *)(param_1 + 0x2ba)) {
      plVar2 = plVar10;
    }
    puVar4 = (undefined8 *)*plVar7;
    if ((undefined8 *)*plVar7 == (undefined8 *)0x0) {
      *plVar7 = (long)plVar2;
    }
    else {
      do {
        puVar8 = puVar4;
        puVar4 = (undefined8 *)puVar8[2];
      } while ((undefined8 *)puVar8[2] != (undefined8 *)0x0);
      puVar8[2] = plVar2;
      plVar2[1] = (long)puVar8;
      plVar7 = (long *)*puVar8;
    }
    *plVar2 = (long)plVar7;
    *(int *)(param_1 + 0x2ba) = (int)param_1[0x2ba] + 1;
  }
LAB_03324f34:
  param_1[700] = param_2;
  lVar5 = param_1[100];
  *(undefined1 *)((long)param_1 + 0x17d9) = 0;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 2000) == '\0')) {
    lVar11 = lVar5 + 0x230;
    if ((*(long *)(lVar5 + 0x20) != lVar11) && (*(long *)(lVar5 + 0x20) != lVar5 + 0x2d8)) {
      FUN_03292228(*(undefined8 *)(lVar5 + 0x4f8));
      lVar6 = *(long *)(lVar5 + 0x20);
      if (((lVar6 != lVar11) && (lVar6 != lVar5 + 0x2d8)) && (lVar6 != lVar5 + 0x38)) {
        if (((lVar6 != 0) && (-1 < *(int *)(lVar5 + 0x30))) &&
           (*(long **)(lVar6 + 0x80) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar6 + 0x80) + 0x20))();
        }
        *(long *)(lVar5 + 0x28) = lVar11;
        *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
      }
      plVar10 = (long *)param_1[0x72];
      *(undefined1 *)(param_1 + 0x2f9) = 0;
      lVar5 = DAT_0572ba48;
      if (*plVar10 == 0) {
        puVar8 = (undefined8 *)(DAT_0572ba48 + 8);
        puVar4 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
          *puVar8 = plVar10;
        }
        else {
          do {
            puVar8 = puVar4;
            puVar4 = (undefined8 *)puVar8[2];
          } while ((undefined8 *)puVar8[2] != (undefined8 *)0x0);
          puVar8[2] = plVar10;
          plVar10[1] = (long)puVar8;
          puVar8 = (undefined8 *)*puVar8;
        }
        *plVar10 = (long)puVar8;
        FUN_0328fad0(lVar5);
        if ((*(uint *)((long)plVar10 + 0x2c) & 1) == 0) {
          *(undefined8 *)(lVar5 + 0xa8) = 0;
          *(byte *)(lVar5 + 0xd4) = *(byte *)(lVar5 + 0xd4) & 0xfd;
        }
      }
      FUN_032924d0(param_1[0x72],param_1[0x73]);
                    /* WARNING: Could not recover jumptable at 0x03325158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x118))(param_1);
      return;
    }
  }
  return;
}

