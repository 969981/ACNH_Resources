
void FUN_002c7830(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined4 local_120 [8];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [128];
  int local_60 [4];
  undefined1 auStack_50 [8];
  int local_48;
  byte local_44;
  undefined8 local_40;
  int local_38;
  
  if (*(short *)((long)param_2 + 0x2a) == 0x14) {
    FUN_002cb3a4(auStack_50);
    bVar1 = *(byte *)(param_2 + 5);
    uVar2 = 1;
    if ((bVar1 & 1) != 0) {
      uVar2 = 2;
    }
    if ((bVar1 & 2) != 0) {
      uVar2 = uVar2 + 2;
    }
    if ((bVar1 & 4) != 0) {
      uVar2 = uVar2 + 4;
    }
    if ((bVar1 & 8) != 0) {
      uVar2 = uVar2 + 8;
    }
    FUN_002cb470(local_60,auStack_50,*param_2 + (ulong)uVar2,0x14);
    if ((((local_60[0] == 0) && (local_44 < 2)) && (local_48 != 0)) && (local_38 != 0)) {
      FUN_002b3fa8(auStack_e0);
      FUN_0021f508(auStack_100,param_2 + 9);
      uVar2 = FUN_0021ff1c(auStack_100);
      if ((uVar2 & 1) == 0) {
        FUN_002b44e4(auStack_e0,auStack_100);
      }
      else {
        FUN_002b44ec(auStack_e0,auStack_100);
      }
      FUN_002b455c(auStack_e0,uVar2 & 1);
      FUN_002b450c(auStack_e0,local_48);
      FUN_002b4504(auStack_e0,local_38);
      FUN_002b4378(&local_128,auStack_e0);
      uVar4 = FUN_0021fea0(local_120);
      local_128 = PTR_DAT_04bcba18 + 0x10;
      FUN_0021f584(local_120);
      if ((uVar4 & 1) == 0) {
        local_120[0] = 0;
        local_128 = (undefined *)0x1;
        FUN_002b493c(auStack_e0,&local_128);
      }
      else if (local_44 == 1) {
        local_138 = local_40;
        FUN_002ca680(param_1 + 0x180,auStack_e0,&local_138,*(undefined1 *)((long)param_2 + 0x6c));
        if (*(int *)(param_1 + 0x17d0) == local_48) {
          FUN_002c72e0(param_1);
          *(undefined1 *)(param_1 + 0x17ca) = 0;
          *(undefined2 *)(param_1 + 0x17c8) = 0;
          *(undefined4 *)(param_1 + 0x17d0) = 0;
        }
      }
      else if (((local_44 == 0) &&
               (uVar4 = FUN_002ca320(param_1 + 0x180,auStack_e0,
                                     *(undefined1 *)((long)param_2 + 0x6c)), (uVar4 & 1) != 0)) &&
              (iVar3 = FUN_002b43fc(param_1 + 0x50), iVar3 != 0)) {
        local_130 = local_40;
        FUN_002c8b8c(param_1,1,auStack_e0,&local_130,0);
      }
      FUN_0021f584(auStack_100);
      FUN_002b4104(auStack_e0);
    }
  }
  return;
}

