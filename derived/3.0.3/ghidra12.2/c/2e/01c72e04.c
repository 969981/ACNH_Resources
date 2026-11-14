
void FUN_01c72e04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "TapIndoorSelectCloudIsland";
    iVar2 = FUN_02743000(&local_40);
    if ((iVar2 != 0) || (*(long *)(DAT_05351250 + 0x50) != 0)) {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "NetCloudIslandMgr";
      plVar3 = (long *)FUN_038c6d48(&LAB_01400000,&local_40,param_2,8,1,0);
      lVar6 = *(long *)PTR_DAT_04bb2698;
      if (lVar6 == 0) {
        plVar5 = malloc(0x610);
      }
      else {
        plVar5 = plVar3;
        if (plVar3 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar6 + 8);
          if (lVar4 != 0) {
            plVar5 = (long *)(lVar4 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x610,8);
      }
      *plVar5 = (long)plVar3;
      memset(plVar5 + 1,0,0x1b1);
      memset(plVar5 + 0x38,0,0x1b1);
      memset(plVar5 + 0x6f,0,0x1b1);
      *(undefined4 *)((long)plVar5 + 0x564) = 0;
      plVar5[0xad] = (long)plVar5;
      plVar5[0xae] = 0;
      *(undefined4 *)(plVar5 + 0xaf) = 0;
      plVar5[0xb0] = 0;
      plVar5[0xb1] = 0;
      plVar5[0xb2] = 0;
      plVar5[0xb3] = 0;
      plVar5[0xb4] = 0;
      *(undefined1 *)(plVar5 + 0xb5) = 0;
      plVar5[0xb6] = 0;
      plVar5[0xb7] = 0;
      plVar5[0xb8] = 0;
      plVar5[0xb9] = 0;
      plVar5[0xba] = 0;
      plVar5[0xbb] = 0;
      plVar5[0xbc] = 0;
      plVar5[0xbd] = 0;
      plVar5[0xbe] = 0;
      plVar5[0xbf] = 0;
      plVar5[0xc0] = 0;
      *(undefined1 *)(plVar5 + 0xc1) = 0;
      plVar3 = (long *)(param_1 + 0x50);
      lVar6 = *plVar3;
      *plVar3 = (long)plVar5;
      if (lVar6 != 0) {
        FUN_01c75194(plVar3);
      }
    }
  }
  return;
}

