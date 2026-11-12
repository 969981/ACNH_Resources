
undefined4 FUN_00692440(undefined8 *param_1,LightEventType *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  uVar2 = 0x806db;
  iVar1 = FUN_00147350(*param_1,param_1[1]);
  if (iVar1 == 0) {
    local_44 = 0;
    FUN_001485d4(*param_1,&local_44);
    if (param_2 == (LightEventType *)0x0) {
      do {
        local_48 = 0;
        iVar1 = FUN_00148560(*param_1,0,0,10,&local_48);
        if (iVar1 != 0) {
          if (iVar1 != 3) {
            uVar2 = 0xf9edb;
          }
          goto LAB_006925c8;
        }
        if (local_48 == 0) {
          nn::os::SleepThread(5000000);
        }
        FUN_001485d4(*param_1,&local_44);
      } while (0 < local_44);
    }
    else {
      do {
        local_48 = 0;
        iVar1 = FUN_00148560(*param_1,0,0,10,&local_48);
        if (iVar1 != 0) {
          if (iVar1 != 3) {
            uVar2 = 0xf9edb;
          }
          goto LAB_006925c8;
        }
        if (local_48 == 0) {
          nn::os::SleepThread(5000000);
        }
        FUN_001485d4(*param_1,&local_44);
        uVar3 = nn::os::TryWaitLightEvent(param_2);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x16db;
          goto LAB_006925c8;
        }
      } while (0 < local_44);
    }
    do {
      local_4c = 0;
      piVar4 = (int *)FUN_001498dc(*param_1,&local_4c);
      if (piVar4 == (int *)0x0) {
        uVar2 = 0;
        goto LAB_006925c8;
      }
    } while (*piVar4 != 1);
    uVar2 = FUN_00693380(piVar4[4]);
LAB_006925c8:
    FUN_001477d8(*param_1,param_1[1]);
  }
  else if (iVar1 != 3) {
    uVar2 = 0x7d4db;
  }
  return uVar2;
}

