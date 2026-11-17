
void FUN_02f8d53c(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *local_40;
  undefined4 local_38;
  
  lVar2 = *(long *)(param_1 + 0x218);
  uVar3 = 0;
  if ((param_2 & 1) == 0) {
    uVar3 = 0x3f800000;
  }
  if ((*(long *)(lVar2 + 0x580) != 0) &&
     (plVar1 = (long *)**(undefined8 **)(*(long *)(lVar2 + 0x580) + 0x2f0), plVar1 != (long *)0x0))
  {
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
    (**(code **)(plVar1[3] + 0x158))(uVar3,plVar1[1]);
  }
  if ((*(long *)(lVar2 + 0x588) != 0) &&
     (plVar1 = (long *)**(undefined8 **)(*(long *)(lVar2 + 0x588) + 0x2f0), plVar1 != (long *)0x0))
  {
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
    (**(code **)(plVar1[3] + 0x158))(uVar3,plVar1[1]);
  }
  if ((*(long *)(lVar2 + 0x590) != 0) &&
     (plVar1 = (long *)**(undefined8 **)(*(long *)(lVar2 + 0x590) + 0x2f0), plVar1 != (long *)0x0))
  {
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
    (**(code **)(plVar1[3] + 0x158))(uVar3,plVar1[1]);
  }
  return;
}

