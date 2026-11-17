
void FUN_02f4d420(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_70;
  undefined4 local_68;
  
  lVar11 = 0;
  uVar5 = 0x50;
  if (*(int *)(param_1 + 0x382c0) != 1) {
    uVar5 = 0;
  }
  uVar3 = 0xa0;
  if (*(int *)(param_1 + 0x382c0) != 2) {
    uVar3 = uVar5;
  }
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  do {
    lVar2 = param_1 + 0x38384 + lVar11 * 4;
    uVar5 = *(uint *)(lVar2 + -0x50);
    if (uVar5 != 0xffffffff) {
      if ((uVar5 < 0x10e) &&
         (lVar6 = param_1 + 0x1c200 + (ulong)uVar5 * 0x1a8, *(int *)(lVar6 + 0x1a0) != 0)) {
        lVar8 = param_1 + 0x1c200 + (ulong)uVar5 * 0x1a8;
        **(undefined1 **)(lVar8 + 0x60) = 0;
        *(undefined1 *)(lVar8 + 0xf0) = 0;
        if ((*(int *)(lVar8 + 0x100) != 1) &&
           (((*(byte *)(lVar8 + 0x18) >> 1 & 1) != 0 && (*(int *)(lVar8 + 0x140) == -1)))) {
          *(undefined4 *)(lVar8 + 0x140) = 1;
        }
        *(undefined4 *)(lVar6 + 0x1a0) = 0;
      }
      *(undefined1 *)(param_1 + 0x38384 + lVar11) = 0;
      *(undefined4 *)(lVar2 + -0x50) = 0xffffffff;
      uVar5 = *(int *)(lVar2 + -0xa0) + uVar3;
      if ((uVar5 < 200) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)uVar5 * 8 + 0x580), lVar6 != 0)) {
        lVar8 = *(long *)(lVar6 + 0x270);
        *(undefined8 *)(lVar8 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(param_1 + 0x38138);
        *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(param_1 + 0x38140);
        *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(param_1 + 0x38148);
        plVar9 = *(long **)(*(long *)(lVar6 + 0x210) + (ulong)(1 < *(uint *)(lVar6 + 0x208)) * 8);
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          local_68 = 0x1f;
          local_70 = puVar1;
          (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
          (**(code **)(plVar9[3] + 0x208))(plVar9[1],0,0,param_1 + 0x38130);
        }
      }
    }
    lVar11 = lVar11 + 1;
    *(undefined4 *)(lVar2 + -0xa0) = 0xffffffff;
  } while (lVar11 != 0x14);
  uVar7 = (ulong)*(uint *)(param_1 + 0x382c0);
  uVar10 = uVar7;
  if (2 < *(uint *)(param_1 + 0x382c0)) {
    uVar10 = 0;
  }
  if (*(int *)(param_1 + 0x38150 + uVar10 * 4) != 0) {
    uVar10 = 0;
    do {
      if (((uint)(uVar3 + uVar10) < 200) &&
         (lVar11 = *(long *)(*(long *)(param_1 + 0x220) + (uVar3 + uVar10 & 0xffffffff) * 8 + 0x580)
         , lVar11 != 0)) {
        FUN_03464670(*(undefined8 *)(lVar11 + 0x250),0);
        uVar7 = (ulong)*(uint *)(param_1 + 0x382c0);
      }
      uVar10 = uVar10 + 1;
      uVar4 = uVar7;
      if (2 < uVar7) {
        uVar4 = 0;
      }
    } while (uVar10 < *(uint *)(param_1 + 0x38150 + uVar4 * 4));
  }
  return;
}

