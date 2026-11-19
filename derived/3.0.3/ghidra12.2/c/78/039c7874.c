
void FUN_039c7874(long param_1,uint *param_2,long *param_3,long *param_4)

{
  size_t __size;
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  void *pvVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar7 = malloc(0x470);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar13 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_039c7904;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x470,8);
  }
LAB_039c7904:
  FUN_039c3a98(pvVar7);
  *(void **)(param_1 + 0x248) = pvVar7;
  if (param_4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  else {
    if (*(long *)puVar1 == 0) {
      pvVar8 = malloc(0x84a0);
    }
    else {
      pvVar8 = (void *)(**(code **)(*param_4 + 0x30))(param_4,0x84a0,8);
    }
    FUN_039c68b0();
    pvVar7 = *(void **)(param_1 + 0x248);
    *(void **)(param_1 + 0x250) = pvVar8;
  }
  uStack_48 = 0x1042c80000;
  local_50 = 0x42c8000042c80000;
  uStack_58 = 0x43fa000043fa0000;
  local_60 = 0x43fa0000c3fa0000;
  uStack_68 = 0xc3fa0000c3fa0000;
  local_70 = &PTR_LAB_04b6acf0;
  FUN_039c41f0(pvVar7,&local_70,param_3);
  lVar13 = *(long *)(param_1 + 0x250);
  if (lVar13 == 0) {
    return;
  }
  uVar2 = *param_2;
  *(long **)(lVar13 + 8) = param_4;
  lVar5 = DAT_05ae7600;
  if (0 < (int)uVar2) {
    __size = (ulong)uVar2 * 0xe8 + 8;
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(__size);
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_4 = (long *)(lVar5 + 8);
        if (lVar3 != 0) {
          param_4 = (long *)(lVar3 + 0xa8);
        }
        param_4 = (long *)*param_4;
        if (param_4 == (long *)0x0) goto LAB_039c747c;
      }
      puVar4 = (ulong *)(**(code **)(*param_4 + 0x30))(param_4,__size,8);
    }
    if (puVar4 != (ulong *)0x0) {
      uVar11 = (ulong)uVar2;
      uVar12 = uVar11 * 0xe8 - 0xe8;
      puVar9 = puVar4 + 1;
      *puVar4 = uVar11;
      puVar1 = PTR_DAT_04bd11b8;
      puVar10 = puVar9;
      if ((uVar12 / 0xe8 & 1) == 0) {
        puVar4[0x11] = 0;
        puVar4[0x12] = 0;
        puVar4[0x13] = 0;
        puVar4[0x14] = 0;
        puVar4[0x15] = 0;
        *(undefined4 *)(puVar4 + 0x16) = 0x10001;
        *(undefined1 *)((long)puVar4 + 0xb4) = 0;
        puVar4[0x1d] = 0;
        puVar4[0xf] = (ulong)(puVar1 + 0x10);
        puVar4[0x10] = 0;
        puVar10 = puVar4 + 0x1e;
      }
      if (0xe7 < uVar12) {
        puVar1 = PTR_DAT_04bd11b8 + 0x10;
        do {
          puVar10[0xe] = (ulong)puVar1;
          puVar10[0xf] = 0;
          puVar10[0x14] = 0;
          *(undefined4 *)(puVar10 + 0x15) = 0x10001;
          *(undefined1 *)((long)puVar10 + 0xac) = 0;
          puVar10[0x1c] = 0;
          puVar10[0x31] = 0;
          *(undefined4 *)(puVar10 + 0x32) = 0x10001;
          *(undefined1 *)((long)puVar10 + 0x194) = 0;
          puVar10[0x39] = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10[0x12] = 0;
          puVar10[0x13] = 0;
          puVar10[0x2b] = (ulong)puVar1;
          puVar10[0x2c] = 0;
          puVar10[0x2d] = 0;
          puVar10[0x2e] = 0;
          puVar10[0x2f] = 0;
          puVar10[0x30] = 0;
          puVar10 = puVar10 + 0x3a;
        } while (puVar10 != puVar9 + uVar11 * 0x1d);
      }
      *(uint *)(lVar13 + 0x30) = uVar2;
      *(ulong **)(lVar13 + 0x38) = puVar9;
    }
  }
LAB_039c747c:
  FUN_039c7530(lVar13,*(undefined8 *)(lVar13 + 8));
  lVar5 = lVar13 + 0x88;
  lVar3 = *(long *)PTR_DAT_04bbd7e8;
  FUN_0390e390(lVar5,1,*(undefined8 *)(lVar13 + 8));
  FUN_0390e4c0(lVar5,0,lVar3 + 0x1308,0);
  FUN_0390e4c0(lVar5,1,lVar3 + 0x1308,1);
  FUN_0390e640(lVar5);
  *(undefined4 *)(lVar13 + 0x8314) = 0;
  *(undefined8 *)(lVar13 + 0x8304) = 0;
  *(undefined8 *)(lVar13 + 0x830c) = 0;
  *(undefined8 *)(lVar13 + 0x82ac) = 0;
  *(undefined8 *)(lVar13 + 0x82f4) = 0;
  *(undefined8 *)(lVar13 + 0x82fc) = 0;
  *(undefined8 *)(lVar13 + 0x82e4) = 0;
  *(undefined8 *)(lVar13 + 0x82ec) = 0;
  *(undefined8 *)(lVar13 + 0x82d4) = 0;
  *(undefined8 *)(lVar13 + 0x82dc) = 0;
  *(undefined8 *)(lVar13 + 0x82c4) = 0;
  *(undefined8 *)(lVar13 + 0x82cc) = 0;
  *(undefined8 *)(lVar13 + 0x82b4) = 0;
  *(undefined8 *)(lVar13 + 0x82bc) = 0;
  FUN_039c65e8(lVar13 + 0x8318,*(undefined8 *)(lVar13 + 8));
  return;
}

