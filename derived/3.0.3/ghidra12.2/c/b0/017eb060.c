
void FUN_017eb060(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_3c;
  undefined8 local_34;
  int local_2c;
  int local_28;
  byte local_24 [4];
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_017eb0d4:
    if (7 < *pbVar5) {
LAB_017eb0e0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_24[0] = *pbVar5;
        if (local_24[0] < 8) goto LAB_017eb16c;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_017eb0d4;
      }
      goto LAB_017eb0e0;
    }
  }
  local_24[0] = *pbVar5;
  if (7 < local_24[0]) {
    return;
  }
LAB_017eb16c:
  local_3c = CONCAT71(local_3c._1_7_,local_24[0]);
  iVar3 = FUN_02582fe0(&local_3c);
  if (iVar3 != -1) {
    local_34 = (ulong)local_34._4_4_ << 0x20;
    uVar4 = FUN_02b5e950(&local_34,iVar3);
    if ((uVar4 & 1) != 0) {
      local_2c = 0;
      local_28 = (int)local_34;
      if (DAT_05aed670 == 0) {
        puVar7 = &DAT_055c04a0;
      }
      else {
        puVar7 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar7 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar3 = FUN_006bd550(*puVar7,0);
          puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar3 != 0x758f7eaf) {
            puVar7 = &DAT_055c04a0;
          }
        }
      }
      uVar4 = FUN_02b5f400(&local_2c,*(undefined4 *)(puVar7 + 7));
      if ((uVar4 & 1) != 0) {
        local_34 = 0x139b;
        FUN_0277d4ac(&local_34);
        if (((*(int *)(param_1 + 0x148) == 0) && (DAT_05292338 != 0)) && (DAT_04c487d4 != -1)) {
          local_3c = CONCAT44(local_3c._4_4_,6);
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((((*puVar1 >> 6 & 1) != 0) && (local_28 == local_2c)) &&
             (uVar4 = FUN_0264a1e0(local_24,&local_34), (uVar4 & 1) == 0)) {
            FUN_02648c90(local_24,&local_34,0);
            local_3c = 0x134b;
            FUN_0277d4ac(&local_3c);
            FUN_02648c90(local_24,&local_3c,0);
          }
        }
      }
    }
  }
  return;
}

