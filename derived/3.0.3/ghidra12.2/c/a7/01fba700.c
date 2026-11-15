
void FUN_01fba700(long *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 0x15f1) = 0;
  plVar9 = param_1 + 0x1619;
  if ((param_2 & 1) == 0) {
    lVar8 = param_1[1];
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x15f6);
    *(uint *)(param_1 + 0x15f6) = uVar4 | 0x400;
    lVar8 = param_1[1];
    if (*(int *)(lVar8 + 0x750) != 0) {
      *(uint *)(param_1 + 0x15f6) = uVar4 | 0x8400;
    }
  }
  plVar2 = param_1 + 0x197d;
  if ((*(uint *)(lVar8 + 0x750) | 2) == 3) {
    param_1[0x15ab] = param_1[0x15ab] | 0x400000000;
  }
  puVar5 = PTR_DAT_04bbc1a0;
  if (0 < (int)*plVar9) {
    lVar8 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      plVar10 = *(long **)(param_1[0x161a] + lVar8 * 8);
      lVar8 = lVar8 + 1;
      plVar10[0xf] = (long)puVar1;
      *plVar10 = param_1[0x161b];
      param_1[0x161b] = (long)plVar10;
    } while (lVar8 < (int)*plVar9);
  }
  *(int *)plVar9 = 0;
  if (0 < (int)*plVar2) {
    lVar8 = 0;
    do {
      plVar9 = *(long **)(param_1[0x197e] + lVar8 * 8);
      lVar8 = lVar8 + 1;
      plVar9[0xf] = (long)(puVar5 + 0x10);
      *plVar9 = param_1[0x197f];
      param_1[0x197f] = (long)plVar9;
    } while (lVar8 < (int)*plVar2);
  }
  *(int *)plVar2 = 0;
  *(undefined1 *)((long)param_1 + 0xe724) = 0;
  param_1[0x1ce1] = 0;
  param_1[0x1ce2] = 0;
  param_1[0x1ce3] = 0;
  if (*(int *)((long)param_1 + 0xaf8c) == 0xc) {
    lVar11 = param_1[3];
    local_38 = (ulong)*(uint *)(lVar11 + 0x294) << 0x20;
    *(undefined4 *)(lVar11 + 0x294) = 0;
    lVar8 = param_1[3];
    uVar7 = FUN_02085a50(lVar8,1,0);
    if ((uVar7 & 1) != 0) {
      *(undefined1 *)(lVar8 + 0x801) = 1;
      lVar3 = lVar8 + 0x10 + (ulong)*(uint *)(lVar8 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar8 + 0x294)) {
        lVar3 = lVar8 + 0x10;
      }
      *(undefined8 *)(lVar3 + 0xc) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
    }
    uVar6 = local_38._4_4_;
    local_38 = 0;
    *(undefined4 *)(lVar11 + 0x294) = uVar6;
    param_1[0x1613] = 0;
    *(undefined4 *)((long)param_1 + 0x1203c) = 0x708;
    *(undefined4 *)(param_1 + 0x2477) = 2;
    FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,&local_38,(long)&local_38 + 4,
                 PTR_DAT_04bc1600,6);
  }
  else if (*(int *)((long)param_1 + 0xaf8c) == 2) {
    FUN_01f9c378(param_1,0,0);
  }
  if ((param_3 & 1) != 0) {
    (**(code **)(*param_1 + 0x538))(param_1);
  }
  lVar8 = param_1[3];
  uVar7 = FUN_02085a50(lVar8,6,0);
  if ((uVar7 & 1) != 0) {
    *(undefined2 *)(lVar8 + 0x801) = 1;
    lVar11 = lVar8 + 0x10 + (ulong)*(uint *)(lVar8 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar8 + 0x294)) {
      lVar11 = lVar8 + 0x10;
    }
    *(undefined1 *)(lVar11 + 0x7e) = 0;
  }
  *(ushort *)((long)param_1 + 0x11b7c) = *(ushort *)((long)param_1 + 0x11b7c) & 0xfe00;
  return;
}

