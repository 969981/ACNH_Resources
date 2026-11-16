
/* WARNING: Removing unreachable block (ram,0x02849f78) */
/* WARNING: Removing unreachable block (ram,0x02849f44) */
/* WARNING: Removing unreachable block (ram,0x02849f88) */

void FUN_02849ee0(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined *local_c0;
  undefined1 local_b8;
  int local_b4;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  int local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  float local_68 [2];
  float local_60;
  undefined4 local_24;
  
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    local_98 = PTR_DAT_04bc43f8 + 0x10;
    local_90 = DAT_05636e5c;
    local_68[0] = 1.4013e-45;
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x150) == 0)) {
      local_c0 = PTR_DAT_04bc4608 + 0x10;
      local_b8 = PTR_DAT_04bbc570[8];
      local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_b0 = PTR_DAT_04bb2010 + 0x10;
      local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    }
    else {
      local_c0 = PTR_DAT_04bc4608 + 0x10;
      local_b8 = PTR_DAT_04bbc570[8];
      local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_b0 = PTR_DAT_04bb2010 + 0x10;
      local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (DAT_05636e5c != 0) {
        ppuStack_80 = &local_98;
        local_88 = &PTR_FUN_04a9b150;
        local_78 = (undefined1 *)&local_c0;
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x150) + 0x10))();
        iVar2 = (**(code **)(*plVar3 + 0x18))();
        if (0 < iVar2) {
          iVar7 = 0;
          do {
            FUN_01360490(local_68,*(undefined8 *)(lVar8 + 0x150),iVar7);
            uVar5 = (*(code *)*local_88)(&local_88,local_68);
            if ((uVar5 & 1) != 0) break;
            bVar1 = iVar2 + -1 != iVar7;
            iVar7 = iVar7 + 1;
          } while (bVar1);
        }
      }
    }
    if (local_b4 != 0) {
      FUN_02a8f1dc(&local_c0,local_68);
      local_68[0] = local_68[0] + -10.0;
      local_60 = local_60 + 20.0;
      puVar6 = DAT_055c1b60;
      if (DAT_055c1b60 == &DAT_055c1b58) {
        puVar4 = &DAT_055c1098;
      }
      else {
        do {
          puVar4 = puVar6 + -8;
          if (*(int *)(puVar6 + -1) == 0x6622bd46) goto LAB_0284a13c;
          puVar4 = puVar6 + 1;
          puVar6 = (undefined8 *)*puVar4;
        } while ((undefined8 *)*puVar4 != &DAT_055c1b58);
        puVar4 = &DAT_055c1098;
      }
LAB_0284a13c:
      if (((*PTR_DAT_04bb3998 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar2 != 0)) {
        FUN_00773950(PTR_DAT_04bb3990);
        __cxa_guard_release(PTR_DAT_04bb3998);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
        uVar5 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar5 * 4) == 0x2ec94ec5)
          goto LAB_0284a18c;
          uVar5 = uVar5 + 1;
        } while (*(uint *)PTR_DAT_04bb3990 != uVar5);
      }
      uVar5 = 0;
LAB_0284a18c:
      local_24 = (undefined4)uVar5;
      FUN_02917ecc(puVar4,local_68,PTR_DAT_04bb2108,&local_24,param_2,PTR_DAT_04bb7ab0);
      DAT_05405798 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  return;
}

