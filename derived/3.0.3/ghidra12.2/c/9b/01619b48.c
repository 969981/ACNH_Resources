
void FUN_01619b48(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined **local_80;
  undefined1 local_78;
  undefined *local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar8 = *(long *)(param_2 + 0x340);
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(0x338);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x338,8);
    }
  }
  plVar7 = plVar5 + 3;
  *plVar7 = 0;
  puVar1 = PTR_DAT_04bb2020;
  plVar5[4] = 0;
  plVar5[5] = (long)plVar5;
  puVar2 = PTR_DAT_04bbd4a0;
  plVar5[6] = 0;
  *(undefined1 *)(plVar5 + 7) = 1;
  plVar5[8] = 0;
  plVar5[1] = (long)(puVar1 + 0x10);
  plVar5[2] = (long)&DAT_0407ebb1;
  *plVar5 = (long)(puVar2 + 0x10);
  FUN_03941294(plVar5 + 9);
  plVar5[0x51] = 0;
  puVar2 = PTR_DAT_04bbdcd8;
  plVar5[0x50] = 0;
  puVar3 = PTR_DAT_04bd11b8;
  plVar5[0x53] = 0;
  plVar5[0x54] = 0;
  plVar5[0x55] = 0;
  plVar5[0x56] = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[0x57] = 0;
  plVar5[0x58] = 0;
  *(undefined1 *)((long)plVar5 + 0x2cc) = 0;
  plVar5[0x60] = 0;
  plVar5[0x61] = 0;
  *(undefined1 *)((long)plVar5 + 0x31c) = 1;
  *(undefined1 *)(plVar5 + 0x65) = 0;
  *(undefined4 *)(plVar5 + 0x59) = 0x10001;
  plVar5[0x52] = (long)(puVar3 + 0x10);
  *(undefined2 *)(plVar5 + 0x62) = 0x100;
  *(undefined8 *)((long)plVar5 + 0x314) = 0x200000002;
  plVar5[100] = 0x100000001;
  *(undefined8 *)((long)plVar5 + 0x32c) = 0x100000001;
  local_80 = &PTR_LAB_049b3df8;
  lStack_68 = *(long *)(param_1 + 8);
  local_60 = 0xffffffff;
  local_78 = 1;
  *(undefined1 *)(plVar5 + 7) = 1;
  plVar5[2] = lStack_68;
  if (lVar8 != 0) {
    lVar6 = plVar5[6];
    plVar5[8] = lVar8;
    if (lVar6 != 0) {
      plVar5[6] = 0;
      if (plVar5[3] != 0) {
        *(long *)(plVar5[3] + 8) = plVar5[4];
      }
      if ((long *)plVar5[4] != (long *)0x0) {
        *(long *)plVar5[4] = *plVar7;
      }
      *plVar7 = 0;
      plVar5[4] = 0;
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    }
    plVar5[6] = lVar8 + 0x10;
    lVar6 = *(long *)(lVar8 + 0x10);
    *(long **)(lVar8 + 0x10) = plVar7;
    plVar5[3] = lVar6;
    plVar5[4] = lVar8 + 0x10;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar7;
    }
    *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + 1;
  }
  local_70 = puVar1 + 0x10;
  local_58 = lVar8;
  (**(code **)(*plVar5 + 0xa8))(plVar5,&local_80,0);
  if (*(long *)(param_2 + 0xa0) == 0) {
    lVar6 = *(long *)(param_2 + 0x340);
    *(long **)(param_2 + 0xa0) = plVar5;
    if (lVar6 != 0) {
      lVar8 = plVar5[6];
      plVar5[8] = lVar6;
      if (lVar8 != 0) {
        plVar5[6] = 0;
        if (plVar5[3] != 0) {
          *(long *)(plVar5[3] + 8) = plVar5[4];
        }
        if ((long *)plVar5[4] != (long *)0x0) {
          *(long *)plVar5[4] = *plVar7;
        }
        *plVar7 = 0;
        plVar5[4] = 0;
        *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
      }
      plVar5[6] = lVar6 + 0x10;
      lVar8 = *(long *)(lVar6 + 0x10);
      *(long **)(lVar6 + 0x10) = plVar7;
      plVar5[3] = lVar8;
      plVar5[4] = lVar6 + 0x10;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar7;
      }
      *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    }
  }
  else {
    (**(code **)(*plVar5 + 0xa0))(plVar5);
  }
  return;
}

