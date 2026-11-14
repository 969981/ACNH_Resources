
void FUN_01ba1624(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  short *psVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  long *plVar11;
  
  plVar11 = *(long **)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined2 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined1 *)(param_1 + 0x248) = 1;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(long **)(param_1 + 0x230) = plVar11;
  uVar2 = (**(code **)(*plVar11 + 0x10))(plVar11);
  *(undefined8 *)(param_1 + 0x238) = uVar2;
  *(undefined8 *)(param_1 + 0x240) = uVar2;
  uVar3 = (**(code **)(*plVar11 + 0x20))(plVar11);
  *(ulong *)(param_1 + 0x240) = *(long *)(param_1 + 0x240) + (uVar3 & 0xffffffff) * 2 + -2;
  (**(code **)(**(long **)(param_1 + 0x230) + 0x38))();
  (**(code **)(**(long **)(param_1 + 0x208) + 0x30))
            (*(long **)(param_1 + 0x208),*(undefined8 *)(param_1 + 0x210));
  if (((param_2 & 1) != 0) &&
     (puVar7 = *(undefined8 **)(param_1 + 0x238), puVar7 != (undefined8 *)0x0)) {
    if (*(undefined8 **)(param_1 + 0x240) < puVar7 + 1) {
      *(undefined1 *)(param_1 + 0x248) = 0;
      if (*(long *)(param_1 + 0x228) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x228) + 0x200) = 2;
      }
    }
    else {
      *puVar7 = 0x600c7000e;
      *(undefined8 **)(param_1 + 0x238) = puVar7 + 1;
      *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 4;
    }
  }
  plVar11 = (long *)(param_1 + 0x250);
  psVar4 = (short *)(**(code **)(*(long *)(param_1 + 0x250) + 0x18))(plVar11);
  iVar1 = (**(code **)(*(long *)(param_1 + 0x250) + 0x20))(plVar11);
  if (((psVar4 != (short *)0x0) && (iVar1 != 0)) && (*psVar4 != 0)) {
    psVar4 = (short *)(**(code **)(*plVar11 + 0x18))(plVar11);
    lVar5 = (**(code **)(*plVar11 + 0x18))(plVar11);
    if (lVar5 == 0) {
      psVar9 = (short *)0x0;
    }
    else {
      uVar3 = (**(code **)(*plVar11 + 0x20))(plVar11);
      psVar9 = (short *)(lVar5 + (uVar3 & 0xffffffff) * 2);
    }
    if (*psVar4 == 0xf) {
      psVar10 = psVar4 + 3;
      if ((psVar10 <= psVar9) || (psVar9 == (short *)0x0)) goto LAB_01ba17dc;
    }
    else if (((*psVar4 == 0xe) && ((psVar4[3] & 1U) == 0)) &&
            ((psVar10 = (short *)((long)psVar4 + ((ulong)(ushort)psVar4[3] & 0xfffe) + 8),
             psVar9 == (short *)0x0 || (psVar10 <= psVar9)))) {
LAB_01ba17dc:
      pvVar6 = *(void **)(param_1 + 0x238);
      if (pvVar6 != (void *)0x0) {
        uVar8 = (long)psVar10 - (long)psVar4;
        uVar3 = (long)pvVar6 + (uVar8 & 0x1fffffffe);
        if (*(ulong *)(param_1 + 0x240) < uVar3) {
          *(undefined1 *)(param_1 + 0x248) = 0;
          if (*(long *)(param_1 + 0x228) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x228) + 0x200) = 2;
          }
        }
        else {
          memcpy(pvVar6,psVar4,uVar8 & 0xffffffff);
          *(ulong *)(param_1 + 0x238) = uVar3;
          *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + (int)(uVar8 >> 1);
        }
      }
    }
  }
  plVar11 = (long *)(param_1 + 0x350);
  psVar4 = (short *)(**(code **)(*(long *)(param_1 + 0x350) + 0x18))(plVar11);
  iVar1 = (**(code **)(*(long *)(param_1 + 0x350) + 0x20))(plVar11);
  if (((psVar4 != (short *)0x0) && (iVar1 != 0)) && (*psVar4 != 0)) {
    psVar4 = (short *)(**(code **)(*plVar11 + 0x18))(plVar11);
    lVar5 = (**(code **)(*plVar11 + 0x18))(plVar11);
    if (lVar5 == 0) {
      psVar9 = (short *)0x0;
    }
    else {
      uVar3 = (**(code **)(*plVar11 + 0x20))(plVar11);
      psVar9 = (short *)(lVar5 + (uVar3 & 0xffffffff) * 2);
    }
    if (*psVar4 == 0xf) {
      psVar10 = psVar4 + 3;
      if ((psVar9 < psVar10) && (psVar9 != (short *)0x0)) goto LAB_01ba1954;
    }
    else if (((*psVar4 != 0xe) || ((psVar4[3] & 1U) != 0)) ||
            ((psVar10 = (short *)((long)psVar4 + ((ulong)(ushort)psVar4[3] & 0xfffe) + 8),
             psVar9 != (short *)0x0 && (psVar9 < psVar10)))) goto LAB_01ba1954;
    pvVar6 = *(void **)(param_1 + 0x238);
    if (pvVar6 != (void *)0x0) {
      uVar8 = (long)psVar10 - (long)psVar4;
      uVar3 = (long)pvVar6 + (uVar8 & 0x1fffffffe);
      if (*(ulong *)(param_1 + 0x240) < uVar3) {
        *(undefined1 *)(param_1 + 0x248) = 0;
        if (*(long *)(param_1 + 0x228) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x228) + 0x200) = 2;
        }
      }
      else {
        memcpy(pvVar6,psVar4,uVar8 & 0xffffffff);
        *(ulong *)(param_1 + 0x238) = uVar3;
        *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + (int)(uVar8 >> 1);
      }
    }
  }
LAB_01ba1954:
  FUN_006f1490(param_1);
  return;
}

