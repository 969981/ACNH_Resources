
void FUN_002917a0(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  param_3 = param_3 & 0xffff;
  uVar7 = (ulong)param_3;
  if (param_3 - 0x21 < 0xffffffe0) {
    local_44 = 0x10c07;
  }
  else {
    if (*(long *)(param_2 + 0x48) == 0) {
      uVar6 = (ulong)(param_3 * 6);
      uVar1 = FUN_0021f454();
      lVar2 = FUN_00285d10(uVar6 << 3,uVar1);
      if (lVar2 == 0) {
        *(undefined8 *)(param_2 + 0x48) = 0;
      }
      else {
        uVar3 = uVar6 & 2;
        if (uVar6 - 1 < 3) {
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          puVar5 = (undefined8 *)(lVar2 + 0x10);
          do {
            lVar4 = lVar4 + -4;
            puVar5[-2] = 0;
            puVar5[-1] = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5 = puVar5 + 4;
          } while (-lVar4 != (uVar6 & 0x7fffc));
          lVar4 = -lVar4;
        }
        if ((param_3 * 6 & 2) != 0) {
          puVar5 = (undefined8 *)(lVar2 + lVar4 * 8);
          do {
            uVar3 = uVar3 - 1;
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar3 != 0);
        }
        *(long *)(param_2 + 0x48) = lVar2;
        if (lVar2 != 0) {
          lVar4 = 0;
          *(long *)(param_2 + 0x38) = lVar2;
          *(uint *)(param_2 + 0x40) = param_3;
          do {
            puVar5 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar4);
            *puVar5 = 0;
            puVar5[1] = 0;
            FUN_002236bc(param_2 + 0x20,param_2 + 0x20,(long)puVar5 + (long)*(int *)(param_2 + 0x34)
                        );
            uVar7 = uVar7 - 1;
            lVar4 = lVar4 + 0x30;
          } while (uVar7 != 0);
        }
      }
    }
    local_44 = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

