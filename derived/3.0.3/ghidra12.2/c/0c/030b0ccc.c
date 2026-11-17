
undefined8 FUN_030b0ccc(long *param_1)

{
  undefined ***pppuVar1;
  bool bVar2;
  byte bVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  
  local_48 = 0;
  uStack_50 = FUN_02535188();
  local_58 = &PTR_LAB_04afc0e8;
  pppuVar4 = (undefined ***)(**(code **)(*param_1 + 0x48))(param_1);
  pppuVar1 = &local_58;
  if (pppuVar4 != (undefined ***)0x0) {
    pppuVar1 = pppuVar4;
  }
  plVar5 = (long *)(**(code **)*param_1)(param_1);
  local_40 = PTR_DAT_04bc0cb8 + 0x10;
  local_38 = 0xb;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
  uVar6 = (**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
  (**(code **)(*param_1 + 0x20))
            (*(undefined4 *)((long)param_1 + 0x4c),param_1,&local_48,pppuVar1,uVar6,
             (int)param_1[0xc],*(undefined4 *)((long)param_1 + 100));
  (**(code **)(*param_1 + 0x38))
            (*(undefined4 *)((long)param_1 + 0x4c),param_1,(long)param_1 + 0x1c,(long)param_1 + 0x54
             ,pppuVar1,&local_48);
  (**(code **)(*param_1 + 0x40))(param_1,(long)param_1 + 0x1c);
  if (((char)param_1[10] == '\0') ||
     (uVar7 = (**(code **)(*param_1 + 8))(param_1), (uVar7 & 1) == 0)) {
    bVar2 = (char)param_1[1] == '\0';
    bVar3 = (*(code *)(*pppuVar1)[6])(pppuVar1);
    *(byte *)((long)param_1 + 0x5c) = bVar3 & bVar2;
    *(byte *)((long)param_1 + 0x5d) = !bVar2 & (bVar3 ^ 1);
    *(byte *)(param_1 + 1) = bVar3 & 1;
    if (((bVar3 ^ 1) & 1) == 0) {
      *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_1 + 0x1c);
      *(int *)(param_1 + 6) = (int)param_1[4];
      return 1;
    }
  }
  return 0;
}

