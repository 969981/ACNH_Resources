
void FUN_0021e850(undefined8 param_1,long *param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_44;
  
  cVar1 = FUN_002aaa44();
  if (cVar1 == -3) {
LAB_0021e884:
    uVar5 = 0x10c08;
  }
  else {
    iVar2 = FUN_00222ffc(*(undefined8 *)PTR_DAT_04bccf08,1);
    uVar3 = (**(code **)(*(long *)param_2[0xb] + 0x38))();
    if ((iVar2 - ((uVar3 & 0xff) + 0x1f >> 3 & 0x3c)) - 0x2c < param_4) {
      uVar5 = 0x10c07;
    }
    else {
      if (param_3 == 5) {
        if (*(int *)((long)param_2 + 0x6c) != 2) goto LAB_0021e884;
      }
      else if (param_3 == 0) {
        if (1 < *(ushort *)(param_2 + 0xc)) {
          iVar2 = 0;
          lVar7 = 0;
          lVar8 = 0;
          do {
            uVar4 = (**(code **)(*param_2 + 0x68))(param_2,param_2[10] + lVar8);
            if ((uVar4 & 1) != 0) {
              lVar6 = param_2[0x13];
              if (lVar6 == 0) {
                local_54 = 0x800000000000000;
                local_4c = 0;
                (**(code **)(*param_2 + 0x10))(param_2,&local_54);
                lVar6 = param_2[0x13];
              }
              if (*(long *)(lVar6 + lVar7) != 0) goto LAB_0021e998;
            }
            iVar2 = iVar2 + 1;
            lVar8 = lVar8 + 0x30;
            lVar7 = lVar7 + 0x10;
          } while (iVar2 < (int)(*(ushort *)(param_2 + 0xc) - 1));
        }
        if (*(int *)((long)param_2 + 0x7c) != 0) {
LAB_0021e998:
          uVar5 = 0x4c11;
          goto LAB_0021ea04;
        }
      }
      if (param_2[0xb] == 0) {
        local_4c = 0;
        local_54 = 0x800000000000000;
        (**(code **)(*param_2 + 0x10))(param_2,&local_54);
        uVar4 = FUN_002b1944(param_2[0xb],param_4 + 0x13);
      }
      else {
        uVar4 = FUN_002b1944(param_2[0xb],param_4 + 0x13);
      }
      if (((uVar4 & 1) != 0) && (*(ushort *)(param_2 + 0x10) < *(ushort *)(param_2 + 0x12))) {
        local_54 = local_54 & 0xffffffff00000000;
        goto LAB_0021ea08;
      }
      uVar5 = 0x4c0d;
    }
  }
LAB_0021ea04:
  local_54 = CONCAT44(local_54._4_4_,uVar5);
LAB_0021ea08:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_54 + 4),(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
}

