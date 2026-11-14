
undefined8 * FUN_01c765ec(void)

{
  undefined *puVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_30;
  char *pcStack_28;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_01c7664c:
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "TapIndoorSelectCloudIsland";
      iVar4 = FUN_02743000(&local_30);
      if ((iVar4 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) goto LAB_01c766a0;
    }
    puVar7 = (undefined8 *)0x0;
  }
  else {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_01c7664c;
LAB_01c766a0:
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      puVar7 = malloc(0x28);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      puVar7 = (undefined8 *)0x0;
      if (plVar6 != (long *)0x0) {
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x28,8);
      }
    }
    uVar3 = DAT_053512e0;
    *(undefined1 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_LAB_04a43288;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = uVar3;
  }
  return puVar7;
}

