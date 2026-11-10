
void FUN_0021d60c(undefined8 param_1,long *param_2,int param_3,void *param_4,uint param_5,
                 undefined4 param_6,ushort param_7)

{
  uint uVar1;
  ushort *puVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined2 local_63c [2];
  int local_638 [4];
  undefined8 local_628;
  undefined *puStack_620;
  undefined1 local_618;
  ushort local_616;
  ushort local_614;
  undefined2 local_612;
  undefined4 local_610;
  int iStack_60c;
  undefined1 local_608;
  ushort local_607;
  ushort local_605;
  undefined1 local_603;
  undefined1 local_602;
  undefined1 local_601;
  undefined1 local_600;
  undefined1 local_5ff;
  undefined1 local_5fe;
  undefined4 local_5fd;
  undefined1 local_5f9;
  undefined1 local_5f8;
  undefined1 local_5f7;
  undefined1 local_5f6;
  undefined1 auStack_5f5 [1425];
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_54;
  
  if (param_4 == (void *)0x0) {
    local_64 = local_64 & 0xffffffff00000000;
    local_628 = (undefined *)CONCAT44(local_628._4_4_,0x10c07);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_628 + 4),(Result *)&local_64);
    piVar8 = (int *)&local_628;
  }
  else {
    local_628 = PTR_DAT_04bccef0 + 0x10;
    puStack_620 = PTR_DAT_04bccef8 + 0x10;
    memset(&iStack_60c,0,4);
    memcpy(auStack_5f5,param_4,(ulong)param_5);
    local_612 = (undefined2)param_5;
    local_618 = (undefined1)param_3;
    puVar2 = (ushort *)(param_2 + 0xf);
    if ((short)param_2[0x10] != 0) {
      puVar2 = (ushort *)(param_2[0x11] + (ulong)*(ushort *)((long)param_2 + 0x82) * 0xc + 4);
    }
    local_616 = *puVar2;
    local_614 = param_7;
    FUN_0021e530(&local_64,param_2);
    uVar6 = local_64;
    local_601 = (undefined1)((uint)param_6 >> 0x18);
    local_5fe = (undefined1)param_6;
    local_5fd = 0;
    local_605 = local_614 >> 8 | local_614 << 8;
    local_608 = local_618;
    local_638[0] = 0;
    local_600 = (undefined1)((uint)param_6 >> 0x10);
    local_602 = (undefined1)local_612;
    local_5ff = (undefined1)((uint)param_6 >> 8);
    local_603 = (undefined1)((ushort)local_612 >> 8);
    local_607 = local_616 >> 8 | local_616 << 8;
    iStack_60c = (int)local_64;
    local_64 = local_64 & 0xffffffff00000000;
    local_5f6 = (undefined1)uVar6;
    local_5f9 = (undefined1)(uVar6 >> 0x18);
    local_5f8 = (undefined1)(uVar6 >> 0x10);
    local_5f7 = (undefined1)(uVar6 >> 8);
    local_610 = param_6;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_64 + 4),(Result *)local_638);
    FUN_002296c4(local_638,&local_64);
    if (local_638[0] == 0) {
      FUN_0021e0d0(&local_64,param_2,param_3,param_5);
      FUN_00229780(local_638,&local_64);
      if (local_638[0] != 0) {
        piVar8 = local_638;
        goto LAB_0021d80c;
      }
      if (param_2[0xb] == 0) {
        local_5c = 0;
        local_64 = 0x800000000000000;
        (**(code **)(*param_2 + 0x10))(param_2,&local_64);
      }
      (**(code **)(*param_2 + 0x70))(&local_64,param_2,&local_608,param_5 + 0x13,local_63c);
      FUN_00229780(local_638,&local_64);
      local_54 = 0;
      local_64._0_4_ = 0x4c11;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_64 + 4),(Result *)&local_54);
      if (local_638[0] == (int)local_64) {
        local_64 = (ulong)local_64._4_4_ << 0x20;
      }
      else {
        if (local_638[0] != 0) {
          local_5c = 0;
          local_64._0_4_ = 0;
          local_64._4_4_ = 0x8000000;
          (**(code **)(*param_2 + 0x10))(param_2,&local_64);
        }
        uVar1 = (uint)*(ushort *)(param_2 + 0x10) + (uint)*(ushort *)((long)param_2 + 0x82);
        uVar4 = *(ushort *)(param_2 + 0x12);
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar1 / uVar4;
        }
        uVar1 = uVar1 - uVar5 * uVar4;
        if (param_2[0x11] == 0) {
          local_5c = 0;
          local_64._0_4_ = 0;
          local_64._4_4_ = 0x8000000;
          (**(code **)(*param_2 + 0x10))(param_2,&local_64);
          if (*(ushort *)(param_2 + 0x12) <= uVar1) {
            local_5c = 0;
            local_64._0_4_ = 0;
            local_64._4_4_ = 0x8000000;
            (**(code **)(*param_2 + 0x10))(param_2,&local_64);
          }
        }
        lVar7 = param_2[0x11];
        if (*(char *)(lVar7 + (ulong)uVar1 * 0xc + 9) != '\0') {
          local_5c = 0;
          local_64._0_4_ = 0;
          local_64._4_4_ = 0x8000000;
          (**(code **)(*param_2 + 0x10))(param_2,&local_64);
          lVar7 = param_2[0x11];
          if (lVar7 == 0) {
            local_5c = 0;
            local_64._0_4_ = 0;
            local_64._4_4_ = 0x8000000;
            (**(code **)(*param_2 + 0x10))(param_2,&local_64);
            lVar7 = param_2[0x11];
          }
        }
        uVar4 = *(ushort *)(param_2 + 0xf);
        piVar8 = (int *)(lVar7 + (ulong)uVar1 * 0xc);
        *(ushort *)(piVar8 + 1) = uVar4;
        *(undefined2 *)((long)piVar8 + 6) = local_63c[0];
        *(undefined2 *)(piVar8 + 2) = 0x100;
        *piVar8 = param_3;
        if (param_3 == 0) {
          sVar3 = uVar4 + 3;
          if (uVar4 < 0xfffd) {
            sVar3 = uVar4 + 1;
          }
          *(short *)(param_2 + 0xf) = sVar3;
        }
        local_64 = (ulong)local_64._4_4_ << 0x20;
        *(short *)(param_2 + 0x10) = (short)param_2[0x10] + 1;
      }
    }
    else {
      local_5c = 0;
      local_64 = 0x800000000000000;
      (**(code **)(*param_2 + 0x10))(param_2,&local_64);
      local_64 = CONCAT44(local_64._4_4_,0x6c1b);
    }
    local_54 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_64 + 4),(Result *)&local_54);
    piVar8 = (int *)&local_64;
  }
LAB_0021d80c:
  FUN_002296c4(param_1,piVar8);
  return;
}

