
void FUN_016193ac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined **local_80;
  undefined1 local_78;
  undefined *local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar7 = *(long *)(param_2 + 0x340);
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x7f0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar5 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x7f0,8);
    }
  }
  plVar6 = plVar4 + 3;
  *plVar6 = 0;
  puVar2 = PTR_DAT_04bb2020;
  plVar4[4] = 0;
  plVar4[5] = (long)plVar4;
  puVar1 = PTR_DAT_04bbd4a0;
  plVar4[6] = 0;
  *(undefined1 *)(plVar4 + 7) = 1;
  plVar4[8] = 0;
  plVar4[1] = (long)(puVar2 + 0x10);
  plVar4[2] = (long)&DAT_0407ebb1;
  *plVar4 = (long)(puVar1 + 0x10);
  FUN_03941294(plVar4 + 9);
  plVar4[0x51] = 0;
  plVar4[0x50] = 0;
  *plVar4 = (long)(PTR_DAT_04bbdc20 + 0x10);
  memset(plVar4 + 0x52,0,0x4e4);
  *(undefined4 *)(plVar4 + 0xa0) = 0x3f800000;
  *(undefined4 *)(plVar4 + 0xa2) = 0x3f800000;
  *(undefined4 *)((long)plVar4 + 0x53c) = 0x3f800000;
  *(undefined4 *)(plVar4 + 0xc5) = 0x3f800000;
  *(undefined4 *)(plVar4 + 0xd4) = 0x3f800000;
  *(undefined4 *)(plVar4 + 0xd6) = 0x3f800000;
  puVar1 = PTR_DAT_04bd11b8 + 0x10;
  plVar4[0xf0] = 0;
  plVar4[0xf1] = 0;
  plVar4[0xf2] = 0;
  plVar4[0xf3] = 0;
  plVar4[0xf4] = 0;
  plVar4[0xf5] = 0;
  *(undefined1 *)((long)plVar4 + 0x7b4) = 0;
  plVar4[0xfd] = 0;
  local_60 = 0xffffffff;
  plVar4[0xef] = (long)puVar1;
  local_78 = 1;
  *(undefined4 *)(plVar4 + 0xf6) = 0x10001;
  local_80 = &PTR_LAB_049b3df8;
  lStack_68 = *(long *)(param_1 + 8);
  *(undefined1 *)(plVar4 + 7) = 1;
  plVar4[2] = lStack_68;
  if (lVar7 != 0) {
    lVar5 = plVar4[6];
    plVar4[8] = lVar7;
    if (lVar5 != 0) {
      plVar4[6] = 0;
      if (plVar4[3] != 0) {
        *(long *)(plVar4[3] + 8) = plVar4[4];
      }
      if ((long *)plVar4[4] != (long *)0x0) {
        *(long *)plVar4[4] = *plVar6;
      }
      *plVar6 = 0;
      plVar4[4] = 0;
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
    plVar4[6] = lVar7 + 0x10;
    lVar5 = *(long *)(lVar7 + 0x10);
    *(long **)(lVar7 + 0x10) = plVar6;
    plVar4[3] = lVar5;
    plVar4[4] = lVar7 + 0x10;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar6;
    }
    *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
  }
  local_70 = puVar2 + 0x10;
  local_58 = lVar7;
  (**(code **)(*plVar4 + 0xa8))(plVar4,&local_80,0);
  if (*(long *)(param_2 + 0x50) == 0) {
    lVar5 = *(long *)(param_2 + 0x340);
    *(long **)(param_2 + 0x50) = plVar4;
    if (lVar5 != 0) {
      lVar7 = plVar4[6];
      plVar4[8] = lVar5;
      if (lVar7 != 0) {
        plVar4[6] = 0;
        if (plVar4[3] != 0) {
          *(long *)(plVar4[3] + 8) = plVar4[4];
        }
        if ((long *)plVar4[4] != (long *)0x0) {
          *(long *)plVar4[4] = *plVar6;
        }
        *plVar6 = 0;
        plVar4[4] = 0;
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      }
      plVar4[6] = lVar5 + 0x10;
      lVar7 = *(long *)(lVar5 + 0x10);
      *(long **)(lVar5 + 0x10) = plVar6;
      plVar4[3] = lVar7;
      plVar4[4] = lVar5 + 0x10;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar6;
      }
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    }
  }
  else {
    (**(code **)(*plVar4 + 0xa0))(plVar4);
  }
  return;
}

