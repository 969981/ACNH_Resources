
void FUN_002a10c0(int *param_1,long *param_2,short param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  uVar1 = param_3 - 1;
  *(ushort *)((long)param_2 + 0x4e) = uVar1;
  uVar2 = FUN_0021f454();
  uVar8 = (ulong)uVar1;
  lVar3 = FUN_00285d10(uVar8 * 0x6b0,uVar2);
  if ((uVar1 != 0) && (lVar3 != 0)) {
    lVar5 = lVar3;
    do {
      FUN_002ad9a0(lVar5);
      uVar8 = uVar8 - 1;
      lVar5 = lVar5 + 0x6b0;
    } while (uVar8 != 0);
  }
  param_2[10] = lVar3;
  if (*(short *)((long)param_2 + 0x4e) != 0) {
    lVar3 = 0;
    uVar8 = 0;
    do {
      lVar5 = param_2[10];
      uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
      FUN_002adbec(param_1,lVar5 + lVar3,2,2,(uVar4 & 0xff) << 0x18 | 1);
      if (*param_1 != 0) {
        puVar6 = (undefined8 *)param_2[10];
        if (puVar6 != (undefined8 *)0x0) {
          uVar8 = FUN_00285e00(puVar6);
          if (0x6af < uVar8) {
            uVar8 = uVar8 / 0x6b0;
            puVar7 = puVar6;
            do {
              (**(code **)*puVar7)(puVar7);
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 0xd6;
            } while (uVar8 != 0);
          }
          FUN_00285dc0(puVar6);
          param_2[10] = 0;
        }
        *(undefined2 *)((long)param_2 + 0x4e) = 0;
        return;
      }
      uVar8 = uVar8 + 1;
      lVar3 = lVar3 + 0x6b0;
    } while (uVar8 < *(ushort *)((long)param_2 + 0x4e));
  }
  local_44 = 0;
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

