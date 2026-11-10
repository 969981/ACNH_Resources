
void FUN_00283b00(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_80;
  undefined4 local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined4 local_54;
  
  local_70 = 0;
  local_80 = local_80 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_80);
  local_80 = 0;
  FUN_002282f0(&local_80);
  uVar3 = local_80;
  puVar2 = PTR_DAT_04bcdc38;
  puVar1 = PTR_DAT_04bc1510;
  if (*(int *)((long)param_2 + 0x5f4) != 0) {
    uVar7 = 0;
    do {
      if (*(int *)(param_2[2] + uVar7 * 4) != 0) {
        lVar6 = param_2[1];
        lVar5 = *(long *)(lVar6 + uVar7 * 8);
        if (lVar5 == 0 || (long)uVar3 < lVar5) {
          if (*(long *)(*param_2 + uVar7 * 8) <= (long)uVar3) {
            if (*(byte *)(param_2[5] + uVar7) < 0x20) {
              plVar4 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
              lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined1 *)(param_2[5] + uVar7));
              if (lVar5 == 0) goto LAB_00283b88;
              local_80 = (ulong)(CONCAT41((int)(local_80 >> 0x20),
                                          *(undefined1 *)(param_2[8] + uVar7)) & 0xffffff00ff) <<
                         0x18;
              lVar5 = (**(code **)(*(long *)param_2[9] + 0x70))
                                ((long *)param_2[9],param_2[7] + uVar7 * 4,
                                 *(undefined8 *)(lVar5 + 0x40),
                                 *(undefined4 *)(param_2[4] + uVar7 * 4),&local_80);
            }
            else {
              local_80 = CONCAT35(local_80._5_3_,0x1000000);
              FUN_00227404(param_2[6] + uVar7 * 0x28);
              lVar5 = FUN_002a9fb0(param_2[9],param_2[7] + uVar7 * 4,param_2[6] + uVar7 * 0x28,
                                   *(undefined4 *)(param_2[4] + uVar7 * 4),&local_80);
            }
            if (lVar5 != 0) {
              FUN_002a9f34(&local_80,param_2[9],*(undefined8 *)(param_2[3] + uVar7 * 8));
              FUN_00229780(&local_70,&local_80);
              lVar5 = *(long *)puVar2 + uVar3;
              goto LAB_00283b80;
            }
          }
        }
        else {
          lVar5 = 0;
          *(undefined4 *)(param_2[2] + uVar7 * 4) = 0;
          *(undefined8 *)(lVar6 + uVar7 * 8) = 0;
LAB_00283b80:
          *(long *)(*param_2 + uVar7 * 8) = lVar5;
        }
      }
LAB_00283b88:
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((long)param_2 + 0x5f4));
  }
  local_80 = local_80 & 0xffffffff00000000;
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)&local_54);
  FUN_002296c4(param_1,&local_80);
  return;
}

