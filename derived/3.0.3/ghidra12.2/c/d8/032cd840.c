
/* WARNING: Removing unreachable block (ram,0x032cd8a0) */

void FUN_032cd840(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  void *__ptr;
  int iVar13;
  long lVar14;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar14 = *(long *)(param_1 + 0x28);
  lVar11 = lVar14 + -8;
  lVar7 = FUN_0037e610(lVar11,"T_TextBlurDrawMode");
  if ((lVar7 != 0) && (iVar12 = *(int *)(lVar7 + (ulong)*(uint *)(lVar7 + 4)), 0 < iVar12)) {
    local_88 = (undefined *)((ulong)local_88._4_4_ << 0x20);
    plVar8 = (long *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0xa8,8);
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[0x14] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    plVar8[0xe] = 0;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    plVar8[0x12] = 0;
    plVar8[0x13] = 0;
    puVar1 = PTR_DAT_04bc8e08 + 0x10;
    plVar8[0x12] = 0;
    *plVar8 = (long)puVar1;
    plVar8[1] = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    plVar8[0xe] = 0;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    __ptr = *(void **)(param_1 + 0xe0);
    *(long **)(param_1 + 0xe0) = plVar8;
    if (__ptr != (void *)0x0) {
      if (*(long **)((long)__ptr + 0x80) != (long *)0x0) {
        (**(code **)(**(long **)((long)__ptr + 0x80) + 8))();
      }
      if (*(long **)((long)__ptr + 0x78) != (long *)0x0) {
        (**(code **)(**(long **)((long)__ptr + 0x78) + 8))();
      }
      if (*(long **)((long)__ptr + 0x70) != (long *)0x0) {
        (**(code **)(**(long **)((long)__ptr + 0x70) + 8))();
      }
      if (*(long **)((long)__ptr + 0x68) != (long *)0x0) {
        (**(code **)(**(long **)((long)__ptr + 0x68) + 0x18))();
      }
      FUN_0327edb0((long)__ptr + 0x48);
      *(undefined8 *)((long)__ptr + 0x40) = 0;
      FUN_0327f6b0(__ptr);
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
        }
      }
      plVar8 = *(long **)(param_1 + 0xe0);
    }
    *(int *)((long)plVar8 + 0x94) = iVar12;
    puVar1 = PTR_DAT_04bb2f80;
    uVar6 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    iVar12 = (int)*(float *)(lVar14 + 0x48);
    *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    *(undefined8 *)(lVar14 + 0x80) = uVar6;
    uVar6 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(lVar14 + 0x88) = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(lVar14 + 0x90) = uVar6;
    uVar6 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(lVar14 + 0x68) = *(undefined8 *)puVar1;
    *(undefined8 *)(lVar14 + 0x70) = uVar6;
    *(byte *)(lVar14 + 0x50) = *(byte *)(lVar14 + 0x50) | 0x40;
    iVar13 = (int)*(float *)(lVar14 + 0x4c);
    lVar7 = FUN_0037e610(lVar11,"T_TextBlurPadding");
    if (lVar7 != 0) {
      piVar2 = (int *)(lVar7 + (ulong)*(uint *)(lVar7 + 4));
      iVar4 = *piVar2;
      iVar5 = piVar2[2];
      iVar12 = piVar2[1] + piVar2[3] + iVar12;
      lVar7 = *(long *)(param_1 + 0xe0);
      iVar13 = iVar4 + iVar5 + iVar13;
      *(float *)(lVar7 + 0x98) = (float)(piVar2[3] - piVar2[1]) * -0.5;
      *(float *)(lVar7 + 0x9c) = (float)(iVar4 - iVar5) * 0.5;
    }
    lVar7 = FUN_0037e610(lVar11,"T_TextBlurGaussParam");
    puVar1 = PTR_DAT_04bc8db8;
    if (lVar7 == 0) {
      uVar9 = 1;
      uVar10 = 1;
    }
    else {
      puVar3 = (undefined4 *)(lVar7 + (ulong)*(uint *)(lVar7 + 4));
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
    }
    plVar8 = *(long **)(param_1 + 0xe0);
    *(undefined4 *)(plVar8 + 0x11) = uVar9;
    *(undefined4 *)((long)plVar8 + 0x8c) = uVar10;
    puStack_60 = PTR_DAT_04bb2020 + 0x10;
    local_68 = 0x10000001d;
    local_58 = PTR_DAT_04bb2120;
    local_88 = puVar1 + 0x10;
    uStack_80 = *param_2;
    local_78 = param_2[1];
    local_70 = iVar12;
    iStack_6c = iVar13;
    FUN_0327fe70(plVar8,&local_88);
    local_50 = 0x300000002;
    uStack_48 = 0x500000004;
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_50);
    plVar8[8] = (long)plVar8;
    uStack_80 = CONCAT35(uStack_80._5_3_,0x1d);
    local_88 = (undefined *)CONCAT44(iVar13,iVar12);
    FUN_0327ee7c(plVar8 + 9,&local_88,param_2);
    local_88 = (undefined *)((ulong)local_88 & 0xffffffffffffff00);
    plVar8[9] = *(long *)(plVar8[8] + 0x28);
    plVar8[10] = (long)plVar8;
    FUN_0327e1c0(plVar8 + 0xd,&local_88,param_2);
    FUN_0327e450(plVar8 + 0xd,plVar8,0);
  }
  return;
}

