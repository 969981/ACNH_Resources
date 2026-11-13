
/* WARNING: Removing unreachable block (ram,0x014330bc) */

void FUN_01433014(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  float fVar11;
  
  uVar4 = (**(code **)(*param_1 + 400))();
  *(undefined4 *)(param_1[0x5d] + 0x9a4) = uVar4;
  *(undefined4 *)(param_1[0x5d] + 0x9f8) = 0;
  *(int *)(param_1[0x5d] + 0x9fc) = (int)param_1[0x6b];
  *(byte *)(param_1[0x5d] + 0x9a1) = (byte)(*(uint *)(param_1 + 0x58) >> 5) & 1;
  *(byte *)(param_1[0x5d] + 0xa6c) = (byte)(*(uint *)(param_1 + 0x58) >> 6) & 1;
  piVar10 = (int *)param_1[0x60];
  if (piVar10 == (int *)0x0) {
    return;
  }
  lVar9 = param_1[0x5d];
  if ((char)piVar10[1] == '\0') {
    piVar5 = (int *)(**(code **)(*(long *)(DAT_051c26c8 + 0x30) + 0xf0))();
    iVar2 = *piVar5;
    piVar5 = (int *)(**(code **)(*(long *)(DAT_051c26c8 + 0x60) + 0xf0))();
    iVar3 = (*piVar5 + iVar2) * 0x1e;
    iVar7 = *piVar10;
    if (iVar7 < iVar3) {
      iVar7 = iVar7 + 1;
      *piVar10 = iVar7;
    }
    if (iVar7 < iVar2 * 0x1e) {
      *(undefined4 *)(lVar9 + 0xa68) = 2;
      goto LAB_014330e0;
    }
    if (iVar7 < iVar3) {
      *(undefined4 *)(lVar9 + 0xa68) = 1;
      goto LAB_014330e0;
    }
  }
  *(undefined4 *)(lVar9 + 0xa68) = 0;
LAB_014330e0:
  lVar9 = param_1[0x5e];
  piVar10 = (int *)param_1[0x60];
  if ((char)piVar10[1] == '\0') {
    piVar5 = (int *)(**(code **)(*(long *)(DAT_051c26c8 + 0x30) + 0xf0))();
    iVar7 = *piVar5;
    iVar3 = iVar7 * 0x1e;
    piVar5 = (int *)(**(code **)(*(long *)(DAT_051c26c8 + 0x60) + 0xf0))();
    iVar2 = *piVar10;
    fVar11 = 0.0;
    if (iVar3 <= iVar2) {
      fVar11 = 1.0;
      if (iVar2 <= *piVar5 * 0x1e + iVar3) {
        fVar11 = (float)(iVar2 + iVar7 * -0x1e) / (float)(*piVar5 * 0x1e);
      }
    }
  }
  else {
    fVar11 = 1.0;
  }
  if (*(long *)(lVar9 + 0x1150) != 0) {
    uVar8 = 0xffffffffffff;
    if ((*(long *)(lVar9 + 0x1180) != 0) && (*(long *)(lVar9 + 0x1160) != 0)) {
      lVar1 = 0x18;
      if (*(uint *)(lVar9 + 0x1178) < 4) {
        lVar1 = 0;
      }
      uVar8 = *(ulong *)(*(long *)(lVar9 + 0x1180) + lVar1);
    }
    if ((((((uint)(uVar8 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar8 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar8 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      plVar6 = (long *)**(undefined8 **)
                         (*(long *)(*(long *)(lVar9 + 0x1150) + 0x38) +
                         (-(uVar8 >> 0xf & 1) & 0xfffffffffff80000 | (uVar8 & 0xffff) << 3));
                    /* WARNING: Could not recover jumptable at 0x01433260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x118))
                (fVar11,plVar6,(int)(short)(uVar8 >> 0x10),(int)(short)(uVar8 >> 0x20));
      return;
    }
  }
  return;
}

