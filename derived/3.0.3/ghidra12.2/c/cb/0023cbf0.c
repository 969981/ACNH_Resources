
void FUN_0023cbf0(undefined8 param_1,long param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  undefined4 local_110;
  ErrorResultVariant aEStack_10c [20];
  short local_f8;
  undefined4 local_90 [6];
  undefined2 local_78;
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  
  if (*(long *)(param_2 + 0xa0) == 0) {
    local_110 = 0x10c07;
  }
  else {
    local_70 = 0;
    local_110 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_110);
    if (*(short *)(param_2 + 0xd0) != 0) {
      uVar6 = 0;
      do {
        FUN_00226918(&local_110,*(undefined8 *)(param_2 + 0xa0),2,2,0x11);
        FUN_00229780(&local_70,&local_110);
        sVar1 = DAT_04be24cc;
        if (local_70 != 0) {
          local_110 = 0x10c08;
          goto LAB_0023cea0;
        }
        sVar2 = -0x4000;
        if ((uint)(ushort)(DAT_04be24cc + 1) < *(ushort *)(param_2 + 0xd0) + 0xc000) {
          sVar2 = DAT_04be24cc + 1;
        }
        DAT_04be24cc = sVar2;
        FUN_0021f4e0(&local_110);
        local_f8 = sVar1;
        FUN_00226a50(local_90,*(undefined8 *)(param_2 + 0xa0),&local_110,0xffffffff,1);
        FUN_00229780(&local_70,local_90);
        if (local_70 == 0) {
          FUN_0021f584(&local_110);
          *(short *)(param_2 + 0x94) = sVar1;
          FUN_0021f508(local_90,param_2 + 0x50);
          local_78 = *(undefined2 *)(param_2 + 0x94);
          FUN_002b3fa8(&local_110);
          FUN_002b44ec(&local_110,local_90);
          FUN_002b455c(&local_110,1);
          uVar3 = FUN_002ba5d8(DAT_04c61168);
          FUN_002b4504(&local_110,uVar3);
          uVar3 = FUN_0023d404(param_2);
          FUN_002b450c(&local_110,uVar3);
          uVar4 = FUN_0023d574(param_2);
          FUN_002b44fc(&local_110,uVar4);
          plVar5 = (long *)FUN_002ba788(DAT_04c61168);
          (**(code **)(*plVar5 + 0x58))(plVar5,&local_110);
          FUN_0022e5b4(*(undefined8 *)(param_2 + 0xc0),local_90);
          FUN_002b4104(&local_110);
          FUN_0021f584(local_90);
          if (*(char *)(param_2 + 0x99) != '\0') {
            FUN_00226918(&local_110,*(undefined8 *)(param_2 + 0xa8),2,2,0x11);
            FUN_00229780(&local_70,&local_110);
            if (local_70 == 0) {
              FUN_0021f4e0(&local_110);
              local_f8 = -0x63c0;
              FUN_00226a50(local_90,*(undefined8 *)(param_2 + 0xa8),&local_110,0xffffffff,1);
              FUN_00229780(&local_70,local_90);
              if (local_70 == 0) {
                *(undefined1 *)(param_2 + 0xb0) = 1;
              }
              else {
                *(undefined1 *)(param_2 + 0xb0) = 0;
                FUN_002269b8(local_90,*(undefined8 *)(param_2 + 0xa8));
              }
              FUN_0021f584(&local_110);
            }
            else {
              *(undefined1 *)(param_2 + 0xb0) = 0;
            }
          }
          local_110 = 0;
          goto LAB_0023cea0;
        }
        FUN_002269b8(local_90,*(undefined8 *)(param_2 + 0xa0));
        FUN_00229780(&local_70,local_90);
        FUN_0021f584(&local_110);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_2 + 0xd0));
    }
    local_110 = 0x10c08;
  }
LAB_0023cea0:
  local_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_10c,(Result *)local_90);
  FUN_002296c4(param_1,&local_110);
  return;
}

