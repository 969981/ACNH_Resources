
void FUN_001f284c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_1038;
  undefined1 auStack_1030 [4096];
  
  puVar6 = *(undefined8 **)(param_1 + 0x52);
  FUN_00174e0c(*puVar6,0x2712,*(undefined8 *)(param_1 + 8));
  FUN_00174e0c(*puVar6,0x9b,15000);
  iVar3 = FUN_00142a18(*puVar6);
  if ((iVar3 == 0) && (uVar4 = FUN_001f2c50(param_1), (uVar4 & 1) != 0)) {
    memset(auStack_1030,0,0x1000);
    local_1038 = 0;
    uVar4 = FUN_001f2d50(param_1,auStack_1030,0x1000,&local_1038);
    if ((uVar4 & 1) != 0) {
LAB_001f28cc:
      FUN_001f2f20(param_1,auStack_1030,local_1038);
      return;
    }
    lVar5 = *(long *)(param_1 + 0x54);
    iVar3 = strcmp((char *)(lVar5 + 0x34),"");
    if (iVar3 != 0) {
      puVar1 = param_1 + 2;
      puVar2 = param_1 + 0x16;
      FUN_0018b8f0(puVar1,(char *)(lVar5 + 0x34));
      lVar5 = *(long *)(param_1 + 0x54);
      *(undefined4 *)(lVar5 + 0x30) = 0;
      memset((void *)(lVar5 + 0x34),0,0x400);
      uVar4 = FUN_001f25ec(*(undefined8 *)(param_1 + 0x52),puVar2);
      if ((uVar4 & 1) != 0) {
        puVar6 = *(undefined8 **)(param_1 + 0x52);
        FUN_00174e0c(*puVar6,0x2712,*(undefined8 *)(param_1 + 8));
        FUN_00174e0c(*puVar6,0x9b,15000);
        iVar3 = FUN_00142a18(*puVar6);
        if ((iVar3 == 0) && (uVar4 = FUN_001f2c50(param_1), (uVar4 & 1) != 0)) {
          memset(auStack_1030,0,0x1000);
          local_1038 = 0;
          uVar4 = FUN_001f2d50(param_1,auStack_1030,0x1000,&local_1038);
          if ((uVar4 & 1) != 0) goto LAB_001f28cc;
          lVar5 = *(long *)(param_1 + 0x54);
          iVar3 = strcmp((char *)(lVar5 + 0x34),"");
          if (iVar3 != 0) {
            FUN_0018b8f0(puVar1,(char *)(lVar5 + 0x34));
            lVar5 = *(long *)(param_1 + 0x54);
            *(undefined4 *)(lVar5 + 0x30) = 0;
            memset((void *)(lVar5 + 0x34),0,0x400);
            uVar4 = FUN_001f25ec(*(undefined8 *)(param_1 + 0x52),puVar2);
            if ((uVar4 & 1) != 0) {
              puVar6 = *(undefined8 **)(param_1 + 0x52);
              FUN_00174e0c(*puVar6,0x2712,*(undefined8 *)(param_1 + 8));
              FUN_00174e0c(*puVar6,0x9b,15000);
              iVar3 = FUN_00142a18(*puVar6);
              if ((iVar3 == 0) && (uVar4 = FUN_001f2c50(param_1), (uVar4 & 1) != 0)) {
                memset(auStack_1030,0,0x1000);
                local_1038 = 0;
                uVar4 = FUN_001f2d50(param_1,auStack_1030,0x1000,&local_1038);
                if ((uVar4 & 1) != 0) goto LAB_001f28cc;
                lVar5 = *(long *)(param_1 + 0x54);
                iVar3 = strcmp((char *)(lVar5 + 0x34),"");
                if (iVar3 != 0) {
                  FUN_0018b8f0(puVar1,(char *)(lVar5 + 0x34));
                  lVar5 = *(long *)(param_1 + 0x54);
                  *(undefined4 *)(lVar5 + 0x30) = 0;
                  memset((void *)(lVar5 + 0x34),0,0x400);
                  uVar4 = FUN_001f25ec(*(undefined8 *)(param_1 + 0x52),puVar2);
                  if ((uVar4 & 1) != 0) {
                    puVar6 = *(undefined8 **)(param_1 + 0x52);
                    FUN_00174e0c(*puVar6,0x2712,*(undefined8 *)(param_1 + 8));
                    FUN_00174e0c(*puVar6,0x9b,15000);
                    iVar3 = FUN_00142a18(*puVar6);
                    if ((iVar3 == 0) && (uVar4 = FUN_001f2c50(param_1), (uVar4 & 1) != 0)) {
                      memset(auStack_1030,0,0x1000);
                      local_1038 = 0;
                      uVar4 = FUN_001f2d50(param_1,auStack_1030,0x1000,&local_1038);
                      if ((uVar4 & 1) != 0) goto LAB_001f28cc;
                      lVar5 = *(long *)(param_1 + 0x54);
                      iVar3 = strcmp((char *)(lVar5 + 0x34),"");
                      if (iVar3 != 0) {
                        FUN_0018b8f0(puVar1,(char *)(lVar5 + 0x34));
                        lVar5 = *(long *)(param_1 + 0x54);
                        *(undefined4 *)(lVar5 + 0x30) = 0;
                        memset((void *)(lVar5 + 0x34),0,0x400);
                        uVar4 = FUN_001f25ec(*(undefined8 *)(param_1 + 0x52),puVar2);
                        if ((uVar4 & 1) != 0) {
                          puVar6 = *(undefined8 **)(param_1 + 0x52);
                          FUN_00174e0c(*puVar6,0x2712,*(undefined8 *)(param_1 + 8));
                          FUN_00174e0c(*puVar6,0x9b,15000);
                          iVar3 = FUN_00142a18(*puVar6);
                          if ((iVar3 == 0) && (uVar4 = FUN_001f2c50(param_1), (uVar4 & 1) != 0)) {
                            memset(auStack_1030,0,0x1000);
                            local_1038 = 0;
                            uVar4 = FUN_001f2d50(param_1,auStack_1030,0x1000,&local_1038);
                            if ((uVar4 & 1) != 0) goto LAB_001f28cc;
                            lVar5 = *(long *)(param_1 + 0x54);
                            iVar3 = strcmp((char *)(lVar5 + 0x34),"");
                            if (iVar3 != 0) {
                              FUN_0018b8f0(puVar1,(char *)(lVar5 + 0x34));
                              lVar5 = *(long *)(param_1 + 0x54);
                              *(undefined4 *)(lVar5 + 0x30) = 0;
                              memset((void *)(lVar5 + 0x34),0,0x400);
                              FUN_001f25ec(*(undefined8 *)(param_1 + 0x52),puVar2);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x1c9) = 1;
  *param_1 = 3;
  return;
}

