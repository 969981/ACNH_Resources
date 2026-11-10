
void FUN_002d4480(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  lVar6 = *(long *)(DAT_04c60f48 + 8);
  if ((((lVar6 == 0) || (*(long *)(param_2 + 0x60) != 0)) || (*(long *)(param_2 + 0x68) != 0)) ||
     (((*(long *)(param_2 + 0x70) != 0 || (*(long *)(param_2 + 0x78) != 0)) ||
      (uVar1 = FUN_002e8930(lVar6), 3 < (uVar1 & 0xff))))) goto LAB_002d44e4;
  if ((uVar1 & 0xff) == 0) {
    plVar2 = (long *)FUN_002e8910(lVar6,0);
    if (plVar2 == (long *)0x0) {
LAB_002d46c8:
      plVar2 = (long *)FUN_002e8910(lVar6,1);
      if (plVar2 == (long *)0x0) {
LAB_002d4724:
        plVar2 = (long *)FUN_002e8910(lVar6,2);
        if (plVar2 == (long *)0x0) {
LAB_002d4780:
          uVar5 = 3;
          goto LAB_002d4788;
        }
        if (*(long *)(param_2 + 0x70) == 0) {
          plVar7 = *(long **)(param_2 + 0x28);
          *(long **)(param_2 + 0x70) = plVar2;
          if (plVar7 != (long *)0x0) {
            FUN_0030f6c0(plVar7);
          }
          *(long **)(param_2 + 0x48) = plVar7;
          uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
          uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar3);
          if ((uVar4 & 1) != 0) goto LAB_002d4780;
        }
      }
      else if (*(long *)(param_2 + 0x68) == 0) {
        plVar7 = *(long **)(param_2 + 0x20);
        *(long **)(param_2 + 0x68) = plVar2;
        if (plVar7 != (long *)0x0) {
          FUN_0030f6c0(plVar7);
        }
        *(long **)(param_2 + 0x40) = plVar7;
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar3);
        if ((uVar4 & 1) != 0) goto LAB_002d4724;
      }
    }
    else if (*(long *)(param_2 + 0x60) == 0) {
      plVar7 = *(long **)(param_2 + 0x18);
      *(long **)(param_2 + 0x60) = plVar2;
      if (plVar7 != (long *)0x0) {
        FUN_0030f6c0(plVar7);
      }
      *(long **)(param_2 + 0x38) = plVar7;
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar3);
      if ((uVar4 & 1) != 0) goto LAB_002d46c8;
    }
  }
  else {
    plVar2 = (long *)FUN_002e8910(lVar6,uVar1);
    if (plVar2 == (long *)0x0) {
LAB_002d4590:
      plVar2 = (long *)FUN_002e8910(lVar6,(uVar1 & 0xff) != 1);
      if (plVar2 == (long *)0x0) {
LAB_002d45f4:
        plVar2 = (long *)FUN_002e8910(lVar6,(ulong)((uVar1 & 0xff) != 2) << 1);
        if (plVar2 == (long *)0x0) {
LAB_002d4658:
          uVar5 = 0;
          if ((uVar1 & 0xff) != 3) {
            uVar5 = 3;
          }
LAB_002d4788:
          plVar2 = (long *)FUN_002e8910(lVar6,uVar5);
          if (plVar2 == (long *)0x0) {
LAB_002d47dc:
            local_54 = 0;
            *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x38);
            goto LAB_002d44f0;
          }
          if (*(long *)(param_2 + 0x78) == 0) {
            plVar7 = *(long **)(param_2 + 0x30);
            *(long **)(param_2 + 0x78) = plVar2;
            if (plVar7 != (long *)0x0) {
              FUN_0030f6c0(plVar7);
            }
            *(long **)(param_2 + 0x50) = plVar7;
            uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
            uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar3);
            if ((uVar4 & 1) != 0) goto LAB_002d47dc;
          }
        }
        else if (*(long *)(param_2 + 0x70) == 0) {
          plVar7 = *(long **)(param_2 + 0x28);
          *(long **)(param_2 + 0x70) = plVar2;
          if (plVar7 != (long *)0x0) {
            FUN_0030f6c0(plVar7);
          }
          *(long **)(param_2 + 0x48) = plVar7;
          uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
          uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar3);
          if ((uVar4 & 1) != 0) goto LAB_002d4658;
        }
      }
      else if (*(long *)(param_2 + 0x68) == 0) {
        plVar7 = *(long **)(param_2 + 0x20);
        *(long **)(param_2 + 0x68) = plVar2;
        if (plVar7 != (long *)0x0) {
          FUN_0030f6c0(plVar7);
        }
        *(long **)(param_2 + 0x40) = plVar7;
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar3);
        if ((uVar4 & 1) != 0) goto LAB_002d45f4;
      }
    }
    else if (*(long *)(param_2 + 0x60) == 0) {
      plVar7 = *(long **)(param_2 + 0x18);
      *(long **)(param_2 + 0x60) = plVar2;
      if (plVar7 != (long *)0x0) {
        FUN_0030f6c0(plVar7);
      }
      *(long **)(param_2 + 0x38) = plVar7;
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar3);
      if ((uVar4 & 1) != 0) goto LAB_002d4590;
    }
  }
LAB_002d44e4:
  local_54 = 0x10c08;
LAB_002d44f0:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
}

