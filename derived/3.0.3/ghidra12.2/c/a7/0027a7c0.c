
void FUN_0027a7c0(undefined8 param_1,long param_2,char param_3,char param_4,long param_5,
                 int *param_6,undefined4 *param_7)

{
  int iVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  iVar1 = *(int *)(param_2 + 0xe8);
  if (iVar1 == 0) {
    local_24 = 0x10c08;
  }
  else {
    if (((param_3 != -3) && (param_4 != -3)) && (param_5 != 0)) {
      uVar4 = *(ushort *)(DAT_04c603c8 + 0x98);
      if (uVar4 == 0) {
        uVar7 = 0x20;
        uVar5 = 0x20;
      }
      else {
        if (uVar4 == 1) {
          uVar10 = 0;
          uVar6 = 0x20;
          uVar8 = 0x20;
        }
        else {
          uVar10 = 0;
          uVar5 = 0x20;
          uVar7 = 0x20;
          do {
            cVar3 = *(char *)(param_2 + uVar10 + 0xc5);
            cVar2 = *(char *)(param_2 + uVar10 + 0xc6);
            uVar9 = (uint)uVar10;
            uVar6 = uVar9;
            if (cVar3 != param_3) {
              uVar6 = uVar5;
            }
            uVar8 = uVar9;
            if (cVar3 != param_4) {
              uVar8 = uVar7;
            }
            if (cVar2 == param_3) {
              uVar6 = uVar9 + 1;
            }
            if (cVar2 == param_4) {
              uVar8 = uVar9 + 1;
            }
            uVar10 = uVar10 + 2;
            uVar5 = uVar6;
            uVar7 = uVar8;
          } while (((ulong)uVar4 & 0xfffe) != uVar10);
        }
        uVar5 = uVar6;
        uVar7 = uVar8;
        if ((uVar4 & 1) != 0) {
          cVar3 = *(char *)(param_2 + uVar10 + 0xc5);
          uVar5 = (uint)uVar10;
          if (cVar3 != param_3) {
            uVar5 = uVar6;
          }
          uVar7 = (uint)uVar10;
          if (cVar3 != param_4) {
            uVar7 = uVar8;
          }
        }
      }
      if (((uVar5 & 0xffff) != 0x20) || ((uVar7 & 0xffff) != 0x20)) {
        local_24 = 0;
        *(bool *)param_5 = (uVar5 & 0xffff) < (uVar7 & 0xffff);
        *param_6 = iVar1;
        *param_7 = *(undefined4 *)(param_2 + 0xec);
        goto LAB_0027a8e8;
      }
    }
    local_24 = 0x10c07;
  }
LAB_0027a8e8:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

