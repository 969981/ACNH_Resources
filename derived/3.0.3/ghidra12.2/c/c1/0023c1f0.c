
void FUN_0023c1f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  Result *pRVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_3fc [16];
  undefined4 local_3ec;
  int local_3e8;
  ErrorResultVariant aEStack_3e4 [4];
  int local_3e0;
  undefined1 auStack_a0 [16];
  int local_90 [4];
  int local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  ErrorResultVariant aEStack_70 [12];
  undefined4 local_64;
  
  plVar5 = (long *)FUN_00232c2c(*(undefined8 *)
                                 (DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168)
                               );
  (**(code **)(*plVar5 + 0x70))(local_90,plVar5,param_2 + 0x6b1,&local_80,0x5d8);
  if (local_90[0] == 0) {
    uVar1 = ((local_80 - 1U) / 800 & 0xff) + 1;
    FUN_0028d4cc(auStack_a0);
    uVar4 = FUN_0028d5ac(auStack_a0);
    if (uVar1 >> 8 == 0) {
      iVar11 = 0;
      uVar12 = 0;
      lVar2 = param_2 + 0xd8;
      lVar13 = param_2 + 0x6b1;
      do {
        iVar10 = iVar11 + local_80;
        if ((uVar1 & 0xff) - 1 != uVar12) {
          iVar10 = 800;
        }
        FUN_002403bc(&local_3e8,uVar4,*(undefined2 *)(param_2 + 0x12a0),uVar12 & 0xffffffff,
                     (ulong)uVar1,lVar13,iVar10);
        local_3ec = 0;
        FUN_0024045c(&local_74,&local_3e8,lVar2,&local_3ec,0x5d8);
        FUN_00229780(local_90,&local_74);
        uVar3 = (undefined2)local_3ec;
        if (local_3e0 == 7) {
          uVar6 = FUN_002aaa54(param_2);
          local_78 = 0;
          local_7c = 0x1000100;
          local_74 = 0x44000000;
          lVar7 = FUN_002a9fb0(uVar6,&local_74,param_3,uVar3,&local_7c);
          if (lVar7 == 0) {
            local_64 = 0;
            local_74 = 0x4c0d;
            nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_64);
            FUN_002296c4(auStack_3fc,&local_74);
            FUN_00229780(local_90,auStack_3fc);
          }
          else {
            FUN_002a9f34(auStack_3fc,uVar6,lVar2);
            FUN_00229780(local_90,auStack_3fc);
          }
          if (local_90[0] == 0) {
LAB_0023c520:
            uVar6 = FUN_002aaa54(param_2);
            local_78 = 0;
            local_7c = 0x1000100;
            local_74 = 0x44000000;
            lVar7 = FUN_002a9fb0(uVar6,&local_74,param_3,uVar3,&local_7c);
            if (lVar7 == 0) {
              local_74 = 0x4c0d;
              pRVar8 = (Result *)&local_64;
              local_64 = 0;
              goto LAB_0023c564;
            }
            FUN_002a9f34(auStack_3fc,uVar6,lVar2);
            FUN_00229780(local_90,auStack_3fc);
            if (local_90[0] == 0) goto LAB_0023c324;
          }
LAB_0023c590:
          piVar9 = local_90;
          goto LAB_0023c598;
        }
        if ((*(int *)(param_2 + 0x13a4) == 0) || (*(char *)(param_2 + 0x13b8) != '\0')) {
          uVar6 = FUN_002aaa54(param_2);
          local_78 = 0;
          local_7c = 0x1000100;
          local_74 = 0x44000000;
          lVar7 = FUN_002a9fb0(uVar6,&local_74,param_3,uVar3,&local_7c);
          if (lVar7 == 0) {
            local_74 = 0x4c0d;
            local_64 = 0;
            pRVar8 = (Result *)&local_64;
            goto LAB_0023c4c8;
          }
          FUN_002a9f34(auStack_3fc,uVar6,lVar2);
        }
        else {
          local_74 = 0x2c27;
          pRVar8 = (Result *)&local_7c;
          local_7c = 0;
LAB_0023c4c8:
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,pRVar8);
          FUN_002296c4(auStack_3fc,&local_74);
        }
        FUN_00229780(local_90,auStack_3fc);
        if (local_90[0] != 0) goto LAB_0023c590;
        if ((*(int *)(param_2 + 0x13a4) == 0) || (*(char *)(param_2 + 0x13b8) != '\0'))
        goto LAB_0023c520;
        local_74 = 0x2c27;
        local_7c = 0;
        pRVar8 = (Result *)&local_7c;
LAB_0023c564:
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,pRVar8);
        FUN_002296c4(auStack_3fc,&local_74);
        FUN_00229780(local_90,auStack_3fc);
        if (local_90[0] != 0) goto LAB_0023c590;
LAB_0023c324:
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + -800;
        lVar13 = lVar13 + 800;
      } while (((ulong)uVar1 & 0xff) != uVar12);
    }
    local_3e8 = 0;
    local_74 = 0;
    *(short *)(param_2 + 0x12a0) = *(short *)(param_2 + 0x12a0) + 1;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3e4,(Result *)&local_74);
    piVar9 = &local_3e8;
  }
  else {
    piVar9 = local_90;
  }
LAB_0023c598:
  FUN_002296c4(param_1,piVar9);
  return;
}

