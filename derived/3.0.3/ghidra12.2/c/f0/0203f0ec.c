
void FUN_0203f0ec(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 local_10c;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined *local_d8;
  char *pcStack_d0;
  undefined4 local_c8;
  char local_c4 [8];
  char local_bc [8];
  char local_b4 [8];
  char local_ac [8];
  char local_a4 [7];
  char cStack_9d;
  char acStack_9c [7];
  undefined1 local_95;
  undefined1 local_45;
  undefined4 local_40;
  undefined2 local_3c;
  undefined8 local_38;
  
  if (*(long *)PTR_DAT_04bb3968 == 0) {
    return;
  }
  local_108 = PTR_DAT_04bb2020 + 0x10;
  puStack_100 = &DAT_0409b647;
  uVar3 = FUN_020a4f40(*(long *)PTR_DAT_04bb3968,&local_108,PTR_DAT_04bb3238,1);
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  if ((((uVar3 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8),
       plVar9 == (long *)0x0)) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar3)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto joined_r0x0203f1dc;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0203f1dc;
    }
  }
  uVar3 = 0;
joined_r0x0203f1dc:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar3;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      FUN_01e57c78(plVar9[0x76],PTR_DAT_04bb37e0,0,1);
      local_c8 = 0x80;
      local_f4 = 0x3f800000;
      local_40 = 7;
      pcStack_d0 = local_c4;
      local_45 = 0;
      local_38 = 0;
      local_d8 = PTR_DAT_04bb2d88 + 0x10;
      local_3c = 0;
      local_ec = 0;
      local_e4 = 0;
      local_95 = 0;
      local_b4[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x10];
      local_b4[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x11];
      local_b4[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x12];
      local_b4[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x13];
      local_b4[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x14];
      local_b4[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x15];
      local_b4[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x16];
      local_b4[7] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x17];
      local_ac[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x18];
      local_ac[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x19];
      local_ac[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1a];
      local_ac[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1b];
      local_ac[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1c];
      local_ac[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1d];
      local_ac[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1e];
      local_ac[7] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1f];
      local_a4[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x20];
      local_a4[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x21];
      local_a4[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x22];
      local_a4[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x23];
      local_a4[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x24];
      local_a4[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x25];
      local_a4[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x26];
      cStack_9d = s_WherearenObjMncBox_None_None_Whe_040e5237[0x27];
      acStack_9c[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x28];
      acStack_9c[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x29];
      acStack_9c[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2a];
      acStack_9c[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2b];
      acStack_9c[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2c];
      acStack_9c[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2d];
      acStack_9c[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2e];
      local_bc[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[8];
      local_bc[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[9];
      local_bc[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[10];
      local_bc[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xb];
      local_bc[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xc];
      local_bc[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xd];
      local_bc[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xe];
      local_bc[7] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xf];
      local_c4[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0];
      local_c4[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[1];
      local_c4[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[2];
      local_c4[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[3];
      local_c4[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[4];
      local_c4[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[5];
      local_c4[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[6];
      local_c4[7] = s_WherearenObjMncBox_None_None_Whe_040e5237[7];
      local_108 = (undefined *)0xffffffff00000000;
      puStack_100 = (undefined1 *)0x4060000043de8000;
      local_f8 = 0x43cf8000;
      uVar5 = FUN_0224b5e0(*(undefined8 *)PTR_DAT_04bb60a8,&local_108,0);
      local_10c = 0;
      *(undefined4 *)(*(long *)PTR_DAT_04bb27f8 + 0x1a84) = uVar5;
      FUN_01e39778(plVar9,&DAT_04179614,&local_10c,0);
      puVar10 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bb4120 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4120), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4118 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4120);
      }
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb4118), (uVar7 & 1) != 0)) {
        uVar7 = puVar10[0x15ab];
        puVar10[0x15ab] = uVar7 | 0x1000;
        *(uint *)((long)puVar10 + 0xb11c) = *(uint *)((long)puVar10 + 0xb11c) | 2;
        if (((uint)uVar7 >> 0x11 & 1) == 0) {
          FUN_01ea5c80(puVar10,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
        }
      }
      FUN_01e58500(plVar9[0x76]);
    }
  }
  return;
}

