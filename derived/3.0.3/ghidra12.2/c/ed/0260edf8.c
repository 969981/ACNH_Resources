
void FUN_0260edf8(long param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  puVar2 = PTR_DAT_04bc3578;
  uVar3 = (**(code **)(*(long *)**(undefined8 **)PTR_DAT_04bc3578 + 0x80))
                    ((long *)**(undefined8 **)PTR_DAT_04bc3578,8);
  puVar1 = PTR_DAT_04bb2020;
  if (4 < uVar3 >> 0xc) {
    if (*(char *)(param_1 + 0xb1) != '\0') {
      return;
    }
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "saveDataRecoveryStart";
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar3 = (**(code **)(*(long *)**(undefined8 **)puVar2 + 0x80))
                      ((long *)**(undefined8 **)puVar2,8);
    if (4 < uVar3 >> 0xc) {
      lVar6 = *(long *)PTR_DAT_04bb2698;
      if (lVar6 == 0) {
        plVar4 = malloc(0x50);
      }
      else {
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar6 + 8);
          if (lVar5 != 0) {
            plVar4 = (long *)(lVar5 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x50,8);
      }
      FUN_02605160(plVar4,&local_60,100,1,1);
      puVar1 = puVar1 + 0x10;
      pcStack_58 = "Id";
      local_60 = puVar1;
      FUN_02605660(plVar4,&local_60,*param_2);
      pcStack_58 = "CreatedPosix";
      local_60 = puVar1;
      FUN_02605660(plVar4,&local_60,*param_3);
      pcStack_58 = "DataVersion";
      local_60 = puVar1;
      FUN_02605660(plVar4,&local_60,(long)*param_4);
      pcStack_58 = "LandName";
      pcStack_68 = param_4 + 1;
      local_70 = puVar1;
      local_60 = puVar1;
      FUN_02605980(plVar4,&local_60,&local_70);
      if ((ulong)(byte)param_4[0x21] < 8) {
        pcStack_58 = "RepesenPName";
        pcStack_68 = param_4 + (ulong)(byte)param_4[0x21] * 0x1f + 0x22;
        local_70 = puVar1;
        local_60 = puVar1;
        FUN_02605980(plVar4,&local_60,&local_70);
      }
      FUN_02605e50(plVar4,param_5);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
  return;
}

