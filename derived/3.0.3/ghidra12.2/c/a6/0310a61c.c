
void FUN_0310a61c(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined8 local_48;
  undefined8 local_38;
  
  if (((*(long *)(param_1 + 0x2f0) != 0) && (*(long *)(param_1 + 0x270) != 0)) &&
     (*(long *)(param_1 + 0x288) != 0)) {
    *(undefined4 *)(param_1 + 0x300) = 0;
    fVar9 = (*(float *)(*(long *)(param_1 + 0x268) + 8) / 100.0) * 0.6931472;
    iVar3 = (int)(fVar9 * 1.442695);
    fVar9 = ((fVar9 - (float)iVar3 * 0.6931472) + 0.6931472) * 23.08312;
    uVar5 = (ulong)(uint)(int)fVar9;
    FUN_02fe2fe0(*(float *)(param_1 + 0x2e8) *
                 ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar5 * 8) +
                                  *(float *)((long)(PTR_DAT_04bd0d90 + uVar5 * 8) + 4) *
                                  (fVar9 - (float)uVar5)) + iVar3 * 0x800000)),
                 *(long *)(param_1 + 0x2f0),param_2,
                 *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x208));
    lVar4 = *(long *)(param_1 + 0x288);
    lVar7 = *(long *)(param_1 + 0x270);
    puVar1 = (undefined8 *)(lVar4 + 0x900) + *(uint *)(lVar4 + 0x8f8);
    if (0x12 < *(uint *)(lVar4 + 0x8f8)) {
      puVar1 = (undefined8 *)(lVar4 + 0x900);
    }
    if ((lVar7 != 0) && (plVar6 = (long *)*puVar1, plVar6 != (long *)0x0)) {
      fVar9 = *(float *)(lVar7 + 0x78);
      iVar3 = (**(code **)(*plVar6 + 0x50))(plVar6);
      if ((0 < (int)fVar9) && (0 < iVar3)) {
        *(float *)(lVar7 + 0x84) = (float)iVar3;
        *(float *)(lVar7 + 0x88) = (float)(int)fVar9;
      }
      local_38 = 0;
      local_48 = 0;
      (**(code **)(*plVar6 + 0x58))(plVar6,&local_38,&local_48);
      *(undefined4 *)(lVar7 + 0x8c) = (undefined4)local_38;
      *(undefined4 *)(lVar7 + 0x90) = local_38._4_4_;
      *(undefined4 *)(lVar7 + 0x94) = (undefined4)local_48;
      *(undefined4 *)(lVar7 + 0x98) = local_48._4_4_;
      lVar4 = *(long *)(param_1 + 0x288);
    }
    puVar1 = (undefined8 *)(lVar4 + 0x900) + *(uint *)(lVar4 + 0x8f8);
    if (0x12 < *(uint *)(lVar4 + 0x8f8)) {
      puVar1 = (undefined8 *)(lVar4 + 0x900);
    }
    plVar6 = (long *)*puVar1;
    if (plVar6 != (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0x270);
      (**(code **)(*plVar8 + 0x28))(plVar8);
      (**(code **)(*plVar8 + 0x30))(plVar8);
      local_38 = CONCAT44(1.0 - *(float *)(plVar8 + 4),*(undefined4 *)((long)plVar8 + 0x1c));
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
      lVar4 = *(long *)(param_1 + 0x270);
      bVar2 = (**(code **)(*plVar6 + 0x68))(plVar6);
      *(byte *)(lVar4 + 0x9c) = bVar2 & 1;
      lVar4 = *(long *)(param_1 + 0x270);
      bVar2 = (**(code **)(*plVar6 + 0x70))(plVar6);
      *(byte *)(lVar4 + 0x9d) = bVar2 & 1;
      *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(*(long *)(param_1 + 0x270) + 0x1c);
      *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(*(long *)(param_1 + 0x270) + 0x20);
    }
  }
  return;
}

