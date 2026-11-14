
void FUN_017518f4(undefined8 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  char *__dest;
  long lVar7;
  undefined *local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  long local_48;
  
  FUN_00739870(param_1,0,0,1);
  *(undefined4 *)(param_1 + 0x240) = 0x40;
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x24b) = 0x20;
  param_1[0x23f] = (undefined1 *)((long)param_1 + 0x1204);
  *param_1 = &PTR_LAB_049c1ee0;
  *(undefined1 *)((long)param_1 + 0x1243) = 0;
  *(undefined1 *)((long)param_1 + 0x1204) = 0;
  *(undefined1 *)((long)param_1 + 0x127b) = 0;
  param_1[0x23e] = puVar3 + 0x10;
  puVar6 = (undefined8 *)((long)param_1 + 0x125c);
  param_1[0x24a] = puVar6;
  if (puVar6 != &DAT_0407ebb1) {
    *(undefined1 *)puVar6 = 0;
  }
  param_1[0x249] = PTR_DAT_04bb2028 + 0x10;
  *(undefined2 *)(param_1 + 0x250) = *param_2;
  *(undefined1 *)((long)param_1 + 0x1282) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0x1283) = *(undefined1 *)((long)param_2 + 3);
  uVar2 = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 0x252) = 0;
  param_1[0x253] = 0;
  *(undefined1 *)((long)param_1 + 0x12a4) = 0;
  *(undefined4 *)((long)param_1 + 0x1284) = uVar2;
  *(undefined4 *)(param_1 + 0x254) = 0x3f800000;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar7 + 8);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
  }
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 3) = 1;
  *puVar6 = &PTR_LAB_049c2100;
  puVar6[1] = 0;
  param_1[0x251] = puVar6;
  puVar3 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1 + 0x250);
  lVar7 = *(long *)puVar3;
  if (lVar7 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_50 = *(undefined2 *)(param_1 + 0x250);
      local_48 = 0;
      local_4e = *(undefined2 *)((long)param_1 + 0x1282);
      local_4c = *(undefined4 *)((long)param_1 + 0x1284);
      local_58 = PTR_DAT_04bc0510 + 0x10;
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_1 + 0x250);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
            local_48 = lVar7;
          }
        }
      }
      uVar4 = FUN_01ad78cc(&local_58);
      if (uVar4 < 0x75) {
        puVar6 = *(undefined8 **)(PTR_DAT_04bb4678 + (ulong)uVar4 * 8 + 0x370);
      }
      else {
        puVar6 = &DAT_0407ebb1;
      }
      FUN_038d1270(param_1 + 0x249,"HumanPartsTool%s",puVar6);
      return;
    }
  }
  __dest = (char *)param_1[0x24a];
  if (__dest != "HumanPartsToolActor") {
    iVar1 = 0x13;
    if (*(int *)(param_1 + 0x24b) < 0x14) {
      iVar1 = *(int *)(param_1 + 0x24b) + -1;
    }
    memcpy(__dest,"HumanPartsToolActor",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}

