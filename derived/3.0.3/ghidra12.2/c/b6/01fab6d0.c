
uint FUN_01fab6d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  long local_50;
  long local_48;
  undefined *local_40;
  int local_38;
  int local_34;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  uVar5 = 0;
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (uVar3 < *(uint *)(lVar7 + 0x1d8)) {
      uVar5 = 0;
      if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
        local_60 = 0;
        if (DAT_05aed670 == 0) {
          puVar8 = &DAT_055c04a0;
        }
        else {
          puVar8 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar8 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar8,0);
            puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar8 = &DAT_055c04a0;
            }
          }
        }
        local_5c = *(undefined4 *)(puVar8 + 7);
        local_58 = FUN_017baf44();
        local_58 = local_58 & 1;
        local_68 = PTR_DAT_04bb3140 + 0x10;
        uVar6 = FUN_01a4fafc(&local_68,1,param_3);
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          iVar1 = *(int *)(param_3 + 0x10);
          local_34 = *(int *)(param_3 + 0x14);
          local_50 = param_3 + 8;
          local_48 = param_3 + 0x18;
          local_40 = PTR_DAT_04bb2010 + 0x10;
          iVar4 = *(int *)(param_3 + 0x24) + 1;
          if (iVar4 == local_34) {
            uVar5 = 1;
          }
          else {
            local_38 = iVar1;
            do {
              uVar5 = FUN_01a4fd6c(&local_68,1,&local_40,1);
              if ((uVar5 & 1) == 0) break;
              if (local_38 < *(int *)(local_48 + 8)) {
                local_38 = local_38 + 1;
              }
              else {
                local_34 = local_34 + 1;
                local_38 = *(int *)(local_50 + 8);
              }
            } while (iVar1 != local_38 || iVar4 != local_34);
          }
        }
        uVar5 = uVar5 ^ 1;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5 & 1;
}

