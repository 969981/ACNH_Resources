
void FUN_03d675d0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined *local_40;
  undefined4 local_38;
  
  plVar4 = (long *)*param_1;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    if ((DAT_05ae76c0 == (int *)0x0) || ((char)DAT_05ae76c0[8] == '\0')) {
      uVar1 = FUN_038ceb30();
    }
    else {
      uVar3 = (ulong)(uint)(*DAT_05ae76c0 << 1);
      if (0x1f < (uint)(*DAT_05ae76c0 << 1)) {
        uVar3 = 0;
      }
      uVar1 = (uint)(byte)(&DAT_04058440)[uVar3];
    }
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x158))((float)(int)uVar1,plVar4[1]);
    plVar4 = (long *)*param_1;
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x1d0))(plVar4[1]);
  }
  plVar4 = (long *)param_1[1];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    iVar2 = FUN_038cefc4();
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x158))((float)iVar2,plVar4[1]);
    plVar4 = (long *)param_1[1];
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x1d0))(plVar4[1]);
  }
  plVar4 = (long *)param_1[2];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x1c8))(plVar4[1]);
  }
  return;
}

