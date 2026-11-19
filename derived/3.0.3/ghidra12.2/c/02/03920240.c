
void FUN_03920240(long param_1)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  uVar4 = *(uint *)(param_1 + 0x260);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(param_1 + 0x268) != 0) {
      lVar8 = (long)*(int *)(param_1 + 0x268) << 3;
      puVar6 = *(undefined8 **)(param_1 + 0x270);
      do {
        plVar5 = (long *)*puVar6;
        (**(code **)(*plVar5 + 0x60))(plVar5);
        lVar8 = lVar8 + -8;
        *(byte *)((long)plVar5 + 0xb2) = *(byte *)((long)plVar5 + 0xb2) & 0xdf;
        puVar6 = puVar6 + 1;
      } while (lVar8 != 0);
    }
    uVar3 = *(ushort *)(param_1 + 0x8c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x268) = 0;
    if (iVar2 != 0) {
      lVar8 = *(long *)(param_1 + 0x30);
      uVar9 = 0;
      do {
        plVar5 = *(long **)(lVar8 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3));
        if ((char)plVar5[0xb] != '\0') {
          (**(code **)(*plVar5 + 0x60))(plVar5);
          *(byte *)((long)plVar5 + 0xb2) = *(byte *)((long)plVar5 + 0xb2) & 0xdf;
          if (*(int *)(param_1 + 0x268) < *(int *)(param_1 + 0x26c)) {
            *(undefined8 *)(*(long *)(param_1 + 0x270) + (long)*(int *)(param_1 + 0x268) * 8) =
                 *(undefined8 *)(lVar8 + (long)(int)uVar9 * 8);
            *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
          }
        }
        uVar1 = uVar9 + 1;
        uVar9 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      uVar4 = *(uint *)(param_1 + 0x260);
    }
    *(uint *)(param_1 + 0x260) = uVar4 & 0xfffffffe;
    uVar3 = *(ushort *)(param_1 + 0x8c);
  }
  if ((uVar3 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x20))((long *)(param_1 + 0x38));
    if (*(long *)(param_1 + 0x78) != param_1 + 0x70) {
      lVar7 = (long)*(int *)(param_1 + 0x84);
      lVar8 = *(long *)(param_1 + 0x78) - lVar7;
      do {
        FUN_0394dcc0(lVar8);
        lVar8 = *(long *)(lVar8 + lVar7 + 8) - lVar7;
      } while (lVar8 != (param_1 + 0x70) - lVar7);
    }
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffe;
  }
  return;
}

