
void FUN_03109ff8(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_38;
  undefined8 *local_18;
  
  if (param_2 == 0) {
    lVar8 = *(long *)(param_1 + 0x270);
joined_r0x0310a0c8:
    if (lVar8 != 0) {
      local_18 = &local_38;
      local_38 = 0x3f0000003f000000;
      FUN_0310c2a0(param_1,&local_18,1);
      lVar8 = *(long *)(param_1 + 0x270);
      *(undefined4 *)(lVar8 + 0x1c) = (undefined4)local_38;
      *(undefined4 *)(lVar8 + 0x20) = local_38._4_4_;
      *(undefined4 *)(lVar8 + 0x2c) = (undefined4)local_38;
      *(undefined4 *)(lVar8 + 0x30) = local_38._4_4_;
      *(undefined8 *)(*(long *)(param_1 + 0x270) + 0x54) = 0x3f0000003f000000;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x314);
    iVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x48))();
    local_18 = (undefined8 *)CONCAT44(local_18._4_4_,iVar3);
    if (iVar7 != iVar3) {
      uVar4 = *(uint *)(param_1 + 0x314);
      if (-1 < (int)uVar4) {
        lVar8 = *(long *)(param_1 + 0x270);
        puVar1 = (undefined4 *)(param_1 + 0x318);
        puVar2 = puVar1 + (ulong)uVar4 * 3;
        if (0x11 < uVar4) {
          puVar2 = puVar1;
        }
        *puVar2 = *(undefined4 *)(lVar8 + 0x1c);
        puVar2[1] = *(undefined4 *)(lVar8 + 0x20);
        puVar2 = puVar1 + (ulong)*(uint *)(param_1 + 0x314) * 3;
        if (0x11 < *(uint *)(param_1 + 0x314)) {
          puVar2 = puVar1;
        }
        *(undefined1 *)(puVar2 + 2) = 0;
      }
      uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x48))();
      local_18 = (undefined8 *)CONCAT44(local_18._4_4_,uVar4);
      *(uint *)(param_1 + 0x314) = uVar4;
      lVar8 = *(long *)(param_1 + 0x270);
      puVar1 = (undefined4 *)(param_1 + 0x318) + (ulong)uVar4 * 3;
      if (0x11 < uVar4) {
        puVar1 = (undefined4 *)(param_1 + 0x318);
      }
      if (*(char *)(puVar1 + 2) == '\0') {
        uVar12 = *puVar1;
        *(undefined4 *)(lVar8 + 0x1c) = uVar12;
        uVar13 = puVar1[1];
        *(undefined4 *)(lVar8 + 0x20) = uVar13;
        *(undefined4 *)(lVar8 + 0x2c) = uVar12;
        *(undefined4 *)(lVar8 + 0x30) = uVar13;
        lVar8 = *(long *)(param_1 + 0x270);
        goto joined_r0x0310a108;
      }
      goto joined_r0x0310a0c8;
    }
  }
  lVar8 = *(long *)(param_1 + 0x270);
joined_r0x0310a108:
  if ((lVar8 != 0) && (lVar6 = *(long *)(param_1 + 0x2f0), lVar6 != 0)) {
    fVar11 = (*(float *)(*(long *)(param_1 + 0x268) + 8) / 100.0) * 0.6931472;
    iVar7 = (int)(fVar11 * 1.442695);
    fVar11 = ((fVar11 - (float)iVar7 * 0.6931472) + 0.6931472) * 23.08312;
    uVar10 = (ulong)(uint)(int)fVar11;
    uVar9 = (ulong)*(uint *)(lVar6 + 0x550);
    if (0x12 < *(uint *)(lVar6 + 0x550)) {
      uVar9 = 0;
    }
    plVar5 = *(long **)(lVar6 + uVar9 * 8);
    (**(code **)(*plVar5 + 0x28))
              (*(float *)(param_1 + 0x2e8) *
               ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar10 * 8) +
                                *(float *)((long)(PTR_DAT_04bd0d90 + uVar10 * 8) + 4) *
                                (fVar11 - (float)uVar10)) + iVar7 * 0x800000)),plVar5,lVar8,
               param_1 + 0x300);
  }
  return;
}

