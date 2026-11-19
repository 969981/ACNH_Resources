
undefined8 FUN_03872fc0(long param_1)

{
  UserHandle *pUVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  int local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  NetworkServiceAccountId aNStack_178 [8];
  ulong uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  char local_140;
  uint local_134;
  AsyncContext aAStack_130 [32];
  undefined1 auStack_110 [20];
  int local_fc;
  
  puVar4 = PTR_DAT_04bcb7d8;
  lVar9 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
  lVar8 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x18);
  nn::os::GetSystemTick();
  FUN_001fb850(auStack_110,0);
  nn::account::AsyncContext::AsyncContext(aAStack_130);
  pUVar1 = (UserHandle *)(param_1 + 0x1070);
  local_134 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync(aAStack_130,pUVar1);
  if (local_134 != 0) {
    lVar8 = *(long *)(*(long *)puVar4 + 0x30);
    if (((local_134 & 0x1ff) == 0x7c) && ((local_134 >> 9 & 0x1ffe) - 200 < 0x46)) {
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_168,(Result *)&local_134);
      if (((*(int *)(lVar8 + 0x24) < 2) &&
          ((*(int *)(lVar8 + 0x24) < 1 || (1 < *(int *)(lVar8 + 0x24))))) ||
         (*(int *)(lVar8 + 0x24) < 2)) {
        *(undefined4 *)(lVar8 + 0x3c) = 0;
        uVar6 = 0x20000000b;
LAB_038731b4:
        *(undefined8 *)(lVar8 + 0x34) = uVar6;
        *(undefined8 *)(lVar8 + 0x28) = local_168;
        *(undefined4 *)(lVar8 + 0x30) = local_160;
        *(undefined4 *)(lVar8 + 0x24) = 2;
      }
    }
    else {
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_168,(Result *)&local_134);
      if (((*(int *)(lVar8 + 0x24) < 2) &&
          ((*(int *)(lVar8 + 0x24) < 1 || (1 < *(int *)(lVar8 + 0x24))))) ||
         (*(int *)(lVar8 + 0x24) < 2)) {
        *(undefined4 *)(lVar8 + 0x3c) = 0;
        uVar6 = 0xa0000000b;
        goto LAB_038731b4;
      }
    }
    uVar6 = 0;
    goto LAB_0387324c;
  }
  local_140 = '\0';
  local_134 = nn::account::AsyncContext::GetSystemEvent((SystemEvent *)aAStack_130);
  nn::os::WaitSystemEvent((SystemEventType *)&local_168);
  local_134 = nn::account::AsyncContext::GetResult();
  if (local_134 == 0) {
    local_134 = nn::account::LoadNetworkServiceAccountIdTokenCache
                          (&uStack_170,(char *)(param_1 + 0x1088),0xc00,pUVar1);
    if (local_134 != 0) goto LAB_038730f0;
    local_134 = nn::account::GetNetworkServiceAccountId(aNStack_178,pUVar1);
    if (local_134 != 0) goto LAB_03873238;
    nn::os::GetSystemTick();
    FUN_0018aa4c(&local_190);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(lVar8 + 0x10);
    (**(code **)(*(long *)(lVar8 + 0x18) + 0x18))((long *)(lVar8 + 0x18));
    FUN_002157c8(&local_1a8,uVar6,auStack_110,uVar3,*(undefined8 *)(lVar8 + 0x20),aNStack_178,
                 (char *)(param_1 + 0x1088),30000);
    FUN_0018ab44(&local_190,&local_1a8);
    puVar2 = &LAB_01c68ad4;
    if (local_190 < 0) {
      puVar2 = (undefined1 *)0x0;
    }
    if (puVar2 != (undefined1 *)0x0) {
      FUN_00198c50(auStack_110,0xffffffff);
      if (local_fc == 2) {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
        goto LAB_0387323c;
      }
      uVar5 = FUN_00215b80();
      *(uint *)(param_1 + 0x1c88) = uVar5;
      if (((uVar5 & 0x1ff) != 0x7c) || (0x45 < (uVar5 >> 9 & 0x1ffe) - 200)) {
        local_1b0 = FUN_00215bd8(*(undefined8 *)(param_1 + 0x20));
        lVar8 = *(long *)(*(long *)puVar4 + 0x30);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)&local_1a8,(ErrorCode *)&local_1b0);
        if (((*(int *)(lVar8 + 0x24) < 2) &&
            ((*(int *)(lVar8 + 0x24) < 1 || (1 < *(int *)(lVar8 + 0x24))))) ||
           (*(int *)(lVar8 + 0x24) < 2)) {
          uVar6 = 0x800000008;
          *(undefined4 *)(lVar8 + 0x3c) = 0;
          goto LAB_03873430;
        }
        goto LAB_03873238;
      }
      local_1b0 = FUN_00215bd8(*(undefined8 *)(param_1 + 0x20));
      lVar8 = *(long *)(*(long *)puVar4 + 0x30);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_1a8,(ErrorCode *)&local_1b0);
      if (((1 < *(int *)(lVar8 + 0x24)) ||
          ((0 < *(int *)(lVar8 + 0x24) && (*(int *)(lVar8 + 0x24) < 2)))) &&
         (1 < *(int *)(lVar8 + 0x24))) goto LAB_03873238;
      *(undefined4 *)(lVar8 + 0x3c) = 0;
      uVar6 = 0x20000000b;
