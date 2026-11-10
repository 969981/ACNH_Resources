
void FUN_001b7bc0(long param_1,long param_2)

{
  long *****ppppplVar1;
  undefined **ppuVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long *****ppppplVar6;
  long ****pppplVar7;
  long lVar8;
  long *****ppppplVar9;
  int local_134;
  undefined **local_130;
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined **local_108;
  undefined1 local_100 [16];
  undefined1 *local_f0;
  undefined8 uStack_e8;
  long *****local_e0;
  long *****local_d8;
  long local_d0;
  
  ppppplVar9 = *(long ******)(param_2 + 0x20);
  ppppplVar1 = (long *****)(param_2 + 0x18);
  if (ppppplVar9 != ppppplVar1) {
    local_134 = 0;
    do {
      uVar4 = FUN_001b8fa0(ppppplVar9 + 2,&DAT_0410a6b7,0);
      if ((uVar4 >> 1 & 1) == 0) {
        bVar3 = 0;
        ppppplVar9 = (long *****)ppppplVar9[1];
      }
      else {
        lVar8 = *(long *)(param_1 + 0x20);
        if (lVar8 == param_1 + 0x18) {
          bVar3 = 0;
        }
        else {
          do {
            local_e0 = (long *****)((ulong)local_e0 & 0xffffffffffffff00);
            if (*(char *)(lVar8 + 0x78) == '\0') {
              FUN_001b8590(lVar8 + 0x10);
              iVar5 = FUN_001e1884(*(undefined8 *)(lVar8 + 0x18));
            }
            else {
              iVar5 = FUN_001e1884(*(undefined8 *)(lVar8 + 0x18));
            }
            if (iVar5 != 0) {
              FUN_001e188c(*(undefined8 *)(lVar8 + 0x18),&local_e0,0x80);
            }
            local_108 = &PTR_LAB_04a426b8;
            local_100[0] = 0;
            uStack_e8 = 0x10;
            local_f0 = local_100;
            FUN_0018b070(&local_108,&local_e0,0xffffffffffffffff);
            local_e0 = (long *****)((ulong)local_e0 & 0xffffffffffffff00);
            if (*(char *)(ppppplVar9 + 0xf) == '\0') {
              FUN_001b8590(ppppplVar9 + 2);
              iVar5 = FUN_001e1884(ppppplVar9[3]);
            }
            else {
              iVar5 = FUN_001e1884(ppppplVar9[3]);
            }
            if (iVar5 != 0) {
              FUN_001e188c(ppppplVar9[3],&local_e0,0x80);
            }
            local_128[0] = 0;
            uStack_110 = 0x10;
            ppuVar2 = (undefined **)(PTR_DAT_04bc0ec8 + 0x10);
            local_130 = ppuVar2;
            local_118 = local_128;
            FUN_0018b070(&local_130,&local_e0,0xffffffffffffffff);
            bVar3 = FUN_0018b44c(local_f0,local_118);
            local_130 = ppuVar2;
            FUN_0018b1a0(&local_130);
            local_108 = ppuVar2;
            FUN_0018b1a0(&local_108);
            lVar8 = *(long *)(lVar8 + 8);
          } while ((lVar8 != param_1 + 0x18) && ((bVar3 & 1) == 0));
        }
        local_134 = local_134 + 1;
        ppppplVar9 = (long *****)ppppplVar9[1];
      }
    } while ((ppppplVar9 != ppppplVar1) && ((bVar3 & 1) == 0));
    if (local_134 != 0) {
      ppppplVar9 = *(long ******)(param_2 + 0x20);
      local_d0 = 0;
      local_e0 = (long *****)&local_e0;
      local_d8 = (long *****)&local_e0;
      if ((bVar3 & ppppplVar9 != ppppplVar1) == 1) {
        do {
          uVar4 = FUN_001b8fa0(ppppplVar9 + 2,&DAT_0410a6b7,0);
          if ((uVar4 >> 1 & 1) == 0) {
            ppppplVar6 = (long *****)FUN_00187df4(0x80);
            *ppppplVar6 = (long ****)0x0;
            FUN_001b8358(ppppplVar6 + 2,ppppplVar9 + 2);
            *ppppplVar6 = (long ****)local_e0;
            ppppplVar6[1] = (long ****)&local_e0;
            local_e0[1] = (long ****)ppppplVar6;
            local_d0 = local_d0 + 1;
            local_e0 = ppppplVar6;
          }
          ppppplVar9 = (long *****)ppppplVar9[1];
        } while (ppppplVar9 != ppppplVar1);
        ppppplVar9 = *(long ******)(param_2 + 0x20);
      }
      if (ppppplVar9 != ppppplVar1) {
        do {
          uVar4 = FUN_001b8fa0(ppppplVar9 + 2,&DAT_0410a6b7,0);
          if ((uVar4 >> 1 & 1) != 0) {
            ppppplVar6 = (long *****)FUN_00187df4(0x80);
            *ppppplVar6 = (long ****)0x0;
            FUN_001b8358(ppppplVar6 + 2,ppppplVar9 + 2);
            *ppppplVar6 = (long ****)local_e0;
            ppppplVar6[1] = (long ****)&local_e0;
            local_e0[1] = (long ****)ppppplVar6;
            local_d0 = local_d0 + 1;
            local_e0 = ppppplVar6;
          }
          ppppplVar9 = (long *****)ppppplVar9[1];
        } while (ppppplVar9 != ppppplVar1);
      }
      if (&local_e0 != (long ******)ppppplVar1) {
        FUN_001db790(ppppplVar1,local_d8,&local_e0);
      }
      if (local_d0 != 0) {
        pppplVar7 = *local_d8;
        pppplVar7[1] = (long ***)local_e0[1];
        *local_e0[1] = (long ***)pppplVar7;
        local_d0 = 0;
        ppppplVar1 = local_d8;
        while ((long ******)ppppplVar1 != &local_e0) {
          ppppplVar9 = (long *****)ppppplVar1[1];
          (*(code *)*ppppplVar1[2])();
          FUN_00187e4c(ppppplVar1);
          ppppplVar1 = ppppplVar9;
        }
      }
    }
  }
  return;
}

