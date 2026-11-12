
void FUN_00810af0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  puVar3 = PTR_DAT_04bb4c48;
  puVar2 = PTR_DAT_04bb4c30;
  iVar7 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      plVar5 = malloc(0x43b0);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar6 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x43b0,8);
    }
    FUN_007e9bd0(plVar5,0,0);
    *plVar5 = (long)(puVar3 + 0x10);
    FUN_007e9bd0(plVar5 + 0x165,0,0);
    plVar5[0x165] = (long)(puVar3 + 0x10);
    FUN_007e9590(plVar5 + 0x2ca,0,0);
    plVar5[0x2ca] = (long)(puVar2 + 0x10);
    FUN_007e9590(plVar5 + 0x436,0,0);
    plVar5[0x436] = (long)(puVar2 + 0x10);
    plVar5[0x5a9] = 0;
    plVar5[0x5a2] = 0;
    plVar5[0x5a3] = 0;
    plVar5[0x5a4] = 0;
    plVar5[0x5a5] = 0;
    plVar5[0x5a6] = 0;
    plVar5[0x5a7] = 0;
    plVar5[0x5a8] = 0;
    *(undefined1 *)(plVar5 + 0x5ac) = 2;
    *(undefined8 *)((long)plVar5 + 0x2d54) = 0;
    *(undefined4 *)((long)plVar5 + 0x2d5c) = 0;
    *(undefined8 *)((long)plVar5 + 0x2d4c) = 0;
    *(undefined8 *)((long)plVar5 + 0x2d64) = 0;
    *(undefined8 *)((long)plVar5 + 0x2d6c) = 0;
    *(undefined8 *)((long)plVar5 + 0x2d74) = 0;
    *(undefined4 *)((long)plVar5 + 0x2d7c) = 0;
    *(undefined1 *)((long)plVar5 + 0x2d81) = 0xee;
    *(undefined2 *)((long)plVar5 + 0x2d82) = 0;
    memset(plVar5 + 0x5b1,0,0x830);
    plVar5[0x6be] = 0;
    *(undefined1 *)(plVar5 + 0x5b0) = 1;
    *(undefined8 *)((long)plVar5 + 0x35fc) = 0;
    *(undefined8 *)((long)plVar5 + 0x35f4) = 0;
    *(undefined8 *)((long)plVar5 + 0x360c) = 0;
    *(undefined8 *)((long)plVar5 + 0x3614) = 0;
    *(undefined8 *)((long)plVar5 + 0x361c) = 0;
    plVar5[0x6b7] = 0;
    plVar5[0x6b8] = 0;
    plVar5[0x6b9] = 0;
    plVar5[0x6ba] = 0;
    plVar5[0x6bb] = 0;
    plVar5[0x6bc] = 0;
    plVar5[0x6bd] = 0;
    *(undefined1 *)(plVar5 + 0x6c1) = 2;
    *(undefined4 *)((long)plVar5 + 0x3604) = 0;
    *(undefined4 *)((long)plVar5 + 0x3624) = 0;
    *(undefined1 *)((long)plVar5 + 0x3629) = 0xee;
    *(undefined2 *)((long)plVar5 + 0x362a) = 0;
    memset(plVar5 + 0x6c6,0,0x830);
    *(undefined1 *)(plVar5 + 0x6c5) = 1;
    plVar5[0x7d3] = 0;
    *(undefined8 *)((long)plVar5 + 0x3ea4) = 0;
    *(undefined8 *)((long)plVar5 + 0x3e9c) = 0;
    *(undefined8 *)((long)plVar5 + 0x3eb4) = 0;
    *(undefined8 *)((long)plVar5 + 0x3ebc) = 0;
    *(undefined8 *)((long)plVar5 + 0x3ec4) = 0;
    *(undefined8 *)((long)plVar5 + 0x3ec9) = 0;
    plVar5[0x7cc] = 0;
    plVar5[0x7cd] = 0;
    plVar5[0x7ce] = 0;
    plVar5[1999] = 0;
    plVar5[2000] = 0;
    plVar5[0x7d1] = 0;
    plVar5[0x7d2] = 0;
    *(undefined1 *)(plVar5 + 0x7d6) = 2;
    *(undefined4 *)((long)plVar5 + 0x3eac) = 0;
    *(undefined1 *)((long)plVar5 + 0x3ed1) = 0xee;
    *(undefined2 *)((long)plVar5 + 0x3ed2) = 0;
    memset(plVar5 + 0x7db,0,0x270);
    *(undefined1 *)(plVar5 + 0x82b) = 2;
    *(undefined8 *)((long)plVar5 + 0x4144) = 0;
    *(undefined8 *)((long)plVar5 + 0x414c) = 0;
    *(undefined4 *)((long)plVar5 + 0x4154) = 0;
    *(undefined8 *)((long)plVar5 + 0x415c) = 0;
    *(undefined8 *)((long)plVar5 + 0x4164) = 0;
    *(undefined8 *)((long)plVar5 + 0x416c) = 0;
    *(undefined8 *)((long)plVar5 + 0x4171) = 0;
    *(undefined1 *)((long)plVar5 + 0x4179) = 0xee;
    *(undefined2 *)((long)plVar5 + 0x417a) = 0;
    memset(plVar5 + 0x830,0,0x230);
    param_1[iVar7] = plVar5;
    FUN_02640070(plVar5,0,plVar5 + 0x5a2,0,1);
    puVar1 = PTR_DAT_04bb46b0;
    FUN_02640130(param_1[iVar7],*(long *)PTR_DAT_04bb46b0 + 0x28);
    FUN_02640070(param_1[iVar7] + 0xb28,0,param_1[iVar7] + 0x35b8,0,1);
    FUN_02640130(param_1[iVar7] + 0xb28,*(long *)puVar1 + 0x28);
    FUN_02640070(param_1[iVar7] + 0x1650,0,param_1[iVar7] + 0x3e60,0,1);
    FUN_02640130(param_1[iVar7] + 0x1650,*(long *)puVar1 + 0x28);
    FUN_02640070(param_1[iVar7] + 0x21b0,0,param_1[iVar7] + 0x4108,0,1);
    FUN_02640130(param_1[iVar7] + 0x21b0,*(long *)puVar1 + 0x28);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0xb);
  return;
}

