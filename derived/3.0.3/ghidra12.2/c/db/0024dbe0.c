
void FUN_0024dbe0(undefined8 param_1,long param_2,short *param_3,uint param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  short sVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char cVar8;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((param_3 != (short *)0x0) && (uVar3 = *(uint *)(param_2 + 0x10), param_4 <= uVar3)) {
    if (param_5 == 2) {
      if (param_4 <= (uVar3 >> 1 & 0x7ffffffe)) {
LAB_0024dc8c:
        if (uVar3 != 0) {
          uVar4 = (ulong)uVar3 & 3;
          if (uVar3 < 4) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              lVar1 = param_2 + uVar6;
              uVar6 = uVar6 + 4;
              *(undefined4 *)(lVar1 + 0x1c) = 0;
            } while (((ulong)uVar3 & 0xfffffffc) != uVar6);
          }
          if ((uVar3 & 3) != 0) {
            puVar7 = (undefined1 *)(uVar6 + param_2 + 0x1c);
            do {
              uVar4 = uVar4 - 1;
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            } while (uVar4 != 0);
          }
        }
        if (param_5 == 1) {
          cVar8 = (char)*param_3;
          uVar6 = 0;
          if (cVar8 != '\0') {
            uVar2 = 0;
            if (uVar3 == 0) goto LAB_0024dd84;
            uVar6 = 0;
            do {
              *(char *)(param_2 + 0x1c + uVar6) = cVar8;
              cVar8 = *(char *)((long)param_3 + uVar6 + 1);
              uVar6 = uVar6 + 1;
            } while (cVar8 != '\0' && uVar6 < uVar3);
          }
          uVar2 = (uint)uVar6;
LAB_0024dd84:
          *(undefined1 *)(param_2 + (uVar6 & 0xffffffff) + 0x1c) = 0;
        }
        else {
          if (param_5 == 2) {
            sVar5 = *param_3;
            uVar4 = 0;
            if ((sVar5 != 0) && (uVar3 = uVar3 >> 1 & 0x7ffffffe, uVar3 != 0)) {
              uVar4 = 0;
              do {
                *(short *)(param_2 + 0x1c + uVar4) = sVar5;
                sVar5 = *(short *)((long)param_3 + uVar4 + 2);
                uVar4 = uVar4 + 2;
              } while (sVar5 != 0 && uVar4 < uVar3);
            }
            uVar2 = (uint)uVar4;
            uVar6 = (ulong)(uVar2 | 1);
            *(undefined1 *)(param_2 + (uVar4 & 0xffffffff) + 0x1c) = 0;
            goto LAB_0024dd84;
          }
          uVar2 = 0;
        }
        *(uint *)(param_2 + 0x14) = uVar2;
        *(int *)(param_2 + 0x18) = param_5;
        local_40 = 0;
        goto LAB_0024dc14;
      }
    }
    else if (param_5 == 1) {
      uVar2 = FUN_00227e00(param_3,param_4);
      uVar3 = *(uint *)(param_2 + 0x10);
      if (uVar2 <= uVar3 >> 2) goto LAB_0024dc8c;
    }
  }
  local_40 = 0x10c07;
LAB_0024dc14:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

