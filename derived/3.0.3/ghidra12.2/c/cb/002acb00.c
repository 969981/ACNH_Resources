
void FUN_002acb00(int *param_1,long *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_44;
  
  if (param_2[0xd] == 0) {
    uVar1 = *(ushort *)(*(long *)PTR_DAT_04bc1510 + 0x58);
    *(ushort *)((long)param_2 + 0x4e) = uVar1;
    uVar2 = uVar1 - 1;
    uVar10 = (ulong)uVar2;
    uVar5 = FUN_0021f454();
    lVar6 = FUN_00285d10(uVar10 * 0x6b0,uVar5);
    if (uVar2 != 0 && lVar6 != 0) {
      lVar7 = lVar6;
      do {
        FUN_002ad9a0(lVar7);
        uVar10 = uVar10 - 1;
        lVar7 = lVar7 + 0x6b0;
      } while (uVar10 != 0);
    }
    param_2[0xd] = lVar6;
    if (uVar2 != 0) {
      lVar6 = 0;
      do {
        lVar7 = param_2[0xd];
        uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
        FUN_002adbec(param_1,lVar7 + lVar6,param_3,param_4,uVar4);
        if (*param_1 != 0) {
          puVar8 = (undefined8 *)param_2[0xd];
          *(undefined2 *)((long)param_2 + 0x4e) = 0;
          *(undefined8 *)((long)param_2 + 0x54) = 0;
          if (puVar8 == (undefined8 *)0x0) {
            return;
          }
          uVar10 = FUN_00285e00(puVar8);
          if (0x6af < uVar10) {
            uVar10 = uVar10 / 0x6b0;
            puVar9 = puVar8;
            do {
              (**(code **)*puVar9)(puVar9);
              uVar10 = uVar10 - 1;
              puVar9 = puVar9 + 0xd6;
            } while (uVar10 != 0);
          }
          FUN_00285dc0(puVar8);
          param_2[0xd] = 0;
          return;
        }
        lVar6 = lVar6 + 0x6b0;
      } while ((ulong)uVar2 * 0x6b0 != lVar6);
    }
    *(undefined8 *)((long)param_2 + 0x5c) = 0;
    puVar3 = PTR_DAT_04bccf00;
    local_60 = 0;
    *(undefined8 *)((long)param_2 + 0x54) = 0xfffffff;
    *(uint *)(puVar3 + 0xec) = uVar2 * (param_3 & 0xffff);
    *(uint *)(puVar3 + 0xf0) = uVar2 * (param_4 & 0xffff);
  }
  else {
    local_60 = 0x10c02;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_44);
  FUN_002296c4(param_1,&local_60);
  return;
}

