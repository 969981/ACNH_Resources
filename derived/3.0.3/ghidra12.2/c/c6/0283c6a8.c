
void FUN_0283c6a8(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined *local_50;
  char *pcStack_48;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[4] = param_1;
  param_1[5] = FUN_0283cb14;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_LAB_04a91c20;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = FUN_0283cb2c;
  param_1[0xb] = 0;
  param_1[8] = &PTR_LAB_04a91c20;
  param_1[9] = param_1;
  memset(param_1 + 0x19,0,0x131);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((long)param_1 + 0x20c) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x44] = PTR_DAT_04bd4738 + 0x10;
  param_1[0x45] = 0xffffffff;
  param_1[0x46] = 0xffffffff;
  param_1[0x47] = 0xffffffff;
  param_1[0x4f] = FUN_0283cba8;
  param_1[0x56] = &LAB_0283cc58;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = param_1;
  param_1[0x50] = 0;
  param_1[0x4d] = &PTR_LAB_04a91c20;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x55] = param_1;
  param_1[0x57] = 0;
  param_1[0x54] = &PTR_LAB_04a91c20;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5a] = param_1;
  param_1[0x5b] = &LAB_0283ccbc;
  param_1[0x5c] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x59] = &PTR_LAB_04a91c20;
  lVar10 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (lVar10 != 0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar8 = (undefined8 *)(lVar10 + 8);
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar11 = (long *)*puVar8;
    if (plVar11 != (long *)0x0) {
      if (*(long *)puVar1 == 0) {
        plVar6 = malloc(0x30);
      }
      else {
        plVar6 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x30,8);
      }
      puVar1 = PTR_DAT_04bd0d40;
      plVar6[2] = 0;
      plVar6[3] = 0;
      plVar12 = (long *)0x0;
      *plVar6 = (long)(puVar1 + 0x10);
      plVar6[1] = (long)plVar11;
      if ((*(uint *)(plVar11 + 0x1a) & 1) != 0) {
        plVar12 = plVar11 + 0x12;
        nn::os::LockMutex((MutexType *)(plVar11 + 0x16));
      }
      puVar8 = param_1 + 0x44;
      plVar9 = plVar11 + 0xe;
      lVar10 = *plVar9;
      plVar2 = (long *)((long)*(int *)((long)plVar11 + 0x84) + (long)plVar6);
      *plVar9 = (long)plVar2;
      *plVar2 = lVar10;
      plVar2[1] = (long)plVar9;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar2;
      }
      *(int *)(plVar11 + 0x10) = (int)plVar11[0x10] + 1;
      if (plVar12 != (long *)0x0) {
        nn::os::UnlockMutex((MutexType *)(plVar12 + 4));
      }
      *plVar6 = (long)(PTR_DAT_04bd0e58 + 0x10);
      nn::os::InitializeLightEvent((LightEventType *)(plVar6 + 4),0,1);
      param_1[1] = plVar6;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 4));
      FUN_03ebac90(puVar8,5,0,0,0);
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "CloudIslandProcess::cIdle";
      local_50 = puVar1;
      FUN_03ebaf40(puVar8,0,&local_50);
      puVar7 = (undefined8 *)param_1[0x4a];
      puVar7[2] = &LAB_0283cea0;
      puVar7[3] = 0;
      puVar7[4] = &LAB_0283cec0;
      puVar7[5] = 0;
      *puVar7 = &PTR_LAB_04a91c70;
      puVar7[1] = param_1;
      puVar7[6] = &LAB_0283cf14;
      puVar7[7] = 0;
      pcStack_48 = "CloudIslandProcess::cPreSave";
      local_50 = puVar1;
      FUN_03ebaf40(puVar8,1,&local_50);
      puVar7 = (undefined8 *)(param_1[0x4a] + (ulong)(1 < *(uint *)(param_1 + 0x49)) * 0x40);
      puVar7[4] = &LAB_0283d010;
      puVar7[5] = 0;
      *puVar7 = &PTR_LAB_04a91c70;
      puVar7[1] = param_1;
      puVar7[2] = &LAB_0283cf18;
      puVar7[3] = 0;
      puVar7[6] = &LAB_0283d09c;
      puVar7[7] = 0;
      pcStack_48 = "CloudIslandProcess::cSave";
      local_50 = puVar1;
      FUN_03ebaf40(puVar8,2,&local_50);
      puVar7 = (undefined8 *)(param_1[0x4a] + (ulong)(2 < *(uint *)(param_1 + 0x49)) * 0x80);
      puVar7[4] = &LAB_0283d1cc;
      puVar7[5] = 0;
      *puVar7 = &PTR_LAB_04a91c70;
      puVar7[1] = param_1;
      puVar7[2] = &LAB_0283d0a0;
      puVar7[3] = 0;
      puVar7[6] = &LAB_0283d200;
      puVar7[7] = 0;
      pcStack_48 = "CloudIslandProcess::cPostSave";
      local_50 = puVar1;
      FUN_03ebaf40(puVar8,3,&local_50);
      lVar10 = 0xc0;
      if (*(uint *)(param_1 + 0x49) < 4) {
        lVar10 = 0;
      }
      puVar7 = (undefined8 *)(param_1[0x4a] + lVar10);
      puVar7[2] = &LAB_0283d204;
      puVar7[3] = 0;
      *puVar7 = &PTR_LAB_04a91c70;
      puVar7[1] = param_1;
      puVar7[4] = &LAB_0283d2b0;
      puVar7[5] = 0;
      puVar7[6] = &LAB_0283d31c;
      puVar7[7] = 0;
      pcStack_48 = "CloudIslandProcess::cLoad";
      local_50 = puVar1;
      FUN_03ebaf40(puVar8,4,&local_50);
      puVar8 = (undefined8 *)(param_1[0x4a] + (ulong)(4 < *(uint *)(param_1 + 0x49)) * 0x100);
      puVar8[2] = &LAB_0283d320;
      puVar8[3] = 0;
      *puVar8 = &PTR_LAB_04a91c70;
      puVar8[1] = param_1;
      puVar8[6] = &LAB_0283d400;
      puVar8[7] = 0;
      puVar8[4] = &LAB_0283d3d0;
      puVar8[5] = 0;
      *(undefined1 *)((long)param_1 + 0x241) = 1;
      uVar3 = *(uint *)(param_1 + 0x47);
      *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_1 + 0x45);
      uVar4 = *(undefined4 *)((long)param_1 + 0x22c);
      *(uint *)(param_1 + 0x45) = uVar3;
      *(undefined4 *)((long)param_1 + 0x22c) = 0;
      *(undefined4 *)((long)param_1 + 0x234) = uVar4;
      if (uVar3 != 0xffffffff) {
        if (*(uint *)(param_1 + 0x49) <= uVar3) {
          uVar3 = 0;
        }
        puVar8 = *(undefined8 **)(param_1[0x4a] + (long)(int)uVar3 * 0x40);
        if (puVar8 != (undefined8 *)0x0) {
          (*(code *)*puVar8)();
        }
      }
    }
  }
  return;
}

