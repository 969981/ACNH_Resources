
void FUN_01fa7b40(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  short sVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb2720;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar6 = *(long *)PTR_DAT_04bb2720, lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
    iVar2 = FUN_006bd550(*puVar3,0);
    if (((iVar2 == 0x758f7eaf) && (*(long *)puVar1 != 0)) &&
       ((lVar6 = *(long *)(*(long *)puVar1 + 0x330), lVar6 != 0 &&
        ((*(int *)(lVar6 + 0x244) != 0 && (uVar4 = FUN_01fa7760(param_4), (uVar4 & 1) != 0)))))) {
      uVar4 = (**(code **)(*param_4 + 0x5c0))(param_4);
      if ((uVar4 & 1) == 0) {
        if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
             ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar6 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar6 == 0)) {
          sVar5 = *(short *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
        }
        else if ((*(long **)(lVar6 + 0x60) == (long *)0x0) ||
                (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x60), puVar3 == (undefined8 *)0x0)) {
          sVar5 = *(short *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
        }
        else {
          uVar4 = (**(code **)*puVar3)();
          sVar5 = *(short *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
             (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 8), puVar3 != (undefined8 *)0x0))
          {
            (**(code **)*puVar3)();
          }
        }
        local_48 = PTR_DAT_04bb2020 + 0x10;
        local_40 = &DAT_0407ebb1;
        uVar7 = FUN_03771b40(sVar5 != *(short *)((long)param_4 + 0x12184),&local_48);
      }
      else {
        uVar7 = FUN_037715a0();
      }
      local_48 = (undefined *)CONCAT44(param_2,uVar7);
      local_40 = (undefined8 *)CONCAT44(local_40._4_4_,param_3);
      FUN_01e57c78(param_4[2],PTR_DAT_04bb37e0,0,1);
      if ((int)param_4[0xef6] != 1) {
        (**(code **)(*param_4 + 0x38))(param_4,1,0,0);
      }
      *(uint *)(param_4[1] + 0x69c) = *(uint *)(param_4[1] + 0x69c) & 0xfffffbff;
      *(undefined4 *)(param_4[1] + 0x750) = 0;
      local_34 = 0x80000000;
      FUN_01e39778(param_4[1],&local_48,&local_34,0);
      *(uint *)(param_4[1] + 0x69c) = *(uint *)(param_4[1] + 0x69c) | 0x400;
    }
  }
  return;
}

