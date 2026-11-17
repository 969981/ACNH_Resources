
bool FUN_02b674f0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 auStack_5c [31];
  undefined1 local_3d;
  
  if (param_1 != (undefined4 *)0x0) {
    if (DAT_05aed670 == 0) {
      plVar4 = &DAT_055c04a0;
    }
    else {
      plVar4 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar2 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar2,0);
        plVar4 = (long *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          plVar4 = &DAT_055c04a0;
        }
      }
    }
    local_3d = 0;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    if (auStack_5c != (undefined1 *)plVar4[1]) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if ((int)plVar4[7] == -0x24a26848) {
      uVar3 = 0x26;
    }
    else {
      if (7 < param_2) {
        param_2 = 0;
      }
      uVar3 = (&DAT_05636e10)[(int)param_2];
    }
    *param_1 = uVar3;
  }
  return param_1 != (undefined4 *)0x0;
}

