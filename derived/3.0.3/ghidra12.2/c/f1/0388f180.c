
void FUN_0388f180(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  FUN_0388d320();
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x60);
    uVar5 = 0;
    lVar7 = (long)*(int *)(param_1 + 0x58) * 8;
    if (param_2 < 0) {
      do {
        lVar1 = uVar5 * 8;
        uVar3 = (uint)uVar5;
        if (*(uint *)(param_1 + 0x168) <= uVar3) {
          uVar3 = 0;
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + -8;
        *(undefined1 *)(*(long *)(param_1 + 0x170) + (ulong)uVar3) =
             *(undefined1 *)(*(long *)(lVar6 + lVar1) + 0x21);
      } while (lVar7 != 0);
    }
    else {
      do {
        lVar7 = lVar7 + -8;
        lVar1 = uVar5 * 8;
        uVar3 = (uint)uVar5;
        if (*(uint *)(param_1 + 0x168) <= uVar3) {
          uVar3 = 0;
        }
        uVar5 = uVar5 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x170) + (ulong)uVar3) =
             *(undefined1 *)(*(long *)(lVar6 + lVar1) + 0x21);
      } while (((int)uVar5 < param_2) && (lVar7 != 0));
    }
  }
  uVar3 = *(uint *)(param_1 + 0x168);
  if ((int)uVar5 < (int)uVar3) {
    do {
      uVar4 = (uint)uVar5;
      uVar2 = uVar4;
      if (uVar3 <= uVar4) {
        uVar2 = 0;
      }
      uVar5 = (ulong)(uVar4 + 1);
      *(undefined1 *)(*(long *)(param_1 + 0x170) + (long)(int)uVar2) = 0xff;
      uVar3 = *(uint *)(param_1 + 0x168);
    } while ((int)(uVar4 + 1) < (int)uVar3);
  }
  FUN_03892740(*(undefined8 *)(*(long *)(DAT_05ae6a60 + 0x90) + 0xc0),param_1 + 0x168);
  lVar7 = DAT_05ae6a60;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined1 *)(*(long *)(*(long *)(lVar7 + 0x90) + 0xc0) + 0x560) = 1;
  FUN_0388d4f0(param_1);
  lVar7 = *(long *)(DAT_05ae6a60 + 0x68);
  uVar5 = (ulong)*(uint *)(lVar7 + 0xa0);
  if (0 < (int)*(uint *)(lVar7 + 0xa0)) {
    puVar8 = *(undefined8 **)(lVar7 + 0xa8);
    do {
      if (*(char *)*puVar8 == -2) {
        puVar8 = (undefined8 *)*puVar8;
        if (puVar8 != (undefined8 *)0x0) {
          uVar3 = *(uint *)((long)puVar8 + 4) | 2;
          goto LAB_0388f328;
        }
        break;
      }
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar8 = *(undefined8 **)(lVar7 + 0xb0);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined8 *)(lVar7 + 0xb0) = *puVar8;
  }
  *puVar8 = 0;
  if (*(int *)(lVar7 + 0xa0) < *(int *)(lVar7 + 0xa4)) {
    *(undefined8 **)(*(long *)(lVar7 + 0xa8) + (long)*(int *)(lVar7 + 0xa0) * 8) = puVar8;
    *(int *)(lVar7 + 0xa0) = *(int *)(lVar7 + 0xa0) + 1;
    uVar3 = *(uint *)((long)puVar8 + 4) | 2;
  }
  else {
    uVar3 = 2;
  }
  *(undefined1 *)puVar8 = 0xfe;
LAB_0388f328:
  *(uint *)((long)puVar8 + 4) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0388f348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(DAT_05ae6a60 + 0x68) + 0x1d8))(*(long **)(DAT_05ae6a60 + 0x68),1);
  return;
}