LAB_03873430:
      *(undefined8 *)(lVar8 + 0x34) = uVar6;
      *(undefined8 *)(lVar8 + 0x28) = local_1a8;
      local_188 = local_1a0;
      goto LAB_0387322c;
    }
    if (*(char *)(lVar9 + 0xb0) != '\0') goto LAB_03873238;
    *(undefined1 *)(lVar9 + 0xb0) = 1;
    FUN_0018ab44(lVar9 + 0xb8,&local_190);
    uVar6 = 0;
    *(undefined4 *)(lVar9 + 0xd0) = 0;
  }
  else {
LAB_038730f0:
    lVar8 = *(long *)(*(long *)puVar4 + 0x30);
    if (((local_134 & 0x1ff) == 0x7c) && ((local_134 >> 9 & 0x1ffe) - 200 < 0x46)) {
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_190,(Result *)&local_134);
      if (((*(int *)(lVar8 + 0x24) < 2) &&
          ((*(int *)(lVar8 + 0x24) < 1 || (1 < *(int *)(lVar8 + 0x24))))) ||
         (*(int *)(lVar8 + 0x24) < 2)) {
        uVar6 = CONCAT44(uStack_18c,local_190);
        *(undefined4 *)(lVar8 + 0x3c) = 0;
        uVar7 = 0x20000000b;
LAB_03873220:
        *(undefined8 *)(lVar8 + 0x34) = uVar7;
        *(undefined8 *)(lVar8 + 0x28) = uVar6;
LAB_0387322c:
        *(undefined4 *)(lVar8 + 0x30) = local_188;
        *(undefined4 *)(lVar8 + 0x24) = 2;
      }
    }
    else {
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_190,(Result *)&local_134);
      if (((*(int *)(lVar8 + 0x24) < 2) &&
          ((*(int *)(lVar8 + 0x24) < 1 || (1 < *(int *)(lVar8 + 0x24))))) ||
         (*(int *)(lVar8 + 0x24) < 2)) {
        uVar6 = CONCAT44(uStack_18c,local_190);
        *(undefined4 *)(lVar8 + 0x3c) = 0;
        uVar7 = 0xa0000000b;
        goto LAB_03873220;
      }
    }
LAB_03873238:
    uVar6 = 0;
  }
LAB_0387323c:
  if (local_140 != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)&local_168);
  }
LAB_0387324c:
  nn::account::AsyncContext::~AsyncContext(aAStack_130);
  FUN_001fbac0(auStack_110);
  return uVar6;
}

