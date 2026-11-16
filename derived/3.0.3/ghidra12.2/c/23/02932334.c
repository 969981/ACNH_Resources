
void FUN_02932334(long param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar3 = FUN_006bd550(*puVar7,0);
      puVar7 = &DAT_055cdaf8;
      if (iVar3 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(puVar7 + 7);
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_02932424:
    if (7 < *pbVar5) {
LAB_02932430:
      if (DAT_0537d558 != (long *)0x0) {
        lVar4 = *DAT_0537d558;
        bVar6 = *(byte *)(lVar4 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar1 = (uint *)(lVar4 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar4 + 0x471);
          }
        }
        bVar6 = *pbVar5;
        bVar2 = bVar6 < 8;
        if (!bVar2) {
          bVar6 = 0xff;
        }
        local_3c = CONCAT31(local_3c._1_3_,bVar6);
        if (bVar2) goto LAB_029324b0;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02932424;
      }
      goto LAB_02932430;
    }
  }
  bVar6 = *pbVar5;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_3c = CONCAT31(local_3c._1_3_,bVar6);
LAB_029324b0:
  FUN_0255a2b0(&local_3c,&local_38);
  FUN_0292e870(&local_3c,local_38);
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_30,uStack_34);
  *(undefined4 *)(param_1 + 0x48) = local_2c;
  *(undefined4 *)(param_1 + 0x4c) = uStack_28;
  *(undefined4 *)(param_1 + 0x50) = local_3c;
  *(undefined1 *)(param_1 + 0x55) = uStack_24;
  return;
}

