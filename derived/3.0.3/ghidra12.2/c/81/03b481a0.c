
void FUN_03b481a0(undefined8 *param_1,long *param_2,undefined8 param_3,uint param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_60;
  char *pcStack_58;
  
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "AudioUserTaskThread";
  FUN_038e1f88(param_1,&local_60,param_2,param_5,0,0x7fffffff,0x5000,1);
  param_1[0x21] = param_3;
  *param_1 = &PTR_LAB_04b76338;
  FUN_03b48e50(param_1 + 0x22,param_2,param_4);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = param_1 + 0x2b;
  param_1[0x2c] = param_1 + 0x2b;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_038e1da0(param_1 + 0x31);
  puVar2 = PTR_DAT_04bb2698;
  uVar1 = param_4 - 1;
  if ((int)param_4 < 1) {
LAB_03b482ac:
    lVar9 = *(long *)puVar2;
joined_r0x03b482b0:
    if (lVar9 == 0) goto LAB_03b48384;
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
LAB_03b48338:
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      puVar6 = (undefined8 *)0x0;
      if (plVar4 != (long *)0x0) goto LAB_03b48364;
    }
    else {
LAB_03b48364:
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x400,8);
    }
  }
  else {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      pvVar5 = malloc((long)(int)(param_4 << 5));
joined_r0x03b482c0:
      if (pvVar5 == (void *)0x0) goto LAB_03b482ac;
      param_1[0x2e] = pvVar5;
      if (1 < param_4) {
        if (uVar1 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          plVar4 = (long *)((long)pvVar5 + 0x20);
          do {
            uVar8 = uVar8 + 2;
            plVar4[-4] = (long)plVar4;
            *plVar4 = (long)(plVar4 + 4);
            plVar4 = plVar4 + 8;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar8);
        }
        if ((uVar1 & 1) != 0) {
          plVar4 = (long *)((long)pvVar5 + uVar8 * 0x20);
          *plVar4 = (long)(plVar4 + 4);
        }
      }
      *(undefined8 *)((long)pvVar5 + (long)(int)(uVar1 * 4) * 8) = 0;
      param_1[0x2f] = pvVar5;
      *(uint *)(param_1 + 0x30) = param_4;
      lVar9 = *(long *)puVar2;
      goto joined_r0x03b482b0;
    }
    plVar4 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03b48294:
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(long)(int)(param_4 << 5),8);
      goto joined_r0x03b482c0;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar9 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_03b48294;
    lVar9 = *(long *)puVar2;
    if (lVar9 != 0) goto LAB_03b48338;
LAB_03b48384:
    puVar6 = malloc(0x400);
  }
  *(undefined4 *)(puVar6 + 1) = 0;
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  *puVar6 = 0x1feff56415742;
  lVar9 = *(long *)puVar2;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x2000000010000;
  *(undefined8 *)((long)puVar6 + 0x14) = 0x7fffffff0000bb80;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined4 *)((long)puVar6 + 0x44) = 0;
  *(undefined4 *)(puVar6 + 0xb) = 0;
  DAT_05aebb48 = puVar6;
  puVar6[9] = 0x7fffffff00000001;
  puVar6[10] = 0;
  if (lVar9 == 0) {
    puVar7 = malloc(0x400);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar6 = (undefined8 *)(lVar9 + 8);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*puVar6;
      if (param_2 == (long *)0x0) {
        puVar7 = (undefined4 *)0x0;
        goto LAB_03b48450;
      }
    }
    puVar7 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,0x400,8);
  }
LAB_03b48450:
  *puVar7 = 0x56415742;
  *(undefined8 *)(puVar7 + 1) = 0x1feff;
  *(undefined8 *)(puVar7 + 5) = 0x7fffffff0000bb80;
  *(undefined8 *)(puVar7 + 0x12) = 0x7fffffff00000001;
  *(undefined8 *)(puVar7 + 0x14) = 0;
  *(undefined8 *)(puVar7 + 0x25) = 0x7fffffff00000001;
  *(undefined8 *)(puVar7 + 3) = 0x20000;
  *(undefined2 *)((long)puVar7 + 0x5e) = 1;
  *(undefined8 *)(puVar7 + 7) = 0;
  *(undefined8 *)(puVar7 + 9) = 0;
  *(undefined8 *)(puVar7 + 0xb) = 0;
  *(undefined8 *)(puVar7 + 0xd) = 0;
  *(undefined8 *)(puVar7 + 0xf) = 0;
  puVar7[0x11] = 0;
  *(undefined8 *)((long)puVar7 + 0x56) = 0;
  puVar7[0x24] = 0;
  *(undefined8 *)(puVar7 + 0x27) = 0;
  puVar7[0x29] = 0;
  DAT_05aebb50 = puVar7;
  *(undefined8 *)(puVar7 + 0x18) = 0x7fffffff0000bb80;
  *(undefined8 *)(puVar7 + 0x1a) = 0;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x22) = 0;
  *(undefined8 *)(puVar7 + 0x1c) = 0;
  *(undefined8 *)(puVar7 + 0x1e) = 0;
  return;
}

