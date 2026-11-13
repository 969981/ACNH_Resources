
undefined8 FUN_00daf398(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_d8 [8];
  undefined8 local_d0;
  int local_c8;
  undefined *local_c0;
  char local_a8;
  undefined *local_a0;
  ulong local_80;
  undefined1 auStack_78 [24];
  int local_44;
  
  if (*(long *)PTR_DAT_04bb8460 == 0) {
    uVar10 = 3;
  }
  else {
    local_c8 = 0;
    local_80 = 0xffffffff;
    local_c0 = PTR_DAT_04bc3880 + 0x10;
    local_d0 = 0x4000;
    local_a0 = local_c0;
    FUN_0283d404(*(long *)PTR_DAT_04bb8460,&local_d0);
    uVar10 = 3;
    if (((((local_80 & 0x100000000) != 0) && (local_c8 == 1)) && (DAT_0556be50 != 0)) &&
       (((*(char *)(DAT_0556be50 + 0x16f) != '\0' && *(int *)(DAT_0556be50 + 0x138) == 1 &&
         (uVar2 = *(uint *)(DAT_0556be50 + 0x134), uVar2 < 5)) &&
        (((int)uVar2 < *(int *)(DAT_0556be50 + 0x130) &&
         (lVar1 = DAT_0556be50 + 0x68, *(char *)(lVar1 + (ulong)uVar2 * 0x28 + 0x20) != '\0')))))) {
      nn::nifm::CancelNetworkRequest();
      lVar8 = DAT_05554928;
      puVar5 = PTR_DAT_04bb4410;
      if (((DAT_0556be50 != 0) && (*(char *)(DAT_0556be50 + 0x16f) != '\0')) &&
         ((*(int *)(DAT_0556be50 + 0x138) == 1 &&
          ((((uVar3 = *(uint *)(DAT_0556be50 + 0x134), uVar3 < 5 &&
             ((int)uVar3 < *(int *)(DAT_0556be50 + 0x130))) &&
            (lVar11 = DAT_0556be50 + (ulong)uVar3 * 0x28, *(char *)(lVar11 + 0x88) != '\0')) &&
           ((DAT_05554928 != 0 && (*(char *)(lVar11 + 0x80) == '\0')))))))) {
        uVar12 = *(undefined8 *)(lVar11 + 0x70);
        lVar7 = *(long *)PTR_DAT_04bb4410;
        if (lVar7 != 0) {
          FUN_007b3b6c(lVar7,&local_d0,*(undefined8 *)(lVar7 + 0x140),*(undefined8 *)(lVar7 + 0x148)
                      );
        }
        FUN_0260edf8(lVar8,lVar11 + 0x78,lVar11 + 0x68,uVar12,&local_d0);
      }
      lVar8 = nn::os::GetSystemTick();
      nn::oe::SetUserInactivityDetectionTimeExtended(true);
      lVar11 = *(long *)puVar5;
      *(undefined1 *)(param_1 + 0x161) = 1;
      if (lVar11 != 0) {
        FUN_007b3b6c(lVar11,&local_d0,*(undefined8 *)(lVar11 + 0x140),
                     *(undefined8 *)(lVar11 + 0x148));
      }
      FUN_006b7e30(auStack_d8,&local_d0,*(undefined8 *)(lVar1 + (ulong)uVar2 * 0x28 + 0x10));
      local_a8 = '\0';
      FUN_006bb32c(auStack_d8,&local_d0);
      nn::os::WaitSystemEvent((SystemEventType *)&local_d0);
      lVar7 = nn::os::GetSystemTick();
      iVar6 = FUN_006bb398(auStack_d8);
      lVar11 = DAT_0556be50;
      *(int *)(param_1 + 0x128) = iVar6;
      lVar1 = DAT_05554928;
      local_44 = iVar6;
      if ((((lVar11 != 0) && (*(char *)(lVar11 + 0x16f) != '\0')) &&
          ((*(int *)(lVar11 + 0x138) == 1 &&
           (((uVar2 = *(uint *)(lVar11 + 0x134), uVar2 < 5 &&
             ((int)uVar2 < *(int *)(lVar11 + 0x130))) &&
            (lVar11 = lVar11 + (ulong)uVar2 * 0x28, *(char *)(lVar11 + 0x88) != '\0')))))) &&
         ((DAT_05554928 != 0 && (*(char *)(lVar11 + 0x80) == '\0')))) {
        uVar12 = *(undefined8 *)(lVar11 + 0x70);
        lVar9 = *(long *)puVar5;
        lVar4 = 0;
        if (*(long *)PTR_DAT_04bb29d0 != 0) {
          lVar4 = (lVar7 - lVar8) / *(long *)PTR_DAT_04bb29d0;
        }
        if (lVar9 != 0) {
          FUN_007b3b6c(lVar9,auStack_78,*(undefined8 *)(lVar9 + 0x140),
                       *(undefined8 *)(lVar9 + 0x148));
        }
        FUN_0260f010(lVar1,&local_44,lVar11 + 0x78,lVar11 + 0x68,uVar12,lVar4,auStack_78);
      }
      uVar10 = 1;
      if (iVar6 != 0) {
        uVar10 = 2;
      }
      if (local_a8 != '\0') {
        nn::os::DestroySystemEvent((SystemEventType *)&local_d0);
      }
      FUN_006bb314(auStack_d8);
    }
  }
  *(undefined4 *)(param_1 + 0x124) = uVar10;
  *(undefined1 *)(param_1 + 0x120) = 1;
  return 1;
}

