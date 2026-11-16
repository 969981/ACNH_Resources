
void FUN_025980a0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_02602950(param_1,0x2f);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "EditTime";
  local_50 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_50,*param_2);
    pcStack_48 = "IsFirstSeq";
    local_50 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_50,*(undefined1 *)(param_2 + 1));
    }
  }
  bVar7 = *(byte *)(param_1 + 0x18);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_50 = (undefined *)CONCAT71(local_50._1_7_,bVar7);
  lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_50,1);
  if (lVar5 == 0) {
    return;
  }
  if ((*(long **)(lVar5 + 0x3278) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x3278), puVar6 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar6)();
    uVar4 = uVar4 ^ 1;
  }
  puVar3 = (undefined1 *)(*(long *)(lVar5 + 0x3260) + *(long *)(lVar5 + 0x3258));
  pcStack_48 = "HairStyle";
  if (*(long *)(param_1 + 8) != 0) {
    local_50 = puVar2 + 0x10;
    FUN_026054d0(*(long *)(param_1 + 8),&local_50,*puVar3);
    pcStack_48 = "HairColor";
    if (*(long *)(param_1 + 8) != 0) {
      local_50 = puVar2 + 0x10;
      FUN_026054d0(*(long *)(param_1 + 8),&local_50,puVar3[1]);
      pcStack_48 = "EyeType";
      if (*(long *)(param_1 + 8) != 0) {
        local_50 = puVar2 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_50,puVar3[2]);
        pcStack_48 = "EyeColor";
        if (*(long *)(param_1 + 8) != 0) {
          local_50 = puVar2 + 0x10;
          FUN_026054d0(*(long *)(param_1 + 8),&local_50,puVar3[3]);
          pcStack_48 = "NoseType";
          if (*(long *)(param_1 + 8) != 0) {
            local_50 = puVar2 + 0x10;
            FUN_026054d0(*(long *)(param_1 + 8),&local_50,puVar3[4]);
            pcStack_48 = "MouthType";
            if (*(long *)(param_1 + 8) != 0) {
              local_50 = puVar2 + 0x10;
              FUN_026054d0(*(long *)(param_1 + 8),&local_50,puVar3[5]);
              pcStack_48 = "CheekType";
              if (*(long *)(param_1 + 8) != 0) {
                local_50 = puVar2 + 0x10;
                FUN_026054d0(*(long *)(param_1 + 8),&local_50,puVar3[6]);
                pcStack_48 = "CheekColor";
                if (*(long *)(param_1 + 8) != 0) {
                  local_50 = puVar2 + 0x10;
                  FUN_026054d0(*(long *)(param_1 + 8),&local_50,puVar3[7]);
                  puVar2 = puVar2 + 0x10;
                  pcStack_48 = "SkinColor";
                  local_50 = puVar2;
                  if (*(long *)(param_1 + 8) != 0) {
                    FUN_026054d0(*(long *)(param_1 + 8),&local_50,puVar3[8]);
                    pcStack_48 = "HasFacePaint";
                    local_50 = puVar2;
                    if (*(long *)(param_1 + 8) != 0) {
                      FUN_026054d0(*(long *)(param_1 + 8),&local_50,
                                   *(short *)(puVar3 + 10) != *(short *)PTR_DAT_04bb3170);
                    }
                  }
                  goto LAB_02598390;
                }
              }
            }
          }
        }
      }
    }
  }
  local_50 = puVar2 + 0x10;
LAB_02598390:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x3278) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x3278) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

