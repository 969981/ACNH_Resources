
void FUN_0260f010(long param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4,char *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bc3578;
  uVar4 = (**(code **)(*(long *)**(undefined8 **)PTR_DAT_04bc3578 + 0x80))
                    ((long *)**(undefined8 **)PTR_DAT_04bc3578,8);
  puVar2 = PTR_DAT_04bb2020;
  if (4 < uVar4 >> 0xc) {
    if (*(char *)(param_1 + 0xb1) != '\0') {
      return;
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "saveDataRecoveryEnd";
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar4 = (**(code **)(*(long *)**(undefined8 **)puVar1 + 0x80))
                      ((long *)**(undefined8 **)puVar1,8);
    if (4 < uVar4 >> 0xc) {
      lVar7 = *(long *)PTR_DAT_04bb2698;
      if (lVar7 == 0) {
        plVar5 = malloc(0x50);
      }
      else {
        plVar5 = *(long **)(param_1 + 0x28);
        if (plVar5 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar5 = (long *)(lVar7 + 8);
          if (lVar6 != 0) {
            plVar5 = (long *)(lVar6 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x50,8);
      }
      FUN_02605160(plVar5,&local_70,100,1,1);
      puVar1 = puVar2 + 0x10;
      pcStack_68 = "Id";
      local_70 = puVar1;
      FUN_02605660(plVar5,&local_70,*param_3);
      pcStack_68 = "CreatedPosix";
      local_70 = puVar1;
      FUN_02605660(plVar5,&local_70,*param_4);
      pcStack_68 = "DataVersion";
      local_70 = puVar1;
      FUN_02605660(plVar5,&local_70,(long)*param_5);
      pcStack_68 = "LandName";
      pcStack_78 = param_5 + 1;
      local_80 = puVar1;
      local_70 = puVar1;
      FUN_02605980(plVar5,&local_70,&local_80);
      if ((ulong)(byte)param_5[0x21] < 8) {
        pcStack_68 = "RepesenPName";
        pcStack_78 = param_5 + (ulong)(byte)param_5[0x21] * 0x1f + 0x22;
        local_80 = puVar1;
        local_70 = puVar1;
        FUN_02605980(plVar5,&local_70,&local_80);
      }
      pcStack_68 = "DownloadTime";
      local_70 = puVar1;
      FUN_02605660(plVar5,&local_70,param_6);
      uVar3 = *param_2;
      pcStack_68 = "IsResult";
      local_70 = puVar1;
      FUN_02605660(plVar5,&local_70,uVar3 == 0);
      if (uVar3 != 0) {
        puVar2 = puVar2 + 0x10;
        pcStack_68 = "Result_Module";
        local_70 = puVar2;
        FUN_02605660(plVar5,&local_70,*param_2 & 0x1ff);
        pcStack_68 = "Result_Description";
        local_70 = puVar2;
        FUN_02605660(plVar5,&local_70,*param_2 >> 9 & 0x1fff);
      }
      FUN_02605e50(plVar5,param_7);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
  return;
}

