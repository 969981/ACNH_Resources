
uint FUN_01955808(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  local_40 = 0xdd3;
  FUN_0277d4ac(&local_40);
  uVar3 = FUN_0277d6c4(&local_40);
  puVar2 = PTR_DAT_04bb4008;
  lVar6 = *(long *)PTR_DAT_04bb4008;
  uVar5 = 0;
  if (lVar6 == 0) goto LAB_01955908;
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
LAB_01955898:
    uVar7 = FUN_01a11f30(lVar6,uVar3,param_2);
    if ((uVar7 & 1) != 0) {
      uVar8 = *(undefined8 *)puVar2;
      uVar3 = FUN_0277d6c4(&local_40);
      uVar4 = FUN_01a1159c(uVar8,uVar3);
      if ((0xd < uVar4) || (uVar5 = 1, (1 << (ulong)(uVar4 & 0x1f) & 0x2401U) == 0)) {
        local_34 = *(byte *)(param_2 + 2) - 1;
        bVar1 = *(byte *)(param_2 + 4);
        if ((bVar1 & 0xfc) == 4) {
          local_38 = 1;
        }
        else if ((bVar1 & 0xf8) == 8) {
          local_38 = 2;
        }
        else {
          uVar5 = (uint)bVar1;
          if (uVar5 == 0x10) {
            local_38 = 3;
          }
          else if (uVar5 - 0x11 < 2) {
            local_38 = 4;
          }
          else {
            local_38 = 5;
            if (3 < uVar5 - 0x13) {
              local_38 = 0;
            }
          }
        }
        uVar5 = FUN_01954a7c(param_1,&local_40,&local_34,&local_38);
      }
      goto LAB_01955908;
    }
  }
  else {
    local_34 = FUN_01a1159c(lVar6,uVar3);
    if ((0x1a < local_34) || ((0x4966d01U >> (ulong)(local_34 & 0x1f) & 1) == 0)) {
      lVar6 = *(long *)puVar2;
      goto LAB_01955898;
    }
  }
  uVar5 = 0;
LAB_01955908:
  return uVar5 & 1;
}

