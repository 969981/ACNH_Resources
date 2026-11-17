
/* WARNING: Removing unreachable block (ram,0x031158a8) */

void FUN_031155a0(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined2 uVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar5 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar5 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b01848;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0xfffe;
  *(undefined1 *)((long)param_1 + 0x233) = 0;
  FUN_0277d4ac(param_1 + 0x46);
  param_1[0x47] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x47);
  param_1[0x48] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x48);
  param_1[0x49] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x49);
  param_1[0x4a] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x4a);
  param_1[0x4b] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x4b);
  param_1[0x4c] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x4c);
  param_1[0x4d] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x4d);
  param_1[0x4e] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x4e);
  param_1[0x4f] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x4f);
  param_1[0x50] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x59] = (long)&LAB_03115940;
  param_1[0x57] = (long)&PTR_LAB_04b01a60;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0xffff;
  param_1[0x55] = 0;
  param_1[0x61] = (long)param_1 + 0x314;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x58] = (long)param_1;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)((long)param_1 + 0x2ec) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)((long)param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x20;
  *(undefined1 *)((long)param_1 + 0x333) = 0;
  puVar2 = PTR_DAT_04bb2028;
  *(undefined1 *)((long)param_1 + 0x314) = 0;
  param_1[0x60] = (long)(puVar2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  param_1[0x68] = (long)param_1 + 0x34c;
  *(undefined4 *)(param_1 + 0x69) = 8;
  puVar2 = PTR_DAT_04bb3768 + 0x10;
  *(undefined1 *)((long)param_1 + 0x353) = 0;
  *(undefined1 *)((long)param_1 + 0x36c) = 0;
  param_1[0x6c] = (long)param_1 + 0x36c;
  *(undefined4 *)(param_1 + 0x6d) = 8;
  *(undefined1 *)((long)param_1 + 0x373) = 0;
  param_1[0x67] = (long)puVar2;
  uVar4 = *(undefined2 *)PTR_DAT_04bb3170;
  param_1[0x6b] = (long)puVar2;
  *(undefined2 *)(param_1 + 0x6f) = uVar4;
  if (param_3 == 0) {
    lVar7 = param_1[0x42];
  }
  else {
    param_1[0x44] = *(long *)(param_3 + 0x18);
    lVar7 = *(long *)(param_3 + 0x20);
    param_1[0x42] = lVar7;
    param_1[0x43] = *(long *)(param_3 + 0x28);
  }
  uVar10 = 0;
  lVar7 = lVar7 + 0x218;
  do {
    lVar9 = *(long *)(lVar7 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3));
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x218);
      plVar8 = *(long **)(*(long *)(param_1[0x44] + 0x210) + 0x48);
      *(long **)(lVar9 + 0x18) = plVar8;
      plVar3 = (long *)(*(int *)((long)plVar8 + 0x14) + lVar9);
      lVar9 = *plVar8;
      *plVar8 = (long)plVar3;
      *plVar3 = lVar9;
      plVar3[1] = (long)plVar8;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar3;
      }
      lVar9 = (long)(int)uVar10 * 8;
      *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
      *(long **)(*(long *)(lVar7 + lVar9) + 0x260) = param_1 + 0x57;
      local_60 = 0;
      local_68 = **(undefined8 **)(*(long *)(lVar7 + lVar9) + 0x2d0);
      local_58 = *(undefined8 *)(*(long *)(lVar7 + lVar9) + 0x300);
      FUN_0340a298(*(long *)(lVar7 + lVar9) + 0x3d8,&local_68);
      if (*(long *)(lVar7 + lVar9) != 0) {
        FUN_03d5d0e0(*(long *)(lVar7 + lVar9),0,0);
      }
    }
    uVar1 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar1;
  } while (uVar1 != 0xb);
  FUN_02ccaa78(param_1 + 0x46,PTR_DAT_04bb37e0);
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x54] = -1;
  param_1[0x55] = -1;
  param_1[0x51] = -1;
  param_1[0x52] = -1;
  param_1[0x53] = -1;
  return;
}

