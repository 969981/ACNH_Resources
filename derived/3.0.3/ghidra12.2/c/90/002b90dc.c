
void FUN_002b90dc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  plVar7 = (long *)*param_3;
  uVar1 = *(ushort *)(param_3 + 1);
  local_54 = 0;
  local_64 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
  if (plVar7 == (long *)0x0) {
    local_64 = 0x10c07;
  }
  else if ((((*(short *)((long)param_3 + 10) == 0) || (*(short *)((long)param_3 + 0xc) == 0)) ||
           (uVar1 < 2)) || (uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7), uVar3 < uVar1)) {
    local_64 = 0x10c07;
  }
  else {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
    *(long **)(param_2 + 8) = plVar7;
    (**(code **)(*plVar7 + 200))(&local_64);
    FUN_00229780(&local_54,&local_64);
    uVar5 = (**(code **)(**(long **)(param_2 + 8) + 0xa0))();
    *(undefined8 *)(param_2 + 0x78) = uVar5;
    uVar5 = (**(code **)(**(long **)(param_2 + 8) + 0x90))();
    *(undefined8 *)(param_2 + 0x68) = uVar5;
    uVar5 = (**(code **)(**(long **)(param_2 + 8) + 0x98))();
    *(undefined8 *)(param_2 + 0x70) = uVar5;
    uVar5 = FUN_0021f454();
    plVar7 = (long *)FUN_00285d10(0x58,uVar5);
    if (plVar7 != (long *)0x0) {
      FUN_00227770(plVar7);
      puVar2 = PTR_FUN_04bce190;
      *plVar7 = (long)(PTR_DAT_04bce188 + 0x10);
      plVar7[8] = (long)"DispatchJob::Dispatch";
      plVar7[6] = (long)puVar2;
      plVar7[7] = 0;
    }
    *(long **)(param_2 + 0x60) = plVar7;
    puVar2 = PTR_DAT_04bccf08;
    uVar5 = *(undefined8 *)PTR_DAT_04bccf08;
    uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x20))();
    FUN_00222fb8(&local_64,uVar5,uVar4);
    lVar8 = *(long *)puVar2;
    uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
    *(undefined4 *)(lVar8 + 4) = uVar4;
    *(ushort *)(param_2 + 0x58) = uVar1;
    FUN_002aad04(&local_64,param_2 + 0x10,*(undefined8 *)(param_2 + 8));
    FUN_00229780(&local_54,&local_64);
    (**(code **)(**(long **)(param_2 + 0x68) + 0x10))
              (&local_64,*(long **)(param_2 + 0x68),*(undefined8 *)(param_2 + 8),uVar1);
    FUN_00229780(&local_54,&local_64);
    if (local_54 != 0) goto LAB_002b9304;
    (**(code **)(**(long **)(param_2 + 0x70) + 0x10))(&local_64,*(long **)(param_2 + 0x70),uVar1);
    FUN_00229780(&local_54,&local_64);
    uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
    uVar5 = FUN_0021f454();
    lVar8 = FUN_00285d10(0xd70,uVar5);
    if (lVar8 == 0) {
      *(undefined8 *)(param_2 + 0x88) = 0;
      local_64 = 0x10c01;
    }
    else {
      FUN_002a8950(lVar8,"Pia Send",uVar4);
      *(long *)(param_2 + 0x88) = lVar8;
      uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
      lVar8 = FUN_002b9d20("Pia Send Unicast",uVar4);
      *(long *)(param_2 + 0x90) = lVar8;
      if (lVar8 == 0) {
        *(undefined8 *)(param_2 + 0x90) = 0;
      }
      else {
        uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
        lVar8 = FUN_002b9d20("Pia Send Broadcast",uVar4);
        *(long *)(param_2 + 0x98) = lVar8;
        if (lVar8 == 0) {
          *(undefined8 *)(param_2 + 0x98) = 0;
        }
        else {
          uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
          lVar8 = FUN_002b9d20("Pia Receive",uVar4);
          *(long *)(param_2 + 0xa0) = lVar8;
          if (lVar8 != 0) {
            uVar5 = FUN_002b9d70(*(undefined8 *)(param_2 + 8),
                                 (*(ushort *)(param_3 + 1) - 1) *
                                 (uint)*(ushort *)((long)param_3 + 10) + 1,
                                 (*(ushort *)(param_3 + 1) - 1) *
                                 (uint)*(ushort *)((long)param_3 + 0xc) + 1,
                                 *(undefined4 *)PTR_DAT_04bce198,
                                 *(undefined4 *)(PTR_DAT_04bce198 + 4),PTR_DAT_04bce198[8]);
            *(undefined8 *)(param_2 + 0x80) = uVar5;
            uVar5 = FUN_002b9df0();
            *(undefined8 *)(param_2 + 0x40) = uVar5;
            uVar5 = (**(code **)(**(long **)(param_2 + 8) + 0x50))();
            *(undefined8 *)(param_2 + 0x48) = uVar5;
            uVar5 = (**(code **)(**(long **)(param_2 + 8) + 0x58))();
            *(undefined8 *)(param_2 + 0x50) = uVar5;
            (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(&local_64);
            FUN_00229780(&local_54,&local_64);
            if (local_54 == 0) {
              (**(code **)(**(long **)(param_2 + 0x48) + 0x10))(&local_64);
              FUN_00229780(&local_54,&local_64);
              if (local_54 == 0) {
                (**(code **)(**(long **)(param_2 + 0x50) + 0x10))(&local_64);
                FUN_00229780(&local_54,&local_64);
                if (local_54 == 0) {
                  (**(code **)(**(long **)(param_2 + 8) + 0xc0))(&local_64);
                  FUN_00229780(&local_54,&local_64);
                  if (local_54 == 0) {
                    if (*(long *)(param_2 + 0x78) != 0) {
                      FUN_002bae44(&local_64);
                      FUN_00229780(&local_54,&local_64);
                      if (local_54 != 0) goto LAB_002b9304;
                      *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_3 + 2);
                      *(undefined2 *)(param_2 + 0xb8) = *(undefined2 *)((long)param_3 + 0x14);
                    }
                    DAT_04c61178 = FUN_002b9e20(param_2,0);
                    if (DAT_04c61178 != 0) {
                      DAT_04c61180 = FUN_002ab090(param_2 + 0x10,DAT_04c61178,0xa4);
                      lVar8 = FUN_0022033c();
                      if (lVar8 != 0) {
                        uVar5 = FUN_0022033c();
                        FUN_00220b28(uVar5,&LAB_002b9ec0);
                      }
                    }
                    puVar2 = PTR_DAT_04bccf00;
                    local_64 = 0;
                    *(undefined2 *)(PTR_DAT_04bccf00 + 0xe2) = *(undefined2 *)(param_3 + 1);
                    *(uint *)(puVar2 + 0xe4) = (uint)*(ushort *)((long)param_3 + 10);
                    *(uint *)(puVar2 + 0xe8) = (uint)*(ushort *)((long)param_3 + 0xc);
                    goto LAB_002b9184;
                  }
                }
              }
            }
LAB_002b9304:
            piVar6 = &local_54;
            goto LAB_002b9194;
          }
          *(undefined8 *)(param_2 + 0xa0) = 0;
        }
      }
      local_64 = 0x10c01;
    }
  }
LAB_002b9184:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
  piVar6 = &local_64;
LAB_002b9194:
  FUN_002296c4(param_1,piVar6);
  return;
}

